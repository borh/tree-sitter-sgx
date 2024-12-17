/**
 * @file Semgrex grammar
 * @author Bor Hodošček <dev@bor.space>
 * @license MIT
 */

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "sgx",

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => "hello"
  }
});
