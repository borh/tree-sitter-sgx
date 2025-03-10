((node_pattern
  (attribute
    (value) @injection.content
    (#match? @injection.content "^/.*/$")))
  (#set! injection.language "regex"))

((regex) @injection.content
  (#set! injection.language "regex"))

((metadata_line) @injection.content
  (#match? @injection.content "^/.*/$")
  (#set! injection.language "regex"))
