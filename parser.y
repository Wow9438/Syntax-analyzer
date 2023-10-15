%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex();
int yyerror(char *s);
extern FILE* yyin;
extern FILE* tokens;
extern FILE* pars;
int x = 0 ;
extern int yylineno;

%}

%union{
	char*str;
}


%token <str>Ret <str>Bool <str>Do <str>Call <str>Void <str>Loop <str>Pred <str>Declare <str>Expr <str>Datatype <str>Else <str>Incase <str>While <str>For <str>Class <str>Func_type <str>Assign <str>Biop <str>Unop <str>Arrow <str>Opnbr <str>Clsbr <str>Opnpar <str>Clspar <str>Osqbr <str>Clsqbr <str>Smicln <str>Comma <str>Const1 <str>Const2 <str>Const3 <str>Id <str>Andor <str>Neg <str>Const4


%%
//Body of Complete Code 
Body : Method Body
	 |Classy Body
	 |;

//Method
Method : Fundec Opnpar Statements {if(x==0){yyerror(""); return 1;} else{x = 0;}} Clspar;

//Function definition
Fundec : Func_type Void Id Simp{fprintf(pars," : function definition\n");} 
        |Func_type Datatype Id Simp{fprintf(pars," : function definition\n");} 
		| Func_type Id Id  Simp{fprintf(pars," : function definition\n");};

//Arguments to functions incase of Function declaration i.e; with datatypes
Simp : Osqbr Const1 Clsqbr Opnbr Argu Clsbr 
	| Opnbr Clsbr;

Argu   : Type Id
		|Type Id Comma Argu;

//Class
Classy : Classdef Opnpar Clbody Clspar;

//Class of Body
Clbody : Opnpar Declstat Clspar
		| Opnpar Method Clspar
		| Opnpar Declstat Clbody Clspar
		| Opnpar Method Clbody Clspar 
		| Declstat | Method 
		| Declstat Clbody 
		| Method Clbody;
//Class Definition 
Classdef : Class Id Osqbr Const1 Clsqbr {fprintf(pars," : class definition");}
		| Classdef2 {fprintf(pars," : class definition");};
Classdef2 : Class Id ;

//Statements in function or function body
Statements : statement Statements
			|
			|Opnpar Statements Clspar;

//All type of statements
statement : Declstat 
			| Expressstat {fprintf(pars," : expression statement");} 
			| Callstat {fprintf(pars," : call statement");}
			| Condistat 
			|Callstatobj{fprintf(pars," : call statement with object");}
			| Loops 
			| Retstat {x++; fprintf(pars," : return statement");};

//Declaration statement
Declstat : Declare Type arg Smicln {fprintf(pars," : declaration statement");};

arg : Id 
	| Id Comma arg;

//Expression statement
Expressstat : Expr Id Assign RHS Smicln ;


//RHS of an expression statement
RHS1 : Const2 
	| Const3;
RHS2 :  RHS1
	|Const4
	|Bool
	|Id
	|Const1
	|Biop Opnbr L Comma L Clsbr;
Post : Unop Opnbr RHS Clsbr;
RHS3 :  Calls
	|Callobj;
RHS : RHS2
	|RHS3;
Type : Id 
	| Datatype
	|Void;



//Call Statement
Callstat : Calls Smicln{/*callstat printing*/};
Calls : Call Funcall 
		| post;
post : Post;
Funcall : Id Osqbr Const1 Clsqbr Opnbr argu Clsbr 
		| Id Opnbr Clsbr ;


argu :RHS Comma argu
	|RHS;

//Call statement 
Callstatobj : Callobj Smicln;

Callobj : Call Id Arrow Funcall;

Condistat : Incase Opnbr L Clsbr {fprintf(pars," : conditional statement");} Do Opnpar Statements Clspar else;

else : |Else {fprintf(pars," : conditional statement");} Opnpar Statements Clspar;

L1:M N|M;
M : RHS | Neg M|Opnbr L1 Clsbr;
N : Andor L1 |Pred L1;

L : L2|L1;

L2 : |Opnbr L2 Clsbr;
 
Loops : Loop While Opnbr L Clsbr{fprintf(pars," : loop\n");} Do Opnpar Statements Clspar 
		| For Opnbr Expressstat L Smicln Opt Clsbr{fprintf(pars," : loop\n");} Opnpar Statements Clspar;
Opt : 
	| Post;
	
Retstat : Ret L Smicln | Ret Void Smicln;

%%

int yyerror(char *s)
{
	fprintf(pars,"  : Invalid Statement",s,yylineno);
	return 0;
}

int main(int argc,char*argv[])
{	
	/* #ifdef YYDEBUG
	yydebug = 1;
	#endif
	yydebug = 0; */
	
	yyin = fopen(argv[1],"r");
	char s1[30] = "seq_tokens_";
	char s2[30] = "parser_";
	strcat(s1,argv[1]);
	strcat(s2,argv[1]);
	tokens = fopen(s1,"w");
	pars = fopen(s2,"w");
    yyparse();
	fclose(yyin);
	fclose(tokens);
	fclose(pars);
    return 0;
}