const PREC = {
  field: 14,
  range: 13,
  call: 12,
  unary: 11,
  multiplicative: 10,
  additive: 9,
  shift: 8,
  bitand: 7,
  bitxor: 6,
  bitor: 5,
  comparative: 4,
  and: 3,
  or: 2,
  assign: 0,
}

const numeric_types = [
  'u8',
  'i8',
  'u16',
  'i16',
  'u32',
  'i32',
  'u64',
  'i64',
  'u128',
  'i128',
  'isize',
  'usize',
  'uz',
  'f32',
  'f64',
  'c_int',
]

const primitive_types = numeric_types.concat(['bool', 'String', 'c_char'])

terminator = choice('\n', ';')

module.exports = grammar({
  name: 'jakt',

  word: $ => $.identifier,

  extras: $ => [/\s/, $.line_comment],

  externals: $ => [
    $._string_content,
    $.float_literal,
  ],

  supertypes: $ => [
    $._expression,
    $._type,
    $._literal,
    $._literal_pattern,
    $._statement,
    $._pattern,
  ],

  inline: $ => [
    $._type_identifier,
    $._statement,
    $.declaration,
    $.field_identifier,
  ],

  conflicts: $ => [
    [$._type, $._pattern],
    [$.parameters, $._pattern],
    [$.field_declaration_list, $.ordered_field_declaration_list],
  ],

  rules: {

    source_file: $ => repeat(choice(
      seq($._statement, terminator),
      $._top_level_declaration,
    )),

    _statement: $ => choice(
      $.declaration,
      $._expression,
      $.block,
      $.if_statement,
      $.return_statement,
      $.while_statement,
      $.increment_statement,
      $.decrement_statement,
      $.continue_statement,
      $.throw_statement,
      $.defer_statement,
    ),

    declaration: $ => choice(
      $.let_declaration,
      $.mutable_declaration,
      $.enum_declaration,
      $.struct_declaration,
      $.class_declaration,
    ),

    _expression: $ => choice(
      $.unary_expression,
      $.binary_expression,
      $._literal,
      $.identifier,
      $.call_expression,
      $.range_expression,
      $.for_expression,
      $.field_expression,
      $.static_member_expression,
      $.is_expression,
      $.type_conversion_expression,
      $.logical_not,
    ),

    while_statement: $ => seq(
      'while',
      field('condition', $._expression),
      field('body', $.block)
    ),

    increment_statement: $ => prec(1, choice(
      seq($.identifier, '++'),
      seq('++', $.identifier),
    )),

    decrement_statement: $ => prec(1, choice(
      seq($._expression, '--'),
      seq('--', $._expression),
    )),

    continue_statement: $ => 'continue',

    throw_statement: $ => seq(
      'throw',
      field('value', $._expression),
    ),

    defer_statement: $ => seq(
      'defer',
      choice(
        field('body', $.block),
        field('body', $._expression),
      )
    ),

    for_expression: $ => seq(
      'for',
      field('pattern', $._pattern),
      'in',
      field('value', $._expression),
      field('body', $.block)
    ),

    call_expression: $ => prec(PREC.call, seq(
      field('function', $._expression),
      field('arguments', $.arguments)
    )),

    range_expression: $ => prec.left(PREC.range, choice(
      seq($._expression, choice('..'), $._expression),
      '..'
    )),

    field_expression: $ => prec(PREC.field, seq(
      field('value', $._expression),
      '.',
      field('field', choice(
        $._field_identifier,
      ))
    )),

    static_member_expression: $ => prec(PREC.field, seq(
      field('value', $._expression),
      '::',
      field('field', choice(
        $._field_identifier,
      ))
    )),

    is_expression: $ =>  seq(
      prec.left(field('left', $._expression)),
      'is',
      prec.right(field('right', $._expression)),
    ),

    type_conversion_expression: $ =>  seq(
      prec.left(field('left', $._expression)),
      choice('as?', 'as!'),
      prec.right(alias(choice(...primitive_types), $.primitive_type)),
    ),

    logical_not: $ =>  prec.left(seq(
      'not',
      optional('('),
      $._expression,
      optional(')'),
    )),

    arguments: $ => seq(
      '(',
      optional(sepBy(',', choice(repeat($.argument), $._expression))),
      ')'
    ),

    argument: $ => seq(
      field('label', choice($._pattern)),
      ':',
      $._expression
    ),

    _top_level_declaration: $ => choice(
      $.function_declaration,
    ),

    _type: $ => choice(
      $.array_type,
      $._type_identifier,
      alias(choice(...primitive_types), $.primitive_type)
    ),

    array_type: $ => seq(
      '[',
      field('element', $._type),
      ']'
    ),

    let_declaration: $ => prec.left(seq(
      'let',
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', $._type)
      )),
      optional(seq(
        '=',
        field('value', $._expression),
      )),
      optional(';'),
    )),

    mutable_declaration: $ => seq(
      'mut',
      field('pattern', $._pattern),
      optional(seq(
        ':',
        field('type', $._type)
      )),
      optional(seq(
        '=',
        field('value', $._expression)
      )),
    ),

    boxed_specifier: $ => seq('boxed'),

    enum_declaration: $ => seq(
      optional($.boxed_specifier),
      'enum',
      field('name', choice($._type_identifier, optional($.enum_integral_type))),
      field('body', $.enum_variant_list)
    ),

    enum_integral_type: $ => seq(
      $.identifier,
      ':',
      $._type,
    ),

    enum_variant_list: $ => seq(
      '{',
      sepBy('\n', repeat($.enum_variant)),
      '}'
    ),

    enum_variant: $ => seq(
      field('name', $.identifier),
      field('body', optional(choice(
        $.field_declaration_list,
        $.ordered_field_declaration_list
      ))),
      optional(seq(
        '=',
        field('value', $._expression)
      ))
    ),

    field_declaration_list: $ => seq(
      '{',
      sepByPost('\n', $.field_declaration),
      sepBy(',', $.field_declaration),
      '}'
    ),

    field_declaration: $ => seq(
      field('name', $._field_identifier),
      ':',
      field('type', $._type)
    ),

    _field_identifier: $ => alias($.identifier, $.field_identifier),

    ordered_field_declaration_list: $ => seq(
      '(',
      choice(
        alias(choice(...primitive_types), $.primitive_type),
        sepByPost('\n', $.field_declaration),
        sepBy(',', $.field_declaration),
      ),
      ')',
    ),

    struct_declaration: $ => seq(
      'struct',
      field('name', choice($._type_identifier)),
      field('body', $.field_declaration_list)
    ),

    class_declaration: $ => seq(
      'class',
      field('name', choice($._type_identifier)),
      field('body', $.field_declaration_list)
    ),

    mutable_specifier: $ => 'mut',

    unary_expression: $ => prec(PREC.unary, seq(
      '-', $._expression
    )),

    return_statement: $ => choice(
      prec.left(seq('return', $._expression)),
      prec(-1, 'return'),
    ),

    binary_expression: $ => {
      const table = [
        [PREC.and, 'and'],
        [PREC.or, 'or'],
        [PREC.bitand, '&'],
        [PREC.bitor, '|'],
        [PREC.bitxor, '^'],
        [PREC.comparative, choice('==', '!=', '<', '<=', '>', '>=')],
        [PREC.shift, choice('<<', '>>')],
        [PREC.additive, choice('+', '-', '+=')],
        [PREC.multiplicative, choice('*', '/', '%')],
      ];

      return choice(...table.map(([precedence, operator]) => prec.left(precedence, seq(
        field('left', $._expression),
        field('operator', operator),
        field('right', $._expression),
      ))));
    },

    _literal: $ => choice(
      $.string_literal,
      $.char_literal,
      $.byte_literal,
      $.boolean_literal,
      $.integer_literal,
      $.binary_literal,
      $.float_literal,
    ),

    _pattern: $ => choice(
      $._literal_pattern,
      alias(choice(...primitive_types), $.identifier),
      $.identifier,
    ),

    _literal_pattern: $ => choice(
      $.string_literal,
      $.char_literal,
      $.boolean_literal,
      $.integer_literal,
      $.float_literal,
      $.negative_literal,
    ),

    negative_literal: $ => seq('-', choice($.integer_literal, $.float_literal)),

    integer_literal: $ => token(seq(
      choice(
        /[0-9][0-9_]*/,
        /0x[0-9a-fA-F_]+/,
        /0o[0-7_]+/,
      ),
      optional(choice(...numeric_types))
    )),

    binary_literal: $ => token(seq(
      choice(
        /0b[01_]+/,
      ),
    )),

    string_literal: $ => seq(
      alias(/b?"/, '"'),
      repeat(choice(
        $.escape_sequence,
        $._string_content
      )),
      token.immediate('"')
    ),

    char_literal: $ => token(seq(
      '\'',
      optional(choice(
        seq('\\', choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )),
        /[^\\']/
      )),
      '\''
    )),

    byte_literal: $ => token(seq(
      'b',
      '\'',
      optional(choice(
        seq('\\', choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )),
        /[^\\']/
      )),
      '\''
    )),

    escape_sequence: $ => token.immediate(
      seq('\\',
        choice(
          /[^xu]/,
          /u[0-9a-fA-F]{4}/,
          /u{[0-9a-fA-F]+}/,
          /x[0-9a-fA-F]{2}/
        )
    )),

    function_declaration: $ => seq(
      'function',
      field('name', $.identifier),
      field('parameters', $.parameters),
      optional(field('throws', $.throws_specifier)),
      optional(seq('->', field('return_type', $._type))),
      field('body', choice($.return_expression, $.block)),
    ),

    throws_specifier: $ => 'throws',

    return_expression: $ => seq(
      '=>',
      $._expression,
    ),

    parameters: $ => seq(
      '(',
      sepBy(',', seq(
        choice(
          $.parameter,
        ))),
      optional(','),
      ')'
    ),

    parameter: $ => seq(
      optional($.anonymous_specifier),
      field('pattern', choice(
        $._pattern,
      )),
      ':',
      field('type', $._type)
    ),

    anonymous_specifier: $ => 'anon',

    block: $ => seq(
      '{',
      repeat($._statement),
      '}'
    ),

    if_statement: $ => seq(
      'if',
      optional('('),
      field('condition', seq($._expression)),
      optional(')'),
      field('consequence', $.block),
      optional(field("alternative", $.else_clause))

    ),

    else_clause: $ => seq(
      'else',
      choice(
        $.block,
        $.if_statement,
      )
    ),

    boolean_literal: $ => choice('true', 'false'),

    comment: $ => $.line_comment,

    line_comment: $ => token(seq(
      '//', /.*/
    )),

    identifier: $ => /[_\p{XID_Start}][_\p{XID_Continue}]*/,
    _type_identifier: $ => alias($.identifier, $.type_identifier),
  }
});

function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)))
}

function sepBy2(sep, rule) {
  return repeat(seq(rule, sep))
}

function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule))
}

function sepByPost(sep, rule) {
  return optional(sepBy1(rule, sep))
}
