#ifndef TREE_SITTER_PINESCRIPT_H_
#define TREE_SITTER_PINESCRIPT_H_

typedef struct TSLanguage TSLanguage;
typedef struct TSLexer TSLexer;  // Adicionada definição do tipo TSLexer

#ifdef __cplusplus
extern "C" {
#endif

// Função principal que retorna a estrutura da linguagem
const TSLanguage *tree_sitter_pinescript(void);

// Funções do scanner externo
void *tree_sitter_pinescript_external_scanner_create(void);
void tree_sitter_pinescript_external_scanner_destroy(void *);
bool tree_sitter_pinescript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_pinescript_external_scanner_serialize(void *, char *);
void tree_sitter_pinescript_external_scanner_deserialize(void *, const char *, unsigned);

// Definições de constantes
#define TREE_SITTER_PINESCRIPT_SYMBOL_COUNT 86
#define TREE_SITTER_PINESCRIPT_FIELD_COUNT 6
#define TREE_SITTER_PINESCRIPT_MAX_ALIAS_SEQUENCE_LENGTH 6
#define TREE_SITTER_PINESCRIPT_SERIALIZATION_BUFFER_SIZE 1024
#define TREE_SITTER_PINESCRIPT_RETURN_PRECEDENCE -1

// Enumeração dos tipos de campos
enum {
  field_name,
  field_value,
  field_left,
  field_operator,
  field_right,
  field_argument,
};

// Enumeração dos tipos de nós
enum {
  sym_source_file,
  sym_identifier,
  sym_number,
  sym_string,
  sym_boolean,
  sym_comment,
  sym_version_declaration,
  sym_indicator_declaration,
  sym_function_definition,
  sym_variable_declaration,
  sym_parameter_list,
  sym_parameter,
  sym_statement,
  sym_if_statement,
  sym_for_statement,
  sym_assignment,
  sym_return_statement,
  sym_expression,
  sym_binary_expression,
  sym_unary_expression,
  sym_parenthesized_expression,
  sym_block,
  sym_function_call,
  sym_array,
  sym_return_expression,
  // Símbolos anônimos
  anon_sym_ATversion,
  anon_sym_indicator,
  anon_sym_strategy,
  anon_sym_study,
  anon_sym_method,
  anon_sym_LPAREN,
  anon_sym_RPAREN,
  anon_sym_EQ_GT,
  anon_sym_var,
  anon_sym_const,
  anon_sym_EQ,
  anon_sym_COMMA,
  anon_sym_if,
  anon_sym_else,
  anon_sym_for,
  anon_sym_to,
  anon_sym_by,
  anon_sym_COLON_EQ,
  anon_sym_return,
  anon_sym_PLUS,
  anon_sym_DASH,
  anon_sym_STAR,
  anon_sym_SLASH,
  anon_sym_GT,
  anon_sym_LT,
  anon_sym_GT_EQ,
  anon_sym_LT_EQ,
  anon_sym_EQ_EQ,
  anon_sym_BANG_EQ,
  anon_sym_and,
  anon_sym_or,
  anon_sym_not,
  anon_sym_LBRACE,
  anon_sym_RBRACE,
  anon_sym_LBRACK,
  anon_sym_RBRACK,
  anon_sym_true,
  anon_sym_false,
  anon_sym_SLASH_SLASH,
  anon_sym_SLASH_STAR,
  // Símbolos auxiliares
  aux_sym_source_file_repeat1,
  aux_sym_parameter_list_repeat1,
  aux_sym_array_repeat1,
  aux_sym_comment_token1,
  aux_sym_comment_token2,
};

// Estados do scanner externo
enum {
  scan_state_inline_comment,
  scan_state_block_comment,
};

#ifdef __cplusplus
}
#endif

#endif // TREE_SITTER_PINESCRIPT_H_
