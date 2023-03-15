grammar VecCpp;

Identifier: [a-zA-Z_][a-zA-Z_0-9]* ;
Whitespace: [ \t\n\r\f]+ -> skip ;

fragment Digit: [0-9];
Integer: Digit+;

fragment Fractional
    : Integer? '.' Integer
    | Integer '.'
    ;

Float
    : Fractional ([eE] [+-]? Integer)?
    | Integer ([eE] [+-]? Integer)
    ;

Boolean
    : 'true'
    | 'false'
    ;

program
    : statement* EOF
    ;

statement
    : Identifier '=' expression
    | expression
    | funcdef
    | funccall
    ;

value
    : Integer
    | Float
    | Boolean
    | Identifier
    | list
    ;

expression
    : Identifier
    | value
    | array
    ;

list
    : '(' ( value+ ) ')'
    | '(' ')'
    ;
    
type
    : 'int'
    | 'float'
    | 'str'
    | 'byte'
    | 'bool'
    ;

array
    : type Identifier '@' Integer ((',' Integer)+)? ( '=' list )?
    ;

funcdef
    : Identifier '(' Identifier+ ')' '{' statement* '}'
    | Identifier '(' Identifier+ ')' '{' statement* 'return' value '}'
    ;

funccall: Identifier '(' value+ ')';
