#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 9
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_colon = 1,
  sym_bracket_l = 2,
  sym_bracket_r = 3,
  sym_divider = 4,
  anon_sym_sono = 5,
  anon_sym_skribo = 6,
  sym_character = 7,
  sym_text = 8,
  sym_source_file = 9,
  sym_panel = 10,
  sym_line = 11,
  sym_speaker = 12,
  sym_special = 13,
  aux_sym_source_file_repeat1 = 14,
  aux_sym_panel_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_colon] = "colon",
  [sym_bracket_l] = "bracket_l",
  [sym_bracket_r] = "bracket_r",
  [sym_divider] = "divider",
  [anon_sym_sono] = "sono",
  [anon_sym_skribo] = "skribo",
  [sym_character] = "character",
  [sym_text] = "text",
  [sym_source_file] = "source_file",
  [sym_panel] = "panel",
  [sym_line] = "line",
  [sym_speaker] = "speaker",
  [sym_special] = "special",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_panel_repeat1] = "panel_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_colon] = sym_colon,
  [sym_bracket_l] = sym_bracket_l,
  [sym_bracket_r] = sym_bracket_r,
  [sym_divider] = sym_divider,
  [anon_sym_sono] = anon_sym_sono,
  [anon_sym_skribo] = anon_sym_skribo,
  [sym_character] = sym_character,
  [sym_text] = sym_text,
  [sym_source_file] = sym_source_file,
  [sym_panel] = sym_panel,
  [sym_line] = sym_line,
  [sym_speaker] = sym_speaker,
  [sym_special] = sym_special,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_panel_repeat1] = aux_sym_panel_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_colon] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_l] = {
    .visible = true,
    .named = true,
  },
  [sym_bracket_r] = {
    .visible = true,
    .named = true,
  },
  [sym_divider] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sono] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_skribo] = {
    .visible = true,
    .named = false,
  },
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_panel] = {
    .visible = true,
    .named = true,
  },
  [sym_line] = {
    .visible = true,
    .named = true,
  },
  [sym_speaker] = {
    .visible = true,
    .named = true,
  },
  [sym_special] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_panel_repeat1] = {
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
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 2:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '-') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'b') ADVANCE(9);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(4);
      END_STATE();
    case 6:
      if (lookahead == 'k') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(7);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(5);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_colon);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_bracket_l);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_bracket_r);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_divider);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_sono);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_skribo);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_character);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_colon] = ACTIONS(1),
    [sym_bracket_l] = ACTIONS(1),
    [sym_bracket_r] = ACTIONS(1),
    [sym_divider] = ACTIONS(1),
    [anon_sym_sono] = ACTIONS(1),
    [anon_sym_skribo] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_panel] = STATE(7),
    [sym_line] = STATE(2),
    [sym_speaker] = STATE(13),
    [aux_sym_panel_repeat1] = STATE(2),
    [sym_bracket_l] = ACTIONS(3),
    [sym_character] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(3), 1,
      sym_bracket_l,
    ACTIONS(5), 1,
      sym_character,
    STATE(13), 1,
      sym_speaker,
    ACTIONS(7), 2,
      ts_builtin_sym_end,
      sym_divider,
    STATE(3), 2,
      sym_line,
      aux_sym_panel_repeat1,
  [18] = 5,
    ACTIONS(11), 1,
      sym_bracket_l,
    ACTIONS(14), 1,
      sym_character,
    STATE(13), 1,
      sym_speaker,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_divider,
    STATE(3), 2,
      sym_line,
      aux_sym_panel_repeat1,
  [36] = 5,
    ACTIONS(3), 1,
      sym_bracket_l,
    ACTIONS(5), 1,
      sym_character,
    STATE(10), 1,
      sym_panel,
    STATE(13), 1,
      sym_speaker,
    STATE(2), 2,
      sym_line,
      aux_sym_panel_repeat1,
  [53] = 1,
    ACTIONS(17), 4,
      ts_builtin_sym_end,
      sym_bracket_l,
      sym_divider,
      sym_character,
  [60] = 2,
    STATE(15), 1,
      sym_special,
    ACTIONS(19), 2,
      anon_sym_sono,
      anon_sym_skribo,
  [68] = 3,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_divider,
    STATE(8), 1,
      aux_sym_source_file_repeat1,
  [78] = 3,
    ACTIONS(23), 1,
      sym_divider,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
  [88] = 3,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      sym_divider,
    STATE(9), 1,
      aux_sym_source_file_repeat1,
  [98] = 1,
    ACTIONS(27), 2,
      ts_builtin_sym_end,
      sym_divider,
  [103] = 1,
    ACTIONS(32), 1,
      sym_colon,
  [107] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [111] = 1,
    ACTIONS(36), 1,
      sym_text,
  [115] = 1,
    ACTIONS(38), 1,
      sym_bracket_r,
  [119] = 1,
    ACTIONS(40), 1,
      sym_bracket_r,
  [123] = 1,
    ACTIONS(42), 1,
      sym_text,
  [127] = 1,
    ACTIONS(44), 1,
      sym_text,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 53,
  [SMALL_STATE(6)] = 60,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 78,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 98,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 107,
  [SMALL_STATE(13)] = 111,
  [SMALL_STATE(14)] = 115,
  [SMALL_STATE(15)] = 119,
  [SMALL_STATE(16)] = 123,
  [SMALL_STATE(17)] = 127,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_panel, 1),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_panel_repeat1, 2),
  [11] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_panel_repeat1, 2), SHIFT_REPEAT(6),
  [14] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_panel_repeat1, 2), SHIFT_REPEAT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line, 2),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [34] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_special, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_transcript(void) {
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
