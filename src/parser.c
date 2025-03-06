#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 5

enum ts_symbol_identifiers {
  anon_sym_LPAREN = 1,
  anon_sym_RPAREN = 2,
  anon_sym_metadata = 3,
  anon_sym_begin = 4,
  anon_sym_end = 5,
  sym_metadata_line = 6,
  anon_sym_COLON_EQ = 7,
  anon_sym_DOT = 8,
  anon_sym_PIPE = 9,
  anon_sym_LBRACK = 10,
  anon_sym_SEMI = 11,
  anon_sym_RBRACK = 12,
  anon_sym_EQ = 13,
  anon_sym_COLON = 14,
  aux_sym_attribute_token1 = 15,
  anon_sym_AMP = 16,
  aux_sym_value_token1 = 17,
  sym_regex = 18,
  anon_sym_LPAREN_QMARK_LT = 19,
  anon_sym_GT = 20,
  anon_sym_AT = 21,
  anon_sym_PLUS = 22,
  anon_sym_STAR = 23,
  anon_sym_QMARK = 24,
  aux_sym_quantifier_token1 = 25,
  sym_identifier = 26,
  sym_comment = 27,
  sym_source_file = 28,
  sym__parenthesized_content = 29,
  sym_parenthesized_pattern = 30,
  sym_metadata_block = 31,
  sym_pattern_definition = 32,
  sym__pattern = 33,
  sym_pattern_sequence = 34,
  sym_alternation = 35,
  sym_atomic_pattern = 36,
  sym_node_pattern = 37,
  sym_attribute = 38,
  sym_attribute_conjunction = 39,
  sym_key = 40,
  sym_value = 41,
  sym_bare_element = 42,
  sym_named_group = 43,
  sym_pattern_reference = 44,
  sym_quantifier = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_metadata_block_repeat1 = 47,
  aux_sym_metadata_block_repeat2 = 48,
  aux_sym_pattern_sequence_repeat1 = 49,
  aux_sym_alternation_repeat1 = 50,
  aux_sym_node_pattern_repeat1 = 51,
  aux_sym_node_pattern_repeat2 = 52,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_metadata] = "metadata",
  [anon_sym_begin] = "begin",
  [anon_sym_end] = "end",
  [sym_metadata_line] = "metadata_line",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_DOT] = ".",
  [anon_sym_PIPE] = "|",
  [anon_sym_LBRACK] = "[",
  [anon_sym_SEMI] = ";",
  [anon_sym_RBRACK] = "]",
  [anon_sym_EQ] = "=",
  [anon_sym_COLON] = ":",
  [aux_sym_attribute_token1] = "attribute_token1",
  [anon_sym_AMP] = "&",
  [aux_sym_value_token1] = "value_token1",
  [sym_regex] = "regex",
  [anon_sym_LPAREN_QMARK_LT] = "(\?<",
  [anon_sym_GT] = ">",
  [anon_sym_AT] = "@",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_QMARK] = "\?",
  [aux_sym_quantifier_token1] = "quantifier_token1",
  [sym_identifier] = "identifier",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__parenthesized_content] = "_parenthesized_content",
  [sym_parenthesized_pattern] = "parenthesized_pattern",
  [sym_metadata_block] = "metadata_block",
  [sym_pattern_definition] = "pattern_definition",
  [sym__pattern] = "_pattern",
  [sym_pattern_sequence] = "pattern_sequence",
  [sym_alternation] = "alternation",
  [sym_atomic_pattern] = "atomic_pattern",
  [sym_node_pattern] = "node_pattern",
  [sym_attribute] = "attribute",
  [sym_attribute_conjunction] = "attribute_conjunction",
  [sym_key] = "key",
  [sym_value] = "value",
  [sym_bare_element] = "bare_element",
  [sym_named_group] = "named_group",
  [sym_pattern_reference] = "pattern_reference",
  [sym_quantifier] = "quantifier",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_metadata_block_repeat1] = "metadata_block_repeat1",
  [aux_sym_metadata_block_repeat2] = "metadata_block_repeat2",
  [aux_sym_pattern_sequence_repeat1] = "pattern_sequence_repeat1",
  [aux_sym_alternation_repeat1] = "alternation_repeat1",
  [aux_sym_node_pattern_repeat1] = "node_pattern_repeat1",
  [aux_sym_node_pattern_repeat2] = "node_pattern_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_metadata] = anon_sym_metadata,
  [anon_sym_begin] = anon_sym_begin,
  [anon_sym_end] = anon_sym_end,
  [sym_metadata_line] = sym_metadata_line,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_attribute_token1] = aux_sym_attribute_token1,
  [anon_sym_AMP] = anon_sym_AMP,
  [aux_sym_value_token1] = aux_sym_value_token1,
  [sym_regex] = sym_regex,
  [anon_sym_LPAREN_QMARK_LT] = anon_sym_LPAREN_QMARK_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [aux_sym_quantifier_token1] = aux_sym_quantifier_token1,
  [sym_identifier] = sym_identifier,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__parenthesized_content] = sym__parenthesized_content,
  [sym_parenthesized_pattern] = sym_parenthesized_pattern,
  [sym_metadata_block] = sym_metadata_block,
  [sym_pattern_definition] = sym_pattern_definition,
  [sym__pattern] = sym__pattern,
  [sym_pattern_sequence] = sym_pattern_sequence,
  [sym_alternation] = sym_alternation,
  [sym_atomic_pattern] = sym_atomic_pattern,
  [sym_node_pattern] = sym_node_pattern,
  [sym_attribute] = sym_attribute,
  [sym_attribute_conjunction] = sym_attribute_conjunction,
  [sym_key] = sym_key,
  [sym_value] = sym_value,
  [sym_bare_element] = sym_bare_element,
  [sym_named_group] = sym_named_group,
  [sym_pattern_reference] = sym_pattern_reference,
  [sym_quantifier] = sym_quantifier,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_metadata_block_repeat1] = aux_sym_metadata_block_repeat1,
  [aux_sym_metadata_block_repeat2] = aux_sym_metadata_block_repeat2,
  [aux_sym_pattern_sequence_repeat1] = aux_sym_pattern_sequence_repeat1,
  [aux_sym_alternation_repeat1] = aux_sym_alternation_repeat1,
  [aux_sym_node_pattern_repeat1] = aux_sym_node_pattern_repeat1,
  [aux_sym_node_pattern_repeat2] = aux_sym_node_pattern_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_metadata] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_begin] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_end] = {
    .visible = true,
    .named = false,
  },
  [sym_metadata_line] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_attribute_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_value_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN_QMARK_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_quantifier_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__parenthesized_content] = {
    .visible = false,
    .named = true,
  },
  [sym_parenthesized_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_metadata_block] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_definition] = {
    .visible = true,
    .named = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
  },
  [sym_pattern_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_alternation] = {
    .visible = true,
    .named = true,
  },
  [sym_atomic_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_node_pattern] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_conjunction] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym_bare_element] = {
    .visible = true,
    .named = true,
  },
  [sym_named_group] = {
    .visible = true,
    .named = true,
  },
  [sym_pattern_reference] = {
    .visible = true,
    .named = true,
  },
  [sym_quantifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_metadata_block_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pattern_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_alternation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_pattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_pattern_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_name = 2,
  field_pattern = 3,
  field_value = 4,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_name] = "name",
  [field_pattern] = "pattern",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 2},
  [3] = {.index = 4, .length = 2},
  [4] = {.index = 6, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
  [2] =
    {field_name, 0},
    {field_pattern, 2},
  [4] =
    {field_key, 0},
    {field_value, 3},
  [6] =
    {field_name, 1},
    {field_pattern, 3},
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 11,
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
  [31] = 27,
  [32] = 29,
  [33] = 28,
  [34] = 34,
  [35] = 35,
  [36] = 35,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 22,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 21,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 57,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 53,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 81,
  [83] = 83,
  [84] = 84,
  [85] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      ADVANCE_MAP(
        '#', 77,
        '&', 51,
        '(', 28,
        ')', 29,
        '*', 64,
        '+', 63,
        '.', 43,
        '/', 7,
        ':', 49,
        ';', 46,
        '=', 48,
        '>', 61,
        '?', 65,
        '@', 62,
        '[', 45,
        ']', 47,
        'b', 15,
        'e', 19,
        'm', 16,
        '{', 24,
        '|', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(36);
      if (lookahead != 0) ADVANCE(41);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '#', 77,
        '&', 51,
        '(', 28,
        ')', 29,
        '*', 64,
        '+', 63,
        '.', 43,
        ';', 46,
        '?', 65,
        '@', 62,
        '[', 45,
        ']', 47,
        '{', 24,
        '|', 44,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == 'e') ADVANCE(73);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(3);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 5:
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(23);
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(25);
      if (lookahead != 0) ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == '<') ADVANCE(60);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(42);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(22);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(12);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(21);
      END_STATE();
    case 17:
      if (lookahead == 'g') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == '}') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(23);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 25:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '[') ADVANCE(45);
      if (lookahead == 'm') ADVANCE(72);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) SKIP(26);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      if (lookahead == '?') ADVANCE(8);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_metadata);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_metadata);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_begin);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_begin);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_end);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_end);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == '#') ADVANCE(41);
      if (lookahead == 'b') ADVANCE(37);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(36);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(41);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == 'e') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == 'g') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead == 'n') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_metadata_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_COLON_EQ);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_attribute_token1);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(52);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '#') ADVANCE(55);
      if (lookahead == '/') ADVANCE(54);
      if (lookahead == 0x200b ||
          lookahead == 0x2060 ||
          lookahead == 0xfeff) ADVANCE(53);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '/') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(56);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == ';' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == ';' ||
          lookahead == ']') ADVANCE(77);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '&' ||
          lookahead == ';' ||
          lookahead == ']') ADVANCE(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(54);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(57);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_value_token1);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '&' &&
          lookahead != ';' &&
          lookahead != ']') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_regex);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LPAREN_QMARK_LT);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_quantifier_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'a') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'd') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'e') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 't') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          (0x3040 <= lookahead && lookahead <= 0x30ff) ||
          (0x4e00 <= lookahead && lookahead <= 0x9fff)) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(77);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 26},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 2},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 26},
  [24] = {.lex_state = 26},
  [25] = {.lex_state = 2},
  [26] = {.lex_state = 2},
  [27] = {.lex_state = 2},
  [28] = {.lex_state = 2},
  [29] = {.lex_state = 2},
  [30] = {.lex_state = 2},
  [31] = {.lex_state = 2},
  [32] = {.lex_state = 2},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 2},
  [37] = {.lex_state = 4},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 26},
  [41] = {.lex_state = 26},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 2},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 26},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 26},
  [54] = {.lex_state = 26},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 26},
  [61] = {.lex_state = 3},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 3},
  [64] = {.lex_state = 2},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 3},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 26},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 26},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_metadata] = ACTIONS(1),
    [anon_sym_begin] = ACTIONS(1),
    [anon_sym_end] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [sym_regex] = ACTIONS(1),
    [anon_sym_LPAREN_QMARK_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [aux_sym_quantifier_token1] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(83),
    [sym_metadata_block] = STATE(23),
    [sym_pattern_definition] = STATE(23),
    [sym_node_pattern] = STATE(23),
    [aux_sym_source_file_repeat1] = STATE(23),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_metadata] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [sym_comment] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_quantifier,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [39] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_quantifier,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
    ACTIONS(17), 6,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [77] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_quantifier,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
    ACTIONS(17), 6,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [115] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_quantifier,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [151] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(23), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [191] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(10), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(35), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [226] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [265] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(7), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(39), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [300] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_LBRACK,
    ACTIONS(49), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(52), 1,
      anon_sym_AT,
    ACTIONS(55), 1,
      sym_identifier,
    STATE(10), 2,
      sym_atomic_pattern,
      aux_sym_pattern_sequence_repeat1,
    ACTIONS(44), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
    STATE(15), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [335] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(6), 1,
      sym_atomic_pattern,
    STATE(59), 1,
      sym_pattern_sequence,
    STATE(82), 2,
      sym__pattern,
      sym_alternation,
    STATE(2), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [371] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(6), 1,
      sym_atomic_pattern,
    STATE(59), 1,
      sym_pattern_sequence,
    STATE(81), 2,
      sym__pattern,
      sym_alternation,
    STATE(2), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [407] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(6), 1,
      sym_atomic_pattern,
    STATE(59), 1,
      sym_pattern_sequence,
    STATE(79), 2,
      sym__pattern,
      sym_alternation,
    STATE(2), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [443] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(3), 1,
      sym_parenthesized_pattern,
    STATE(8), 1,
      sym_atomic_pattern,
    STATE(69), 1,
      sym_pattern_sequence,
    STATE(76), 2,
      sym__parenthesized_content,
      sym_alternation,
    STATE(4), 4,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [481] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    STATE(25), 1,
      sym_quantifier,
    ACTIONS(19), 4,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
    ACTIONS(17), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [506] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_LPAREN_QMARK_LT,
    ACTIONS(31), 1,
      anon_sym_AT,
    ACTIONS(33), 1,
      sym_identifier,
    STATE(9), 1,
      sym_atomic_pattern,
    STATE(67), 1,
      sym_pattern_sequence,
    STATE(5), 5,
      sym_parenthesized_pattern,
      sym_node_pattern,
      sym_bare_element,
      sym_named_group,
      sym_pattern_reference,
  [538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 1,
      anon_sym_LPAREN,
    ACTIONS(60), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [558] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(62), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [578] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(66), 1,
      anon_sym_LPAREN,
    ACTIONS(68), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [598] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(70), 1,
      anon_sym_LPAREN,
    ACTIONS(72), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [618] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_LPAREN,
    ACTIONS(76), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [638] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 11,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_QMARK,
      aux_sym_quantifier_token1,
      sym_identifier,
  [658] = 6,
    ACTIONS(7), 1,
      anon_sym_metadata,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      sym_comment,
    STATE(24), 4,
      sym_metadata_block,
      sym_pattern_definition,
      sym_node_pattern,
      aux_sym_source_file_repeat1,
  [680] = 6,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      anon_sym_metadata,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(94), 1,
      sym_identifier,
    ACTIONS(97), 1,
      sym_comment,
    STATE(24), 4,
      sym_metadata_block,
      sym_pattern_definition,
      sym_node_pattern,
      aux_sym_source_file_repeat1,
  [702] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
    ACTIONS(102), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [718] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    ACTIONS(106), 7,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
      anon_sym_LBRACK,
      anon_sym_LPAREN_QMARK_LT,
      anon_sym_AT,
      sym_identifier,
  [734] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(74), 1,
      sym_key,
    STATE(36), 2,
      sym_attribute,
      aux_sym_node_pattern_repeat1,
  [757] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
    STATE(30), 2,
      sym_attribute_conjunction,
      aux_sym_node_pattern_repeat2,
  [780] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      anon_sym_RBRACK,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    STATE(51), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
    STATE(28), 2,
      sym_attribute_conjunction,
      aux_sym_node_pattern_repeat2,
  [803] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 1,
      anon_sym_SEMI,
    ACTIONS(123), 1,
      anon_sym_RBRACK,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(51), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
    STATE(30), 2,
      sym_attribute_conjunction,
      aux_sym_node_pattern_repeat2,
  [826] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_key,
    STATE(35), 2,
      sym_attribute,
      aux_sym_node_pattern_repeat1,
  [849] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(128), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
    STATE(33), 2,
      sym_attribute_conjunction,
      aux_sym_node_pattern_repeat2,
  [872] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(51), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
    STATE(30), 2,
      sym_attribute_conjunction,
      aux_sym_node_pattern_repeat2,
  [895] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 1,
      anon_sym_SEMI,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      sym_identifier,
    STATE(74), 1,
      sym_key,
    STATE(34), 2,
      sym_attribute,
      aux_sym_node_pattern_repeat1,
  [915] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(130), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_key,
    STATE(34), 2,
      sym_attribute,
      aux_sym_node_pattern_repeat1,
  [935] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 1,
      anon_sym_SEMI,
    ACTIONS(114), 1,
      sym_identifier,
    ACTIONS(118), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_key,
    STATE(34), 2,
      sym_attribute,
      aux_sym_node_pattern_repeat1,
  [955] = 4,
    ACTIONS(140), 1,
      aux_sym_attribute_token1,
    ACTIONS(144), 1,
      sym_comment,
    STATE(44), 1,
      sym_value,
    ACTIONS(142), 3,
      aux_sym_value_token1,
      sym_regex,
      sym_identifier,
  [970] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [994] = 2,
    ACTIONS(78), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1004] = 2,
    ACTIONS(150), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(148), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_end,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(61), 2,
      sym_pattern_definition,
      aux_sym_metadata_block_repeat2,
  [1028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_AMP,
      sym_identifier,
  [1038] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_AMP,
      sym_identifier,
  [1048] = 3,
    ACTIONS(144), 1,
      sym_comment,
    STATE(55), 1,
      sym_value,
    ACTIONS(142), 3,
      aux_sym_value_token1,
      sym_regex,
      sym_identifier,
  [1060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 1,
      anon_sym_end,
    ACTIONS(154), 1,
      sym_identifier,
    STATE(63), 2,
      sym_pattern_definition,
      aux_sym_metadata_block_repeat2,
  [1074] = 2,
    ACTIONS(74), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1084] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(39), 1,
      sym_attribute,
    STATE(68), 1,
      sym_attribute_conjunction,
    STATE(74), 1,
      sym_key,
  [1100] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(160), 1,
      anon_sym_end,
    STATE(42), 2,
      sym_pattern_definition,
      aux_sym_metadata_block_repeat2,
  [1114] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(38), 1,
      sym_attribute,
    STATE(65), 1,
      sym_attribute_conjunction,
    STATE(74), 1,
      sym_key,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_AMP,
    ACTIONS(162), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [1142] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(164), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1156] = 2,
    ACTIONS(168), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(166), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1166] = 2,
    ACTIONS(172), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1176] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 4,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      anon_sym_AMP,
      sym_identifier,
  [1186] = 3,
    ACTIONS(144), 1,
      sym_comment,
    STATE(44), 1,
      sym_value,
    ACTIONS(142), 3,
      aux_sym_value_token1,
      sym_regex,
      sym_identifier,
  [1198] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(27), 1,
      sym_attribute,
    STATE(29), 1,
      sym_attribute_conjunction,
    STATE(74), 1,
      sym_key,
  [1214] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      anon_sym_PIPE,
    STATE(58), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(39), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1228] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
    ACTIONS(23), 2,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [1242] = 2,
    ACTIONS(181), 2,
      anon_sym_metadata,
      sym_identifier,
    ACTIONS(179), 3,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      sym_comment,
  [1252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_end,
    ACTIONS(185), 1,
      sym_identifier,
    STATE(61), 2,
      sym_pattern_definition,
      aux_sym_metadata_block_repeat2,
  [1266] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(31), 1,
      sym_attribute,
    STATE(32), 1,
      sym_attribute_conjunction,
    STATE(74), 1,
      sym_key,
  [1282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(188), 1,
      anon_sym_end,
    STATE(61), 2,
      sym_pattern_definition,
      aux_sym_metadata_block_repeat2,
  [1296] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [1305] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [1314] = 4,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_begin,
    ACTIONS(192), 1,
      sym_metadata_line,
    STATE(71), 1,
      aux_sym_metadata_block_repeat1,
  [1327] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(39), 3,
      anon_sym_RPAREN,
      anon_sym_DOT,
      anon_sym_PIPE,
  [1336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      anon_sym_SEMI,
      anon_sym_RBRACK,
      sym_identifier,
  [1345] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(52), 1,
      aux_sym_alternation_repeat1,
  [1358] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      sym_identifier,
    STATE(64), 1,
      sym_attribute,
    STATE(74), 1,
      sym_key,
  [1371] = 4,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_begin,
    ACTIONS(196), 1,
      sym_metadata_line,
    STATE(72), 1,
      aux_sym_metadata_block_repeat1,
  [1384] = 4,
    ACTIONS(144), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_begin,
    ACTIONS(200), 1,
      sym_metadata_line,
    STATE(72), 1,
      aux_sym_metadata_block_repeat1,
  [1397] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(203), 2,
      anon_sym_EQ,
      anon_sym_COLON,
  [1405] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_EQ,
    ACTIONS(207), 1,
      anon_sym_COLON,
  [1415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_end,
      sym_identifier,
  [1423] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(209), 1,
      anon_sym_RPAREN,
  [1430] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(211), 1,
      sym_identifier,
  [1437] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(213), 1,
      sym_identifier,
  [1444] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(215), 1,
      anon_sym_RPAREN,
  [1451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(217), 1,
      anon_sym_COLON_EQ,
  [1458] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(219), 1,
      anon_sym_DOT,
  [1465] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(221), 1,
      anon_sym_DOT,
  [1472] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
  [1479] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(225), 1,
      anon_sym_GT,
  [1486] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(227), 1,
      anon_sym_COLON_EQ,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 39,
  [SMALL_STATE(4)] = 77,
  [SMALL_STATE(5)] = 115,
  [SMALL_STATE(6)] = 151,
  [SMALL_STATE(7)] = 191,
  [SMALL_STATE(8)] = 226,
  [SMALL_STATE(9)] = 265,
  [SMALL_STATE(10)] = 300,
  [SMALL_STATE(11)] = 335,
  [SMALL_STATE(12)] = 371,
  [SMALL_STATE(13)] = 407,
  [SMALL_STATE(14)] = 443,
  [SMALL_STATE(15)] = 481,
  [SMALL_STATE(16)] = 506,
  [SMALL_STATE(17)] = 538,
  [SMALL_STATE(18)] = 558,
  [SMALL_STATE(19)] = 578,
  [SMALL_STATE(20)] = 598,
  [SMALL_STATE(21)] = 618,
  [SMALL_STATE(22)] = 638,
  [SMALL_STATE(23)] = 658,
  [SMALL_STATE(24)] = 680,
  [SMALL_STATE(25)] = 702,
  [SMALL_STATE(26)] = 718,
  [SMALL_STATE(27)] = 734,
  [SMALL_STATE(28)] = 757,
  [SMALL_STATE(29)] = 780,
  [SMALL_STATE(30)] = 803,
  [SMALL_STATE(31)] = 826,
  [SMALL_STATE(32)] = 849,
  [SMALL_STATE(33)] = 872,
  [SMALL_STATE(34)] = 895,
  [SMALL_STATE(35)] = 915,
  [SMALL_STATE(36)] = 935,
  [SMALL_STATE(37)] = 955,
  [SMALL_STATE(38)] = 970,
  [SMALL_STATE(39)] = 982,
  [SMALL_STATE(40)] = 994,
  [SMALL_STATE(41)] = 1004,
  [SMALL_STATE(42)] = 1014,
  [SMALL_STATE(43)] = 1028,
  [SMALL_STATE(44)] = 1038,
  [SMALL_STATE(45)] = 1048,
  [SMALL_STATE(46)] = 1060,
  [SMALL_STATE(47)] = 1074,
  [SMALL_STATE(48)] = 1084,
  [SMALL_STATE(49)] = 1100,
  [SMALL_STATE(50)] = 1114,
  [SMALL_STATE(51)] = 1130,
  [SMALL_STATE(52)] = 1142,
  [SMALL_STATE(53)] = 1156,
  [SMALL_STATE(54)] = 1166,
  [SMALL_STATE(55)] = 1176,
  [SMALL_STATE(56)] = 1186,
  [SMALL_STATE(57)] = 1198,
  [SMALL_STATE(58)] = 1214,
  [SMALL_STATE(59)] = 1228,
  [SMALL_STATE(60)] = 1242,
  [SMALL_STATE(61)] = 1252,
  [SMALL_STATE(62)] = 1266,
  [SMALL_STATE(63)] = 1282,
  [SMALL_STATE(64)] = 1296,
  [SMALL_STATE(65)] = 1305,
  [SMALL_STATE(66)] = 1314,
  [SMALL_STATE(67)] = 1327,
  [SMALL_STATE(68)] = 1336,
  [SMALL_STATE(69)] = 1345,
  [SMALL_STATE(70)] = 1358,
  [SMALL_STATE(71)] = 1371,
  [SMALL_STATE(72)] = 1384,
  [SMALL_STATE(73)] = 1397,
  [SMALL_STATE(74)] = 1405,
  [SMALL_STATE(75)] = 1415,
  [SMALL_STATE(76)] = 1423,
  [SMALL_STATE(77)] = 1430,
  [SMALL_STATE(78)] = 1437,
  [SMALL_STATE(79)] = 1444,
  [SMALL_STATE(80)] = 1451,
  [SMALL_STATE(81)] = 1458,
  [SMALL_STATE(82)] = 1465,
  [SMALL_STATE(83)] = 1472,
  [SMALL_STATE(84)] = 1479,
  [SMALL_STATE(85)] = 1486,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_pattern, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_pattern, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_sequence, 2, 0, 0),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__parenthesized_content, 1, 0, 0),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2, 0, 0),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(62),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(78),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(77),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pattern_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_reference, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_reference, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bare_element, 1, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bare_element, 1, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parenthesized_pattern, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parenthesized_pattern, 3, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_named_group, 5, 0, 4),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_named_group, 5, 0, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pattern, 3, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pattern, 3, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_pattern, 4, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_pattern, 4, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(66),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(57),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(80),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_atomic_pattern, 2, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atomic_pattern, 2, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_quantifier, 1, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quantifier, 1, 0, 0),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(50),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat2, 2, 0, 0),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat2, 2, 0, 0), SHIFT_REPEAT(73),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(70),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat1, 2, 0, 0), SHIFT_REPEAT(73),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_conjunction, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_block, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_block, 3, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_node_pattern_repeat2, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_alternation, 2, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pattern_definition, 4, 0, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pattern_definition, 4, 0, 2),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_block, 5, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_block, 5, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 4, 0, 3),
  [176] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_alternation_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metadata_block, 4, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metadata_block, 4, 0, 0),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat2, 2, 0, 0),
  [185] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat2, 2, 0, 0), SHIFT_REPEAT(85),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [190] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [194] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat1, 2, 0, 0),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_metadata_block_repeat1, 2, 0, 0), SHIFT_REPEAT(72),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 1, 0, 0),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [223] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
