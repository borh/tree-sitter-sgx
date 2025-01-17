#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 135
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 58
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 1

enum ts_symbol_identifiers {
  anon_sym_DOT = 1,
  anon_sym_COLON_EQ = 2,
  anon_sym_LPAREN = 3,
  anon_sym_AMP = 4,
  anon_sym_PIPE = 5,
  anon_sym_RPAREN = 6,
  anon_sym_QMARK = 7,
  sym_bare_word = 8,
  aux_sym_bare_regex_token1 = 9,
  anon_sym_BANG = 10,
  anon_sym_EQ = 11,
  anon_sym_LBRACK = 12,
  anon_sym_DOLLAR = 13,
  anon_sym_RBRACK = 14,
  anon_sym_SEMI = 15,
  anon_sym_COLON = 16,
  sym_key = 17,
  sym_relation_operator = 18,
  anon_sym_AT = 19,
  anon_sym_DASH_DASH_DASH = 20,
  sym_metadata_line = 21,
  anon_sym_SLASH_SLASH_SLASH = 22,
  anon_sym_group = 23,
  sym_group_metadata_line = 24,
  sym_identifier = 25,
  sym_source_file = 26,
  sym_standalone_pattern = 27,
  sym_pattern_definition = 28,
  sym_pattern = 29,
  sym_basic_pattern = 30,
  sym_compound_pattern = 31,
  sym_grouped_expr = 32,
  sym_boolean_operation = 33,
  sym_optional_pattern = 34,
  sym_bare_pattern = 35,
  sym_bare_regex = 36,
  sym_optional_relation = 37,
  sym_negation = 38,
  sym_relation = 39,
  sym_relation_name = 40,
  sym_node_pattern = 41,
  sym_attributes = 42,
  sym_attribute = 43,
  sym_value = 44,
  sym_regex = 45,
  sym_node_name = 46,
  sym_name = 47,
  sym_pattern_reference = 48,
  sym_pattern_name = 49,
  sym_metadata_block = 50,
  sym_group_definition = 51,
  sym_group_name = 52,
  aux_sym_source_file_repeat1 = 53,
  aux_sym_attributes_repeat1 = 54,
  aux_sym_metadata_block_repeat1 = 55,
  aux_sym_group_definition_repeat1 = 56,
  aux_sym_group_definition_repeat2 = 57,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT] = ".",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_LPAREN] = "(",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_RPAREN] = ")",
  [anon_sym_QMARK] = "\?",
  [sym_bare_word] = "bare_word",
  [aux_sym_bare_regex_token1] = "bare_regex_token1",
  [anon_sym_BANG] = "!",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_RBRACK] = "]",
  [anon_sym_SEMI] = ";",
  [anon_sym_COLON] = ":",
  [sym_key] = "key",
  [sym_relation_operator] = "relation_operator",
  [anon_sym_AT] = "@",
  [anon_sym_DASH_DASH_DASH] = "---",
  [sym_metadata_line] = "metadata_line",
  [anon_sym_SLASH_SLASH_SLASH] = "///",
  [anon_sym_group] = "group",
  [sym_group_metadata_line] = "group_metadata_line",
  [sym_identifier] = "identifier",
  [sym_source_file] = "source_file",
  [sym_standalone_pattern] = "standalone_pattern",
  [sym_pattern_definition] = "pattern_definition",
  [sym_pattern] = "pattern",
  [sym_basic_pattern] = "basic_pattern",
  [sym_compound_pattern] = "compound_pattern",
  [sym_grouped_expr] = "grouped_expr",
  [sym_boolean_operation] = "boolean_operation",
  [sym_optional_pattern] = "optional_pattern",
  [sym_bare_pattern] = "bare_pattern",
  [sym_bare_regex] = "bare_regex",
  [sym_optional_relation] = "optional_relation",
  [sym_negation] = "negation",
  [sym_relation] = "relation",
  [sym_relation_name] = "relation_name",
  [sym_node_pattern] = "node_pattern",
  [sym_attributes] = "attributes",
  [sym_attribute] = "attribute",
  [sym_value] = "value",
  [sym_regex] = "regex",
  [sym_node_name] = "node_name",
  [sym_name] = "name",
  [sym_pattern_reference] = "pattern_reference",
  [sym_pattern_name] = "pattern_name",
  [sym_metadata_block] = "metadata_block",
  [sym_group_definition] = "group_definition",
  [sym_group_name] = "group_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_metadata_block_repeat1] = "metadata_block_repeat1",
  [aux_sym_group_definition_repeat1] = "group_definition_repeat1",
  [aux_sym_group_definition_repeat2] = "group_definition_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [sym_bare_word] = sym_bare_word,
  [aux_sym_bare_regex_token1] = aux_sym_bare_regex_token1,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_key] = sym_key,
  [sym_relation_operator] = sym_relation_operator,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [sym_metadata_line] = sym_metadata_line,
  [anon_sym_SLASH_SLASH_SLASH] = anon_sym_SLASH_SLASH_SLASH,
  [anon_sym_group] = anon_sym_group,
  [sym_group_metadata_line] = sym_group_metadata_line,
  [sym_identifier] = sym_identifier,
  [sym_source_file] = sym_source_file,
  [sym_standalone_pattern] = sym_standalone_pattern,
  [sym_pattern_definition] = sym_pattern_definition,
  [sym_pattern] = sym_pattern,
  [sym_basic_pattern] = sym_basic_pattern,
  [sym_compound_pattern] = sym_compound_pattern,
  [sym_grouped_expr] = sym_grouped_expr,
  [sym_boolean_operation] = sym_boolean_operation,
  [sym_optional_pattern] = sym_optional_pattern,
  [sym_bare_pattern] = sym_bare_pattern,
  [sym_bare_regex] = sym_bare_regex,
  [sym_optional_relation] = sym_optional_relation,
  [sym_negation] = sym_negation,
  [sym_relation] = sym_relation,
  [sym_relation_name] = sym_relation_name,
  [sym_node_pattern] = sym_node_pattern,
  [sym_attributes] = sym_attributes,
  [sym_attribute] = sym_attribute,
  [sym_value] = sym_value,
  [sym_regex] = sym_regex,
  [sym_node_name] = sym_node_name,
  [sym_name] = sym_name,
  [sym_pattern_reference] = sym_pattern_reference,
  [sym_pattern_name] = sym_pattern_name,
  [sym_metadata_block] = sym_metadata_block,
  [sym_group_definition] = sym_group_definition,
  [sym_group_name] = sym_group_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_metadata_block_repeat1] = aux_sym_metadata_block_repeat1,
  [aux_sym_group_definition_repeat1] = aux_sym_group_definition_repeat1,
  [aux_sym_group_definition_repeat2] = aux_sym_group_definition_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [sym_bare_word] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_bare_regex_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_operator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_metadata_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group] = {
    .visible = true,
    .named = false,
  },
  [sym_group_metadata_line] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_standalone_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_compound_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_grouped_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_operation] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_optional_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_negation] = {
    .visible = true,
    .named = true,
  },
  [sym_relation] = {
    .visible = true,
    .named = true,
  },
  [sym_relation_name] = {
    .visible = true,
    .named = true,
  },
  [sym_node_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_node_name] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_name] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_block] = {
    .visible = true,
    .named = true,
  },
  [sym_group_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 5,
  [8] = 6,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 46,
  [48] = 46,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 9,
  [57] = 10,
  [58] = 9,
  [59] = 10,
  [60] = 60,
  [61] = 61,
  [62] = 15,
  [63] = 12,
  [64] = 11,
  [65] = 14,
  [66] = 18,
  [67] = 19,
  [68] = 16,
  [69] = 13,
  [70] = 17,
  [71] = 71,
  [72] = 72,
  [73] = 71,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 72,
  [79] = 20,
  [80] = 80,
  [81] = 21,
  [82] = 42,
  [83] = 36,
  [84] = 15,
  [85] = 12,
  [86] = 11,
  [87] = 14,
  [88] = 13,
  [89] = 89,
  [90] = 18,
  [91] = 17,
  [92] = 19,
  [93] = 16,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 20,
  [105] = 105,
  [106] = 21,
  [107] = 23,
  [108] = 108,
  [109] = 103,
  [110] = 97,
  [111] = 103,
  [112] = 97,
  [113] = 113,
  [114] = 114,
  [115] = 54,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 113,
  [121] = 55,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 119,
  [127] = 127,
  [128] = 128,
  [129] = 122,
  [130] = 130,
  [131] = 122,
  [132] = 132,
  [133] = 128,
  [134] = 130,
};

static TSCharacterRange sym_key_character_set_1[] = {
  {0, 0x08}, {0x0e, 0x1f}, {'"', '%'}, {'\'', '\''}, {'*', '-'}, {'0', '9'}, {'?', '?'}, {'A', 'Z'},
  {'\\', '\\'}, {'^', 'z'}, {0x7f, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 41,
        '$', 44,
        '&', 32,
        '(', 31,
        ')', 34,
        '-', 8,
        '.', 29,
        '/', 9,
        ':', 48,
        ';', 46,
        '<', 53,
        '=', 42,
        '>', 54,
        '?', 35,
        '@', 76,
        '[', 43,
        ']', 45,
        'g', 21,
        '|', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if ((0x3041 <= lookahead && lookahead <= 0x3093) ||
          (0x30a1 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(36);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '-') ADVANCE(81);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0) ADVANCE(82);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(47);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3040 ||
          (0x3094 <= lookahead && lookahead <= 0x30a0) ||
          (0x30f7 <= lookahead && lookahead <= 0x30ff)) ADVANCE(90);
      if ((0x3041 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(37);
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(41);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(3);
      if ((0x3041 <= lookahead && lookahead <= 0x3093) ||
          (0x30a1 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(36);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '!', 25,
        '$', 44,
        '&', 32,
        '.', 51,
        '/', 11,
        '<', 53,
        '=', 42,
        '>', 54,
        '?', 35,
        '@', 50,
        ']', 45,
        '|', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(4);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3040 ||
          (0x3094 <= lookahead && lookahead <= 0x30a0) ||
          (0x30f7 <= lookahead && lookahead <= 0x30ff)) ADVANCE(49);
      if ((0x3041 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(38);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(49);
      END_STATE();
    case 6:
      ADVANCE_MAP(
        '-', 8,
        '.', 29,
        '/', 14,
        '<', 53,
        '=', 42,
        '>', 54,
        '?', 35,
        '@', 50,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(90);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(40);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 11:
      if (lookahead == '/') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead != 0) ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(14);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(11);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(16);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 19:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'p') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 24:
      if (lookahead == 'u') ADVANCE(20);
      END_STATE();
    case 25:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(49);
      END_STATE();
    case 26:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 27:
      if (eof) ADVANCE(28);
      ADVANCE_MAP(
        '!', 41,
        '&', 32,
        '(', 31,
        ')', 34,
        '-', 8,
        '.', 29,
        '/', 9,
        ':', 15,
        '<', 53,
        '=', 42,
        '>', 54,
        '?', 35,
        '@', 76,
        '[', 43,
        ']', 45,
        '|', 33,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(27);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == 0x3040 ||
          (0x3094 <= lookahead && lookahead <= 0x30a0) ||
          (0x30f7 <= lookahead && lookahead <= 0x30ff)) ADVANCE(90);
      if ((0x3041 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(37);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_bare_word);
      if ((0x3041 <= lookahead && lookahead <= 0x3093) ||
          (0x30a1 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_bare_word);
      if ((0x3041 <= lookahead && lookahead <= 0x3093) ||
          (0x30a1 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(37);
      if ((!eof && set_contains(sym_key_character_set_1, 11, lookahead))) ADVANCE(90);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_bare_word);
      if ((0x3041 <= lookahead && lookahead <= 0x3093) ||
          (0x30a1 <= lookahead && lookahead <= 0x30f6) ||
          (0x4e00 <= lookahead && lookahead <= 0x9faf)) ADVANCE(38);
      if ((!eof && set_contains(sym_key_character_set_1, 11, lookahead))) ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_bare_regex_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_bare_regex_token1);
      if (lookahead == '/') ADVANCE(83);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == '=') ADVANCE(30);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_key);
      if ((!eof && set_contains(sym_key_character_set_1, 11, lookahead))) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_relation_operator);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == '.') ADVANCE(50);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == ':') ADVANCE(18);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == '<') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(59);
      if (lookahead == 's') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == '>') ADVANCE(50);
      if (lookahead == 'a') ADVANCE(69);
      if (lookahead == 'c') ADVANCE(65);
      if (lookahead == 'd') ADVANCE(64);
      if (lookahead == 'n') ADVANCE(61);
      if (lookahead == 'p') ADVANCE(71);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'b') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'd') ADVANCE(52);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'e') ADVANCE(63);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'e') ADVANCE(68);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'g') ADVANCE(57);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'j') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 's') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'n') ADVANCE(60);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'n') ADVANCE(73);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'o') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'o') ADVANCE(62);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'o') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'o') ADVANCE(72);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'p') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'p') ADVANCE(70);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'p') ADVANCE(67);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'r') ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 's') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 't') ADVANCE(75);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_relation_operator);
      if (lookahead == 'u') ADVANCE(55);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_relation_operator);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == '-') ADVANCE(81);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(79);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == '-') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == '-') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_SLASH_SLASH_SLASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_group);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_group_metadata_line);
      if (lookahead == '\n') ADVANCE(86);
      if (lookahead == '/') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(86);
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_group_metadata_line);
      if (lookahead == '/') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_group_metadata_line);
      if (lookahead == '/') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_group_metadata_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if ((!eof && set_contains(sym_key_character_set_1, 11, lookahead))) ADVANCE(90);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 27},
  [2] = {.lex_state = 27},
  [3] = {.lex_state = 27},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 3},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 3},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 27},
  [10] = {.lex_state = 27},
  [11] = {.lex_state = 27},
  [12] = {.lex_state = 27},
  [13] = {.lex_state = 27},
  [14] = {.lex_state = 27},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 27},
  [17] = {.lex_state = 27},
  [18] = {.lex_state = 27},
  [19] = {.lex_state = 27},
  [20] = {.lex_state = 27},
  [21] = {.lex_state = 27},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 27},
  [24] = {.lex_state = 27},
  [25] = {.lex_state = 27},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 27},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 27},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 27},
  [34] = {.lex_state = 27},
  [35] = {.lex_state = 27},
  [36] = {.lex_state = 27},
  [37] = {.lex_state = 27},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 27},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 27},
  [43] = {.lex_state = 27},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 27},
  [46] = {.lex_state = 4},
  [47] = {.lex_state = 4},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 4},
  [57] = {.lex_state = 4},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 13},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 4},
  [63] = {.lex_state = 4},
  [64] = {.lex_state = 4},
  [65] = {.lex_state = 4},
  [66] = {.lex_state = 4},
  [67] = {.lex_state = 4},
  [68] = {.lex_state = 4},
  [69] = {.lex_state = 4},
  [70] = {.lex_state = 4},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 12},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 12},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 4},
  [80] = {.lex_state = 4},
  [81] = {.lex_state = 4},
  [82] = {.lex_state = 6},
  [83] = {.lex_state = 6},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 6},
  [87] = {.lex_state = 6},
  [88] = {.lex_state = 6},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 6},
  [91] = {.lex_state = 6},
  [92] = {.lex_state = 6},
  [93] = {.lex_state = 6},
  [94] = {.lex_state = 12},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 6},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 5},
  [103] = {.lex_state = 6},
  [104] = {.lex_state = 6},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 6},
  [107] = {.lex_state = 6},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 6},
  [111] = {.lex_state = 6},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 6},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 2},
  [124] = {.lex_state = 6},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 27},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 27},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 27},
  [134] = {.lex_state = 27},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [sym_bare_word] = ACTIONS(1),
    [aux_sym_bare_regex_token1] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_relation_operator] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_group] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(132),
    [sym_standalone_pattern] = STATE(2),
    [sym_pattern_definition] = STATE(2),
    [sym_pattern] = STATE(28),
    [sym_basic_pattern] = STATE(23),
    [sym_compound_pattern] = STATE(27),
    [sym_grouped_expr] = STATE(29),
    [sym_boolean_operation] = STATE(30),
    [sym_optional_pattern] = STATE(20),
    [sym_bare_pattern] = STATE(14),
    [sym_bare_regex] = STATE(15),
    [sym_optional_relation] = STATE(30),
    [sym_negation] = STATE(29),
    [sym_relation] = STATE(29),
    [sym_node_pattern] = STATE(14),
    [sym_pattern_reference] = STATE(14),
    [sym_pattern_name] = STATE(128),
    [sym_metadata_block] = STATE(4),
    [sym_group_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LPAREN] = ACTIONS(5),
    [sym_bare_word] = ACTIONS(7),
    [aux_sym_bare_regex_token1] = ACTIONS(9),
    [anon_sym_BANG] = ACTIONS(11),
    [anon_sym_LBRACK] = ACTIONS(13),
    [anon_sym_AT] = ACTIONS(15),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(17),
    [anon_sym_SLASH_SLASH_SLASH] = ACTIONS(19),
    [sym_identifier] = ACTIONS(21),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 21,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_bare_word,
    ACTIONS(9), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(17), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(19), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(4), 1,
      sym_metadata_block,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(23), 1,
      sym_basic_pattern,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(28), 1,
      sym_pattern,
    STATE(128), 1,
      sym_pattern_name,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(3), 4,
      sym_standalone_pattern,
      sym_pattern_definition,
      sym_group_definition,
      aux_sym_source_file_repeat1,
  [72] = 21,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_LPAREN,
    ACTIONS(30), 1,
      sym_bare_word,
    ACTIONS(33), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(36), 1,
      anon_sym_BANG,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(48), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(4), 1,
      sym_metadata_block,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(23), 1,
      sym_basic_pattern,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(28), 1,
      sym_pattern,
    STATE(128), 1,
      sym_pattern_name,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(3), 4,
      sym_standalone_pattern,
      sym_pattern_definition,
      sym_group_definition,
      aux_sym_source_file_repeat1,
  [144] = 16,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(7), 1,
      sym_bare_word,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(21), 1,
      sym_identifier,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(23), 1,
      sym_basic_pattern,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(31), 1,
      sym_pattern,
    STATE(130), 1,
      sym_pattern_name,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
  [198] = 14,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(56), 1,
      sym_bare_word,
    ACTIONS(58), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(84), 1,
      sym_bare_regex,
    STATE(104), 1,
      sym_optional_pattern,
    STATE(107), 1,
      sym_basic_pattern,
    STATE(113), 1,
      sym_pattern,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(87), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [246] = 14,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(56), 1,
      sym_bare_word,
    ACTIONS(58), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(84), 1,
      sym_bare_regex,
    STATE(104), 1,
      sym_optional_pattern,
    STATE(107), 1,
      sym_basic_pattern,
    STATE(119), 1,
      sym_pattern,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(87), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [294] = 14,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(56), 1,
      sym_bare_word,
    ACTIONS(58), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(84), 1,
      sym_bare_regex,
    STATE(104), 1,
      sym_optional_pattern,
    STATE(107), 1,
      sym_basic_pattern,
    STATE(120), 1,
      sym_pattern,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(87), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [342] = 14,
    ACTIONS(5), 1,
      anon_sym_LPAREN,
    ACTIONS(11), 1,
      anon_sym_BANG,
    ACTIONS(56), 1,
      sym_bare_word,
    ACTIONS(58), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(60), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      anon_sym_AT,
    STATE(27), 1,
      sym_compound_pattern,
    STATE(84), 1,
      sym_bare_regex,
    STATE(104), 1,
      sym_optional_pattern,
    STATE(107), 1,
      sym_basic_pattern,
    STATE(126), 1,
      sym_pattern,
    STATE(30), 2,
      sym_boolean_operation,
      sym_optional_relation,
    STATE(29), 3,
      sym_grouped_expr,
      sym_negation,
      sym_relation,
    STATE(87), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [390] = 4,
    ACTIONS(68), 1,
      anon_sym_EQ,
    STATE(18), 1,
      sym_node_name,
    ACTIONS(66), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(64), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [417] = 4,
    ACTIONS(68), 1,
      anon_sym_EQ,
    STATE(17), 1,
      sym_node_name,
    ACTIONS(72), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [444] = 2,
    ACTIONS(76), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(74), 12,
      ts_builtin_sym_end,
      anon_sym_COLON_EQ,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [466] = 2,
    ACTIONS(80), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(78), 12,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [488] = 2,
    ACTIONS(84), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(82), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [509] = 3,
    ACTIONS(90), 1,
      anon_sym_QMARK,
    ACTIONS(88), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [532] = 2,
    ACTIONS(94), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(92), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [553] = 2,
    ACTIONS(98), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(96), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [574] = 2,
    ACTIONS(102), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(100), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [595] = 2,
    ACTIONS(72), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(70), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [616] = 2,
    ACTIONS(106), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(104), 11,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_QMARK,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [637] = 2,
    ACTIONS(88), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [657] = 2,
    ACTIONS(110), 5,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_relation_operator,
      sym_identifier,
    ACTIONS(108), 10,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [677] = 9,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(112), 1,
      anon_sym_LPAREN,
    ACTIONS(114), 1,
      sym_bare_word,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(34), 2,
      sym_basic_pattern,
      sym_boolean_operation,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [708] = 3,
    ACTIONS(120), 1,
      sym_relation_operator,
    ACTIONS(118), 4,
      anon_sym_DOT,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(116), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [727] = 2,
    ACTIONS(124), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(122), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [744] = 2,
    ACTIONS(128), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(126), 9,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [761] = 10,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(114), 1,
      sym_bare_word,
    ACTIONS(130), 1,
      anon_sym_EQ,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(24), 1,
      sym_basic_pattern,
    STATE(38), 1,
      sym_relation_name,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [794] = 2,
    ACTIONS(118), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(116), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [810] = 3,
    ACTIONS(134), 1,
      anon_sym_DOT,
    ACTIONS(136), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(132), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [828] = 2,
    ACTIONS(140), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(138), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [844] = 2,
    ACTIONS(144), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(142), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [860] = 3,
    ACTIONS(148), 1,
      anon_sym_DOT,
    ACTIONS(150), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [878] = 9,
    ACTIONS(152), 1,
      sym_bare_word,
    ACTIONS(154), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(158), 1,
      anon_sym_AT,
    STATE(62), 1,
      sym_bare_regex,
    STATE(79), 1,
      sym_optional_pattern,
    STATE(80), 1,
      sym_basic_pattern,
    STATE(114), 1,
      sym_relation,
    STATE(65), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [908] = 2,
    ACTIONS(162), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(160), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [924] = 2,
    ACTIONS(166), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(164), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [940] = 2,
    ACTIONS(170), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(168), 8,
      ts_builtin_sym_end,
      anon_sym_DOT,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [956] = 2,
    ACTIONS(174), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(172), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [971] = 2,
    ACTIONS(150), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(146), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [986] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(114), 1,
      sym_bare_word,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(25), 1,
      sym_basic_pattern,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [1013] = 2,
    ACTIONS(178), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(176), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [1028] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(114), 1,
      sym_bare_word,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(98), 1,
      sym_basic_pattern,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [1055] = 8,
    ACTIONS(13), 1,
      anon_sym_LBRACK,
    ACTIONS(15), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(114), 1,
      sym_bare_word,
    STATE(15), 1,
      sym_bare_regex,
    STATE(20), 1,
      sym_optional_pattern,
    STATE(117), 1,
      sym_basic_pattern,
    STATE(14), 3,
      sym_bare_pattern,
      sym_node_pattern,
      sym_pattern_reference,
  [1082] = 2,
    ACTIONS(182), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(180), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [1097] = 2,
    ACTIONS(186), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(184), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [1112] = 2,
    ACTIONS(190), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(188), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [1127] = 2,
    ACTIONS(194), 3,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      sym_identifier,
    ACTIONS(192), 7,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
  [1142] = 7,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(196), 1,
      sym_bare_word,
    ACTIONS(198), 1,
      anon_sym_DOLLAR,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    ACTIONS(202), 1,
      sym_key,
    STATE(95), 1,
      sym_attribute,
    STATE(131), 2,
      sym_bare_regex,
      sym_attributes,
  [1165] = 7,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(202), 1,
      sym_key,
    ACTIONS(204), 1,
      sym_bare_word,
    ACTIONS(206), 1,
      anon_sym_DOLLAR,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_attribute,
    STATE(122), 2,
      sym_bare_regex,
      sym_attributes,
  [1188] = 7,
    ACTIONS(54), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(202), 1,
      sym_key,
    ACTIONS(210), 1,
      sym_bare_word,
    ACTIONS(212), 1,
      anon_sym_DOLLAR,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    STATE(95), 1,
      sym_attribute,
    STATE(129), 2,
      sym_bare_regex,
      sym_attributes,
  [1211] = 6,
    ACTIONS(216), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(219), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(221), 1,
      sym_identifier,
    STATE(108), 1,
      sym_metadata_block,
    STATE(133), 1,
      sym_pattern_name,
    STATE(49), 2,
      sym_pattern_definition,
      aux_sym_group_definition_repeat2,
  [1231] = 6,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(226), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(108), 1,
      sym_metadata_block,
    STATE(133), 1,
      sym_pattern_name,
    STATE(49), 2,
      sym_pattern_definition,
      aux_sym_group_definition_repeat2,
  [1251] = 6,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(226), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(108), 1,
      sym_metadata_block,
    STATE(133), 1,
      sym_pattern_name,
    STATE(53), 2,
      sym_pattern_definition,
      aux_sym_group_definition_repeat2,
  [1271] = 6,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(230), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(108), 1,
      sym_metadata_block,
    STATE(133), 1,
      sym_pattern_name,
    STATE(50), 2,
      sym_pattern_definition,
      aux_sym_group_definition_repeat2,
  [1291] = 6,
    ACTIONS(224), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(228), 1,
      sym_identifier,
    ACTIONS(232), 1,
      anon_sym_SLASH_SLASH_SLASH,
    STATE(108), 1,
      sym_metadata_block,
    STATE(133), 1,
      sym_pattern_name,
    STATE(49), 2,
      sym_pattern_definition,
      aux_sym_group_definition_repeat2,
  [1311] = 2,
    ACTIONS(236), 2,
      sym_bare_word,
      sym_identifier,
    ACTIONS(234), 5,
      anon_sym_LPAREN,
      aux_sym_bare_regex_token1,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
  [1323] = 2,
    ACTIONS(240), 2,
      sym_bare_word,
      sym_identifier,
    ACTIONS(238), 5,
      anon_sym_LPAREN,
      aux_sym_bare_regex_token1,
      anon_sym_BANG,
      anon_sym_LBRACK,
      anon_sym_AT,
  [1335] = 3,
    ACTIONS(242), 1,
      anon_sym_EQ,
    STATE(66), 1,
      sym_node_name,
    ACTIONS(64), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1348] = 3,
    ACTIONS(242), 1,
      anon_sym_EQ,
    STATE(70), 1,
      sym_node_name,
    ACTIONS(70), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1361] = 4,
    ACTIONS(64), 1,
      anon_sym_QMARK,
    ACTIONS(244), 1,
      anon_sym_EQ,
    STATE(90), 1,
      sym_node_name,
    ACTIONS(66), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1375] = 4,
    ACTIONS(70), 1,
      anon_sym_QMARK,
    ACTIONS(244), 1,
      anon_sym_EQ,
    STATE(91), 1,
      sym_node_name,
    ACTIONS(72), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1389] = 4,
    ACTIONS(246), 1,
      aux_sym_bare_regex_token1,
    ACTIONS(248), 1,
      sym_identifier,
    STATE(100), 1,
      sym_regex,
    STATE(101), 1,
      sym_value,
  [1402] = 1,
    ACTIONS(250), 4,
      sym_bare_word,
      aux_sym_bare_regex_token1,
      anon_sym_LBRACK,
      anon_sym_AT,
  [1409] = 1,
    ACTIONS(92), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1416] = 1,
    ACTIONS(78), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1423] = 1,
    ACTIONS(74), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1430] = 2,
    ACTIONS(252), 1,
      anon_sym_QMARK,
    ACTIONS(86), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_relation_operator,
  [1439] = 1,
    ACTIONS(70), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1446] = 1,
    ACTIONS(104), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1453] = 1,
    ACTIONS(96), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1460] = 1,
    ACTIONS(82), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1467] = 1,
    ACTIONS(100), 4,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_QMARK,
      sym_relation_operator,
  [1474] = 3,
    ACTIONS(254), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(256), 1,
      sym_metadata_line,
    STATE(76), 1,
      aux_sym_metadata_block_repeat1,
  [1484] = 3,
    ACTIONS(258), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(260), 1,
      sym_metadata_line,
    STATE(71), 1,
      aux_sym_metadata_block_repeat1,
  [1494] = 3,
    ACTIONS(256), 1,
      sym_metadata_line,
    ACTIONS(262), 1,
      anon_sym_DASH_DASH_DASH,
    STATE(76), 1,
      aux_sym_metadata_block_repeat1,
  [1504] = 3,
    ACTIONS(264), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(266), 1,
      sym_group_metadata_line,
    STATE(77), 1,
      aux_sym_group_definition_repeat1,
  [1514] = 3,
    ACTIONS(268), 1,
      anon_sym_RBRACK,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_attributes_repeat1,
  [1524] = 3,
    ACTIONS(272), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(274), 1,
      sym_metadata_line,
    STATE(76), 1,
      aux_sym_metadata_block_repeat1,
  [1534] = 3,
    ACTIONS(277), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(279), 1,
      sym_group_metadata_line,
    STATE(77), 1,
      aux_sym_group_definition_repeat1,
  [1544] = 3,
    ACTIONS(282), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(284), 1,
      sym_metadata_line,
    STATE(73), 1,
      aux_sym_metadata_block_repeat1,
  [1554] = 1,
    ACTIONS(86), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_relation_operator,
  [1560] = 2,
    ACTIONS(288), 1,
      sym_relation_operator,
    ACTIONS(286), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [1568] = 1,
    ACTIONS(108), 3,
      anon_sym_AMP,
      anon_sym_PIPE,
      sym_relation_operator,
  [1574] = 1,
    ACTIONS(180), 3,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1580] = 1,
    ACTIONS(172), 3,
      anon_sym_DASH_DASH_DASH,
      anon_sym_SLASH_SLASH_SLASH,
      sym_identifier,
  [1586] = 2,
    ACTIONS(92), 1,
      anon_sym_QMARK,
    ACTIONS(94), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1594] = 2,
    ACTIONS(78), 1,
      anon_sym_QMARK,
    ACTIONS(80), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1602] = 2,
    ACTIONS(74), 1,
      anon_sym_QMARK,
    ACTIONS(76), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1610] = 2,
    ACTIONS(290), 1,
      anon_sym_QMARK,
    ACTIONS(88), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1618] = 2,
    ACTIONS(82), 1,
      anon_sym_QMARK,
    ACTIONS(84), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1626] = 3,
    ACTIONS(292), 1,
      anon_sym_RBRACK,
    ACTIONS(294), 1,
      anon_sym_SEMI,
    STATE(89), 1,
      aux_sym_attributes_repeat1,
  [1636] = 2,
    ACTIONS(70), 1,
      anon_sym_QMARK,
    ACTIONS(72), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1644] = 2,
    ACTIONS(100), 1,
      anon_sym_QMARK,
    ACTIONS(102), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1652] = 2,
    ACTIONS(104), 1,
      anon_sym_QMARK,
    ACTIONS(106), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1660] = 2,
    ACTIONS(96), 1,
      anon_sym_QMARK,
    ACTIONS(98), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1668] = 3,
    ACTIONS(297), 1,
      anon_sym_SLASH_SLASH_SLASH,
    ACTIONS(299), 1,
      sym_group_metadata_line,
    STATE(74), 1,
      aux_sym_group_definition_repeat1,
  [1678] = 3,
    ACTIONS(270), 1,
      anon_sym_SEMI,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(75), 1,
      aux_sym_attributes_repeat1,
  [1688] = 2,
    ACTIONS(303), 1,
      sym_identifier,
    STATE(116), 1,
      sym_group_name,
  [1695] = 2,
    ACTIONS(305), 1,
      sym_identifier,
    STATE(16), 1,
      sym_name,
  [1702] = 1,
    ACTIONS(286), 2,
      anon_sym_AMP,
      anon_sym_PIPE,
  [1707] = 1,
    ACTIONS(307), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1712] = 1,
    ACTIONS(309), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1717] = 1,
    ACTIONS(311), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1722] = 2,
    ACTIONS(313), 1,
      sym_key,
    STATE(105), 1,
      sym_attribute,
  [1729] = 2,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(13), 1,
      sym_pattern_name,
  [1736] = 1,
    ACTIONS(88), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1741] = 1,
    ACTIONS(292), 2,
      anon_sym_RBRACK,
      anon_sym_SEMI,
  [1746] = 1,
    ACTIONS(110), 2,
      anon_sym_DOT,
      sym_relation_operator,
  [1751] = 2,
    ACTIONS(118), 1,
      anon_sym_DOT,
    ACTIONS(120), 1,
      sym_relation_operator,
  [1758] = 2,
    ACTIONS(228), 1,
      sym_identifier,
    STATE(134), 1,
      sym_pattern_name,
  [1765] = 2,
    ACTIONS(315), 1,
      sym_identifier,
    STATE(69), 1,
      sym_pattern_name,
  [1772] = 2,
    ACTIONS(317), 1,
      sym_identifier,
    STATE(68), 1,
      sym_name,
  [1779] = 2,
    ACTIONS(319), 1,
      sym_identifier,
    STATE(88), 1,
      sym_pattern_name,
  [1786] = 2,
    ACTIONS(321), 1,
      sym_identifier,
    STATE(93), 1,
      sym_name,
  [1793] = 1,
    ACTIONS(323), 1,
      anon_sym_DOT,
  [1797] = 1,
    ACTIONS(325), 1,
      anon_sym_RPAREN,
  [1801] = 1,
    ACTIONS(234), 1,
      sym_identifier,
  [1805] = 1,
    ACTIONS(327), 1,
      anon_sym_SLASH_SLASH_SLASH,
  [1809] = 1,
    ACTIONS(329), 1,
      anon_sym_RPAREN,
  [1813] = 1,
    ACTIONS(331), 1,
      anon_sym_QMARK,
  [1817] = 1,
    ACTIONS(333), 1,
      anon_sym_DOT,
  [1821] = 1,
    ACTIONS(335), 1,
      anon_sym_DOT,
  [1825] = 1,
    ACTIONS(238), 1,
      sym_identifier,
  [1829] = 1,
    ACTIONS(337), 1,
      anon_sym_RBRACK,
  [1833] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1837] = 1,
    ACTIONS(341), 1,
      sym_identifier,
  [1841] = 1,
    ACTIONS(343), 1,
      anon_sym_SLASH_SLASH_SLASH,
  [1845] = 1,
    ACTIONS(345), 1,
      anon_sym_DOT,
  [1849] = 1,
    ACTIONS(347), 1,
      anon_sym_group,
  [1853] = 1,
    ACTIONS(349), 1,
      anon_sym_COLON_EQ,
  [1857] = 1,
    ACTIONS(351), 1,
      anon_sym_RBRACK,
  [1861] = 1,
    ACTIONS(353), 1,
      anon_sym_COLON_EQ,
  [1865] = 1,
    ACTIONS(355), 1,
      anon_sym_RBRACK,
  [1869] = 1,
    ACTIONS(357), 1,
      ts_builtin_sym_end,
  [1873] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON_EQ,
  [1877] = 1,
    ACTIONS(361), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 72,
  [SMALL_STATE(4)] = 144,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 246,
  [SMALL_STATE(7)] = 294,
  [SMALL_STATE(8)] = 342,
  [SMALL_STATE(9)] = 390,
  [SMALL_STATE(10)] = 417,
  [SMALL_STATE(11)] = 444,
  [SMALL_STATE(12)] = 466,
  [SMALL_STATE(13)] = 488,
  [SMALL_STATE(14)] = 509,
  [SMALL_STATE(15)] = 532,
  [SMALL_STATE(16)] = 553,
  [SMALL_STATE(17)] = 574,
  [SMALL_STATE(18)] = 595,
  [SMALL_STATE(19)] = 616,
  [SMALL_STATE(20)] = 637,
  [SMALL_STATE(21)] = 657,
  [SMALL_STATE(22)] = 677,
  [SMALL_STATE(23)] = 708,
  [SMALL_STATE(24)] = 727,
  [SMALL_STATE(25)] = 744,
  [SMALL_STATE(26)] = 761,
  [SMALL_STATE(27)] = 794,
  [SMALL_STATE(28)] = 810,
  [SMALL_STATE(29)] = 828,
  [SMALL_STATE(30)] = 844,
  [SMALL_STATE(31)] = 860,
  [SMALL_STATE(32)] = 878,
  [SMALL_STATE(33)] = 908,
  [SMALL_STATE(34)] = 924,
  [SMALL_STATE(35)] = 940,
  [SMALL_STATE(36)] = 956,
  [SMALL_STATE(37)] = 971,
  [SMALL_STATE(38)] = 986,
  [SMALL_STATE(39)] = 1013,
  [SMALL_STATE(40)] = 1028,
  [SMALL_STATE(41)] = 1055,
  [SMALL_STATE(42)] = 1082,
  [SMALL_STATE(43)] = 1097,
  [SMALL_STATE(44)] = 1112,
  [SMALL_STATE(45)] = 1127,
  [SMALL_STATE(46)] = 1142,
  [SMALL_STATE(47)] = 1165,
  [SMALL_STATE(48)] = 1188,
  [SMALL_STATE(49)] = 1211,
  [SMALL_STATE(50)] = 1231,
  [SMALL_STATE(51)] = 1251,
  [SMALL_STATE(52)] = 1271,
  [SMALL_STATE(53)] = 1291,
  [SMALL_STATE(54)] = 1311,
  [SMALL_STATE(55)] = 1323,
  [SMALL_STATE(56)] = 1335,
  [SMALL_STATE(57)] = 1348,
  [SMALL_STATE(58)] = 1361,
  [SMALL_STATE(59)] = 1375,
  [SMALL_STATE(60)] = 1389,
  [SMALL_STATE(61)] = 1402,
  [SMALL_STATE(62)] = 1409,
  [SMALL_STATE(63)] = 1416,
  [SMALL_STATE(64)] = 1423,
  [SMALL_STATE(65)] = 1430,
  [SMALL_STATE(66)] = 1439,
  [SMALL_STATE(67)] = 1446,
  [SMALL_STATE(68)] = 1453,
  [SMALL_STATE(69)] = 1460,
  [SMALL_STATE(70)] = 1467,
  [SMALL_STATE(71)] = 1474,
  [SMALL_STATE(72)] = 1484,
  [SMALL_STATE(73)] = 1494,
  [SMALL_STATE(74)] = 1504,
  [SMALL_STATE(75)] = 1514,
  [SMALL_STATE(76)] = 1524,
  [SMALL_STATE(77)] = 1534,
  [SMALL_STATE(78)] = 1544,
  [SMALL_STATE(79)] = 1554,
  [SMALL_STATE(80)] = 1560,
  [SMALL_STATE(81)] = 1568,
  [SMALL_STATE(82)] = 1574,
  [SMALL_STATE(83)] = 1580,
  [SMALL_STATE(84)] = 1586,
  [SMALL_STATE(85)] = 1594,
  [SMALL_STATE(86)] = 1602,
  [SMALL_STATE(87)] = 1610,
  [SMALL_STATE(88)] = 1618,
  [SMALL_STATE(89)] = 1626,
  [SMALL_STATE(90)] = 1636,
  [SMALL_STATE(91)] = 1644,
  [SMALL_STATE(92)] = 1652,
  [SMALL_STATE(93)] = 1660,
  [SMALL_STATE(94)] = 1668,
  [SMALL_STATE(95)] = 1678,
  [SMALL_STATE(96)] = 1688,
  [SMALL_STATE(97)] = 1695,
  [SMALL_STATE(98)] = 1702,
  [SMALL_STATE(99)] = 1707,
  [SMALL_STATE(100)] = 1712,
  [SMALL_STATE(101)] = 1717,
  [SMALL_STATE(102)] = 1722,
  [SMALL_STATE(103)] = 1729,
  [SMALL_STATE(104)] = 1736,
  [SMALL_STATE(105)] = 1741,
  [SMALL_STATE(106)] = 1746,
  [SMALL_STATE(107)] = 1751,
  [SMALL_STATE(108)] = 1758,
  [SMALL_STATE(109)] = 1765,
  [SMALL_STATE(110)] = 1772,
  [SMALL_STATE(111)] = 1779,
  [SMALL_STATE(112)] = 1786,
  [SMALL_STATE(113)] = 1793,
  [SMALL_STATE(114)] = 1797,
  [SMALL_STATE(115)] = 1801,
  [SMALL_STATE(116)] = 1805,
  [SMALL_STATE(117)] = 1809,
  [SMALL_STATE(118)] = 1813,
  [SMALL_STATE(119)] = 1817,
  [SMALL_STATE(120)] = 1821,
  [SMALL_STATE(121)] = 1825,
  [SMALL_STATE(122)] = 1829,
  [SMALL_STATE(123)] = 1833,
  [SMALL_STATE(124)] = 1837,
  [SMALL_STATE(125)] = 1841,
  [SMALL_STATE(126)] = 1845,
  [SMALL_STATE(127)] = 1849,
  [SMALL_STATE(128)] = 1853,
  [SMALL_STATE(129)] = 1857,
  [SMALL_STATE(130)] = 1861,
  [SMALL_STATE(131)] = 1865,
  [SMALL_STATE(132)] = 1869,
  [SMALL_STATE(133)] = 1873,
  [SMALL_STATE(134)] = 1877,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(103),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(127),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pattern, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pattern, 2, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pattern, 3, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pattern, 3, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_name, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_name, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_regex, 1, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_regex, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_reference, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_reference, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_basic_pattern, 1, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_basic_pattern, 1, 0, 0),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_pattern, 1, 0, 0),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_pattern, 1, 0, 0),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_name, 2, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_name, 2, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pattern, 4, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pattern, 4, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_name, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_pattern, 2, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_pattern, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern, 1, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation, 4, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_relation, 4, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_pattern, 1, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standalone_pattern, 1, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_compound_pattern, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_compound_pattern, 1, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grouped_expr, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grouped_expr, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_pattern, 2, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standalone_pattern, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_optional_relation, 4, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_optional_relation, 4, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negation, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negation, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_operation, 5, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_operation, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_definition, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_definition, 5, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_standalone_pattern, 3, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_standalone_pattern, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_definition, 4, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_definition, 4, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_definition, 6, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_definition, 6, 0, 0),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_definition, 7, 0, 0),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_definition, 7, 0, 0),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_definition, 8, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_group_definition, 8, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(72),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_group_definition_repeat2, 2, 0, 0),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_group_definition_repeat2, 2, 0, 0), SHIFT_REPEAT(11),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_block, 3, 0, 0),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_block, 3, 0, 0),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_block, 2, 0, 0),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_block, 2, 0, 0),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_relation_name, 2, 0, 0),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [256] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [258] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [262] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2, 0, 0),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat1, 2, 0, 0),
  [274] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat1, 2, 0, 0), SHIFT_REPEAT(76),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_group_definition_repeat1, 2, 0, 0),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_group_definition_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2, 0, 0), SHIFT_REPEAT(102),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [301] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 1, 0, 0),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_regex, 1, 0, 0),
  [309] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 0),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [343] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_name, 1, 0, 0),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [347] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [357] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_sgx(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
