module.exports = grammar({
  name: 'semgrex',

  rules: {
    // The starting rule of the grammar
    source_file: $ => repeat(
      choice(
        $.pattern_definition,
        $.query
      )
    ),

    // Pattern definitions
    pattern_definition: $ => seq(
      $.pattern_name,
      ':=',
      $.expression
    ),

    pattern_name: $ => $.identifier,

    // A query is an expression, possibly with ':' and more expressions
    query: $ => seq(
      $.expression,
      repeat(
        seq(
          ':',
          $.expression
        )
      )
    ),

    // Expressions can be conjunctions of disjunctions
    expression: $ => $.conjunction,

    // Conjunctions are expressions separated by '&'
    conjunction: $ => prec.left(seq(
      $.disjunction,
      repeat(seq(
        '&',
        $.disjunction
      ))
    )),

    // Disjunctions are sequences separated by '|'
    disjunction: $ => prec.left(seq(
      $.sequence,
      repeat(seq(
        '|',
        $.sequence
      ))
    )),

    // Sequences can have multiple elements starting with optional relation patterns
    sequence: $ => prec.left(repeat1(
      seq(
        optional($.relation_pattern),
        $.term
      )
    )),

    // Terms can be negated or postfix terms
    term: $ => choice(
      seq('!', $.term),
      $.postfix_term
    ),

    // Postfix terms can have the optionality operator '?'
    postfix_term: $ => choice(
      seq($.primary_term, '?'),
      $.primary_term
    ),

    // Primary terms are the basic units without any operators
    primary_term: $ => choice(
      $.node_pattern,
      seq('(', $.expression, ')'),
      seq('[', $.expression, ']'),
      $.pattern_reference
    ),

    // Node patterns match nodes with specific attributes
    node_pattern: $ => seq(
      '{',
      optional($.attributes),
      '}',
      optional($.node_name)
    ),

    // Attributes within a node pattern
    attributes: $ => seq(
      $.attribute,
      repeat(seq(';', $.attribute))
    ),

    // An individual attribute, possibly negated
    attribute: $ => seq(
      optional('!'),
      $.key,
      ':',
      $.value
    ),

    // Attribute keys (e.g., word, lemma, tag)
    key: $ => $.identifier,

    // Attribute values can be identifiers or regex patterns
    value: $ => choice(
      $.identifier,
      $.regex
    ),

    // Regex patterns enclosed in '/'
    regex: $ => token(seq(
      '/',
      repeat(choice(
        /[^\\/]/,        // Any character except '\' or '/'
        seq('\\', /./)   // Escaped character
      )),
      '/'
    )),

    // Naming a node for backreferencing
    node_name: $ => seq('=', $.name),

    // Names used in node naming
    name: $ => $.identifier,

    // Relation patterns connecting node patterns
    relation_pattern: $ => seq(
      optional('!'),
      $.relation_operator,
      optional($.relation_label),
      optional($.edge_name)
    ),

    // Relation operators (e.g., <, >, <<, >>, $+, $-, etc.)
    relation_operator: $ => token(choice(
      '<<', '>>', '==', '$++', '$--', '$+', '$-', '>++', '>--', '>+', '>-',
      '<++', '<--', '<+', '<-', '--', '..', '<', '>', '.', '-',
    )),

    // Labels for specifying relation types (e.g., >nsubj)
    relation_label: $ => $.identifier,

    // Edge names, e.g., =conj or ~edge
    edge_name: $ => seq(
      choice('=', '~'),
      $.name
    ),

    // Pattern reference
    pattern_reference: $ => seq(
      '@',
      $.pattern_name
    ),

    // Identifiers used for keys, values, names, and labels
    identifier: $ => /[^;:{}=\/\s&|!()\[\]<>.~@:=$]+/,
  }
});
