; Comments and metadata
(comment) @comment

; Metadata handling
(metadata_block
  "metadata" @keyword
  "begin" @punctuation.special
  "end" @punctuation.special) @comment.block.documentation

(metadata_line) @comment.documentation

; Pattern definitions
(pattern_definition
  (identifier) @entity.name.function
  ":=" @keyword.operator.definition)

; Operators and punctuation
"&" @operator
"|" @operator
"." @punctuation.delimiter

; Node patterns
(node_pattern
  "[" @punctuation.bracket
  "]" @punctuation.bracket)

(attribute
  (key) @property
  (choice "=" ":" ": ") @operator
  (value) @string)

; Regex patterns
(regex) @string.regex

; Bare patterns and references
(bare_element) @variable

(pattern_reference
  "@" @operator
  (identifier) @variable.member)

; Special syntax
(named_group
  "(?<" @punctuation.special
  (identifier) @variable.parameter
  ">" @punctuation.special)

(parenthesized_pattern
  "(" @punctuation.bracket
  ")" @punctuation.bracket)

; Quantifiers
(quantifier) @operator

; Identifiers and literals
(identifier) @variable

