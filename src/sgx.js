module.exports = grammar({
  name: 'sgx',
  
  extras: $ => [
    /\s/,
    /#.*/  // Line comments
  ],

  precedences: $ => [
    [$.terminator],          // Level 1 (highest)
    [$.named_match_group],   // Level 2 (now above atomic_pattern)
    [$.quantifier],          // Level 3
    [$.negation],            // Level 4
    [$.atomic_pattern],      // Level 5 (now below named groups)
    [$.relation],            // Level 6
    [$.boolean_operation],   // Level 7
    [$.pattern_sequence],    // Level 8 (lowest)
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

    pattern_definition: $ => seq(
      optional($.metadata_block),
      $.pattern_name,
      ':=',
      field('definition', $.top_level_pattern)
    ),

    pattern_list: $ => prec.left(seq($.atomic_pattern, $.atomic_pattern)),

    nested_pattern: $ => prec.left(1, seq(
      repeat1(choice(
        $.atomic_pattern,
        $.compound_pattern
      )),
      optional($.boolean_operator)
    )),

    atomic_pattern: $ => choice(
      prec.left(2, $.named_match_group),  // Explicit precedence boost
      prec.left(5, choice(  // Group other atomic patterns at lower precedence
        $.compound_pattern,
        $.quantifier,
        $.node_pattern,
        $.pattern_reference, 
        $.bare_pattern,
        $.negation,
        $.relation,
        $.boolean_operation
      ))
    ),

    quantifier: $ => choice(
      $.optional_pattern,
      $.repeat_pattern,
      $.range_quantifier
    ),

    named_match_group: $ => prec(2, seq(
      '(?<',
      field('name', $.identifier),
      '>',
      field('pattern', $.pattern),
      ')'
    )),

    pattern: $ => choice(
      prec.left(3, seq($.pattern, '|', $.pattern)),  // Alternation
      $.pattern_sequence
    ),

    pattern_sequence: $ => prec.left(-1, 
      seq(
        repeat1($.atomic_pattern)  // Compound_pattern is already in atomic_pattern
      )
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

    boolean_operation: $ => prec.left(3, seq(
      field('left', $.atomic_pattern),
      field('operator', $.boolean_operator), 
      field('right', $.pattern)
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

    bare_word: $ => token(/[一-龯ぁ-んァ-ヶ]+/),  // FIXME: This should not be just Japanese characters
    
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

    relation: $ => prec.left(3, seq(  // Lower precedence than negation
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
    identifier: $ => /[a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/
  }
});
