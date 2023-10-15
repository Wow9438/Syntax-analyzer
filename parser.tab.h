/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    Ret = 258,                     /* Ret  */
    Bool = 259,                    /* Bool  */
    Do = 260,                      /* Do  */
    Call = 261,                    /* Call  */
    Void = 262,                    /* Void  */
    Loop = 263,                    /* Loop  */
    Pred = 264,                    /* Pred  */
    Declare = 265,                 /* Declare  */
    Expr = 266,                    /* Expr  */
    Datatype = 267,                /* Datatype  */
    Else = 268,                    /* Else  */
    Incase = 269,                  /* Incase  */
    While = 270,                   /* While  */
    For = 271,                     /* For  */
    Class = 272,                   /* Class  */
    Func_type = 273,               /* Func_type  */
    Assign = 274,                  /* Assign  */
    Biop = 275,                    /* Biop  */
    Unop = 276,                    /* Unop  */
    Arrow = 277,                   /* Arrow  */
    Opnbr = 278,                   /* Opnbr  */
    Clsbr = 279,                   /* Clsbr  */
    Opnpar = 280,                  /* Opnpar  */
    Clspar = 281,                  /* Clspar  */
    Osqbr = 282,                   /* Osqbr  */
    Clsqbr = 283,                  /* Clsqbr  */
    Smicln = 284,                  /* Smicln  */
    Comma = 285,                   /* Comma  */
    Const1 = 286,                  /* Const1  */
    Const2 = 287,                  /* Const2  */
    Const3 = 288,                  /* Const3  */
    Id = 289,                      /* Id  */
    Andor = 290,                   /* Andor  */
    Neg = 291,                     /* Neg  */
    Const4 = 292                   /* Const4  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 16 "parser.y"

	char*str;

#line 105 "parser.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */
