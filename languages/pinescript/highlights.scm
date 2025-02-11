[
  "if"
  "else"
  "for"
  "to"
  "by"
  "var"
  "return"
  "strategy"
  "indicator"
  "study"
  "@version"
] @keyword

(function_definition
  name: (identifier) @function)

(function_call
  name: (identifier) @function)

(variable_declaration
  name: (identifier) @variable)

(assignment
  left: (identifier) @variable)

(number) @number
(string) @string
(boolean) @constant.builtin

[
  "="
  ":="
  "+"
  "-"
  "*"
  "/"
  ">"
  "<"
  ">="
  "<="
  "=="
  "!="
  "and"
  "or"
  "not"
] @operator

(comment) @comment
