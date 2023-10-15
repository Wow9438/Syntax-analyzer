%{
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"parser.tab.h"
FILE* tokens;
FILE*pars;
%}
/* Rules */
constant4 [-]?[1-9]?[0-9]+
constant1 [1-9][0-9]*
constant2 \"(\\.|[^"\\])*\"
constant3 ['].[']
variable [A-Za-z][A-Za-z0-9_]*
func_type ("global"|"local")
tf ("true"|"false")
class ("class")
for ("for")
while ("while")
biop ("add"|"sub"|"mul"|"div")
unop ("postincr"|"postdecr")
datatype ("int"|"char"|"string"|"bool")
void ("void")
semicolon [;]
comma [,]
incase  ("in case that")
else ("otherwise")
openbracket ("(")
closedbracket (")")
openpar ("{")
closedpar ("}")
opensqbr ("[")
closedsqbr ("]")
return ("return")
arrow ("->")
expr ("expr")
declare ("declare")
assignop ("=")
call ("call")
loop ("loop")
do ("do")
pred ("lt"|"gt"|"geq"|"leq"|"ne"|"eq")
andor ("or"|"and")
neg ("neg")
%%

^[ ]*\n {yylineno++;}
(" ") {/*print spaces in parser file*/fprintf(pars," ");}
(" ")* {}
("\n") {yylineno++;fprintf(pars,"\n");}
{datatype} {fprintf(tokens,"datatype : %s\n",yytext);fprintf(pars,"%s",yytext);return Datatype;}
{void} {fprintf(tokens,"datatype : %s\n",yytext);fprintf(pars,"%s",yytext);return Void;}
{do} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Do;}
{call} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Call;}
{loop} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Loop;}
{pred} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Pred;}
{andor} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Andor;}
{neg} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Neg;}
{declare} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Declare;}
{expr} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Expr;}
{return} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Ret;}
{else} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Else;}
{incase} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Incase;}
{while} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return While;}
{for} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return For;}
{class} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Class;}
{tf} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Bool;}
{func_type} {fprintf(tokens,"reserved keyword : %s\n",yytext);fprintf(pars,"%s",yytext);return Func_type;}
{assignop} {fprintf(tokens,"operator : %s\n",yytext);fprintf(pars,"%s",yytext);return Assign;}
{biop} {fprintf(tokens,"operator : %s\n",yytext);fprintf(pars,"%s",yytext);return Biop;}
{unop} {fprintf(tokens,"operator : %s\n",yytext);fprintf(pars,"%s",yytext);return Unop;}
{arrow} {fprintf(tokens,"operator : %s\n",yytext);fprintf(pars,"%s",yytext);return Arrow;}
{openbracket} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Opnbr;}
{closedbracket} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Clsbr;}
{openpar} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Opnpar;}
{closedpar} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Clspar;}
{opensqbr} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Osqbr;}
{closedsqbr} {fprintf(tokens,"special symbol : %s\n",yytext);fprintf(pars,"%s",yytext);return Clsqbr;}
{semicolon} {fprintf(tokens,"punctuation : %s\n",yytext);fprintf(pars,"%s",yytext);return Smicln;}
{comma} {fprintf(tokens,"punctuation : %s\n",yytext);fprintf(pars,"%s",yytext);return Comma;}
{constant1} {fprintf(tokens,"constant : %s\n",yytext);fprintf(pars,"%s",yytext);return Const1;}
{constant4} {fprintf(tokens,"constant : %s\n",yytext);fprintf(pars,"%s",yytext);return Const4;}
{constant2} {fprintf(pars,"%s",yytext);fprintf(tokens,"punctuation : %c\n",yytext[0]);for(int i =1;i<yyleng-1;i++){fprintf(tokens,"constant : %c",yytext[i]);}fprintf(tokens,"\npunctuation : %c\n",yytext[yyleng-1]);return Const2;}
{constant3} {fprintf(pars,"%s",yytext);fprintf(tokens,"punctuation : %c\n",yytext[0]);for(int i =1;i<yyleng-1;i++){fprintf(tokens,"constant : %c",yytext[i]);}fprintf(tokens,"\npunctuation : %c\n",yytext[yyleng-1]);return Const3;}
{variable} {fprintf(pars,"%s",yytext);fprintf(tokens,"id : %s\n",yytext);return Id;}

. {fprintf(tokens,"lexical error at %d",yylineno);return 0;}
%%

int yywrap(){
    return 1;
}