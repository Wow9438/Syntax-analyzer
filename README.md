# Syntax-analyzer-
syntax analyzer using Yacc for a java like language which has only methods(analogous to functions) and classes

1) Change the directory to where lex file and parser file(Yacc) are
present on terminal

2) On terminal execute these command in order
i) “lex lexer.l”(it produces "lex.yy.c")
ii)“bison -d -t parser.y”(it produces outputs "parser.tab.h" and
"parser.tab.c") (after this include "parser.tab.h" header in
lex.yy.c)
iii) “gcc lex.yy.c parser.tab.c”(it produces an executable "a.out")
iv) “./a.out i.txt”(where "i.txt" is input file)

3) After executing all those instructions, outputs are produced
namely
"seq_tokens_i.txt" and "parser_i.txt".

I had used lex(flex 2.6.4) for generating lex.yy.c and Yacc
Bison(GNU Bison 3.8.2) for generating "parser.tab.c" and
"parser.tab.h"
