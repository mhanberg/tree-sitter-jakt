#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 368
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 107
#define ALIAS_COUNT 1
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 21

enum {
  sym_identifier = 1,
  anon_sym_LF = 2,
  anon_sym_SEMI = 3,
  anon_sym_while = 4,
  anon_sym_PLUS_PLUS = 5,
  anon_sym_DASH_DASH = 6,
  anon_sym_continue = 7,
  anon_sym_for = 8,
  anon_sym_in = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  anon_sym_u8 = 14,
  anon_sym_i8 = 15,
  anon_sym_u16 = 16,
  anon_sym_i16 = 17,
  anon_sym_u32 = 18,
  anon_sym_i32 = 19,
  anon_sym_u64 = 20,
  anon_sym_i64 = 21,
  anon_sym_u128 = 22,
  anon_sym_i128 = 23,
  anon_sym_isize = 24,
  anon_sym_usize = 25,
  anon_sym_f32 = 26,
  anon_sym_f64 = 27,
  anon_sym_c_int = 28,
  anon_sym_bool = 29,
  anon_sym_String = 30,
  anon_sym_c_char = 31,
  anon_sym_LBRACK = 32,
  anon_sym_RBRACK = 33,
  anon_sym_let = 34,
  anon_sym_COLON = 35,
  anon_sym_EQ = 36,
  sym_mutable_specifier = 37,
  anon_sym_DASH = 38,
  anon_sym_return = 39,
  anon_sym_AMP = 40,
  anon_sym_PIPE = 41,
  anon_sym_CARET = 42,
  anon_sym_EQ_EQ = 43,
  anon_sym_BANG_EQ = 44,
  anon_sym_LT = 45,
  anon_sym_LT_EQ = 46,
  anon_sym_GT = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_LT_LT = 49,
  anon_sym_GT_GT = 50,
  anon_sym_PLUS = 51,
  anon_sym_STAR = 52,
  anon_sym_SLASH = 53,
  anon_sym_PERCENT = 54,
  sym_integer_literal = 55,
  aux_sym_string_literal_token1 = 56,
  anon_sym_DQUOTE = 57,
  sym_char_literal = 58,
  sym_escape_sequence = 59,
  anon_sym_function = 60,
  anon_sym_DASH_GT = 61,
  anon_sym_LBRACE = 62,
  anon_sym_RBRACE = 63,
  anon_sym_if = 64,
  anon_sym_else = 65,
  anon_sym_true = 66,
  anon_sym_false = 67,
  sym_line_comment = 68,
  sym__string_content = 69,
  sym_float_literal = 70,
  sym_source_file = 71,
  sym_declaration = 72,
  sym__expression = 73,
  sym_while_statement = 74,
  sym_increment_statement = 75,
  sym_decrement_statement = 76,
  sym_continue_statement = 77,
  sym_for_expression = 78,
  sym_call_expression = 79,
  sym_range_expression = 80,
  sym_arguments = 81,
  sym__top_level_declaration = 82,
  sym__type = 83,
  sym_array_type = 84,
  sym_let_declaration = 85,
  sym_unary_expression = 86,
  sym_return_statement = 87,
  sym_binary_expression = 88,
  sym__literal = 89,
  sym__pattern = 90,
  sym__literal_pattern = 91,
  sym_negative_literal = 92,
  sym_string_literal = 93,
  sym_function_declaration = 94,
  sym_parameters = 95,
  sym_parameter = 96,
  sym_block = 97,
  sym_if_statement = 98,
  sym_else_clause = 99,
  sym_boolean_literal = 100,
  aux_sym_source_file_repeat1 = 101,
  aux_sym_arguments_repeat1 = 102,
  aux_sym_arguments_repeat2 = 103,
  aux_sym_string_literal_repeat1 = 104,
  aux_sym_parameters_repeat1 = 105,
  aux_sym_block_repeat1 = 106,
  alias_sym_type_identifier = 107,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_LF] = "\n",
  [anon_sym_SEMI] = ";",
  [anon_sym_while] = "while",
  [anon_sym_PLUS_PLUS] = "++",
  [anon_sym_DASH_DASH] = "--",
  [anon_sym_continue] = "continue",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_u8] = "primitive_type",
  [anon_sym_i8] = "primitive_type",
  [anon_sym_u16] = "primitive_type",
  [anon_sym_i16] = "primitive_type",
  [anon_sym_u32] = "primitive_type",
  [anon_sym_i32] = "primitive_type",
  [anon_sym_u64] = "primitive_type",
  [anon_sym_i64] = "primitive_type",
  [anon_sym_u128] = "primitive_type",
  [anon_sym_i128] = "primitive_type",
  [anon_sym_isize] = "primitive_type",
  [anon_sym_usize] = "primitive_type",
  [anon_sym_f32] = "primitive_type",
  [anon_sym_f64] = "primitive_type",
  [anon_sym_c_int] = "primitive_type",
  [anon_sym_bool] = "primitive_type",
  [anon_sym_String] = "primitive_type",
  [anon_sym_c_char] = "primitive_type",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_let] = "let",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ] = "=",
  [sym_mutable_specifier] = "mutable_specifier",
  [anon_sym_DASH] = "-",
  [anon_sym_return] = "return",
  [anon_sym_AMP] = "&",
  [anon_sym_PIPE] = "|",
  [anon_sym_CARET] = "^",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT] = "<",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT] = ">",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_LT_LT] = "<<",
  [anon_sym_GT_GT] = ">>",
  [anon_sym_PLUS] = "+",
  [anon_sym_STAR] = "*",
  [anon_sym_SLASH] = "/",
  [anon_sym_PERCENT] = "%",
  [sym_integer_literal] = "integer_literal",
  [aux_sym_string_literal_token1] = "\"",
  [anon_sym_DQUOTE] = "\"",
  [sym_char_literal] = "char_literal",
  [sym_escape_sequence] = "escape_sequence",
  [anon_sym_function] = "function",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_if] = "if",
  [anon_sym_else] = "else",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_line_comment] = "line_comment",
  [sym__string_content] = "_string_content",
  [sym_float_literal] = "float_literal",
  [sym_source_file] = "source_file",
  [sym_declaration] = "declaration",
  [sym__expression] = "_expression",
  [sym_while_statement] = "while_statement",
  [sym_increment_statement] = "increment_statement",
  [sym_decrement_statement] = "decrement_statement",
  [sym_continue_statement] = "continue_statement",
  [sym_for_expression] = "for_expression",
  [sym_call_expression] = "call_expression",
  [sym_range_expression] = "range_expression",
  [sym_arguments] = "arguments",
  [sym__top_level_declaration] = "_top_level_declaration",
  [sym__type] = "_type",
  [sym_array_type] = "array_type",
  [sym_let_declaration] = "let_declaration",
  [sym_unary_expression] = "unary_expression",
  [sym_return_statement] = "return_statement",
  [sym_binary_expression] = "binary_expression",
  [sym__literal] = "_literal",
  [sym__pattern] = "_pattern",
  [sym__literal_pattern] = "_literal_pattern",
  [sym_negative_literal] = "negative_literal",
  [sym_string_literal] = "string_literal",
  [sym_function_declaration] = "function_declaration",
  [sym_parameters] = "parameters",
  [sym_parameter] = "parameter",
  [sym_block] = "block",
  [sym_if_statement] = "if_statement",
  [sym_else_clause] = "else_clause",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_arguments_repeat1] = "arguments_repeat1",
  [aux_sym_arguments_repeat2] = "arguments_repeat2",
  [aux_sym_string_literal_repeat1] = "string_literal_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [alias_sym_type_identifier] = "type_identifier",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_while] = anon_sym_while,
  [anon_sym_PLUS_PLUS] = anon_sym_PLUS_PLUS,
  [anon_sym_DASH_DASH] = anon_sym_DASH_DASH,
  [anon_sym_continue] = anon_sym_continue,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_u8] = anon_sym_u8,
  [anon_sym_i8] = anon_sym_u8,
  [anon_sym_u16] = anon_sym_u8,
  [anon_sym_i16] = anon_sym_u8,
  [anon_sym_u32] = anon_sym_u8,
  [anon_sym_i32] = anon_sym_u8,
  [anon_sym_u64] = anon_sym_u8,
  [anon_sym_i64] = anon_sym_u8,
  [anon_sym_u128] = anon_sym_u8,
  [anon_sym_i128] = anon_sym_u8,
  [anon_sym_isize] = anon_sym_u8,
  [anon_sym_usize] = anon_sym_u8,
  [anon_sym_f32] = anon_sym_u8,
  [anon_sym_f64] = anon_sym_u8,
  [anon_sym_c_int] = anon_sym_u8,
  [anon_sym_bool] = anon_sym_u8,
  [anon_sym_String] = anon_sym_u8,
  [anon_sym_c_char] = anon_sym_u8,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_let] = anon_sym_let,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_mutable_specifier] = sym_mutable_specifier,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_LT_LT] = anon_sym_LT_LT,
  [anon_sym_GT_GT] = anon_sym_GT_GT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [sym_integer_literal] = sym_integer_literal,
  [aux_sym_string_literal_token1] = anon_sym_DQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_char_literal] = sym_char_literal,
  [sym_escape_sequence] = sym_escape_sequence,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_else] = anon_sym_else,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_line_comment] = sym_line_comment,
  [sym__string_content] = sym__string_content,
  [sym_float_literal] = sym_float_literal,
  [sym_source_file] = sym_source_file,
  [sym_declaration] = sym_declaration,
  [sym__expression] = sym__expression,
  [sym_while_statement] = sym_while_statement,
  [sym_increment_statement] = sym_increment_statement,
  [sym_decrement_statement] = sym_decrement_statement,
  [sym_continue_statement] = sym_continue_statement,
  [sym_for_expression] = sym_for_expression,
  [sym_call_expression] = sym_call_expression,
  [sym_range_expression] = sym_range_expression,
  [sym_arguments] = sym_arguments,
  [sym__top_level_declaration] = sym__top_level_declaration,
  [sym__type] = sym__type,
  [sym_array_type] = sym_array_type,
  [sym_let_declaration] = sym_let_declaration,
  [sym_unary_expression] = sym_unary_expression,
  [sym_return_statement] = sym_return_statement,
  [sym_binary_expression] = sym_binary_expression,
  [sym__literal] = sym__literal,
  [sym__pattern] = sym__pattern,
  [sym__literal_pattern] = sym__literal_pattern,
  [sym_negative_literal] = sym_negative_literal,
  [sym_string_literal] = sym_string_literal,
  [sym_function_declaration] = sym_function_declaration,
  [sym_parameters] = sym_parameters,
  [sym_parameter] = sym_parameter,
  [sym_block] = sym_block,
  [sym_if_statement] = sym_if_statement,
  [sym_else_clause] = sym_else_clause,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_arguments_repeat1] = aux_sym_arguments_repeat1,
  [aux_sym_arguments_repeat2] = aux_sym_arguments_repeat2,
  [aux_sym_string_literal_repeat1] = aux_sym_string_literal_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [alias_sym_type_identifier] = alias_sym_type_identifier,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_while] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_u8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i8] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i16] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_u128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_i128] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_isize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_usize] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f32] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_f64] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_int] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_bool] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_c_char] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_let] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_mutable_specifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_return] = {
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
  [anon_sym_CARET] = {
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_GT] = {
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
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_string_literal_token1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_char_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
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
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_else] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__string_content] = {
    .visible = false,
    .named = true,
  },
  [sym_float_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_while_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_increment_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_decrement_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_continue_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_for_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_call_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_range_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_arguments] = {
    .visible = true,
    .named = true,
  },
  [sym__top_level_declaration] = {
    .visible = false,
    .named = true,
  },
  [sym__type] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_array_type] = {
    .visible = true,
    .named = true,
  },
  [sym_let_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_return_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym__literal_pattern] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_negative_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_function_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_parameter] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_if_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_else_clause] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_arguments_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_literal_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alternative = 1,
  field_arguments = 2,
  field_body = 3,
  field_condition = 4,
  field_consequence = 5,
  field_element = 6,
  field_function = 7,
  field_left = 8,
  field_name = 9,
  field_operator = 10,
  field_parameters = 11,
  field_pattern = 12,
  field_return_type = 13,
  field_right = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alternative] = "alternative",
  [field_arguments] = "arguments",
  [field_body] = "body",
  [field_condition] = "condition",
  [field_consequence] = "consequence",
  [field_element] = "element",
  [field_function] = "function",
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_parameters] = "parameters",
  [field_pattern] = "pattern",
  [field_return_type] = "return_type",
  [field_right] = "right",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 2},
  [4] = {.index = 3, .length = 2},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 2},
  [7] = {.index = 8, .length = 3},
  [9] = {.index = 11, .length = 2},
  [10] = {.index = 13, .length = 2},
  [11] = {.index = 15, .length = 3},
  [12] = {.index = 18, .length = 3},
  [13] = {.index = 21, .length = 3},
  [14] = {.index = 24, .length = 2},
  [15] = {.index = 26, .length = 2},
  [16] = {.index = 28, .length = 2},
  [17] = {.index = 30, .length = 1},
  [18] = {.index = 31, .length = 3},
  [19] = {.index = 34, .length = 4},
  [20] = {.index = 38, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_pattern, 1},
  [1] =
    {field_arguments, 1},
    {field_function, 0},
  [3] =
    {field_body, 2},
    {field_condition, 1},
  [5] =
    {field_pattern, 2},
  [6] =
    {field_condition, 1},
    {field_consequence, 2},
  [8] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [11] =
    {field_pattern, 1},
    {field_type, 3},
  [13] =
    {field_pattern, 1},
    {field_value, 3},
  [15] =
    {field_body, 3},
    {field_name, 1},
    {field_parameters, 2},
  [18] =
    {field_alternative, 3},
    {field_condition, 1},
    {field_consequence, 2},
  [21] =
    {field_body, 4},
    {field_pattern, 1},
    {field_value, 3},
  [24] =
    {field_pattern, 2},
    {field_type, 4},
  [26] =
    {field_pattern, 2},
    {field_value, 4},
  [28] =
    {field_pattern, 0},
    {field_type, 2},
  [30] =
    {field_element, 1},
  [31] =
    {field_pattern, 1},
    {field_type, 3},
    {field_value, 5},
  [34] =
    {field_body, 5},
    {field_name, 1},
    {field_parameters, 2},
    {field_return_type, 4},
  [38] =
    {field_pattern, 2},
    {field_type, 4},
    {field_value, 6},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = sym_identifier,
  },
  [8] = {
    [0] = alias_sym_type_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static inline bool sym_identifier_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 910
            ? (c < 736
              ? (c < 186
                ? (c < 'a'
                  ? (c < '_'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= '_')
                  : (c <= 'z' || (c < 181
                    ? c == 170
                    : c <= 181)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c >= 710 && c <= 721)))))
              : (c <= 740 || (c < 891
                ? (c < 880
                  ? (c < 750
                    ? c == 748
                    : c <= 750)
                  : (c <= 884 || (c >= 886 && c <= 887)))
                : (c <= 893 || (c < 904
                  ? (c < 902
                    ? c == 895
                    : c <= 902)
                  : (c <= 906 || c == 908))))))
            : (c <= 929 || (c < 1649
              ? (c < 1376
                ? (c < 1162
                  ? (c < 1015
                    ? (c >= 931 && c <= 1013)
                    : c <= 1153)
                  : (c <= 1327 || (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_identifier_character_set_3(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_1(lookahead)) ADVANCE(105);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(97);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '\\') ADVANCE(31);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(52);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(65);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(23);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '+') ADVANCE(12);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '=') ADVANCE(63);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == '\'') ADVANCE(98);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(32);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 13:
      if (lookahead == '-') ADVANCE(24);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      if (lookahead == '.') ADVANCE(56);
      END_STATE();
    case 15:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(85);
      if (lookahead == 'n') ADVANCE(30);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 16:
      if (lookahead == '1') ADVANCE(18);
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      if (lookahead == '8') ADVANCE(85);
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == '2') ADVANCE(85);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(21);
      if (lookahead == '6') ADVANCE(85);
      END_STATE();
    case 19:
      if (lookahead == '3') ADVANCE(17);
      if (lookahead == '6') ADVANCE(20);
      END_STATE();
    case 20:
      if (lookahead == '4') ADVANCE(85);
      END_STATE();
    case 21:
      if (lookahead == '8') ADVANCE(85);
      END_STATE();
    case 22:
      if (lookahead == '=') ADVANCE(72);
      END_STATE();
    case 23:
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 24:
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 25:
      if (lookahead == '_') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(85);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(33);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(85);
      END_STATE();
    case 31:
      if (lookahead == 'u') ADVANCE(34);
      if (lookahead == 'x') ADVANCE(45);
      if (lookahead != 0) ADVANCE(99);
      END_STATE();
    case 32:
      if (lookahead == 'u') ADVANCE(35);
      if (lookahead == 'x') ADVANCE(46);
      if (lookahead != 0) ADVANCE(10);
      END_STATE();
    case 33:
      if (lookahead == 'z') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == '{') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == '{') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == '}') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 37:
      if (lookahead == '}') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 38:
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(92);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(10);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(37);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(36);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(42);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(40);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(46);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(94);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(59);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == ',') ADVANCE(58);
      if (lookahead == '-') ADVANCE(67);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(83);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == ';') ADVANCE(53);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '[') ADVANCE(60);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(49)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '!') ADVANCE(22);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '%') ADVANCE(84);
      if (lookahead == '&') ADVANCE(68);
      if (lookahead == '\'') ADVANCE(11);
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == '*') ADVANCE(81);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '-') ADVANCE(66);
      if (lookahead == '.') ADVANCE(14);
      if (lookahead == '/') ADVANCE(82);
      if (lookahead == '0') ADVANCE(90);
      if (lookahead == ':') ADVANCE(62);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '=') ADVANCE(64);
      if (lookahead == '>') ADVANCE(75);
      if (lookahead == '^') ADVANCE(70);
      if (lookahead == 'b') ADVANCE(104);
      if (lookahead == '{') ADVANCE(101);
      if (lookahead == '|') ADVANCE(69);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(50)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      if (sym_identifier_character_set_2(lookahead)) ADVANCE(105);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\n') ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_PLUS_PLUS);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DASH_DASH);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(71);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(55);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '-') ADVANCE(55);
      if (lookahead == '>') ADVANCE(100);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '=') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(76);
      if (lookahead == '>') ADVANCE(78);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_GT_GT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == '+') ADVANCE(54);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_SLASH);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '/') ADVANCE(103);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_integer_literal);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '2') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '3') ADVANCE(86);
      if (lookahead == '6') ADVANCE(88);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '4') ADVANCE(94);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == '_') ADVANCE(95);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'b') ADVANCE(38);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == '0' ||
          lookahead == '1' ||
          lookahead == '_') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '7') ||
          lookahead == '_') ADVANCE(92);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(16);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_integer_literal);
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == 'i') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(94);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_string_literal_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_char_literal);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"') ADVANCE(96);
      if (lookahead == '\'') ADVANCE(11);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (sym_identifier_character_set_3(lookahead)) ADVANCE(105);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'S') ADVANCE(1);
      if (lookahead == 'b') ADVANCE(2);
      if (lookahead == 'c') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(4);
      if (lookahead == 'f') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(6);
      if (lookahead == 'l') ADVANCE(7);
      if (lookahead == 'm') ADVANCE(8);
      if (lookahead == 'r') ADVANCE(9);
      if (lookahead == 't') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(11);
      if (lookahead == 'w') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 't') ADVANCE(13);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 4:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 5:
      if (lookahead == '3') ADVANCE(18);
      if (lookahead == '6') ADVANCE(19);
      if (lookahead == 'a') ADVANCE(20);
      if (lookahead == 'o') ADVANCE(21);
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(23);
      if (lookahead == '3') ADVANCE(24);
      if (lookahead == '6') ADVANCE(25);
      if (lookahead == '8') ADVANCE(26);
      if (lookahead == 'f') ADVANCE(27);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 7:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 9:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 10:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == '1') ADVANCE(34);
      if (lookahead == '3') ADVANCE(35);
      if (lookahead == '6') ADVANCE(36);
      if (lookahead == '8') ADVANCE(37);
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 12:
      if (lookahead == 'h') ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 14:
      if (lookahead == 'o') ADVANCE(41);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(42);
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == '2') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == '4') ADVANCE(47);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(48);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(50);
      END_STATE();
    case 23:
      if (lookahead == '2') ADVANCE(51);
      if (lookahead == '6') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == '2') ADVANCE(53);
      END_STATE();
    case 25:
      if (lookahead == '4') ADVANCE(54);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_i8);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(55);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(57);
      END_STATE();
    case 32:
      if (lookahead == 't') ADVANCE(58);
      END_STATE();
    case 33:
      if (lookahead == 'u') ADVANCE(59);
      END_STATE();
    case 34:
      if (lookahead == '2') ADVANCE(60);
      if (lookahead == '6') ADVANCE(61);
      END_STATE();
    case 35:
      if (lookahead == '2') ADVANCE(62);
      END_STATE();
    case 36:
      if (lookahead == '4') ADVANCE(63);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_u8);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(66);
      END_STATE();
    case 41:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 42:
      if (lookahead == 'h') ADVANCE(68);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(69);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 45:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_f32);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_f64);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 50:
      if (lookahead == 'c') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == '8') ADVANCE(74);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_i16);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_i32);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_i64);
      END_STATE();
    case 55:
      if (lookahead == 'z') ADVANCE(75);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_let);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(76);
      END_STATE();
    case 58:
      if (lookahead == 'u') ADVANCE(77);
      END_STATE();
    case 59:
      if (lookahead == 'e') ADVANCE(78);
      END_STATE();
    case 60:
      if (lookahead == '8') ADVANCE(79);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_u16);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_u32);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_u64);
      END_STATE();
    case 64:
      if (lookahead == 'z') ADVANCE(80);
      END_STATE();
    case 65:
      if (lookahead == 'l') ADVANCE(81);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_bool);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(83);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(84);
      END_STATE();
    case 70:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_else);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 't') ADVANCE(87);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_i128);
      END_STATE();
    case 75:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 76:
      if (lookahead == 'b') ADVANCE(89);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_u128);
      END_STATE();
    case 80:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 81:
      if (lookahead == 'e') ADVANCE(92);
      END_STATE();
    case 82:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_c_int);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 87:
      if (lookahead == 'i') ADVANCE(96);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_isize);
      END_STATE();
    case 89:
      if (lookahead == 'l') ADVANCE(97);
      END_STATE();
    case 90:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_usize);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_while);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_c_char);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(99);
      END_STATE();
    case 96:
      if (lookahead == 'o') ADVANCE(100);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_return);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 100:
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_mutable_specifier);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_continue);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 50, .external_lex_state = 2},
  [2] = {.lex_state = 6, .external_lex_state = 2},
  [3] = {.lex_state = 6, .external_lex_state = 2},
  [4] = {.lex_state = 6, .external_lex_state = 2},
  [5] = {.lex_state = 6, .external_lex_state = 2},
  [6] = {.lex_state = 6, .external_lex_state = 2},
  [7] = {.lex_state = 6, .external_lex_state = 2},
  [8] = {.lex_state = 6, .external_lex_state = 2},
  [9] = {.lex_state = 6, .external_lex_state = 2},
  [10] = {.lex_state = 6, .external_lex_state = 2},
  [11] = {.lex_state = 6, .external_lex_state = 2},
  [12] = {.lex_state = 6, .external_lex_state = 2},
  [13] = {.lex_state = 6, .external_lex_state = 2},
  [14] = {.lex_state = 6, .external_lex_state = 2},
  [15] = {.lex_state = 6, .external_lex_state = 2},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 6, .external_lex_state = 2},
  [18] = {.lex_state = 6, .external_lex_state = 2},
  [19] = {.lex_state = 6, .external_lex_state = 2},
  [20] = {.lex_state = 6, .external_lex_state = 2},
  [21] = {.lex_state = 6, .external_lex_state = 2},
  [22] = {.lex_state = 6, .external_lex_state = 2},
  [23] = {.lex_state = 6, .external_lex_state = 2},
  [24] = {.lex_state = 50, .external_lex_state = 2},
  [25] = {.lex_state = 50, .external_lex_state = 2},
  [26] = {.lex_state = 50, .external_lex_state = 2},
  [27] = {.lex_state = 50, .external_lex_state = 2},
  [28] = {.lex_state = 50, .external_lex_state = 2},
  [29] = {.lex_state = 50, .external_lex_state = 2},
  [30] = {.lex_state = 50, .external_lex_state = 2},
  [31] = {.lex_state = 50, .external_lex_state = 2},
  [32] = {.lex_state = 50, .external_lex_state = 2},
  [33] = {.lex_state = 50, .external_lex_state = 2},
  [34] = {.lex_state = 50, .external_lex_state = 2},
  [35] = {.lex_state = 50, .external_lex_state = 2},
  [36] = {.lex_state = 50, .external_lex_state = 2},
  [37] = {.lex_state = 50, .external_lex_state = 2},
  [38] = {.lex_state = 50, .external_lex_state = 2},
  [39] = {.lex_state = 50, .external_lex_state = 2},
  [40] = {.lex_state = 7, .external_lex_state = 2},
  [41] = {.lex_state = 7, .external_lex_state = 2},
  [42] = {.lex_state = 7, .external_lex_state = 2},
  [43] = {.lex_state = 7, .external_lex_state = 2},
  [44] = {.lex_state = 7, .external_lex_state = 2},
  [45] = {.lex_state = 7, .external_lex_state = 2},
  [46] = {.lex_state = 7, .external_lex_state = 2},
  [47] = {.lex_state = 7, .external_lex_state = 2},
  [48] = {.lex_state = 7, .external_lex_state = 2},
  [49] = {.lex_state = 7, .external_lex_state = 2},
  [50] = {.lex_state = 7, .external_lex_state = 2},
  [51] = {.lex_state = 7, .external_lex_state = 2},
  [52] = {.lex_state = 7, .external_lex_state = 2},
  [53] = {.lex_state = 6, .external_lex_state = 2},
  [54] = {.lex_state = 7, .external_lex_state = 2},
  [55] = {.lex_state = 7, .external_lex_state = 2},
  [56] = {.lex_state = 7, .external_lex_state = 2},
  [57] = {.lex_state = 7, .external_lex_state = 2},
  [58] = {.lex_state = 7, .external_lex_state = 2},
  [59] = {.lex_state = 7, .external_lex_state = 2},
  [60] = {.lex_state = 7, .external_lex_state = 2},
  [61] = {.lex_state = 7, .external_lex_state = 2},
  [62] = {.lex_state = 7, .external_lex_state = 2},
  [63] = {.lex_state = 6, .external_lex_state = 2},
  [64] = {.lex_state = 7, .external_lex_state = 2},
  [65] = {.lex_state = 7, .external_lex_state = 2},
  [66] = {.lex_state = 7, .external_lex_state = 2},
  [67] = {.lex_state = 7, .external_lex_state = 2},
  [68] = {.lex_state = 7, .external_lex_state = 2},
  [69] = {.lex_state = 7, .external_lex_state = 2},
  [70] = {.lex_state = 7, .external_lex_state = 2},
  [71] = {.lex_state = 6, .external_lex_state = 2},
  [72] = {.lex_state = 6, .external_lex_state = 2},
  [73] = {.lex_state = 6, .external_lex_state = 2},
  [74] = {.lex_state = 6, .external_lex_state = 2},
  [75] = {.lex_state = 6, .external_lex_state = 2},
  [76] = {.lex_state = 6, .external_lex_state = 2},
  [77] = {.lex_state = 6, .external_lex_state = 2},
  [78] = {.lex_state = 6, .external_lex_state = 2},
  [79] = {.lex_state = 6, .external_lex_state = 2},
  [80] = {.lex_state = 6, .external_lex_state = 2},
  [81] = {.lex_state = 6, .external_lex_state = 2},
  [82] = {.lex_state = 6, .external_lex_state = 2},
  [83] = {.lex_state = 6, .external_lex_state = 2},
  [84] = {.lex_state = 6, .external_lex_state = 2},
  [85] = {.lex_state = 6, .external_lex_state = 2},
  [86] = {.lex_state = 6, .external_lex_state = 2},
  [87] = {.lex_state = 6, .external_lex_state = 2},
  [88] = {.lex_state = 6, .external_lex_state = 2},
  [89] = {.lex_state = 50, .external_lex_state = 2},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 4},
  [94] = {.lex_state = 8},
  [95] = {.lex_state = 8},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 4},
  [98] = {.lex_state = 4},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 4},
  [102] = {.lex_state = 4},
  [103] = {.lex_state = 4},
  [104] = {.lex_state = 4},
  [105] = {.lex_state = 4},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 4},
  [108] = {.lex_state = 6},
  [109] = {.lex_state = 6},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 6},
  [113] = {.lex_state = 4},
  [114] = {.lex_state = 4},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 4},
  [118] = {.lex_state = 6},
  [119] = {.lex_state = 6},
  [120] = {.lex_state = 6},
  [121] = {.lex_state = 6},
  [122] = {.lex_state = 8},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 8},
  [125] = {.lex_state = 6},
  [126] = {.lex_state = 8},
  [127] = {.lex_state = 8},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 8},
  [130] = {.lex_state = 4},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 4},
  [133] = {.lex_state = 4},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 6},
  [136] = {.lex_state = 6},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 4},
  [139] = {.lex_state = 6},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 6},
  [142] = {.lex_state = 6},
  [143] = {.lex_state = 4},
  [144] = {.lex_state = 8},
  [145] = {.lex_state = 6},
  [146] = {.lex_state = 6},
  [147] = {.lex_state = 6},
  [148] = {.lex_state = 6},
  [149] = {.lex_state = 6},
  [150] = {.lex_state = 6},
  [151] = {.lex_state = 6},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 6},
  [156] = {.lex_state = 6},
  [157] = {.lex_state = 6},
  [158] = {.lex_state = 6},
  [159] = {.lex_state = 2},
  [160] = {.lex_state = 6},
  [161] = {.lex_state = 6},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 2},
  [164] = {.lex_state = 6},
  [165] = {.lex_state = 6},
  [166] = {.lex_state = 6},
  [167] = {.lex_state = 6},
  [168] = {.lex_state = 6},
  [169] = {.lex_state = 9, .external_lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 6},
  [172] = {.lex_state = 6},
  [173] = {.lex_state = 6},
  [174] = {.lex_state = 2},
  [175] = {.lex_state = 2},
  [176] = {.lex_state = 2},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 2},
  [179] = {.lex_state = 2},
  [180] = {.lex_state = 2},
  [181] = {.lex_state = 2},
  [182] = {.lex_state = 6},
  [183] = {.lex_state = 6},
  [184] = {.lex_state = 9, .external_lex_state = 2},
  [185] = {.lex_state = 6},
  [186] = {.lex_state = 9, .external_lex_state = 2},
  [187] = {.lex_state = 2, .external_lex_state = 2},
  [188] = {.lex_state = 50, .external_lex_state = 2},
  [189] = {.lex_state = 6},
  [190] = {.lex_state = 9, .external_lex_state = 2},
  [191] = {.lex_state = 9, .external_lex_state = 2},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 9, .external_lex_state = 2},
  [194] = {.lex_state = 6},
  [195] = {.lex_state = 6},
  [196] = {.lex_state = 6},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 2},
  [199] = {.lex_state = 50, .external_lex_state = 2},
  [200] = {.lex_state = 50, .external_lex_state = 2},
  [201] = {.lex_state = 50, .external_lex_state = 2},
  [202] = {.lex_state = 2},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 9, .external_lex_state = 2},
  [205] = {.lex_state = 2},
  [206] = {.lex_state = 9, .external_lex_state = 2},
  [207] = {.lex_state = 2},
  [208] = {.lex_state = 9, .external_lex_state = 2},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 2},
  [213] = {.lex_state = 2},
  [214] = {.lex_state = 50, .external_lex_state = 2},
  [215] = {.lex_state = 2},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 50, .external_lex_state = 2},
  [219] = {.lex_state = 9, .external_lex_state = 2},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 9, .external_lex_state = 2},
  [222] = {.lex_state = 50, .external_lex_state = 2},
  [223] = {.lex_state = 6, .external_lex_state = 2},
  [224] = {.lex_state = 50, .external_lex_state = 2},
  [225] = {.lex_state = 6, .external_lex_state = 2},
  [226] = {.lex_state = 6, .external_lex_state = 2},
  [227] = {.lex_state = 6, .external_lex_state = 2},
  [228] = {.lex_state = 6, .external_lex_state = 2},
  [229] = {.lex_state = 6, .external_lex_state = 2},
  [230] = {.lex_state = 6, .external_lex_state = 2},
  [231] = {.lex_state = 6, .external_lex_state = 2},
  [232] = {.lex_state = 6, .external_lex_state = 2},
  [233] = {.lex_state = 6, .external_lex_state = 2},
  [234] = {.lex_state = 6, .external_lex_state = 2},
  [235] = {.lex_state = 6, .external_lex_state = 2},
  [236] = {.lex_state = 6, .external_lex_state = 2},
  [237] = {.lex_state = 6, .external_lex_state = 2},
  [238] = {.lex_state = 6, .external_lex_state = 2},
  [239] = {.lex_state = 6, .external_lex_state = 2},
  [240] = {.lex_state = 6, .external_lex_state = 2},
  [241] = {.lex_state = 6, .external_lex_state = 2},
  [242] = {.lex_state = 6, .external_lex_state = 2},
  [243] = {.lex_state = 6, .external_lex_state = 2},
  [244] = {.lex_state = 6, .external_lex_state = 2},
  [245] = {.lex_state = 6, .external_lex_state = 2},
  [246] = {.lex_state = 6, .external_lex_state = 2},
  [247] = {.lex_state = 50, .external_lex_state = 2},
  [248] = {.lex_state = 6, .external_lex_state = 2},
  [249] = {.lex_state = 6, .external_lex_state = 2},
  [250] = {.lex_state = 6, .external_lex_state = 2},
  [251] = {.lex_state = 50, .external_lex_state = 2},
  [252] = {.lex_state = 6, .external_lex_state = 2},
  [253] = {.lex_state = 6, .external_lex_state = 2},
  [254] = {.lex_state = 6, .external_lex_state = 2},
  [255] = {.lex_state = 6, .external_lex_state = 2},
  [256] = {.lex_state = 6, .external_lex_state = 2},
  [257] = {.lex_state = 6, .external_lex_state = 2},
  [258] = {.lex_state = 6, .external_lex_state = 2},
  [259] = {.lex_state = 6, .external_lex_state = 2},
  [260] = {.lex_state = 6, .external_lex_state = 2},
  [261] = {.lex_state = 6, .external_lex_state = 2},
  [262] = {.lex_state = 6, .external_lex_state = 2},
  [263] = {.lex_state = 6, .external_lex_state = 2},
  [264] = {.lex_state = 6, .external_lex_state = 2},
  [265] = {.lex_state = 50, .external_lex_state = 2},
  [266] = {.lex_state = 6, .external_lex_state = 2},
  [267] = {.lex_state = 6, .external_lex_state = 2},
  [268] = {.lex_state = 6, .external_lex_state = 2},
  [269] = {.lex_state = 6, .external_lex_state = 2},
  [270] = {.lex_state = 6, .external_lex_state = 2},
  [271] = {.lex_state = 6, .external_lex_state = 2},
  [272] = {.lex_state = 6, .external_lex_state = 2},
  [273] = {.lex_state = 6, .external_lex_state = 2},
  [274] = {.lex_state = 6, .external_lex_state = 2},
  [275] = {.lex_state = 6, .external_lex_state = 2},
  [276] = {.lex_state = 6, .external_lex_state = 2},
  [277] = {.lex_state = 50, .external_lex_state = 2},
  [278] = {.lex_state = 6, .external_lex_state = 2},
  [279] = {.lex_state = 6, .external_lex_state = 2},
  [280] = {.lex_state = 6, .external_lex_state = 2},
  [281] = {.lex_state = 6, .external_lex_state = 2},
  [282] = {.lex_state = 6, .external_lex_state = 2},
  [283] = {.lex_state = 50, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 6, .external_lex_state = 2},
  [286] = {.lex_state = 5},
  [287] = {.lex_state = 1, .external_lex_state = 3},
  [288] = {.lex_state = 1, .external_lex_state = 3},
  [289] = {.lex_state = 5},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 1, .external_lex_state = 3},
  [292] = {.lex_state = 8},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 5},
  [297] = {.lex_state = 5},
  [298] = {.lex_state = 1, .external_lex_state = 3},
  [299] = {.lex_state = 1, .external_lex_state = 3},
  [300] = {.lex_state = 1, .external_lex_state = 3},
  [301] = {.lex_state = 1},
  [302] = {.lex_state = 1, .external_lex_state = 3},
  [303] = {.lex_state = 8},
  [304] = {.lex_state = 1, .external_lex_state = 3},
  [305] = {.lex_state = 1, .external_lex_state = 3},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 5},
  [311] = {.lex_state = 5},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 5},
  [314] = {.lex_state = 5},
  [315] = {.lex_state = 13},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 5},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 13},
  [327] = {.lex_state = 0, .external_lex_state = 2},
  [328] = {.lex_state = 8},
  [329] = {.lex_state = 1},
  [330] = {.lex_state = 1},
  [331] = {.lex_state = 1},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 1},
  [335] = {.lex_state = 1},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 13},
  [339] = {.lex_state = 1},
  [340] = {.lex_state = 1},
  [341] = {.lex_state = 8},
  [342] = {.lex_state = 1},
  [343] = {.lex_state = 13},
  [344] = {.lex_state = 0, .external_lex_state = 2},
  [345] = {.lex_state = 13},
  [346] = {.lex_state = 8},
  [347] = {.lex_state = 8},
  [348] = {.lex_state = 0, .external_lex_state = 2},
  [349] = {.lex_state = 8},
  [350] = {.lex_state = 0},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 8},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 8},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 8},
  [364] = {.lex_state = 8},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
};

enum {
  ts_external_token__string_content = 0,
  ts_external_token_float_literal = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__string_content] = sym__string_content,
  [ts_external_token_float_literal] = sym_float_literal,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__string_content] = true,
    [ts_external_token_float_literal] = true,
  },
  [2] = {
    [ts_external_token_float_literal] = true,
  },
  [3] = {
    [ts_external_token__string_content] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_while] = ACTIONS(1),
    [anon_sym_PLUS_PLUS] = ACTIONS(1),
    [anon_sym_DASH_DASH] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_u8] = ACTIONS(1),
    [anon_sym_i8] = ACTIONS(1),
    [anon_sym_u16] = ACTIONS(1),
    [anon_sym_i16] = ACTIONS(1),
    [anon_sym_u32] = ACTIONS(1),
    [anon_sym_i32] = ACTIONS(1),
    [anon_sym_u64] = ACTIONS(1),
    [anon_sym_i64] = ACTIONS(1),
    [anon_sym_u128] = ACTIONS(1),
    [anon_sym_i128] = ACTIONS(1),
    [anon_sym_isize] = ACTIONS(1),
    [anon_sym_usize] = ACTIONS(1),
    [anon_sym_f32] = ACTIONS(1),
    [anon_sym_f64] = ACTIONS(1),
    [anon_sym_c_int] = ACTIONS(1),
    [anon_sym_bool] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_c_char] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_let] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_mutable_specifier] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_LT_LT] = ACTIONS(1),
    [anon_sym_GT_GT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [aux_sym_string_literal_token1] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_char_literal] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_else] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(1),
    [sym__string_content] = ACTIONS(1),
    [sym_float_literal] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(365),
    [sym_declaration] = STATE(335),
    [sym__expression] = STATE(104),
    [sym_while_statement] = STATE(335),
    [sym_increment_statement] = STATE(335),
    [sym_decrement_statement] = STATE(335),
    [sym_continue_statement] = STATE(335),
    [sym_for_expression] = STATE(117),
    [sym_call_expression] = STATE(117),
    [sym_range_expression] = STATE(117),
    [sym__top_level_declaration] = STATE(24),
    [sym_let_declaration] = STATE(334),
    [sym_unary_expression] = STATE(117),
    [sym_return_statement] = STATE(335),
    [sym_binary_expression] = STATE(117),
    [sym__literal] = STATE(117),
    [sym_string_literal] = STATE(133),
    [sym_function_declaration] = STATE(24),
    [sym_block] = STATE(335),
    [sym_if_statement] = STATE(335),
    [sym_boolean_literal] = STATE(133),
    [aux_sym_source_file_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_identifier] = ACTIONS(5),
    [anon_sym_while] = ACTIONS(7),
    [anon_sym_PLUS_PLUS] = ACTIONS(9),
    [anon_sym_DASH_DASH] = ACTIONS(11),
    [anon_sym_continue] = ACTIONS(13),
    [anon_sym_for] = ACTIONS(15),
    [anon_sym_DOT_DOT] = ACTIONS(17),
    [anon_sym_let] = ACTIONS(19),
    [anon_sym_DASH] = ACTIONS(21),
    [anon_sym_return] = ACTIONS(23),
    [sym_integer_literal] = ACTIONS(25),
    [aux_sym_string_literal_token1] = ACTIONS(27),
    [sym_char_literal] = ACTIONS(25),
    [anon_sym_function] = ACTIONS(29),
    [anon_sym_LBRACE] = ACTIONS(31),
    [anon_sym_if] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(35),
    [anon_sym_false] = ACTIONS(35),
    [sym_float_literal] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(43), 1,
      anon_sym_COMMA,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(119), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [82] = 18,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(59), 1,
      anon_sym_COMMA,
    ACTIONS(61), 1,
      anon_sym_RPAREN,
    STATE(135), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(22), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [164] = 18,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(63), 1,
      anon_sym_COMMA,
    ACTIONS(65), 1,
      anon_sym_RPAREN,
    STATE(128), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(18), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [246] = 18,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(67), 1,
      anon_sym_COMMA,
    ACTIONS(69), 1,
      anon_sym_RPAREN,
    STATE(121), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [328] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [407] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [486] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [565] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(77), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [644] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [723] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [802] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [881] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(85), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [960] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1039] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1118] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(91), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1197] = 17,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1276] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(125), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1352] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(118), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1428] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(157), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(23), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1504] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(120), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1580] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(112), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1656] = 16,
    ACTIONS(37), 1,
      sym_identifier,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(49), 1,
      sym_mutable_specifier,
    ACTIONS(51), 1,
      anon_sym_DASH,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    STATE(151), 1,
      sym__expression,
    STATE(328), 1,
      sym_negative_literal,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    STATE(172), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(53), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [1732] = 23,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(7), 1,
      anon_sym_while,
    ACTIONS(9), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(11), 1,
      anon_sym_DASH_DASH,
    ACTIONS(13), 1,
      anon_sym_continue,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(19), 1,
      anon_sym_let,
    ACTIONS(21), 1,
      anon_sym_DASH,
    ACTIONS(23), 1,
      anon_sym_return,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(29), 1,
      anon_sym_function,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(33), 1,
      anon_sym_if,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    STATE(104), 1,
      sym__expression,
    STATE(334), 1,
      sym_let_declaration,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(335), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1820] = 23,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    ACTIONS(99), 1,
      sym_identifier,
    ACTIONS(102), 1,
      anon_sym_while,
    ACTIONS(105), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(108), 1,
      anon_sym_DASH_DASH,
    ACTIONS(111), 1,
      anon_sym_continue,
    ACTIONS(114), 1,
      anon_sym_for,
    ACTIONS(117), 1,
      anon_sym_DOT_DOT,
    ACTIONS(120), 1,
      anon_sym_let,
    ACTIONS(123), 1,
      anon_sym_DASH,
    ACTIONS(126), 1,
      anon_sym_return,
    ACTIONS(132), 1,
      aux_sym_string_literal_token1,
    ACTIONS(135), 1,
      anon_sym_function,
    ACTIONS(138), 1,
      anon_sym_LBRACE,
    ACTIONS(141), 1,
      anon_sym_if,
    STATE(104), 1,
      sym__expression,
    STATE(334), 1,
      sym_let_declaration,
    ACTIONS(144), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(129), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(25), 3,
      sym__top_level_declaration,
      sym_function_declaration,
      aux_sym_source_file_repeat1,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(335), 8,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
  [1908] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(173), 1,
      anon_sym_RBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(31), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [1989] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(179), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(30), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2070] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(181), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2151] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(183), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(28), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2232] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(185), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2313] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(187), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2394] = 21,
    ACTIONS(189), 1,
      sym_identifier,
    ACTIONS(192), 1,
      anon_sym_while,
    ACTIONS(195), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(198), 1,
      anon_sym_DASH_DASH,
    ACTIONS(201), 1,
      anon_sym_continue,
    ACTIONS(204), 1,
      anon_sym_for,
    ACTIONS(207), 1,
      anon_sym_DOT_DOT,
    ACTIONS(210), 1,
      anon_sym_let,
    ACTIONS(213), 1,
      anon_sym_DASH,
    ACTIONS(216), 1,
      anon_sym_return,
    ACTIONS(222), 1,
      aux_sym_string_literal_token1,
    ACTIONS(225), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_RBRACE,
    ACTIONS(230), 1,
      anon_sym_if,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(233), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(219), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2475] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(236), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(34), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2556] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(238), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2637] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(32), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2718] = 21,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(149), 1,
      anon_sym_while,
    ACTIONS(151), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(153), 1,
      anon_sym_DASH_DASH,
    ACTIONS(155), 1,
      anon_sym_continue,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(161), 1,
      anon_sym_let,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(165), 1,
      anon_sym_return,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(175), 1,
      anon_sym_if,
    ACTIONS(242), 1,
      anon_sym_RBRACE,
    STATE(45), 1,
      sym__expression,
    STATE(283), 1,
      sym_let_declaration,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
    STATE(35), 9,
      sym_declaration,
      sym_while_statement,
      sym_increment_statement,
      sym_decrement_statement,
      sym_continue_statement,
      sym_return_statement,
      sym_block,
      sym_if_statement,
      aux_sym_block_repeat1,
  [2799] = 2,
    ACTIONS(244), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(246), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2841] = 2,
    ACTIONS(248), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(250), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2883] = 2,
    ACTIONS(252), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(254), 23,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2925] = 11,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 12,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [2984] = 2,
    ACTIONS(276), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(278), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3025] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(282), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(280), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3088] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(290), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(288), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3151] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(294), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(292), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3214] = 15,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    ACTIONS(298), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(300), 1,
      anon_sym_DASH_DASH,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(302), 6,
      sym_float_literal,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(296), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3281] = 2,
    ACTIONS(304), 14,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_else,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(306), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3322] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(310), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(308), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3385] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(314), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(312), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3448] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(318), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(316), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3511] = 13,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(268), 1,
      anon_sym_PIPE,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(286), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(284), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
    ACTIONS(322), 8,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(320), 9,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [3574] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(256), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3621] = 7,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3672] = 13,
    ACTIONS(324), 1,
      sym_identifier,
    ACTIONS(327), 1,
      anon_sym_for,
    ACTIONS(329), 1,
      anon_sym_DOT_DOT,
    ACTIONS(334), 1,
      sym_mutable_specifier,
    ACTIONS(337), 1,
      anon_sym_DASH,
    ACTIONS(343), 1,
      aux_sym_string_literal_token1,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(350), 1,
      sym__pattern,
    ACTIONS(346), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(53), 2,
      sym_parameter,
      aux_sym_arguments_repeat1,
    ACTIONS(340), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(331), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [3735] = 9,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 14,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3790] = 5,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(349), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(351), 20,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3837] = 10,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    ACTIONS(266), 1,
      anon_sym_AMP,
    ACTIONS(270), 1,
      anon_sym_CARET,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 13,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3894] = 8,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(272), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 15,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3947] = 6,
    ACTIONS(260), 1,
      anon_sym_DOT_DOT,
    ACTIONS(262), 1,
      anon_sym_LPAREN,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(274), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(258), 17,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [3996] = 3,
    STATE(62), 1,
      sym_arguments,
    ACTIONS(353), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(355), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4039] = 2,
    ACTIONS(357), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(359), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4079] = 2,
    ACTIONS(361), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(363), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4119] = 2,
    ACTIONS(365), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(367), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4159] = 13,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(371), 1,
      anon_sym_COMMA,
    ACTIONS(373), 1,
      anon_sym_RPAREN,
    ACTIONS(375), 1,
      sym_mutable_specifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(309), 1,
      sym_parameter,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(351), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4221] = 2,
    ACTIONS(381), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(383), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4261] = 2,
    ACTIONS(385), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(387), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4301] = 2,
    ACTIONS(389), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(391), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4341] = 2,
    ACTIONS(393), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(395), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4381] = 2,
    ACTIONS(397), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(399), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4421] = 2,
    ACTIONS(401), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(403), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4461] = 2,
    ACTIONS(405), 13,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_LT,
      anon_sym_GT,
      anon_sym_PLUS,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(407), 22,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [4501] = 12,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(375), 1,
      sym_mutable_specifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_parameter,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(351), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4560] = 12,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(375), 1,
      sym_mutable_specifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    ACTIONS(411), 1,
      anon_sym_RPAREN,
    STATE(333), 1,
      sym_parameter,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(351), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4619] = 11,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(375), 1,
      sym_mutable_specifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(333), 1,
      sym_parameter,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(351), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4675] = 10,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(417), 1,
      sym_mutable_specifier,
    ACTIONS(419), 1,
      anon_sym_DASH,
    STATE(169), 1,
      sym__pattern,
    STATE(191), 1,
      sym__literal_pattern,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(421), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(415), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4728] = 10,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(427), 1,
      sym_mutable_specifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(290), 1,
      sym__literal_pattern,
    STATE(297), 1,
      sym__pattern,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(296), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4781] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(364), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4831] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(363), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4881] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(354), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4931] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(355), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [4981] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(366), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5031] = 9,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(423), 1,
      sym_identifier,
    ACTIONS(429), 1,
      anon_sym_DASH,
    STATE(290), 1,
      sym__literal_pattern,
    STATE(295), 1,
      sym__pattern,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(431), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(296), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(425), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5081] = 9,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(369), 1,
      sym_identifier,
    ACTIONS(377), 1,
      anon_sym_DASH,
    STATE(346), 1,
      sym__literal_pattern,
    STATE(361), 1,
      sym__pattern,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(379), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(328), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(47), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5131] = 9,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(413), 1,
      sym_identifier,
    ACTIONS(419), 1,
      anon_sym_DASH,
    STATE(186), 1,
      sym__pattern,
    STATE(191), 1,
      sym__literal_pattern,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(421), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(184), 3,
      sym_negative_literal,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(415), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [5181] = 2,
    ACTIONS(435), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(433), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5215] = 2,
    ACTIONS(439), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(437), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5249] = 2,
    ACTIONS(443), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(441), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5283] = 2,
    ACTIONS(447), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(445), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5317] = 2,
    ACTIONS(451), 6,
      sym_float_literal,
      anon_sym_DOT_DOT,
      anon_sym_DASH,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
    ACTIONS(449), 23,
      anon_sym_for,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
      sym_mutable_specifier,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [5351] = 12,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(163), 1,
      anon_sym_DASH,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    STATE(44), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(455), 4,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(453), 5,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_let,
      anon_sym_return,
      anon_sym_if,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [5404] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(252), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5433] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(244), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5462] = 2,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(248), 23,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COLON,
      anon_sym_EQ,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5491] = 7,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 14,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [5529] = 2,
    ACTIONS(244), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(246), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [5557] = 2,
    ACTIONS(248), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(250), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [5585] = 2,
    ACTIONS(252), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(254), 21,
      anon_sym_in,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_COLON,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [5613] = 5,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(256), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5647] = 2,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(276), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [5675] = 11,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_AMP,
    ACTIONS(467), 1,
      anon_sym_PIPE,
    ACTIONS(469), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 9,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5721] = 9,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_AMP,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 11,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5763] = 10,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_AMP,
    ACTIONS(469), 1,
      anon_sym_CARET,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 10,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5807] = 8,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 12,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5847] = 6,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 16,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [5883] = 14,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    ACTIONS(465), 1,
      anon_sym_AMP,
    ACTIONS(467), 1,
      anon_sym_PIPE,
    ACTIONS(469), 1,
      anon_sym_CARET,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_SEMI,
    ACTIONS(477), 1,
      anon_sym_PLUS_PLUS,
    ACTIONS(479), 1,
      anon_sym_DASH_DASH,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(461), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(471), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(463), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(481), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [5935] = 3,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(353), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5965] = 5,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(457), 1,
      anon_sym_DOT_DOT,
    ACTIONS(459), 1,
      anon_sym_LPAREN,
    STATE(130), 1,
      sym_arguments,
    ACTIONS(349), 19,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [5999] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(304), 22,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_else,
  [6027] = 10,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [6070] = 3,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(353), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(355), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [6099] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(362), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6132] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(86), 1,
      sym_array_type,
    STATE(88), 1,
      sym__type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6165] = 14,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    STATE(323), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6216] = 2,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(389), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6243] = 2,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(401), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6270] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(353), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6303] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(352), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6336] = 2,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(397), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6363] = 14,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_arguments,
    STATE(318), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6414] = 14,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(519), 1,
      anon_sym_COMMA,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_arguments,
    STATE(320), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6465] = 14,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_arguments,
    STATE(321), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6516] = 14,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(525), 1,
      anon_sym_COMMA,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_arguments,
    STATE(308), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6567] = 5,
    ACTIONS(503), 1,
      sym_identifier,
    ACTIONS(507), 1,
      anon_sym_LBRACK,
    STATE(85), 1,
      sym__type,
    STATE(86), 1,
      sym_array_type,
    ACTIONS(505), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6600] = 2,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(385), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6627] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(336), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6660] = 14,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(183), 1,
      sym_arguments,
    STATE(312), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6711] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(325), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6744] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(206), 1,
      sym__type,
    STATE(219), 1,
      sym_array_type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6777] = 14,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(537), 1,
      anon_sym_COMMA,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_arguments,
    STATE(324), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [6828] = 5,
    ACTIONS(531), 1,
      sym_identifier,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    STATE(204), 1,
      sym__type,
    STATE(219), 1,
      sym_array_type,
    ACTIONS(533), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6861] = 2,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(365), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6888] = 5,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    STATE(311), 1,
      sym__type,
    STATE(314), 1,
      sym_array_type,
    ACTIONS(543), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [6921] = 2,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(393), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6948] = 2,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(405), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [6975] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(337), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7008] = 14,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(547), 1,
      anon_sym_COMMA,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
    STATE(183), 1,
      sym_arguments,
    STATE(316), 1,
      aux_sym_arguments_repeat2,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7059] = 6,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 14,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_LBRACE,
  [7094] = 2,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(381), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7121] = 2,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(357), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7148] = 8,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 10,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [7187] = 5,
    ACTIONS(541), 1,
      sym_identifier,
    ACTIONS(545), 1,
      anon_sym_LBRACK,
    STATE(310), 1,
      sym__type,
    STATE(314), 1,
      sym_array_type,
    ACTIONS(543), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7220] = 9,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 9,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [7261] = 11,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 7,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LBRACE,
  [7306] = 2,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(361), 21,
      anon_sym_SEMI,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7333] = 5,
    ACTIONS(497), 1,
      sym_identifier,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    STATE(293), 1,
      sym_array_type,
    STATE(357), 1,
      sym__type,
    ACTIONS(499), 18,
      anon_sym_u8,
      anon_sym_i8,
      anon_sym_u16,
      anon_sym_i16,
      anon_sym_u32,
      anon_sym_i32,
      anon_sym_u64,
      anon_sym_i64,
      anon_sym_u128,
      anon_sym_i128,
      anon_sym_isize,
      anon_sym_usize,
      anon_sym_f32,
      anon_sym_f64,
      anon_sym_c_int,
      anon_sym_bool,
      anon_sym_String,
      anon_sym_c_char,
  [7366] = 7,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(258), 12,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_LBRACE,
  [7403] = 5,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(256), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(258), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7436] = 5,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(351), 17,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7469] = 13,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(551), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_arguments,
    STATE(196), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7517] = 2,
    ACTIONS(361), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(363), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7543] = 13,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    STATE(331), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7591] = 12,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(553), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7637] = 12,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7683] = 12,
    ACTIONS(320), 1,
      anon_sym_SEMI,
    ACTIONS(322), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7729] = 12,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7775] = 13,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    ACTIONS(573), 1,
      anon_sym_LBRACE,
    STATE(183), 1,
      sym_arguments,
    STATE(205), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7823] = 2,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7849] = 12,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(575), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [7895] = 2,
    ACTIONS(401), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(403), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [7921] = 12,
    ACTIONS(292), 1,
      anon_sym_SEMI,
    ACTIONS(294), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [7967] = 3,
    ACTIONS(577), 1,
      anon_sym_COLON,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [7995] = 2,
    ACTIONS(397), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(399), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8021] = 12,
    ACTIONS(316), 1,
      anon_sym_SEMI,
    ACTIONS(318), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8067] = 12,
    ACTIONS(312), 1,
      anon_sym_SEMI,
    ACTIONS(314), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8113] = 13,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    STATE(188), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8161] = 13,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    STATE(277), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8209] = 13,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(183), 1,
      sym_arguments,
    STATE(301), 1,
      sym_block,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8257] = 3,
    ACTIONS(579), 1,
      anon_sym_COLON,
    ACTIONS(397), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(399), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8285] = 2,
    ACTIONS(304), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(306), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8311] = 4,
    ACTIONS(585), 1,
      anon_sym_COLON,
    ACTIONS(587), 1,
      anon_sym_EQ,
    ACTIONS(583), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(581), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8341] = 12,
    ACTIONS(308), 1,
      anon_sym_SEMI,
    ACTIONS(310), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(567), 6,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8387] = 2,
    ACTIONS(276), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(278), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8413] = 3,
    ACTIONS(589), 1,
      anon_sym_COLON,
    ACTIONS(405), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(407), 18,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8441] = 13,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(66), 1,
      sym_block,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8489] = 5,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(256), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8521] = 7,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 12,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
  [8557] = 11,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(563), 1,
      anon_sym_PIPE,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 7,
      anon_sym_SEMI,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8601] = 9,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 9,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8641] = 10,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    ACTIONS(561), 1,
      anon_sym_AMP,
    ACTIONS(565), 1,
      anon_sym_CARET,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 8,
      anon_sym_SEMI,
      anon_sym_PIPE,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8683] = 8,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(559), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(569), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 10,
      anon_sym_SEMI,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
  [8721] = 6,
    ACTIONS(258), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(571), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(256), 14,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
  [8755] = 3,
    ACTIONS(355), 1,
      anon_sym_LF,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(353), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [8783] = 13,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(483), 1,
      anon_sym_DOT_DOT,
    ACTIONS(485), 1,
      anon_sym_LPAREN,
    ACTIONS(489), 1,
      anon_sym_AMP,
    ACTIONS(491), 1,
      anon_sym_CARET,
    ACTIONS(511), 1,
      anon_sym_PIPE,
    STATE(113), 1,
      sym_block,
    STATE(183), 1,
      sym_arguments,
    ACTIONS(487), 2,
      anon_sym_DASH,
      anon_sym_PLUS,
    ACTIONS(493), 2,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
    ACTIONS(515), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(495), 3,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
    ACTIONS(513), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [8831] = 2,
    ACTIONS(365), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(367), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8857] = 2,
    ACTIONS(591), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(589), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [8883] = 2,
    ACTIONS(385), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(387), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [8909] = 4,
    ACTIONS(597), 1,
      anon_sym_COLON,
    ACTIONS(599), 1,
      anon_sym_EQ,
    ACTIONS(595), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(593), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [8939] = 13,
    ACTIONS(453), 1,
      anon_sym_SEMI,
    ACTIONS(455), 1,
      anon_sym_LF,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(605), 1,
      anon_sym_DOT_DOT,
    ACTIONS(607), 1,
      anon_sym_DASH,
    ACTIONS(611), 1,
      aux_sym_string_literal_token1,
    ACTIONS(615), 1,
      sym_float_literal,
    STATE(159), 1,
      sym__expression,
    ACTIONS(609), 2,
      sym_integer_literal,
      sym_char_literal,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [8987] = 4,
    ACTIONS(621), 1,
      anon_sym_else,
    STATE(265), 1,
      sym_else_clause,
    ACTIONS(619), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(617), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9017] = 2,
    ACTIONS(393), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(395), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9043] = 2,
    ACTIONS(623), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(625), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9069] = 2,
    ACTIONS(627), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(579), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9095] = 5,
    ACTIONS(351), 1,
      anon_sym_LF,
    ACTIONS(555), 1,
      anon_sym_DOT_DOT,
    ACTIONS(557), 1,
      anon_sym_LPAREN,
    STATE(197), 1,
      sym_arguments,
    ACTIONS(349), 17,
      anon_sym_SEMI,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9127] = 2,
    ACTIONS(629), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(577), 11,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_COLON,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9153] = 2,
    ACTIONS(381), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(383), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9179] = 2,
    ACTIONS(357), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(359), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9205] = 2,
    ACTIONS(389), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(391), 19,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
      anon_sym_LBRACE,
  [9231] = 2,
    ACTIONS(367), 1,
      anon_sym_LF,
    ACTIONS(365), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9256] = 2,
    ACTIONS(359), 1,
      anon_sym_LF,
    ACTIONS(357), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9281] = 2,
    ACTIONS(631), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(633), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9306] = 2,
    ACTIONS(635), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(637), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9331] = 2,
    ACTIONS(97), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(639), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9356] = 2,
    ACTIONS(306), 1,
      anon_sym_LF,
    ACTIONS(304), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9381] = 2,
    ACTIONS(278), 1,
      anon_sym_LF,
    ACTIONS(276), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9406] = 3,
    ACTIONS(645), 1,
      anon_sym_EQ,
    ACTIONS(643), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(641), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9433] = 2,
    ACTIONS(391), 1,
      anon_sym_LF,
    ACTIONS(389), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9458] = 3,
    ACTIONS(651), 1,
      anon_sym_EQ,
    ACTIONS(649), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(647), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9485] = 2,
    ACTIONS(387), 1,
      anon_sym_LF,
    ACTIONS(385), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9510] = 2,
    ACTIONS(445), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(447), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9535] = 2,
    ACTIONS(383), 1,
      anon_sym_LF,
    ACTIONS(381), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9560] = 2,
    ACTIONS(363), 1,
      anon_sym_LF,
    ACTIONS(361), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9585] = 2,
    ACTIONS(250), 1,
      anon_sym_LF,
    ACTIONS(248), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9610] = 2,
    ACTIONS(407), 1,
      anon_sym_LF,
    ACTIONS(405), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9635] = 2,
    ACTIONS(403), 1,
      anon_sym_LF,
    ACTIONS(401), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9660] = 2,
    ACTIONS(306), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(304), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9685] = 2,
    ACTIONS(254), 1,
      anon_sym_LF,
    ACTIONS(252), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9710] = 2,
    ACTIONS(399), 1,
      anon_sym_LF,
    ACTIONS(397), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9735] = 2,
    ACTIONS(246), 1,
      anon_sym_LF,
    ACTIONS(244), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9760] = 2,
    ACTIONS(278), 9,
      sym_float_literal,
      ts_builtin_sym_end,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
    ACTIONS(276), 11,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_function,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9785] = 2,
    ACTIONS(441), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(443), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9810] = 2,
    ACTIONS(395), 1,
      anon_sym_LF,
    ACTIONS(393), 19,
      anon_sym_SEMI,
      anon_sym_DOT_DOT,
      anon_sym_LPAREN,
      anon_sym_DASH,
      anon_sym_AMP,
      anon_sym_PIPE,
      anon_sym_CARET,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT,
      anon_sym_LT_EQ,
      anon_sym_GT,
      anon_sym_GT_EQ,
      anon_sym_LT_LT,
      anon_sym_GT_GT,
      anon_sym_PLUS,
      anon_sym_STAR,
      anon_sym_SLASH,
      anon_sym_PERCENT,
  [9835] = 2,
    ACTIONS(433), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
    ACTIONS(435), 10,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      anon_sym_EQ,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
  [9860] = 2,
    ACTIONS(282), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(280), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9884] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(170), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9924] = 2,
    ACTIONS(661), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(659), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [9948] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(148), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [9988] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(152), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10028] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(164), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10068] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(165), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10108] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(192), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10148] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(181), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10188] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(180), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10228] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(179), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10268] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(178), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10308] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(177), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10348] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(176), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10388] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(175), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10428] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(174), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10468] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(154), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10508] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(150), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10548] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(145), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10588] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(142), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10628] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(141), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10668] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(108), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10708] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(139), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10748] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(136), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10788] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(109), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10828] = 2,
    ACTIONS(671), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(669), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10852] = 11,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    ACTIONS(667), 1,
      sym_char_literal,
    STATE(147), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    ACTIONS(673), 2,
      sym_float_literal,
      sym_integer_literal,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10894] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(55), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10934] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(166), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [10974] = 2,
    ACTIONS(290), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(288), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [10998] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(146), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11038] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(147), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11078] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(162), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11118] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(59), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11158] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(58), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11198] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(57), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11238] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(56), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11278] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(54), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11318] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(40), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11358] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(52), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11398] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(51), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11438] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(50), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11478] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(155), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11518] = 2,
    ACTIONS(679), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(677), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [11542] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(106), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11582] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(49), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11622] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(182), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11662] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(97), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11702] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(93), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11742] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(99), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11782] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(100), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11822] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(101), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11862] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(102), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11902] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(103), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11942] = 10,
    ACTIONS(5), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_for,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT,
    ACTIONS(27), 1,
      aux_sym_string_literal_token1,
    ACTIONS(681), 1,
      anon_sym_DASH,
    STATE(105), 1,
      sym__expression,
    ACTIONS(35), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(133), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(25), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(117), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [11982] = 2,
    ACTIONS(685), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(683), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12006] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(153), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12046] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(42), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12086] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(43), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12126] = 10,
    ACTIONS(601), 1,
      sym_identifier,
    ACTIONS(603), 1,
      anon_sym_for,
    ACTIONS(653), 1,
      anon_sym_DOT_DOT,
    ACTIONS(655), 1,
      anon_sym_DASH,
    ACTIONS(657), 1,
      aux_sym_string_literal_token1,
    STATE(163), 1,
      sym__expression,
    ACTIONS(613), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(212), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(615), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(216), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12166] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(48), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12206] = 2,
    ACTIONS(689), 9,
      sym_float_literal,
      anon_sym_PLUS_PLUS,
      anon_sym_DASH_DASH,
      anon_sym_DOT_DOT,
      sym_integer_literal,
      aux_sym_string_literal_token1,
      sym_char_literal,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
    ACTIONS(687), 10,
      anon_sym_while,
      anon_sym_continue,
      anon_sym_for,
      anon_sym_let,
      anon_sym_DASH,
      anon_sym_return,
      anon_sym_if,
      anon_sym_true,
      anon_sym_false,
      sym_identifier,
  [12230] = 10,
    ACTIONS(39), 1,
      anon_sym_for,
    ACTIONS(41), 1,
      anon_sym_DOT_DOT,
    ACTIONS(55), 1,
      aux_sym_string_literal_token1,
    ACTIONS(663), 1,
      sym_identifier,
    ACTIONS(665), 1,
      anon_sym_DASH,
    STATE(173), 1,
      sym__expression,
    ACTIONS(57), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(156), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(667), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(161), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12270] = 10,
    ACTIONS(147), 1,
      sym_identifier,
    ACTIONS(157), 1,
      anon_sym_for,
    ACTIONS(159), 1,
      anon_sym_DOT_DOT,
    ACTIONS(169), 1,
      aux_sym_string_literal_token1,
    ACTIONS(675), 1,
      anon_sym_DASH,
    STATE(47), 1,
      sym__expression,
    ACTIONS(177), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(70), 2,
      sym_string_literal,
      sym_boolean_literal,
    ACTIONS(167), 3,
      sym_float_literal,
      sym_integer_literal,
      sym_char_literal,
    STATE(68), 6,
      sym_for_expression,
      sym_call_expression,
      sym_range_expression,
      sym_unary_expression,
      sym_binary_expression,
      sym__literal,
  [12310] = 2,
    ACTIONS(577), 1,
      anon_sym_LF,
    ACTIONS(629), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12319] = 3,
    ACTIONS(691), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(693), 2,
      sym__string_content,
      sym_escape_sequence,
  [12330] = 3,
    ACTIONS(695), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(693), 2,
      sym__string_content,
      sym_escape_sequence,
  [12341] = 2,
    ACTIONS(625), 1,
      anon_sym_LF,
    ACTIONS(623), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12350] = 2,
    ACTIONS(579), 1,
      anon_sym_LF,
    ACTIONS(627), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12359] = 3,
    ACTIONS(697), 1,
      anon_sym_DQUOTE,
    STATE(288), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(699), 2,
      sym__string_content,
      sym_escape_sequence,
  [12370] = 3,
    ACTIONS(171), 1,
      anon_sym_LBRACE,
    ACTIONS(701), 1,
      anon_sym_if,
    STATE(224), 2,
      sym_block,
      sym_if_statement,
  [12381] = 1,
    ACTIONS(443), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [12388] = 1,
    ACTIONS(435), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [12395] = 4,
    ACTIONS(593), 1,
      anon_sym_SEMI,
    ACTIONS(595), 1,
      anon_sym_LF,
    ACTIONS(703), 1,
      anon_sym_COLON,
    ACTIONS(705), 1,
      anon_sym_EQ,
  [12408] = 2,
    ACTIONS(589), 1,
      anon_sym_LF,
    ACTIONS(591), 3,
      anon_sym_SEMI,
      anon_sym_COLON,
      anon_sym_EQ,
  [12417] = 4,
    ACTIONS(581), 1,
      anon_sym_SEMI,
    ACTIONS(583), 1,
      anon_sym_LF,
    ACTIONS(707), 1,
      anon_sym_COLON,
    ACTIONS(709), 1,
      anon_sym_EQ,
  [12430] = 3,
    ACTIONS(711), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(713), 2,
      sym__string_content,
      sym_escape_sequence,
  [12441] = 3,
    ACTIONS(716), 1,
      anon_sym_DQUOTE,
    STATE(300), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(718), 2,
      sym__string_content,
      sym_escape_sequence,
  [12452] = 3,
    ACTIONS(720), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(693), 2,
      sym__string_content,
      sym_escape_sequence,
  [12463] = 4,
    ACTIONS(617), 1,
      anon_sym_SEMI,
    ACTIONS(619), 1,
      anon_sym_LF,
    ACTIONS(722), 1,
      anon_sym_else,
    STATE(330), 1,
      sym_else_clause,
  [12476] = 3,
    ACTIONS(724), 1,
      anon_sym_DQUOTE,
    STATE(287), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(726), 2,
      sym__string_content,
      sym_escape_sequence,
  [12487] = 3,
    ACTIONS(31), 1,
      anon_sym_LBRACE,
    ACTIONS(728), 1,
      anon_sym_if,
    STATE(329), 2,
      sym_block,
      sym_if_statement,
  [12498] = 3,
    ACTIONS(730), 1,
      anon_sym_DQUOTE,
    STATE(298), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(693), 2,
      sym__string_content,
      sym_escape_sequence,
  [12509] = 3,
    ACTIONS(732), 1,
      anon_sym_DQUOTE,
    STATE(304), 1,
      aux_sym_string_literal_repeat1,
    ACTIONS(734), 2,
      sym__string_content,
      sym_escape_sequence,
  [12520] = 1,
    ACTIONS(447), 4,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_LBRACE,
  [12527] = 3,
    ACTIONS(575), 1,
      anon_sym_RPAREN,
    ACTIONS(736), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12537] = 3,
    ACTIONS(83), 1,
      anon_sym_RPAREN,
    ACTIONS(523), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12547] = 3,
    ACTIONS(739), 1,
      anon_sym_COMMA,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
    STATE(319), 1,
      aux_sym_parameters_repeat1,
  [12557] = 3,
    ACTIONS(647), 1,
      anon_sym_SEMI,
    ACTIONS(649), 1,
      anon_sym_LF,
    ACTIONS(743), 1,
      anon_sym_EQ,
  [12567] = 3,
    ACTIONS(641), 1,
      anon_sym_SEMI,
    ACTIONS(643), 1,
      anon_sym_LF,
    ACTIONS(745), 1,
      anon_sym_EQ,
  [12577] = 3,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    ACTIONS(747), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12587] = 2,
    ACTIONS(435), 1,
      anon_sym_LF,
    ACTIONS(433), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [12595] = 2,
    ACTIONS(443), 1,
      anon_sym_LF,
    ACTIONS(441), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [12603] = 3,
    ACTIONS(749), 1,
      anon_sym_DASH_GT,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    STATE(200), 1,
      sym_block,
  [12613] = 3,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12623] = 3,
    ACTIONS(753), 1,
      anon_sym_COMMA,
    ACTIONS(756), 1,
      anon_sym_RPAREN,
    STATE(317), 1,
      aux_sym_parameters_repeat1,
  [12633] = 3,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(758), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12643] = 3,
    ACTIONS(409), 1,
      anon_sym_RPAREN,
    ACTIONS(760), 1,
      anon_sym_COMMA,
    STATE(317), 1,
      aux_sym_parameters_repeat1,
  [12653] = 3,
    ACTIONS(93), 1,
      anon_sym_RPAREN,
    ACTIONS(517), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12663] = 3,
    ACTIONS(87), 1,
      anon_sym_RPAREN,
    ACTIONS(762), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12673] = 2,
    ACTIONS(447), 1,
      anon_sym_LF,
    ACTIONS(445), 2,
      anon_sym_SEMI,
      anon_sym_EQ,
  [12681] = 3,
    ACTIONS(73), 1,
      anon_sym_RPAREN,
    ACTIONS(764), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12691] = 3,
    ACTIONS(75), 1,
      anon_sym_RPAREN,
    ACTIONS(529), 1,
      anon_sym_COMMA,
    STATE(307), 1,
      aux_sym_arguments_repeat2,
  [12701] = 1,
    ACTIONS(451), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12706] = 1,
    ACTIONS(766), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [12711] = 1,
    ACTIONS(768), 2,
      sym_float_literal,
      sym_integer_literal,
  [12716] = 1,
    ACTIONS(589), 2,
      anon_sym_in,
      anon_sym_COLON,
  [12721] = 2,
    ACTIONS(659), 1,
      anon_sym_SEMI,
    ACTIONS(661), 1,
      anon_sym_LF,
  [12728] = 2,
    ACTIONS(677), 1,
      anon_sym_SEMI,
    ACTIONS(679), 1,
      anon_sym_LF,
  [12735] = 2,
    ACTIONS(683), 1,
      anon_sym_SEMI,
    ACTIONS(685), 1,
      anon_sym_LF,
  [12742] = 2,
    ACTIONS(770), 1,
      anon_sym_LPAREN,
    STATE(315), 1,
      sym_parameters,
  [12749] = 1,
    ACTIONS(756), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12754] = 2,
    ACTIONS(687), 1,
      anon_sym_SEMI,
    ACTIONS(689), 1,
      anon_sym_LF,
  [12761] = 2,
    ACTIONS(473), 1,
      anon_sym_LF,
    ACTIONS(475), 1,
      anon_sym_SEMI,
  [12768] = 1,
    ACTIONS(439), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [12773] = 2,
    ACTIONS(751), 1,
      anon_sym_LBRACE,
    STATE(199), 1,
      sym_block,
  [12780] = 1,
    ACTIONS(772), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [12785] = 2,
    ACTIONS(669), 1,
      anon_sym_SEMI,
    ACTIONS(671), 1,
      anon_sym_LF,
  [12792] = 2,
    ACTIONS(288), 1,
      anon_sym_SEMI,
    ACTIONS(290), 1,
      anon_sym_LF,
  [12799] = 1,
    ACTIONS(625), 2,
      anon_sym_in,
      anon_sym_COLON,
  [12804] = 2,
    ACTIONS(280), 1,
      anon_sym_SEMI,
    ACTIONS(282), 1,
      anon_sym_LF,
  [12811] = 1,
    ACTIONS(774), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [12816] = 1,
    ACTIONS(776), 2,
      sym_float_literal,
      sym_integer_literal,
  [12821] = 1,
    ACTIONS(778), 2,
      anon_sym_DASH_GT,
      anon_sym_LBRACE,
  [12826] = 1,
    ACTIONS(579), 2,
      anon_sym_in,
      anon_sym_COLON,
  [12831] = 1,
    ACTIONS(577), 2,
      anon_sym_in,
      anon_sym_COLON,
  [12836] = 1,
    ACTIONS(780), 2,
      sym_float_literal,
      sym_integer_literal,
  [12841] = 1,
    ACTIONS(782), 1,
      sym_identifier,
  [12845] = 1,
    ACTIONS(784), 1,
      anon_sym_COLON,
  [12849] = 1,
    ACTIONS(786), 1,
      anon_sym_COLON,
  [12853] = 1,
    ACTIONS(788), 1,
      anon_sym_RBRACK,
  [12857] = 1,
    ACTIONS(790), 1,
      anon_sym_RBRACK,
  [12861] = 1,
    ACTIONS(792), 1,
      anon_sym_COLON,
  [12865] = 1,
    ACTIONS(794), 1,
      anon_sym_in,
  [12869] = 1,
    ACTIONS(539), 1,
      anon_sym_RPAREN,
  [12873] = 1,
    ACTIONS(796), 1,
      anon_sym_RBRACK,
  [12877] = 1,
    ACTIONS(741), 1,
      anon_sym_RPAREN,
  [12881] = 1,
    ACTIONS(527), 1,
      anon_sym_RPAREN,
  [12885] = 1,
    ACTIONS(549), 1,
      anon_sym_RPAREN,
  [12889] = 1,
    ACTIONS(798), 1,
      anon_sym_in,
  [12893] = 1,
    ACTIONS(800), 1,
      anon_sym_RBRACK,
  [12897] = 1,
    ACTIONS(802), 1,
      anon_sym_in,
  [12901] = 1,
    ACTIONS(804), 1,
      anon_sym_in,
  [12905] = 1,
    ACTIONS(806), 1,
      ts_builtin_sym_end,
  [12909] = 1,
    ACTIONS(808), 1,
      anon_sym_COLON,
  [12913] = 1,
    ACTIONS(521), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 82,
  [SMALL_STATE(4)] = 164,
  [SMALL_STATE(5)] = 246,
  [SMALL_STATE(6)] = 328,
  [SMALL_STATE(7)] = 407,
  [SMALL_STATE(8)] = 486,
  [SMALL_STATE(9)] = 565,
  [SMALL_STATE(10)] = 644,
  [SMALL_STATE(11)] = 723,
  [SMALL_STATE(12)] = 802,
  [SMALL_STATE(13)] = 881,
  [SMALL_STATE(14)] = 960,
  [SMALL_STATE(15)] = 1039,
  [SMALL_STATE(16)] = 1118,
  [SMALL_STATE(17)] = 1197,
  [SMALL_STATE(18)] = 1276,
  [SMALL_STATE(19)] = 1352,
  [SMALL_STATE(20)] = 1428,
  [SMALL_STATE(21)] = 1504,
  [SMALL_STATE(22)] = 1580,
  [SMALL_STATE(23)] = 1656,
  [SMALL_STATE(24)] = 1732,
  [SMALL_STATE(25)] = 1820,
  [SMALL_STATE(26)] = 1908,
  [SMALL_STATE(27)] = 1989,
  [SMALL_STATE(28)] = 2070,
  [SMALL_STATE(29)] = 2151,
  [SMALL_STATE(30)] = 2232,
  [SMALL_STATE(31)] = 2313,
  [SMALL_STATE(32)] = 2394,
  [SMALL_STATE(33)] = 2475,
  [SMALL_STATE(34)] = 2556,
  [SMALL_STATE(35)] = 2637,
  [SMALL_STATE(36)] = 2718,
  [SMALL_STATE(37)] = 2799,
  [SMALL_STATE(38)] = 2841,
  [SMALL_STATE(39)] = 2883,
  [SMALL_STATE(40)] = 2925,
  [SMALL_STATE(41)] = 2984,
  [SMALL_STATE(42)] = 3025,
  [SMALL_STATE(43)] = 3088,
  [SMALL_STATE(44)] = 3151,
  [SMALL_STATE(45)] = 3214,
  [SMALL_STATE(46)] = 3281,
  [SMALL_STATE(47)] = 3322,
  [SMALL_STATE(48)] = 3385,
  [SMALL_STATE(49)] = 3448,
  [SMALL_STATE(50)] = 3511,
  [SMALL_STATE(51)] = 3574,
  [SMALL_STATE(52)] = 3621,
  [SMALL_STATE(53)] = 3672,
  [SMALL_STATE(54)] = 3735,
  [SMALL_STATE(55)] = 3790,
  [SMALL_STATE(56)] = 3837,
  [SMALL_STATE(57)] = 3894,
  [SMALL_STATE(58)] = 3947,
  [SMALL_STATE(59)] = 3996,
  [SMALL_STATE(60)] = 4039,
  [SMALL_STATE(61)] = 4079,
  [SMALL_STATE(62)] = 4119,
  [SMALL_STATE(63)] = 4159,
  [SMALL_STATE(64)] = 4221,
  [SMALL_STATE(65)] = 4261,
  [SMALL_STATE(66)] = 4301,
  [SMALL_STATE(67)] = 4341,
  [SMALL_STATE(68)] = 4381,
  [SMALL_STATE(69)] = 4421,
  [SMALL_STATE(70)] = 4461,
  [SMALL_STATE(71)] = 4501,
  [SMALL_STATE(72)] = 4560,
  [SMALL_STATE(73)] = 4619,
  [SMALL_STATE(74)] = 4675,
  [SMALL_STATE(75)] = 4728,
  [SMALL_STATE(76)] = 4781,
  [SMALL_STATE(77)] = 4831,
  [SMALL_STATE(78)] = 4881,
  [SMALL_STATE(79)] = 4931,
  [SMALL_STATE(80)] = 4981,
  [SMALL_STATE(81)] = 5031,
  [SMALL_STATE(82)] = 5081,
  [SMALL_STATE(83)] = 5131,
  [SMALL_STATE(84)] = 5181,
  [SMALL_STATE(85)] = 5215,
  [SMALL_STATE(86)] = 5249,
  [SMALL_STATE(87)] = 5283,
  [SMALL_STATE(88)] = 5317,
  [SMALL_STATE(89)] = 5351,
  [SMALL_STATE(90)] = 5404,
  [SMALL_STATE(91)] = 5433,
  [SMALL_STATE(92)] = 5462,
  [SMALL_STATE(93)] = 5491,
  [SMALL_STATE(94)] = 5529,
  [SMALL_STATE(95)] = 5557,
  [SMALL_STATE(96)] = 5585,
  [SMALL_STATE(97)] = 5613,
  [SMALL_STATE(98)] = 5647,
  [SMALL_STATE(99)] = 5675,
  [SMALL_STATE(100)] = 5721,
  [SMALL_STATE(101)] = 5763,
  [SMALL_STATE(102)] = 5807,
  [SMALL_STATE(103)] = 5847,
  [SMALL_STATE(104)] = 5883,
  [SMALL_STATE(105)] = 5935,
  [SMALL_STATE(106)] = 5965,
  [SMALL_STATE(107)] = 5999,
  [SMALL_STATE(108)] = 6027,
  [SMALL_STATE(109)] = 6070,
  [SMALL_STATE(110)] = 6099,
  [SMALL_STATE(111)] = 6132,
  [SMALL_STATE(112)] = 6165,
  [SMALL_STATE(113)] = 6216,
  [SMALL_STATE(114)] = 6243,
  [SMALL_STATE(115)] = 6270,
  [SMALL_STATE(116)] = 6303,
  [SMALL_STATE(117)] = 6336,
  [SMALL_STATE(118)] = 6363,
  [SMALL_STATE(119)] = 6414,
  [SMALL_STATE(120)] = 6465,
  [SMALL_STATE(121)] = 6516,
  [SMALL_STATE(122)] = 6567,
  [SMALL_STATE(123)] = 6600,
  [SMALL_STATE(124)] = 6627,
  [SMALL_STATE(125)] = 6660,
  [SMALL_STATE(126)] = 6711,
  [SMALL_STATE(127)] = 6744,
  [SMALL_STATE(128)] = 6777,
  [SMALL_STATE(129)] = 6828,
  [SMALL_STATE(130)] = 6861,
  [SMALL_STATE(131)] = 6888,
  [SMALL_STATE(132)] = 6921,
  [SMALL_STATE(133)] = 6948,
  [SMALL_STATE(134)] = 6975,
  [SMALL_STATE(135)] = 7008,
  [SMALL_STATE(136)] = 7059,
  [SMALL_STATE(137)] = 7094,
  [SMALL_STATE(138)] = 7121,
  [SMALL_STATE(139)] = 7148,
  [SMALL_STATE(140)] = 7187,
  [SMALL_STATE(141)] = 7220,
  [SMALL_STATE(142)] = 7261,
  [SMALL_STATE(143)] = 7306,
  [SMALL_STATE(144)] = 7333,
  [SMALL_STATE(145)] = 7366,
  [SMALL_STATE(146)] = 7403,
  [SMALL_STATE(147)] = 7436,
  [SMALL_STATE(148)] = 7469,
  [SMALL_STATE(149)] = 7517,
  [SMALL_STATE(150)] = 7543,
  [SMALL_STATE(151)] = 7591,
  [SMALL_STATE(152)] = 7637,
  [SMALL_STATE(153)] = 7683,
  [SMALL_STATE(154)] = 7729,
  [SMALL_STATE(155)] = 7775,
  [SMALL_STATE(156)] = 7823,
  [SMALL_STATE(157)] = 7849,
  [SMALL_STATE(158)] = 7895,
  [SMALL_STATE(159)] = 7921,
  [SMALL_STATE(160)] = 7967,
  [SMALL_STATE(161)] = 7995,
  [SMALL_STATE(162)] = 8021,
  [SMALL_STATE(163)] = 8067,
  [SMALL_STATE(164)] = 8113,
  [SMALL_STATE(165)] = 8161,
  [SMALL_STATE(166)] = 8209,
  [SMALL_STATE(167)] = 8257,
  [SMALL_STATE(168)] = 8285,
  [SMALL_STATE(169)] = 8311,
  [SMALL_STATE(170)] = 8341,
  [SMALL_STATE(171)] = 8387,
  [SMALL_STATE(172)] = 8413,
  [SMALL_STATE(173)] = 8441,
  [SMALL_STATE(174)] = 8489,
  [SMALL_STATE(175)] = 8521,
  [SMALL_STATE(176)] = 8557,
  [SMALL_STATE(177)] = 8601,
  [SMALL_STATE(178)] = 8641,
  [SMALL_STATE(179)] = 8683,
  [SMALL_STATE(180)] = 8721,
  [SMALL_STATE(181)] = 8755,
  [SMALL_STATE(182)] = 8783,
  [SMALL_STATE(183)] = 8831,
  [SMALL_STATE(184)] = 8857,
  [SMALL_STATE(185)] = 8883,
  [SMALL_STATE(186)] = 8909,
  [SMALL_STATE(187)] = 8939,
  [SMALL_STATE(188)] = 8987,
  [SMALL_STATE(189)] = 9017,
  [SMALL_STATE(190)] = 9043,
  [SMALL_STATE(191)] = 9069,
  [SMALL_STATE(192)] = 9095,
  [SMALL_STATE(193)] = 9127,
  [SMALL_STATE(194)] = 9153,
  [SMALL_STATE(195)] = 9179,
  [SMALL_STATE(196)] = 9205,
  [SMALL_STATE(197)] = 9231,
  [SMALL_STATE(198)] = 9256,
  [SMALL_STATE(199)] = 9281,
  [SMALL_STATE(200)] = 9306,
  [SMALL_STATE(201)] = 9331,
  [SMALL_STATE(202)] = 9356,
  [SMALL_STATE(203)] = 9381,
  [SMALL_STATE(204)] = 9406,
  [SMALL_STATE(205)] = 9433,
  [SMALL_STATE(206)] = 9458,
  [SMALL_STATE(207)] = 9485,
  [SMALL_STATE(208)] = 9510,
  [SMALL_STATE(209)] = 9535,
  [SMALL_STATE(210)] = 9560,
  [SMALL_STATE(211)] = 9585,
  [SMALL_STATE(212)] = 9610,
  [SMALL_STATE(213)] = 9635,
  [SMALL_STATE(214)] = 9660,
  [SMALL_STATE(215)] = 9685,
  [SMALL_STATE(216)] = 9710,
  [SMALL_STATE(217)] = 9735,
  [SMALL_STATE(218)] = 9760,
  [SMALL_STATE(219)] = 9785,
  [SMALL_STATE(220)] = 9810,
  [SMALL_STATE(221)] = 9835,
  [SMALL_STATE(222)] = 9860,
  [SMALL_STATE(223)] = 9884,
  [SMALL_STATE(224)] = 9924,
  [SMALL_STATE(225)] = 9948,
  [SMALL_STATE(226)] = 9988,
  [SMALL_STATE(227)] = 10028,
  [SMALL_STATE(228)] = 10068,
  [SMALL_STATE(229)] = 10108,
  [SMALL_STATE(230)] = 10148,
  [SMALL_STATE(231)] = 10188,
  [SMALL_STATE(232)] = 10228,
  [SMALL_STATE(233)] = 10268,
  [SMALL_STATE(234)] = 10308,
  [SMALL_STATE(235)] = 10348,
  [SMALL_STATE(236)] = 10388,
  [SMALL_STATE(237)] = 10428,
  [SMALL_STATE(238)] = 10468,
  [SMALL_STATE(239)] = 10508,
  [SMALL_STATE(240)] = 10548,
  [SMALL_STATE(241)] = 10588,
  [SMALL_STATE(242)] = 10628,
  [SMALL_STATE(243)] = 10668,
  [SMALL_STATE(244)] = 10708,
  [SMALL_STATE(245)] = 10748,
  [SMALL_STATE(246)] = 10788,
  [SMALL_STATE(247)] = 10828,
  [SMALL_STATE(248)] = 10852,
  [SMALL_STATE(249)] = 10894,
  [SMALL_STATE(250)] = 10934,
  [SMALL_STATE(251)] = 10974,
  [SMALL_STATE(252)] = 10998,
  [SMALL_STATE(253)] = 11038,
  [SMALL_STATE(254)] = 11078,
  [SMALL_STATE(255)] = 11118,
  [SMALL_STATE(256)] = 11158,
  [SMALL_STATE(257)] = 11198,
  [SMALL_STATE(258)] = 11238,
  [SMALL_STATE(259)] = 11278,
  [SMALL_STATE(260)] = 11318,
  [SMALL_STATE(261)] = 11358,
  [SMALL_STATE(262)] = 11398,
  [SMALL_STATE(263)] = 11438,
  [SMALL_STATE(264)] = 11478,
  [SMALL_STATE(265)] = 11518,
  [SMALL_STATE(266)] = 11542,
  [SMALL_STATE(267)] = 11582,
  [SMALL_STATE(268)] = 11622,
  [SMALL_STATE(269)] = 11662,
  [SMALL_STATE(270)] = 11702,
  [SMALL_STATE(271)] = 11742,
  [SMALL_STATE(272)] = 11782,
  [SMALL_STATE(273)] = 11822,
  [SMALL_STATE(274)] = 11862,
  [SMALL_STATE(275)] = 11902,
  [SMALL_STATE(276)] = 11942,
  [SMALL_STATE(277)] = 11982,
  [SMALL_STATE(278)] = 12006,
  [SMALL_STATE(279)] = 12046,
  [SMALL_STATE(280)] = 12086,
  [SMALL_STATE(281)] = 12126,
  [SMALL_STATE(282)] = 12166,
  [SMALL_STATE(283)] = 12206,
  [SMALL_STATE(284)] = 12230,
  [SMALL_STATE(285)] = 12270,
  [SMALL_STATE(286)] = 12310,
  [SMALL_STATE(287)] = 12319,
  [SMALL_STATE(288)] = 12330,
  [SMALL_STATE(289)] = 12341,
  [SMALL_STATE(290)] = 12350,
  [SMALL_STATE(291)] = 12359,
  [SMALL_STATE(292)] = 12370,
  [SMALL_STATE(293)] = 12381,
  [SMALL_STATE(294)] = 12388,
  [SMALL_STATE(295)] = 12395,
  [SMALL_STATE(296)] = 12408,
  [SMALL_STATE(297)] = 12417,
  [SMALL_STATE(298)] = 12430,
  [SMALL_STATE(299)] = 12441,
  [SMALL_STATE(300)] = 12452,
  [SMALL_STATE(301)] = 12463,
  [SMALL_STATE(302)] = 12476,
  [SMALL_STATE(303)] = 12487,
  [SMALL_STATE(304)] = 12498,
  [SMALL_STATE(305)] = 12509,
  [SMALL_STATE(306)] = 12520,
  [SMALL_STATE(307)] = 12527,
  [SMALL_STATE(308)] = 12537,
  [SMALL_STATE(309)] = 12547,
  [SMALL_STATE(310)] = 12557,
  [SMALL_STATE(311)] = 12567,
  [SMALL_STATE(312)] = 12577,
  [SMALL_STATE(313)] = 12587,
  [SMALL_STATE(314)] = 12595,
  [SMALL_STATE(315)] = 12603,
  [SMALL_STATE(316)] = 12613,
  [SMALL_STATE(317)] = 12623,
  [SMALL_STATE(318)] = 12633,
  [SMALL_STATE(319)] = 12643,
  [SMALL_STATE(320)] = 12653,
  [SMALL_STATE(321)] = 12663,
  [SMALL_STATE(322)] = 12673,
  [SMALL_STATE(323)] = 12681,
  [SMALL_STATE(324)] = 12691,
  [SMALL_STATE(325)] = 12701,
  [SMALL_STATE(326)] = 12706,
  [SMALL_STATE(327)] = 12711,
  [SMALL_STATE(328)] = 12716,
  [SMALL_STATE(329)] = 12721,
  [SMALL_STATE(330)] = 12728,
  [SMALL_STATE(331)] = 12735,
  [SMALL_STATE(332)] = 12742,
  [SMALL_STATE(333)] = 12749,
  [SMALL_STATE(334)] = 12754,
  [SMALL_STATE(335)] = 12761,
  [SMALL_STATE(336)] = 12768,
  [SMALL_STATE(337)] = 12773,
  [SMALL_STATE(338)] = 12780,
  [SMALL_STATE(339)] = 12785,
  [SMALL_STATE(340)] = 12792,
  [SMALL_STATE(341)] = 12799,
  [SMALL_STATE(342)] = 12804,
  [SMALL_STATE(343)] = 12811,
  [SMALL_STATE(344)] = 12816,
  [SMALL_STATE(345)] = 12821,
  [SMALL_STATE(346)] = 12826,
  [SMALL_STATE(347)] = 12831,
  [SMALL_STATE(348)] = 12836,
  [SMALL_STATE(349)] = 12841,
  [SMALL_STATE(350)] = 12845,
  [SMALL_STATE(351)] = 12849,
  [SMALL_STATE(352)] = 12853,
  [SMALL_STATE(353)] = 12857,
  [SMALL_STATE(354)] = 12861,
  [SMALL_STATE(355)] = 12865,
  [SMALL_STATE(356)] = 12869,
  [SMALL_STATE(357)] = 12873,
  [SMALL_STATE(358)] = 12877,
  [SMALL_STATE(359)] = 12881,
  [SMALL_STATE(360)] = 12885,
  [SMALL_STATE(361)] = 12889,
  [SMALL_STATE(362)] = 12893,
  [SMALL_STATE(363)] = 12897,
  [SMALL_STATE(364)] = 12901,
  [SMALL_STATE(365)] = 12905,
  [SMALL_STATE(366)] = 12909,
  [SMALL_STATE(367)] = 12913,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(117),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(239),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(339),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(349),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(167),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(82),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(341),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(117),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(239),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(226),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(238),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(339),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(79),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(114),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(75),
  [123] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(266),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(187),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(133),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(302),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(349),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [141] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(250),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(228),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [157] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [189] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(68),
  [192] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(228),
  [195] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(279),
  [198] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(280),
  [201] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(247),
  [204] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(76),
  [207] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(69),
  [210] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(74),
  [213] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(249),
  [216] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(89),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(70),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(305),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(36),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(227),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(39),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 2),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 2),
  [248] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_literal, 3),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_literal, 3),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_boolean_literal, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expression, 3, .production_id = 7),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [264] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [280] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_increment_statement, 2),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_increment_statement, 2),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_decrement_statement, 2),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decrement_statement, 2),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 2),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 2),
  [296] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_block_repeat1, 1),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_block_repeat1, 1),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3),
  [308] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [310] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 10),
  [312] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 15),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 15),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 6, .production_id = 18),
  [318] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 6, .production_id = 18),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 7, .production_id = 20),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 7, .production_id = 20),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(346),
  [327] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(341),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(80),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(344),
  [340] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(328),
  [343] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(291),
  [346] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_arguments_repeat1, 2), SHIFT_REPEAT(96),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expression, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expression, 2),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 3),
  [355] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 3),
  [357] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 3),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 3),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 6),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 6),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [367] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_call_expression, 2, .production_id = 3),
  [369] = {.entry = {.count = 1, .reusable = false}}, SHIFT(346),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [375] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [377] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 5),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 5),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 4),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_for_expression, 5, .production_id = 13),
  [391] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_for_expression, 5, .production_id = 13),
  [393] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_arguments, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_arguments, 2),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expression, 1),
  [399] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expression, 1),
  [401] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_range_expression, 1),
  [403] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range_expression, 1),
  [405] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal, 1),
  [407] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal, 1),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [413] = {.entry = {.count = 1, .reusable = false}}, SHIFT(191),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(190),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(290),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [429] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1, .production_id = 8),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1, .production_id = 8),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 4, .production_id = 9),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__type, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__type, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_array_type, 3, .production_id = 17),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array_type, 3, .production_id = 17),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameter, 3, .production_id = 16),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_return_statement, 1),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return_statement, 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(276),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(275),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [469] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [471] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [475] = {.entry = {.count = 1, .reusable = false}}, SHIFT(201),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(342),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(340),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [483] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(293),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(241),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(219),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 3),
  [555] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(231),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_negative_literal, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1),
  [581] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 2, .production_id = 2),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__literal_pattern, 1),
  [591] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__literal_pattern, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 3, .production_id = 5),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [601] = {.entry = {.count = 1, .reusable = false}}, SHIFT(216),
  [603] = {.entry = {.count = 1, .reusable = false}}, SHIFT(77),
  [605] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [607] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [609] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [611] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 3, .production_id = 6),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pattern, 1, .production_id = 1),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pattern, 1),
  [629] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_negative_literal, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 6, .production_id = 19),
  [633] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 6, .production_id = 19),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [637] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function_declaration, 4, .production_id = 11),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [643] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 4, .production_id = 9),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [647] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_let_declaration, 5, .production_id = 14),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [659] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_else_clause, 2),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_else_clause, 2),
  [663] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [669] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_continue_statement, 1),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_continue_statement, 1),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [679] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_if_statement, 4, .production_id = 12),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [683] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [685] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_while_statement, 3, .production_id = 4),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_declaration, 1),
  [689] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_declaration, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [703] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [705] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [707] = {.entry = {.count = 1, .reusable = false}}, SHIFT(131),
  [709] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_literal_repeat1, 2), SHIFT_REPEAT(298),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [722] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_arguments_repeat2, 2), SHIFT_REPEAT(20),
  [739] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [743] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [753] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(73),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 5),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [772] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [778] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [806] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_jakt_external_scanner_create(void);
void tree_sitter_jakt_external_scanner_destroy(void *);
bool tree_sitter_jakt_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_jakt_external_scanner_serialize(void *, char *);
void tree_sitter_jakt_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jakt(void) {
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
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_jakt_external_scanner_create,
      tree_sitter_jakt_external_scanner_destroy,
      tree_sitter_jakt_external_scanner_scan,
      tree_sitter_jakt_external_scanner_serialize,
      tree_sitter_jakt_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
