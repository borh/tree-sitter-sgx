module.exports = grammar({
  name: 'sgx',
  start: $ => $.source_file,

  extras: $ => [
    /[\s\f\uFEFF\u2060\u200B]/,
    $.comment,
  ],

  rules: {
    source_file: $ => repeat(choice(
      $.metadata_block,
      $.pattern_definition,
      $.comment,
      $.node_pattern
    )),

    _parenthesized_content: $ => choice(
      $.alternation,
      $.pattern_sequence,
      $.atomic_pattern,
      $.named_group,
      $.pattern_reference,
      $.node_pattern,
      $.bare_element
    ),

    parenthesized_pattern: $ => seq(
      '(',
      $._parenthesized_content,
      ')'
    ),

    metadata_block: $ => seq(
      'metadata',
      repeat($.metadata_line),
      'begin',
      repeat($.pattern_definition),
      'end'
    ),
    
    metadata_line: $ => /[^\n]+/,

    pattern_definition: $ => seq(
      field('name', $.identifier),
      ':=',
      field('pattern', $._pattern),
      '.'
    ),

    _pattern: $ => choice(
      $.alternation,
      $.pattern_sequence,
      $.atomic_pattern,
      $.named_group,
      $.pattern_reference, 
      $.node_pattern,
      $.bare_element,
      $.parenthesized_pattern
    ),

    pattern_sequence: $ => prec.right(-1, seq(
      choice(
        $.atomic_pattern,
        $.named_group,
        $.pattern_reference,
        $.node_pattern,
        $.bare_element,
        $.parenthesized_pattern
      ),
      repeat1(choice(
        $.atomic_pattern,
        $.named_group,
        $.pattern_reference,
        $.node_pattern,
        $.bare_element,
        $.parenthesized_pattern
      ))
    )),

    alternation: $ => prec.left(1, seq(
      choice(
        $.pattern_sequence,
        $.atomic_pattern,
        $.named_group,
        $.pattern_reference,
        $.node_pattern,
        $.bare_element,
        $.parenthesized_pattern
      ),
      repeat1(seq(
        '|', 
        choice(
          $.pattern_sequence,
          $.atomic_pattern,
          $.named_group,
          $.pattern_reference,
          $.node_pattern,
          $.bare_element,
          $.parenthesized_pattern
        )
      ))
    )),

    atomic_pattern: $ => prec.right(2, seq(
      choice(
        $.node_pattern,
        $.bare_element,
        $.named_group,
        $.pattern_reference,
        $.parenthesized_pattern
      ),
      optional($.quantifier)
    )),

    node_pattern: $ => seq(
      '[',
      choice(
        seq(
          $.attribute,
          repeat(seq(optional(';'), $.attribute))
        ),
        seq(
          $.attribute_conjunction,
          repeat(seq(optional(';'), choice($.attribute, $.attribute_conjunction)))
        )
      ),
      ']'
    ),

    attribute: $ => seq(
      field('key', $.key),
      choice(
        '=',
        seq(':', optional(/\s/))  // Allow optional space after colon
      ),
      field('value', $.value)
    ),

    attribute_conjunction: $ => prec.left(1, seq(
      $.attribute,
      '&',
      choice($.attribute, $.attribute_conjunction)  // Allow nested conjunctions
    )),

    key: $ => $.identifier,
    
    value: $ => choice(
      $.identifier,
      $.regex,
      /[^\]\s&;]+/  // Allow any non-special characters in values
    ),

    regex: $ => {
      const escapeChar = '\\';
      return token(seq(
        '/',
        repeat(choice(
          seq(escapeChar, /./),  // escaped character
          /[^\/\\]/              // anything but a slash or backslash
        )),
        '/'
      ));
    },

    bare_element: $ => $.identifier,

    named_group: $ => seq(
      '(?<',
      field('name', $.identifier),
      '>',
      field('pattern', $._pattern),
      ')'
    ),

    pattern_reference: $ => seq(
      '@',
      $.identifier
    ),

    quantifier: $ => choice(
      '+',
      '*',
      '?',
      /\{\d+(?:,\d*)?\}/
    ),

    identifier: $ => /[a-zA-Z_\u4E00-\u9FFF\u3040-\u309F\u30A0-\u30FF][\w\u4E00-\u9FFF\u3040-\u309F\u30A0-\u30FF]*/,
    
    comment: $ => /#.*/
  }
});
