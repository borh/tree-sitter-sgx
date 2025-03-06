((node_pattern
  (attribute
    (value) @injection.content
    (#match? @injection.content "^/.*/$")))
  (#set! injection.language "regex"))

((bare_regex) @injection.content
  (#set! injection.language "regex"))

((metadata_line
  (metadata_value) @injection.content
  (#match? @injection.content "^/.*/$"))
  (#set! injection.language "regex"))
