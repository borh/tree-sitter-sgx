module.exports = grammar({
  name: 'sgx',
  
  extras: $ => [
    /\s/,
    /#.*/  // Line comments
  ],

  precedences: $ => [
    [$.terminator],          // Level 1 (highest)
    [$.pattern_definition],  // Level 2
    [$.named_match_group],   // Level 3
    [$.quantifier],         // Level 4
    [$.negation],           // Level 5
    [$.atomic_pattern],      // Level 6 - Keep this level
    [$.relation],           // Level 7
    [$.boolean_operation],   // Level 8
    [$.pattern_sequence],    // Level 9 (lowest)
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.group_definition,
        $.pattern_definition,
        $.standalone_pattern
      )
    ),

    top_level_pattern: $ => prec.left(1, seq(
      field('body', choice(
        $.pattern_sequence,
        $.compound_pattern
      )),
      $.terminator
    )),

    terminator: $ => '.',

    standalone_pattern: $ => seq(
      optional($.metadata_block),
      $.top_level_pattern
    ),

    pattern_definition: $ => prec(2, seq(
      optional($.metadata_block),
      field('name', $.pattern_name),
      ':=',
      field('definition', seq(
        field('pattern', seq(
          $.named_match_group,
          optional($.pattern_sequence)
        )),
        $.terminator
      ))
    )),


    atomic_pattern: $ => prec(6, choice(  // Explicitly set precedence to 6
      $.compound_pattern,
      $.node_pattern,
      $.bare_pattern,
      $.negation,
      $.relation,
      $.pattern_reference
    )),

    quantifier: $ => choice(
      $.optional_pattern,
      $.repeat_pattern,
      $.range_quantifier
    ),

    named_match_group: $ => prec.right(3, seq(
      '?<',
      field('name', $.identifier),
      '>',
      '(',
      field('pattern', choice(
        $.boolean_operation,
        $.compound_pattern,
        seq($.pattern_sequence, repeat(seq(
          field('operator', $.boolean_operator),
          $.pattern_sequence
        )))
      )),
      ')'
    )),

    pattern: $ => prec.left(3, choice(
      seq($.pattern_sequence, '|', $.pattern_sequence),  // Alternation
      $.pattern_sequence
    )),

    pattern_sequence: $ => prec.left(9, repeat1(  // Keep lowest precedence of 9
      choice(
        $.atomic_pattern,
        $.pattern_reference,
        $.node_pattern,
        $.optional_group,
        $.repeat_group,
        $.quantifier
      ))
    ),

    boolean_operator: $ => choice('&', '|'),

    compound_pattern: $ => prec(5, seq(
      '(',
      field('pattern', choice(
        $.boolean_operation,
        $.pattern
      )),
      ')'
    )),

    boolean_operation: $ => prec.left(8, seq(
      field('left', choice(
        $.atomic_pattern,
        $.pattern_sequence,
        $.pattern_reference,
        $.node_pattern
      )),
      field('operator', $.boolean_operator),
      field('right', choice(
        $.atomic_pattern,
        $.pattern_sequence,
        $.pattern_reference,
        $.node_pattern
      ))
    )),

    optional_pattern: $ => prec(5, seq(
      field('pattern', $.atomic_pattern),
      '?'
    )),

    repeat_pattern: $ => prec(5, seq(
      field('pattern', $.atomic_pattern),
      '*'
    )),

    bare_pattern: $ => choice(
      $.bare_word,
      $.bare_regex
    ),

    bare_word: $ => token(/[a-zA-Z0-9一-龯ぁ-んァ-ヶ\p{L}]+/u),  // Allow letters, numbers and Unicode
    
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

    negation: $ => prec(4, seq(  // Higher precedence than relation
      '!',
      choice(
        $.pattern,
        $.boolean_operation
      )
    )),

    relation: $ => prec.left(7, seq(  // Match precedence table level 7
      $.atomic_pattern,
      $.relation_operator,
      optional($.relation_name),
      $.atomic_pattern
    )),

    relation_name: $ => seq(
      '=',
      $.identifier
    ),


    node_pattern: $ => seq(
      '[',
      optional(choice(
        '$',
        field('attributes', $.attributes),
        field('pattern', choice(
          $.bare_word,
          $.bare_regex,
          $.optional_group,
          $.repeat_group,
          $.range_quantifier
        ))
      )),
      ']',
      optional($.node_name)
    ),

    range_quantifier: $ => prec(5, seq(
      field('pattern', $.atomic_pattern),
      field('range', token(/\{\s*\d+\s*(,\s*\d+\s*)?\}/))
    )),

    optional_group: $ => seq(
      '(',
      field('pattern', $.pattern),
      ')',
      '?'
    ),

    repeat_group: $ => seq(
      '(',
      field('pattern', $.pattern),
      ')',
      '*'
    ),

    attributes: $ => seq(
      choice(
        $.attribute,
        seq($.attribute, '?'),
        seq($.attribute, '*')
      ),
      repeat(seq(';', choice(
        $.attribute,
        seq($.attribute, '?'),
        seq($.attribute, '*')
      )))
    ),

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
    identifier: $ => token(/[a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/)
  }
});
