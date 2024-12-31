module.exports = grammar({
  name: 'sgx',

  extras: $ => [/\s/],

  conflicts: $ => [
    [$.attribute],
    [$.sequence],
    [$.disjunction, $.relation_group],
    [$.expression, $.term],
    [$.relation_pattern, $.term],
    [$.sequence, $.relation_group],
    [$.relation_pattern, $.relation_group],
    [$.sequence, $.relation_pattern],
    [$.relation_pattern, $.disjunction],
    [$.relation_group, $.disjunction],
    [$.sequence, $.relation_pattern, $.relation_group],
    [$.expression, $.relation_group]
  ],

  rules: {
    source_file: $ => repeat(
      choice(
        $.group_definition,
        $.pattern_definition,
        $.standalone_pattern
      )
    ),

    standalone_pattern: $ => prec(3, seq(
      optional($.metadata_block),
      $.expression,
      optional('.')
    )),

    pattern_definition: $ => prec(4, seq(
      optional($.metadata_block),
      $.pattern_name,
      ':=',
      $.pattern_body,
      '.'
    )),

    pattern_name: $ => $.identifier,

    pattern_body: $ => prec(6, choice(
      $.expression,
      seq($.pattern_reference, $.relation_group)
    )),

    expression: $ => prec(5, choice(
      $.conjunction,
      $.disjunction,
      $.sequence,
      $.pattern_reference,
      $.term
    )),

    conjunction: $ => prec.left(3, seq(
      $.disjunction,
      repeat(seq('&', $.disjunction))
    )),

    disjunction: $ => prec.left(2, seq(
      $.sequence,
      repeat1(seq('|', $.sequence))
    )),

    sequence: $ => prec.left(3, seq(
      $.term,
      repeat(seq(
        optional('&'),
        choice(
          $.relation_pattern,
          $.relation_group
        ),
        optional($.term)
      ))
    )),

    term: $ => prec.right(4, choice(
      seq('!', $.primary_term),
      $.postfix_term
    )),

    postfix_term: $ => prec.left(1, choice(
      seq($.primary_term, '?'),  // zero or one
      seq($.primary_term, '*'),  // zero or more 
      seq($.primary_term, '+'),  // one or more
      $.quantified_term,         // term with range quantifier
      $.primary_term
    )),

    // Terms with range quantifiers
    quantified_term: $ => prec(2, seq(
      $.primary_term,
      '{',
      choice(
        seq(/[0-9]+/, ',', /[0-9]+/),  // {n,m}
        seq(/[0-9]+/, ','),            // {n,}
        seq(',', /[0-9]+/),            // {,m}
        /[0-9]+/                       // {n}
      ),
      '}'
    )),

    bare_string: $ => token(prec(-1, /[^\s\[\](){}/|&!?*+.@=:;>]+/)),

    primary_term: $ => prec.right(4, choice(
      $.node_pattern,
      prec(5, seq(
        '(',
        choice(
          $.expression,
          $.relation_group
        ),
        ')'
      )),
      $.pattern_reference,
      $.regex,
      $.bare_string
    )),

    node_pattern: $ => seq(
      '[',
      optional(choice(
        '$',
        seq(
          optional('!'),
          optional($.attributes)
        ))
      ),
      ']',
      optional($.node_name)
    ),

    attributes: $ => seq(
      $.attribute,
      repeat(seq(';', $.attribute))
    ),

    attribute: $ => choice(
      $.negated_attribute,
      $.positive_attribute
    ),

    negated_attribute: $ => prec(2, seq(
      '!',
      $.key,
      ':',
      $.value
    )),

    positive_attribute: $ => prec(1, seq(
      $.key,
      ':',
      $.value
    )),

    key: $ => $.identifier,

    value: $ => choice($.identifier, $.regex),

    regex: $ => token(seq(
      '/',
      repeat(choice(/[^\\/]/, seq('\\', /./))),
      '/'
    )),

    node_name: $ => seq('=', $.name),

    name: $ => $.identifier,

    relation_pattern: $ => prec.right(5, choice(
      seq(
        optional('!'),
        $.relation_operator,
        optional(prec.left(2, choice(
          $.relation_label,
          $.edge_name
        )))
      ),
      prec(6, seq(
        '(',
        choice(
          $.relation_group,
          $.expression
        ),
        ')',
        optional('?')
      ))
    )),

    relation_group: $ => prec.left(7, choice(
      seq($.sequence, choice('|', '&'), $.relation_group),
      $.sequence
    )),

    relation_operator: $ => token(prec(2, choice(
      '>',
      '<',
      '@',
      />[a-zA-Z]+/,
      /<[a-zA-Z]+/,
      '>dobj',
      '>prep',
      '>nmod',
      '>>',
      '<<',
      '..',
      '.',
      '&',
      '|'
    ))),

    relation_label: $ => $.identifier,

    edge_name: $ => seq(
      choice('=', '~'),
      $.name
    ),

    pattern_reference: $ => seq('@', $.pattern_name),

    // A block of metadata that must come immediately before a pattern definition
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

    group_metadata_line: $ => token(prec(-1, /[^/][^\n]*/)),

    // Allow letters, underscore, Japanese characters, followed by non-special chars
    identifier: $ => /[a-zA-Z_\u3040-\u309F\u30A0-\u30FF\u4E00-\u9FAF][^\s;:{}=\/&|!()\[\]<>.~@]*/
  }
});
