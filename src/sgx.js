module.exports = grammar({
  name: 'semgrex',

  rules: {
    // The starting rule of the grammar
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

    // Sequences are terms possibly connected by relations
    sequence: $ => prec.left(seq(
      $.term,
      repeat(seq(
        $.relation_pattern,
        $.term
      ))
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
      seq('[', $.expression, ']')
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
      optional($.relation_label)
    ),

    // Relation operators (e.g., <, >, <<, >>, $+, $-, etc.)
    relation_operator: $ => token(choice(
      '<<', '>>', '==', '$++', '$--', '$+', '$-', '>++', '>--', '>+', '>-', '<++', '<--', '<+', '<-', '--', '..', '<', '>', '.', '-',
    )),

    // Labels for specifying relation types (e.g., >nsubj)
    relation_label: $ => $.identifier,

    // Identifiers used for keys, values, names, and labels
    identifier: $ => /[^;:{}=\/\s&|!()\[\]<>.]+/,
  }
});
