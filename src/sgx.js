module.exports = grammar({
  name: 'sgx',
  
  extras: $ => [/\s/],

  rules: {
    source_file: $ => repeat(
      choice(
        $.group_definition,
        $.pattern_definition,
        $.standalone_pattern
      )
    ),

    standalone_pattern: $ => seq(
      optional($.metadata_block),
      $.pattern,
      optional('.')
    ),

    pattern_definition: $ => seq(
      optional($.metadata_block),
      $.pattern_name,
      ':=',
      $.pattern,
      '.'
    ),

    // Simplified pattern hierarchy
    pattern: $ => choice(
      $.basic_pattern,
      $.compound_pattern
    ),

    basic_pattern: $ => choice(
      $.optional_pattern,
      $.node_pattern,
      $.pattern_reference,
      $.bare_pattern
    ),

    compound_pattern: $ => choice(
      $.negation,
      $.relation,
      $.grouped_expr
    ),

    grouped_expr: $ => choice(
      $.boolean_operation,
      $.optional_relation
    ),

    boolean_operation: $ => seq(
      '(',
      $.basic_pattern,
      choice('&', '|'),
      $.basic_pattern,
      ')'
    ),

    optional_pattern: $ => seq(
      choice(
        $.node_pattern,
        $.pattern_reference,
        $.bare_pattern
      ),
      '?'
    ),

    // Add this rule for bare patterns
    bare_pattern: $ => choice(
      $.bare_word,
      $.bare_regex
    ),

    // Add these rules
    bare_word: $ => token(/[一-龯ぁ-んァ-ヶ]+/),  // Japanese characters
    
    bare_regex: $ => token(seq(
      '/',
      repeat(choice(/[^\\/]/, seq('\\', /./))),
      '/'
    )),

    optional_relation: $ => seq(
      '(',
      $.relation,
      ')',
      '?'
    ),

    negation: $ => seq(
      '!',
      choice(
        $.basic_pattern,
        $.boolean_operation
      )
    ),

    relation: $ => seq(
      $.basic_pattern,
      $.relation_operator,
      optional($.relation_name),
      $.basic_pattern
    ),

    relation_name: $ => seq(
      '=',
      $.identifier
    ),

    boolean_expr: $ => prec('boolean_expr', seq(
      $.basic_pattern,
      choice('&', '|'),
      $.basic_pattern
    )),

    node_pattern: $ => seq(
      '[',
      optional(choice(
        '$',
        $.attributes,
        $.bare_word,  // Allow bare words inside nodes too
        $.bare_regex  // Allow regex inside nodes too
      )),
      ']',
      optional($.node_name)
    ),

    // Simplified attributes to remove ambiguity
    attributes: $ => seq(
      $.attribute,
      repeat(seq(';', $.attribute))
    ),

    // Make negation part of the key instead of attribute
    attribute: $ => seq(
      $.key,
      ':',
      $.value
    ),

    key: $ => token(choice(
      /![a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/,
      /[a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/
    )),
    value: $ => choice($.identifier, $.regex),

    regex: $ => token(seq(
      '/',
      repeat(choice(/[^\\/]/, seq('\\', /./))),
      '/'
    )),

    node_name: $ => seq('=', $.name),
    name: $ => $.identifier,

    relation_operator: $ => token(choice(
      '>',
      '<',
      '@',
      />[a-zA-Z]+/,
      /<[a-zA-Z]+/,
      '>nsubj',
      '>dobj',
      '>nmod',
      '>prep',
      '>appos',
      '<subj',
      '<agent',
      '>conj',
      '>nmod:poss',
      '>nmod:of',
      '>>',
      '<<',
      '..',
      '.'
    )),

    pattern_reference: $ => seq('@', $.pattern_name),
    pattern_name: $ => $.identifier,

    metadata_block: $ => seq(
      '---',
      repeat($.metadata_line),
      '---'
    ),

    metadata_line: $ => /[^\n]+/,

    group_definition: $ => seq(
      '///',
      'group',
      $.group_name,
      '///',
      repeat($.group_metadata_line),
      '///',
      repeat($.pattern_definition),
      '///'
    ),

    group_name: $ => $.identifier,
    group_metadata_line: $ => token(/[^/][^\n]*/),
    identifier: $ => /[a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/
  }
});
