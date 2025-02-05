; Basic identifiers
(identifier) @variable

; Pattern names and references
(pattern_name) @function
(pattern_reference (pattern_name) @function.reference)

; Groups
(group_name) @namespace
"group" @keyword

; Operators and punctuation
":=" @operator
(terminator) @punctuation.delimiter
(boolean_operator) @operator
"!" @operator
":" @operator
"@" @operator
(relation_operator) @operator

; Node patterns
(node_pattern
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

; Bare patterns
(bare_word) @string
(bare_regex) @string.regex

; Root pattern
(node_pattern
  "[" @punctuation.bracket
  "$" @constant
  "]" @punctuation.bracket)

; Attributes
(attribute
  (key) @property
  ":" @punctuation.delimiter
  (value) @string)

; Regular expressions
(regex) @string.regex

; Quantifiers
(optional_group) @operator
(repeat_group) @operator
(attributes "?" @operator)
(attributes "*" @operator)
(range_quantifier) @operator

; Node names
(node_name
  "=" @operator
  (name) @variable)

; Named match groups
(named_match_group
  "(?<" @punctuation.bracket
  (identifier) @variable.parameter
  ">" @punctuation.bracket
  ")" @punctuation.bracket)

; Comments and metadata
(metadata_block) @comment
(metadata_line) @comment
(group_metadata_line) @comment
"///" @comment

; Pattern types
(atomic_pattern) @normal
(compound_pattern) @special
(negation) @special
(relation) @special
(boolean_operation) @special

