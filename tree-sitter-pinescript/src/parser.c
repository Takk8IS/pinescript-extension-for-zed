#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 85
#define ALIAS_COUNT 0
#define TOKEN_COUNT 45
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 6
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 7

enum {
  sym_identifier = 1,
  anon_sym_ATversion = 2,
  anon_sym_indicator = 3,
  anon_sym_strategy = 4,
  anon_sym_study = 5,
  anon_sym_method = 6,
  anon_sym_LPAREN = 7,
  anon_sym_RPAREN = 8,
  anon_sym_EQ_GT = 9,
  anon_sym_var = 10,
  anon_sym_const = 11,
  anon_sym_EQ = 12,
  anon_sym_COMMA = 13,
  anon_sym_if = 14,
  anon_sym_else = 15,
  anon_sym_for = 16,
  anon_sym_to = 17,
  anon_sym_by = 18,
  anon_sym_COLON_EQ = 19,
  anon_sym_return = 20,
  anon_sym_PLUS = 21,
  anon_sym_DASH = 22,
  anon_sym_STAR = 23,
  anon_sym_SLASH = 24,
  anon_sym_GT = 25,
  anon_sym_LT = 26,
  anon_sym_GT_EQ = 27,
  anon_sym_LT_EQ = 28,
  anon_sym_EQ_EQ = 29,
  anon_sym_BANG_EQ = 30,
  anon_sym_and = 31,
  anon_sym_or = 32,
  anon_sym_not = 33,
  anon_sym_LBRACE = 34,
  anon_sym_RBRACE = 35,
  anon_sym_LBRACK = 36,
  anon_sym_RBRACK = 37,
  sym_number = 38,
  sym_string = 39,
  anon_sym_true = 40,
  anon_sym_false = 41,
  anon_sym_SLASH_SLASH = 42,
  aux_sym_comment_token1 = 43,
  anon_sym_SLASH_STAR = 44,
  aux_sym_comment_token2 = 45,
  sym_source_file = 46,
  sym__definition = 47,
  sym_version_declaration = 48,
  sym_indicator_declaration = 49,
  sym_function_definition = 50,
  sym_variable_declaration = 51,
  sym_parameter_list = 52,
  sym_parameter = 53,
  sym_statement = 54,
  sym_if_statement = 55,
  sym_for_statement = 56,
  sym_assignment = 57,
  sym_return_statement = 58,
  sym_expression = 59,
  sym_binary_expression = 60,
  sym_unary_expression = 61,
  sym_parenthesized_expression = 62,
  sym_block = 63,
  sym_function_call = 64,
  sym_array = 65,
  sym_boolean = 66,
  sym_comment = 67,
  aux_sym_source_file_repeat1 = 68,
  aux_sym_parameter_list_repeat1 = 69,
  aux_sym_array_repeat1 = 70,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_ATversion] = "@version",
  [anon_sym_indicator] = "indicator",
  [anon_sym_strategy] = "strategy",
  [anon_sym_study] = "study",
  [anon_sym_method] = "method",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_var] = "var",
  [anon_sym_const] = "const",
  [anon_sym_EQ] = "=",
  [anon_sym_COMMA] = ",",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_for] = "for",
  [anon_sym_to] = "to",
  [anon_sym_by] = "by",
  [anon_sym_COLON_EQ] = ":=",
  [anon_sym_return] = "return",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_and] = "and",
  [anon_sym_or] = "or",
  [anon_sym_not] = "not",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_number] = "number",
  [sym_string] = "string",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_SLASH_SLASH] = "//",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_comment_token2] = "comment_token2",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_version_declaration] = "version_declaration",
  [sym_indicator_declaration] = "indicator_declaration",
  [sym_function_definition] = "function_definition",
  [sym_variable_declaration] = "variable_declaration",
  [sym_parameter_list] = "parameter_list",
  [sym_parameter] = "parameter",
  [sym_statement] = "statement",
  [sym_if_statement] = "if_statement",
  [sym_for_statement] = "for_statement",
  [sym_assignment] = "assignment",
  [sym_return_statement] = "return_statement",
  [sym_expression] = "expression",
  [sym_binary_expression] = "binary_expression",
  [sym_unary_expression] = "unary_expression",
  [sym_parenthesized_expression] = "parenthesized_expression",
  [sym_block] = "block",
  [sym_function_call] = "function_call",
  [sym_array] = "array",
  [sym_boolean] = "boolean",
  [sym_comment] = "comment",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_parameter_list_repeat1] = "parameter_list_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_ATversion] = anon_sym_ATversion,
  [anon_sym_indicator] = anon_sym_indicator,
  [anon_sym_strategy] = anon_sym_strategy,
  [anon_sym_study] = anon_sym_study,
  [anon_sym_method] = anon_sym_method,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_var] = anon_sym_var,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_to] = anon_sym_to,
  [anon_sym_by] = anon_sym_by,
  [anon_sym_COLON_EQ] = anon_sym_COLON_EQ,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_number] = sym_number,
  [sym_string] = sym_string,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_SLASH_SLASH] = anon_sym_SLASH_SLASH,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_comment_token2] = aux_sym_comment_token2,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_version_declaration] = sym_version_declaration,
  [sym_indicator_declaration] = sym_indicator_declaration,
  [sym_function_definition] = sym_function_definition,
  [sym_variable_declaration] = sym_variable_declaration,
  [sym_parameter_list] = sym_parameter_list,
  [sym_parameter] = sym_parameter,
  [sym_statement] = sym_statement,
  [sym_if_statement] = sym_if_statement,
  [sym_for_statement] = sym_for_statement,
  [sym_assignment] = sym_assignment,
  [sym_return_statement] = sym_return_statement,
  [sym_expression] = sym_expression,
  [sym_binary_expression] = sym_binary_expression,
  [sym_unary_expression] = sym_unary_expression,
  [sym_parenthesized_expression] = sym_parenthesized_expression,
  [sym_block] = sym_block,
  [sym_function_call] = sym_function_call,
  [sym_array] = sym_array,
  [sym_boolean] = sym_boolean,
  [sym_comment] = sym_comment,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_parameter_list_repeat1] = aux_sym_parameter_list_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_ATversion] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_indicator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_strategy] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_study] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_method] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_var] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_to] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_by] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_version_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_indicator_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_variable_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter_list] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_parenthesized_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameter_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {sym_identifier, 0},
  [2] = {sym_string, 0},
  [3] = {sym_number, 0},
  [4] = {sym_boolean, 0},
  [5] = {sym_comment, 0},
  [6] = {sym_statement, 0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
  sym_identifier,
  sym_string,
  sym_number,
  sym_boolean,
  sym_comment,
  sym_statement,
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
  [18] = 18,
  [19] = 19,
  [20] = 20,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(0);
      if (lookahead == '!') ADVANCE(1);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(3);
      if (lookahead == '%') ADVANCE(4);
      if (lookahead == '&') ADVANCE(5);
      if (lookahead == '(') ADVANCE(6);
      if (lookahead == ')') ADVANCE(7);
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == ',') ADVANCE(10);
      if (lookahead == '-') ADVANCE(11);
      if (lookahead == '.') ADVANCE(12);
      if (lookahead == '/') ADVANCE(13);
      if (lookahead == ':') ADVANCE(14);
      if (lookahead == ';') ADVANCE(15);
      if (lookahead == '<') ADVANCE(16);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(18);
      if (lookahead == '@') ADVANCE(19);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(21);
      if (lookahead == '{') ADVANCE(22);
      if (lookahead == '}') ADVANCE(23);
      if (lookahead == '_' || isalpha(lookahead)) ADVANCE(24);
      if (isdigit(lookahead)) ADVANCE(25);
      if (isspace(lookahead)) SKIP(0);
      END_STATE();
    case 1:
      if (lookahead == '=') ADVANCE(29);
      END_STATE();
    case 2:
      if (lookahead != '"' && lookahead != '\\') ADVANCE(26);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(27);
      END_STATE();
    case 3:
      END_STATE();
    case 4:
      END_STATE();
    case 5:
      if (lookahead == '&') ADVANCE(31);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 12:
      END_STATE();
    case 13:
      if (lookahead == '/') ADVANCE(42);
      if (lookahead == '*') ADVANCE(44);
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(19);
      END_STATE();
    case 15:
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(28);
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(29);
      if (lookahead == '>') ADVANCE(9);
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      if (lookahead == '=') ADVANCE(27);
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      if (isalpha(lookahead)) ADVANCE(43);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 24:
      if (lookahead == '_' || isalnum(lookahead)) ADVANCE(24);
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 25:
      if (lookahead == '.' || isdigit(lookahead)) ADVANCE(25);
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 26:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '\\') ADVANCE(27);
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    case 27:
      if (lookahead != 0) ADVANCE(26);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1}
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_ATversion] = ACTIONS(1),
    [anon_sym_indicator] = ACTIONS(1),
    [anon_sym_strategy] = ACTIONS(1),
    [anon_sym_study] = ACTIONS(1),
    [anon_sym_method] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_var] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_to] = ACTIONS(1),
    [anon_sym_by] = ACTIONS(1),
    [anon_sym_COLON_EQ] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_SLASH_SLASH] = ACTIONS(1),
    [anon_sym_SLASH_STAR] = ACTIONS(1)
  },
  [1] = {
    [sym_source_file] = STATE(20),
    [sym__definition] = STATE(2),
    [sym_version_declaration] = STATE(2),
    [sym_indicator_declaration] = STATE(2),
    [sym_function_definition] = STATE(2),
    [sym_variable_declaration] = STATE(2),
    [sym_statement] = STATE(2),
    [sym_comment] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_ATversion] = ACTIONS(5),
    [anon_sym_indicator] = ACTIONS(7),
    [anon_sym_strategy] = ACTIONS(7),
    [anon_sym_study] = ACTIONS(7),
    [anon_sym_method] = ACTIONS(9),
    [anon_sym_var] = ACTIONS(11),
    [anon_sym_const] = ACTIONS(11),
    [anon_sym_if] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_return] = ACTIONS(17),
    [anon_sym_SLASH_SLASH] = ACTIONS(19),
    [anon_sym_SLASH_STAR] = ACTIONS(21)
  }
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = true}},
  [2] = {.entry = {.count = 1, .reusable = false}},
  [3] = {.entry = {.count = 1, .reusable = true}},
  [4] = {.entry = {.count = 1, .reusable = false}},
  [5] = {.entry = {.count = 1, .reusable = true}},
  [6] = {.entry = {.count = 1, .reusable = false}},
  [7] = {.entry = {.count = 1, .reusable = true}},
  [8] = {.entry = {.count = 1, .reusable = false}},
  [9] = {.entry = {.count = 1, .reusable = true}},
  [10] = {.entry = {.count = 1, .reusable = false}},
  [11] = {.entry = {.count = 1, .reusable = true}},
  [12] = {.entry = {.count = 1, .reusable = false}},
  [13] = {.entry = {.count = 1, .reusable = true}},
  [14] = {.entry = {.count = 1, .reusable = false}},
  [15] = {.entry = {.count = 1, .reusable = true}},
  [16] = {.entry = {.count = 1, .reusable = false}},
  [17] = {.entry = {.count = 1, .reusable = true}},
  [18] = {.entry = {.count = 1, .reusable = false}},
  [19] = {.entry = {.count = 1, .reusable = true}},
  [20] = {.entry = {.count = 1, .reusable = false}},
  [21] = {.entry = {.count = 1, .reusable = true}}
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_pinescript_external_scanner_create(void) { return NULL; }
void tree_sitter_pinescript_external_scanner_destroy(void *payload) {}

unsigned tree_sitter_pinescript_external_scanner_serialize(void *payload, char *buffer) { return 0; }

void tree_sitter_pinescript_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

bool tree_sitter_pinescript_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) { return false; }

#ifdef __cplusplus
}
#endif

// Definição da estrutura do parser
TSLanguage *tree_sitter_pinescript(void) {
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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_pinescript_external_scanner_create,
      tree_sitter_pinescript_external_scanner_destroy,
      tree_sitter_pinescript_external_scanner_scan,
      tree_sitter_pinescript_external_scanner_serialize,
      tree_sitter_pinescript_external_scanner_deserialize,
    },
    .field_names = {
      [0] = "name",
      [1] = "value",
      [2] = "left",
      [3] = "operator",
      [4] = "right",
      [5] = "argument",
    },
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = ts_alias_sequences,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_mode_for_state = ts_lex_mode_for_state,
  };
  return &language;
}
