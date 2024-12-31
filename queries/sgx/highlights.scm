; Identifiers
(identifier) @variable

; Keywords and operators
":=" @operator
"." @punctuation.delimiter
"&" @operator
"|" @operator
"!" @operator
"?" @operator
":" @operator
"~" @operator
"@" @operator

; Relation operators
(relation_operator) @operator

; Pattern definitions
(pattern_name) @function
(pattern_reference (pattern_name) @function.reference)

; Groups
(group_name) @namespace
"group" @keyword

; Metadata
(metadata_block) @comment
(group_metadata_line) @comment
"///" @comment

; Node patterns
(node_pattern
  "[" @punctuation.bracket
  (attributes)? @_content
  "]" @punctuation.bracket)

; Root node pattern
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

; Names
(node_name
  "=" @operator
  (name) @variable)
(edge_name
  ["=" "~"] @operator
  (name) @variable)

; Bare strings
(bare_string) @string

; Relation patterns
(relation_pattern
  (relation_label) @type)

; Parentheses and brackets
["(" ")" "[" "]"] @punctuation.bracket

