const PREC = {
  COMMENT: 1,
  ASSIGN: 2,
  OR: 3,
  AND: 4,
  PLUS: 5,
  TIMES: 6,
  UNARY: 7,
  CALL: 8,
  RETURN: -1
};

module.exports = grammar({
  name: 'pinescript',

  extras: $ => [
    $.comment,
    /\s/
  ],

  word: $ => $.identifier,

  conflicts: $ => [
    [$.return_statement, $.expression]
  ],

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.version_declaration,
      $.indicator_declaration,
      $.function_definition,
      $.variable_declaration,
      $.statement,
      $.comment
    ),

    // Version declaration
    version_declaration: $ => seq(
      '@version',
      $.string
    ),

    // Indicator declaration
    indicator_declaration: $ => seq(
      choice('indicator', 'strategy', 'study'),
      $.string,
      optional($.parameter_list)
    ),

    // Function definition
    function_definition: $ => seq(
      'method',
      field('name', $.identifier),
      '(',
      optional($.parameter_list),
      ')',
      '=>',
      $.block
    ),

    // Variable declaration
    variable_declaration: $ => seq(
      choice('var', 'const'),
      field('name', $.identifier),
      '=',
      $.expression
    ),

    // Parameter list
    parameter_list: $ => seq(
      '(',
      sepBy(',', $.parameter),
      ')'
    ),

    parameter: $ => seq(
      field('name', $.identifier),
      optional(seq('=', $.expression))
    ),

    // Statements
    statement: $ => choice(
      $.if_statement,
      $.for_statement,
      $.assignment,
      $.function_call,
      $.return_statement
    ),

    if_statement: $ => prec.right(seq(
      'if',
      $.expression,
      $.block,
      optional(seq(
        'else',
        choice($.block, $.if_statement)
      ))
    )),

    for_statement: $ => seq(
      'for',
      field('name', $.identifier),
      '=',
      $.expression,
      'to',
      $.expression,
      optional(seq('by', $.expression)),
      $.block
    ),

    assignment: $ => seq(
      field('left', $.identifier),
      choice('=', ':='),
      $.expression
    ),

    return_statement: $ => prec.right(PREC.RETURN, seq(
      'return',
      optional(field('value', $.expression))
    )),

    // Expressions
    expression: $ => choice(
      $.identifier,
      $.number,
      $.string,
      $.boolean,
      $.array,
      $.function_call,
      $.binary_expression,
      $.unary_expression,
      $.parenthesized_expression
    ),

    binary_expression: $ => prec.left(seq(
      field('left', $.expression),
      field('operator', choice(
        '+', '-', '*', '/',
        '>', '<', '>=', '<=',
        '==', '!=',
        'and', 'or'
      )),
      field('right', $.expression)
    )),

    unary_expression: $ => prec(PREC.UNARY, seq(
      field('operator', choice('-', 'not')),
      field('argument', $.expression)
    )),

    parenthesized_expression: $ => seq(
      '(',
      $.expression,
      ')'
    ),

    block: $ => seq(
      '{',
      repeat($._definition),
      '}'
    ),

    function_call: $ => prec(PREC.CALL, seq(
      field('name', $.identifier),
      '(',
      optional(sepBy(',', $.expression)),
      ')'
    )),

    array: $ => seq(
      '[',
      optional(sepBy(',', $.expression)),
      ']'
    ),

    // Basic elements
    identifier: () => /[a-zA-Z_][a-zA-Z0-9_]*/,
    number: () => /\d+(\.\d+)?/,
    string: () => /"[^"]*"/,
    boolean: () => choice('true', 'false'),
    comment: () => token(choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )
    ))
  }
});

function sepBy(sep, rule) {
  return optional(seq(rule, repeat(seq(sep, rule))));
}
