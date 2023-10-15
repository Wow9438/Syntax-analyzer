/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

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


#line 86 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_Ret = 3,                        /* Ret  */
  YYSYMBOL_Bool = 4,                       /* Bool  */
  YYSYMBOL_Do = 5,                         /* Do  */
  YYSYMBOL_Call = 6,                       /* Call  */
  YYSYMBOL_Void = 7,                       /* Void  */
  YYSYMBOL_Loop = 8,                       /* Loop  */
  YYSYMBOL_Pred = 9,                       /* Pred  */
  YYSYMBOL_Declare = 10,                   /* Declare  */
  YYSYMBOL_Expr = 11,                      /* Expr  */
  YYSYMBOL_Datatype = 12,                  /* Datatype  */
  YYSYMBOL_Else = 13,                      /* Else  */
  YYSYMBOL_Incase = 14,                    /* Incase  */
  YYSYMBOL_While = 15,                     /* While  */
  YYSYMBOL_For = 16,                       /* For  */
  YYSYMBOL_Class = 17,                     /* Class  */
  YYSYMBOL_Func_type = 18,                 /* Func_type  */
  YYSYMBOL_Assign = 19,                    /* Assign  */
  YYSYMBOL_Biop = 20,                      /* Biop  */
  YYSYMBOL_Unop = 21,                      /* Unop  */
  YYSYMBOL_Arrow = 22,                     /* Arrow  */
  YYSYMBOL_Opnbr = 23,                     /* Opnbr  */
  YYSYMBOL_Clsbr = 24,                     /* Clsbr  */
  YYSYMBOL_Opnpar = 25,                    /* Opnpar  */
  YYSYMBOL_Clspar = 26,                    /* Clspar  */
  YYSYMBOL_Osqbr = 27,                     /* Osqbr  */
  YYSYMBOL_Clsqbr = 28,                    /* Clsqbr  */
  YYSYMBOL_Smicln = 29,                    /* Smicln  */
  YYSYMBOL_Comma = 30,                     /* Comma  */
  YYSYMBOL_Const1 = 31,                    /* Const1  */
  YYSYMBOL_Const2 = 32,                    /* Const2  */
  YYSYMBOL_Const3 = 33,                    /* Const3  */
  YYSYMBOL_Id = 34,                        /* Id  */
  YYSYMBOL_Andor = 35,                     /* Andor  */
  YYSYMBOL_Neg = 36,                       /* Neg  */
  YYSYMBOL_Const4 = 37,                    /* Const4  */
  YYSYMBOL_YYACCEPT = 38,                  /* $accept  */
  YYSYMBOL_Body = 39,                      /* Body  */
  YYSYMBOL_Method = 40,                    /* Method  */
  YYSYMBOL_41_1 = 41,                      /* $@1  */
  YYSYMBOL_Fundec = 42,                    /* Fundec  */
  YYSYMBOL_Simp = 43,                      /* Simp  */
  YYSYMBOL_Argu = 44,                      /* Argu  */
  YYSYMBOL_Classy = 45,                    /* Classy  */
  YYSYMBOL_Clbody = 46,                    /* Clbody  */
  YYSYMBOL_Classdef = 47,                  /* Classdef  */
  YYSYMBOL_Classdef2 = 48,                 /* Classdef2  */
  YYSYMBOL_Statements = 49,                /* Statements  */
  YYSYMBOL_statement = 50,                 /* statement  */
  YYSYMBOL_Declstat = 51,                  /* Declstat  */
  YYSYMBOL_arg = 52,                       /* arg  */
  YYSYMBOL_Expressstat = 53,               /* Expressstat  */
  YYSYMBOL_RHS1 = 54,                      /* RHS1  */
  YYSYMBOL_RHS2 = 55,                      /* RHS2  */
  YYSYMBOL_Post = 56,                      /* Post  */
  YYSYMBOL_RHS3 = 57,                      /* RHS3  */
  YYSYMBOL_RHS = 58,                       /* RHS  */
  YYSYMBOL_Type = 59,                      /* Type  */
  YYSYMBOL_Callstat = 60,                  /* Callstat  */
  YYSYMBOL_Calls = 61,                     /* Calls  */
  YYSYMBOL_post = 62,                      /* post  */
  YYSYMBOL_Funcall = 63,                   /* Funcall  */
  YYSYMBOL_argu = 64,                      /* argu  */
  YYSYMBOL_Callstatobj = 65,               /* Callstatobj  */
  YYSYMBOL_Callobj = 66,                   /* Callobj  */
  YYSYMBOL_Condistat = 67,                 /* Condistat  */
  YYSYMBOL_68_2 = 68,                      /* $@2  */
  YYSYMBOL_else = 69,                      /* else  */
  YYSYMBOL_70_3 = 70,                      /* $@3  */
  YYSYMBOL_L1 = 71,                        /* L1  */
  YYSYMBOL_M = 72,                         /* M  */
  YYSYMBOL_N = 73,                         /* N  */
  YYSYMBOL_L = 74,                         /* L  */
  YYSYMBOL_L2 = 75,                        /* L2  */
  YYSYMBOL_Loops = 76,                     /* Loops  */
  YYSYMBOL_77_4 = 77,                      /* $@4  */
  YYSYMBOL_78_5 = 78,                      /* $@5  */
  YYSYMBOL_Opt = 79,                       /* Opt  */
  YYSYMBOL_Retstat = 80                    /* Retstat  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   215

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  38
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  89
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  187

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   292


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    27,    28,    31,    31,    34,    35,    36,
      39,    40,    42,    43,    46,    49,    50,    51,    52,    53,
      53,    54,    55,    57,    58,    59,    62,    63,    64,    67,
      68,    69,    70,    71,    72,    73,    76,    78,    79,    82,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   106,   107,   108,   109,
     110,   111,   114,   115,   118,   120,   122,   122,   124,   124,
     124,   126,   126,   127,   127,   127,   128,   128,   130,   130,
     132,   132,   134,   134,   135,   135,   136,   137,   139,   139
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "Ret", "Bool", "Do",
  "Call", "Void", "Loop", "Pred", "Declare", "Expr", "Datatype", "Else",
  "Incase", "While", "For", "Class", "Func_type", "Assign", "Biop", "Unop",
  "Arrow", "Opnbr", "Clsbr", "Opnpar", "Clspar", "Osqbr", "Clsqbr",
  "Smicln", "Comma", "Const1", "Const2", "Const3", "Id", "Andor", "Neg",
  "Const4", "$accept", "Body", "Method", "$@1", "Fundec", "Simp", "Argu",
  "Classy", "Clbody", "Classdef", "Classdef2", "Statements", "statement",
  "Declstat", "arg", "Expressstat", "RHS1", "RHS2", "Post", "RHS3", "RHS",
  "Type", "Callstat", "Calls", "post", "Funcall", "argu", "Callstatobj",
  "Callobj", "Condistat", "$@2", "else", "$@3", "L1", "M", "N", "L", "L2",
  "Loops", "$@4", "$@5", "Opt", "Retstat", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-83)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      35,     1,     7,    23,    35,    13,    35,    18,   -83,    33,
      32,    44,    54,   -83,   -83,   133,   -83,     3,    56,    17,
      17,    17,    61,    55,    75,    15,    57,    40,    73,    84,
     133,   -83,   133,   -83,   -83,   -83,   -83,    90,   -83,   -83,
      94,   -83,   -83,   -83,    29,     3,    98,     3,    80,   101,
      95,   -83,   -83,   -83,   -83,   103,   104,    79,   -83,   -83,
     -83,   -83,    97,   -83,   -83,   -83,   -83,   -83,   -83,   -83,
     -83,    -5,   106,   -83,    82,   -83,   114,   -83,   -83,   -83,
     108,   119,    79,   135,    25,   122,   127,   -83,   -83,   -83,
      51,    96,   -83,   -83,   -83,   -83,   -83,   129,   -83,    79,
     136,   137,    97,   -83,    97,    97,   -83,   -83,   130,   141,
     140,    79,   138,   143,    25,   142,    79,   149,   -83,   -83,
     -83,   148,   -83,   150,   144,   145,   -83,   -83,   -83,   -83,
      48,   -83,   -83,   151,   153,   108,   -83,   152,   -83,   154,
     -83,   -83,   -83,    15,    79,   155,   -83,   -83,   -83,   175,
     161,   160,   156,   162,    25,   180,   163,   -83,   165,   -83,
     157,   -83,   164,   167,   168,   133,   -83,    15,    25,   -83,
     133,   166,   170,   -83,   -83,   171,   183,   133,   -83,   -83,
     -83,   172,   174,   -83,   133,   176,   -83
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       4,     0,     0,     0,     4,     0,     4,     0,    24,    25,
       0,     0,     0,     1,     2,    27,     3,     0,     0,     0,
       0,     0,    80,     0,     0,     0,     0,     0,     0,     0,
      27,     5,    27,    29,    30,    59,    31,     0,    58,    33,
       0,    32,    34,    35,     0,    20,     0,    19,     0,     0,
       0,     7,     8,     9,    44,     0,     0,    80,    46,    40,
      41,    45,     0,    43,    42,    51,    52,    73,    49,    50,
      79,    72,     0,    78,     0,    57,     0,    55,    54,    53,
       0,     0,    80,     0,     0,     0,     0,    26,    56,    64,
       0,     0,    22,    14,    21,    23,    11,     0,    89,    80,
       0,     0,     0,    74,     0,     0,    71,    88,     0,     0,
       0,    80,    37,     0,     0,     0,    80,     0,    28,     6,
      16,     0,    15,     0,     0,     0,    75,    81,    77,    76,
       0,    65,    61,     0,     0,     0,    36,     0,    66,     0,
      48,    18,    17,     0,    80,     0,    82,    38,    39,     0,
      86,     0,     0,     0,     0,     0,     0,    87,     0,    10,
      12,    47,    63,     0,     0,    27,    84,     0,     0,    60,
      27,     0,     0,    13,    62,     0,    68,    27,    83,    69,
      67,     0,     0,    85,    27,     0,    70
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -83,     6,    20,   -83,   -83,    53,    34,   -83,   -36,   -83,
     -83,   -25,   -83,   -11,    65,   120,   -83,   -83,    58,   -83,
     -82,   179,   -83,   -15,   -83,    99,    37,   -83,   -14,   -83,
     -83,   -83,   -83,   -54,   147,   -83,   -74,   158,   -83,   -83,
     -83,   -83,   -83
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     3,    45,    86,     5,    51,   151,     6,    46,     7,
       8,    31,    32,    33,   113,    34,    64,    65,    35,    66,
      67,   152,    36,    68,    38,    75,   163,    39,    69,    41,
     149,   180,   182,    70,    71,   106,    72,    73,    42,   155,
     172,   158,    43
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      37,    40,   117,   100,   104,    85,    47,    87,   115,    92,
      14,    94,    16,    25,    10,    37,    40,    37,    40,    11,
       4,     2,    77,    13,     4,   125,     4,    78,    44,    54,
     105,    23,   137,    91,    47,     9,    47,   134,    15,    25,
      49,    12,   139,    17,    50,    56,    29,     2,   100,    79,
     128,   129,     1,     2,   121,   123,    58,    59,    60,    61,
      18,    25,    63,    82,    90,    54,    19,    23,    55,     2,
     153,   109,   162,    52,    53,   110,    44,   120,    20,    47,
      47,    56,    29,    54,    57,    23,   162,    48,    21,    74,
      76,    81,    58,    59,    60,    61,    83,    62,    63,    56,
      29,    54,    57,    23,   108,   109,    25,    84,    95,   110,
      58,    59,    60,    61,     2,    62,    63,    56,    29,    88,
     102,    44,   122,    89,    93,    96,    97,    99,    58,    59,
      60,    61,    98,    62,    63,   107,    22,   111,   114,    23,
     171,    24,   112,    25,    26,   175,    26,    27,   118,    28,
      37,    40,   181,   119,    29,    37,    40,   124,    30,   185,
     126,   127,    37,    40,   130,   132,   138,   143,   135,    37,
      40,   133,   136,   140,   141,   144,   142,   146,   154,   145,
     156,   148,    29,   150,   159,   164,   161,   167,   165,   166,
     160,   169,   176,   170,   168,   177,   179,   178,   183,   184,
     147,   173,   186,   116,    80,   174,     0,   131,   157,   103,
       0,     0,     0,     0,     0,   101
};

static const yytype_int16 yycheck[] =
{
      15,    15,    84,    57,     9,    30,    17,    32,    82,    45,
       4,    47,     6,    10,     7,    30,    30,    32,    32,    12,
       0,    18,     7,     0,     4,    99,     6,    12,    25,     4,
      35,     6,   114,    44,    45,    34,    47,   111,    25,    10,
      23,    34,   116,    25,    27,    20,    21,    18,   102,    34,
     104,   105,    17,    18,    90,    91,    31,    32,    33,    34,
      27,    10,    37,    23,    44,     4,    34,     6,     7,    18,
     144,    23,   154,    20,    21,    27,    25,    26,    34,    90,
      91,    20,    21,     4,    23,     6,   168,    31,    34,    34,
      15,    34,    31,    32,    33,    34,    23,    36,    37,    20,
      21,     4,    23,     6,    22,    23,    10,    23,    28,    27,
      31,    32,    33,    34,    18,    36,    37,    20,    21,    29,
      23,    25,    26,    29,    26,    24,    31,    23,    31,    32,
      33,    34,    29,    36,    37,    29,     3,    23,    19,     6,
     165,     8,    34,    10,    11,   170,    11,    14,    26,    16,
     165,   165,   177,    26,    21,   170,   170,    28,    25,   184,
      24,    24,   177,   177,    34,    24,    24,    23,    30,   184,
     184,    31,    29,    24,    26,    30,    26,    24,    23,    28,
       5,    29,    21,    29,    24,     5,    24,    30,    25,    24,
      34,    24,    26,    25,    30,    25,    13,    26,    26,    25,
     135,   167,    26,    83,    25,   168,    -1,   108,   150,    62,
      -1,    -1,    -1,    -1,    -1,    57
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    17,    18,    39,    40,    42,    45,    47,    48,    34,
       7,    12,    34,     0,    39,    25,    39,    25,    27,    34,
      34,    34,     3,     6,     8,    10,    11,    14,    16,    21,
      25,    49,    50,    51,    53,    56,    60,    61,    62,    65,
      66,    67,    76,    80,    25,    40,    46,    51,    31,    23,
      27,    43,    43,    43,     4,     7,    20,    23,    31,    32,
      33,    34,    36,    37,    54,    55,    57,    58,    61,    66,
      71,    72,    74,    75,    34,    63,    15,     7,    12,    34,
      59,    34,    23,    23,    23,    49,    41,    49,    29,    29,
      40,    51,    46,    26,    46,    28,    24,    31,    29,    23,
      71,    75,    23,    72,     9,    35,    73,    29,    22,    23,
      27,    23,    34,    52,    19,    74,    53,    58,    26,    26,
      26,    46,    26,    46,    28,    74,    24,    24,    71,    71,
      34,    63,    24,    31,    74,    30,    29,    58,    24,    74,
      24,    26,    26,    23,    30,    28,    24,    52,    29,    68,
      29,    44,    59,    74,    23,    77,     5,    56,    79,    24,
      34,    24,    58,    64,     5,    25,    24,    30,    30,    24,
      25,    49,    78,    44,    64,    49,    26,    25,    26,    13,
      69,    49,    70,    26,    25,    49,    26
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    38,    39,    39,    39,    41,    40,    42,    42,    42,
      43,    43,    44,    44,    45,    46,    46,    46,    46,    46,
      46,    46,    46,    47,    47,    48,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    51,    52,    52,    53,
      54,    54,    55,    55,    55,    55,    55,    55,    56,    57,
      57,    58,    58,    59,    59,    59,    60,    61,    61,    62,
      63,    63,    64,    64,    65,    66,    68,    67,    69,    70,
      69,    71,    71,    72,    72,    72,    73,    73,    74,    74,
      75,    75,    77,    76,    78,    76,    79,    79,    80,    80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     2,     2,     0,     0,     5,     4,     4,     4,
       6,     2,     2,     4,     4,     3,     3,     4,     4,     1,
       1,     2,     2,     5,     1,     2,     2,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     4,     1,     3,     5,
       1,     1,     1,     1,     1,     1,     1,     6,     4,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       7,     3,     3,     1,     2,     4,     0,    10,     0,     0,
       5,     2,     1,     1,     2,     3,     2,     2,     1,     1,
       0,     3,     0,    10,     0,    11,     0,     1,     3,     3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
  do                                                              \
    if (yychar == YYEMPTY)                                        \
      {                                                           \
        yychar = (Token);                                         \
        yylval = (Value);                                         \
        YYPOPSTACK (yylen);                                       \
        yystate = *yyssp;                                         \
        goto yybackup;                                            \
      }                                                           \
    else                                                          \
      {                                                           \
        yyerror (YY_("syntax error: cannot back up")); \
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;




/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;


/*-----------.
| yybackup.  |
`-----------*/
yybackup:
  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 5: /* $@1: %empty  */
#line 31 "parser.y"
                                  {if(x==0){yyerror(""); return 1;} else{x = 0;}}
#line 1280 "parser.tab.c"
    break;

  case 7: /* Fundec: Func_type Void Id Simp  */
#line 34 "parser.y"
                               {fprintf(pars," : function definition\n");}
#line 1286 "parser.tab.c"
    break;

  case 8: /* Fundec: Func_type Datatype Id Simp  */
#line 35 "parser.y"
                                   {fprintf(pars," : function definition\n");}
#line 1292 "parser.tab.c"
    break;

  case 9: /* Fundec: Func_type Id Id Simp  */
#line 36 "parser.y"
                                       {fprintf(pars," : function definition\n");}
#line 1298 "parser.tab.c"
    break;

  case 23: /* Classdef: Class Id Osqbr Const1 Clsqbr  */
#line 57 "parser.y"
                                        {fprintf(pars," : class definition");}
#line 1304 "parser.tab.c"
    break;

  case 24: /* Classdef: Classdef2  */
#line 58 "parser.y"
                            {fprintf(pars," : class definition");}
#line 1310 "parser.tab.c"
    break;

  case 30: /* statement: Expressstat  */
#line 68 "parser.y"
                                      {fprintf(pars," : expression statement");}
#line 1316 "parser.tab.c"
    break;

  case 31: /* statement: Callstat  */
#line 69 "parser.y"
                                   {fprintf(pars," : call statement");}
#line 1322 "parser.tab.c"
    break;

  case 33: /* statement: Callstatobj  */
#line 71 "parser.y"
                                    {fprintf(pars," : call statement with object");}
#line 1328 "parser.tab.c"
    break;

  case 35: /* statement: Retstat  */
#line 73 "parser.y"
                                  {x++; fprintf(pars," : return statement");}
#line 1334 "parser.tab.c"
    break;

  case 36: /* Declstat: Declare Type arg Smicln  */
#line 76 "parser.y"
                                   {fprintf(pars," : declaration statement");}
#line 1340 "parser.tab.c"
    break;

  case 56: /* Callstat: Calls Smicln  */
#line 106 "parser.y"
                       {/*callstat printing*/}
#line 1346 "parser.tab.c"
    break;

  case 66: /* $@2: %empty  */
#line 122 "parser.y"
                                 {fprintf(pars," : conditional statement");}
#line 1352 "parser.tab.c"
    break;

  case 69: /* $@3: %empty  */
#line 124 "parser.y"
             {fprintf(pars," : conditional statement");}
#line 1358 "parser.tab.c"
    break;

  case 82: /* $@4: %empty  */
#line 134 "parser.y"
                                {fprintf(pars," : loop\n");}
#line 1364 "parser.tab.c"
    break;

  case 84: /* $@5: %empty  */
#line 135 "parser.y"
                                                          {fprintf(pars," : loop\n");}
#line 1370 "parser.tab.c"
    break;


#line 1374 "parser.tab.c"

      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
    }

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 141 "parser.y"


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
