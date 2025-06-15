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
#line 1 "proj1.y"

	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include<math.h>
	#include <ctype.h>
	#define null 0
	#define YYSTYPE char*
	#include <stdlib.h>

   	int system(const char *command);
	int size = 0; // size of symbol table
	int v = 1;	// yyerror
	int g = 0; //scope
	int abc = 0;	//temporary value
	int aeval = 0;  //AE evaluation
	int lineno = 1;
	extern int yylineno;
	int flag=0;	//for operator identification
	char label[2]="l"; // labels
	int l_ = 0;	//count of labels(l1,l2,....)
  	char l__[100] = {'\0'}; //labels
	char st[100][10];  //stack used in icg generation
	int top=0;	//top of stack
	int i_=0;	//count of temp variables in icg
  	char i__[100] = {'\0'};	//temp variables (t1,t2,...)
  	char val_str[100] = {'\0'};
  	char result_rel_str[100] = {'\0'};
  	char res_str[100] = {'\0'};
  	char res_str1[100] = {'\0'};
  	char res_str2[100] = {'\0'};
	char temp[2]="t";
	char ICG[10000]=""; //icg
	char try1[5][10];
	char try[5][10];
	int relexp = 0;
	int x=0;
	int x1=0;
	char aeval_[100] = {'\0'};
	char temp_quad = 'A';
	int i=0; //for quadruples
	struct symbtab
	{
		char label[20];
		char type[20];
		int value;
		char scope[20];
		int lineno;
		struct symbtab *next;
	};
	int error = 0;
	struct symbtab *first,*last,*temp1,*temp2;
	char* op;
	typedef struct Abstract_syntax_tree
  	{
	  	char *name;
	  	struct Abstract_syntax_tree *left;
	  	struct Abstract_syntax_tree *right;
  	}node; 
  	struct symbtab* t_ptr;	//AE evaluation
  	void displayquad();
	char addquad(char*,char*,char*,char*);
	typedef struct quadruples
  	{
	    char *op;
	    char *arg1;
	    char *arg2;
	    char *res;
  	}quad;
  	int quadlen = 0;
  	quad q[100];

        extern FILE *yyin;
        node* buildTree(char *,node *,node *);
        void printTree(node *);
        void push(char*);
	void codegen(int val,char* aeval_);
	void codegen_assign();
	void codegen2();
	void codegen3();
	void insert(char* l,char* t,int v,char* s,int ln);
	struct symbtab* search(char lab[]);
	void display();
	int yyerror();
	node *dollardollar;


#line 159 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    DIGITS = 258,                  /* DIGITS  */
    ID = 259,                      /* ID  */
    PLUS = 260,                    /* PLUS  */
    MINUS = 261,                   /* MINUS  */
    MUL = 262,                     /* MUL  */
    DIVIDE = 263,                  /* DIVIDE  */
    NUM = 264,                     /* NUM  */
    STRING = 265,                  /* STRING  */
    INTEGER = 266,                 /* INTEGER  */
    SPECIAL = 267,                 /* SPECIAL  */
    NL = 268,                      /* NL  */
    SPACE = 269,                   /* SPACE  */
    KEYWORD = 270,                 /* KEYWORD  */
    SPECIAL_START = 271,           /* SPECIAL_START  */
    SPECIAL_END = 272,             /* SPECIAL_END  */
    IF = 273,                      /* IF  */
    ELSE = 274,                    /* ELSE  */
    WHILE = 275,                   /* WHILE  */
    SEP = 276,                     /* SEP  */
    END = 277,                     /* END  */
    OR = 278,                      /* OR  */
    AND = 279,                     /* AND  */
    NOT = 280,                     /* NOT  */
    IN = 281,                      /* IN  */
    NOTIN = 282,                   /* NOTIN  */
    T = 283,                       /* T  */
    F = 284,                       /* F  */
    COLON = 285,                   /* COLON  */
    SQUAREBRACKET_START = 286,     /* SQUAREBRACKET_START  */
    SQUAREBRACKET_END = 287,       /* SQUAREBRACKET_END  */
    MOD = 288,                     /* MOD  */
    EQUAL = 289,                   /* EQUAL  */
    PLUSEQUAL = 290,               /* PLUSEQUAL  */
    PRINT = 291,                   /* PRINT  */
    RANGE = 292,                   /* RANGE  */
    SINGLEQUOTE = 293,             /* SINGLEQUOTE  */
    DOUBLEQUOTE = 294,             /* DOUBLEQUOTE  */
    EXPONENTIAL = 295,             /* EXPONENTIAL  */
    COMMA = 296,                   /* COMMA  */
    INDENT = 297,                  /* INDENT  */
    LIST = 298,                    /* LIST  */
    DIVIDEEQUAL = 299,             /* DIVIDEEQUAL  */
    MINUSEQUAL = 300,              /* MINUSEQUAL  */
    MULEQUAL = 301,                /* MULEQUAL  */
    LESSTHAN = 302,                /* LESSTHAN  */
    LESSTHANEQUAL = 303,           /* LESSTHANEQUAL  */
    GREATERTHAN = 304,             /* GREATERTHAN  */
    GREATERTHANEQUAL = 305,        /* GREATERTHANEQUAL  */
    DOUBLEEQUAL = 306,             /* DOUBLEEQUAL  */
    NOTEQUAL = 307                 /* NOTEQUAL  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define DIGITS 258
#define ID 259
#define PLUS 260
#define MINUS 261
#define MUL 262
#define DIVIDE 263
#define NUM 264
#define STRING 265
#define INTEGER 266
#define SPECIAL 267
#define NL 268
#define SPACE 269
#define KEYWORD 270
#define SPECIAL_START 271
#define SPECIAL_END 272
#define IF 273
#define ELSE 274
#define WHILE 275
#define SEP 276
#define END 277
#define OR 278
#define AND 279
#define NOT 280
#define IN 281
#define NOTIN 282
#define T 283
#define F 284
#define COLON 285
#define SQUAREBRACKET_START 286
#define SQUAREBRACKET_END 287
#define MOD 288
#define EQUAL 289
#define PLUSEQUAL 290
#define PRINT 291
#define RANGE 292
#define SINGLEQUOTE 293
#define DOUBLEQUOTE 294
#define EXPONENTIAL 295
#define COMMA 296
#define INDENT 297
#define LIST 298
#define DIVIDEEQUAL 299
#define MINUSEQUAL 300
#define MULEQUAL 301
#define LESSTHAN 302
#define LESSTHANEQUAL 303
#define GREATERTHAN 304
#define GREATERTHANEQUAL 305
#define DOUBLEEQUAL 306
#define NOTEQUAL 307

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_DIGITS = 3,                     /* DIGITS  */
  YYSYMBOL_ID = 4,                         /* ID  */
  YYSYMBOL_PLUS = 5,                       /* PLUS  */
  YYSYMBOL_MINUS = 6,                      /* MINUS  */
  YYSYMBOL_MUL = 7,                        /* MUL  */
  YYSYMBOL_DIVIDE = 8,                     /* DIVIDE  */
  YYSYMBOL_NUM = 9,                        /* NUM  */
  YYSYMBOL_STRING = 10,                    /* STRING  */
  YYSYMBOL_INTEGER = 11,                   /* INTEGER  */
  YYSYMBOL_SPECIAL = 12,                   /* SPECIAL  */
  YYSYMBOL_NL = 13,                        /* NL  */
  YYSYMBOL_SPACE = 14,                     /* SPACE  */
  YYSYMBOL_KEYWORD = 15,                   /* KEYWORD  */
  YYSYMBOL_SPECIAL_START = 16,             /* SPECIAL_START  */
  YYSYMBOL_SPECIAL_END = 17,               /* SPECIAL_END  */
  YYSYMBOL_IF = 18,                        /* IF  */
  YYSYMBOL_ELSE = 19,                      /* ELSE  */
  YYSYMBOL_WHILE = 20,                     /* WHILE  */
  YYSYMBOL_SEP = 21,                       /* SEP  */
  YYSYMBOL_END = 22,                       /* END  */
  YYSYMBOL_OR = 23,                        /* OR  */
  YYSYMBOL_AND = 24,                       /* AND  */
  YYSYMBOL_NOT = 25,                       /* NOT  */
  YYSYMBOL_IN = 26,                        /* IN  */
  YYSYMBOL_NOTIN = 27,                     /* NOTIN  */
  YYSYMBOL_T = 28,                         /* T  */
  YYSYMBOL_F = 29,                         /* F  */
  YYSYMBOL_COLON = 30,                     /* COLON  */
  YYSYMBOL_SQUAREBRACKET_START = 31,       /* SQUAREBRACKET_START  */
  YYSYMBOL_SQUAREBRACKET_END = 32,         /* SQUAREBRACKET_END  */
  YYSYMBOL_MOD = 33,                       /* MOD  */
  YYSYMBOL_EQUAL = 34,                     /* EQUAL  */
  YYSYMBOL_PLUSEQUAL = 35,                 /* PLUSEQUAL  */
  YYSYMBOL_PRINT = 36,                     /* PRINT  */
  YYSYMBOL_RANGE = 37,                     /* RANGE  */
  YYSYMBOL_SINGLEQUOTE = 38,               /* SINGLEQUOTE  */
  YYSYMBOL_DOUBLEQUOTE = 39,               /* DOUBLEQUOTE  */
  YYSYMBOL_EXPONENTIAL = 40,               /* EXPONENTIAL  */
  YYSYMBOL_COMMA = 41,                     /* COMMA  */
  YYSYMBOL_INDENT = 42,                    /* INDENT  */
  YYSYMBOL_LIST = 43,                      /* LIST  */
  YYSYMBOL_DIVIDEEQUAL = 44,               /* DIVIDEEQUAL  */
  YYSYMBOL_MINUSEQUAL = 45,                /* MINUSEQUAL  */
  YYSYMBOL_MULEQUAL = 46,                  /* MULEQUAL  */
  YYSYMBOL_LESSTHAN = 47,                  /* LESSTHAN  */
  YYSYMBOL_LESSTHANEQUAL = 48,             /* LESSTHANEQUAL  */
  YYSYMBOL_GREATERTHAN = 49,               /* GREATERTHAN  */
  YYSYMBOL_GREATERTHANEQUAL = 50,          /* GREATERTHANEQUAL  */
  YYSYMBOL_DOUBLEEQUAL = 51,               /* DOUBLEEQUAL  */
  YYSYMBOL_NOTEQUAL = 52,                  /* NOTEQUAL  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_P = 54,                         /* P  */
  YYSYMBOL_S = 55,                         /* S  */
  YYSYMBOL_IS = 56,                        /* IS  */
  YYSYMBOL_In = 57,                        /* In  */
  YYSYMBOL_Simple = 58,                    /* Simple  */
  YYSYMBOL_Assignment = 59,                /* Assignment  */
  YYSYMBOL_opassgn = 60,                   /* opassgn  */
  YYSYMBOL_E1 = 61,                        /* E1  */
  YYSYMBOL_E2 = 62,                        /* E2  */
  YYSYMBOL_E4 = 63,                        /* E4  */
  YYSYMBOL_OP1 = 64,                       /* OP1  */
  YYSYMBOL_OP2 = 65,                       /* OP2  */
  YYSYMBOL_Compound = 66,                  /* Compound  */
  YYSYMBOL_only_if = 67,                   /* only_if  */
  YYSYMBOL_if_else = 68,                   /* if_else  */
  YYSYMBOL_69_1 = 69,                      /* $@1  */
  YYSYMBOL_else_1 = 70,                    /* else_1  */
  YYSYMBOL_71_2 = 71,                      /* $@2  */
  YYSYMBOL_while_loop = 72,                /* while_loop  */
  YYSYMBOL_condition = 73,                 /* condition  */
  YYSYMBOL_cond = 74,                      /* cond  */
  YYSYMBOL_cond1 = 75,                     /* cond1  */
  YYSYMBOL_cond2 = 76,                     /* cond2  */
  YYSYMBOL_cond3 = 77,                     /* cond3  */
  YYSYMBOL_relexp = 78,                    /* relexp  */
  YYSYMBOL_relop = 79,                     /* relop  */
  YYSYMBOL_comparison = 80,                /* comparison  */
  YYSYMBOL_bool = 81,                      /* bool  */
  YYSYMBOL_opor = 82,                      /* opor  */
  YYSYMBOL_opand = 83,                     /* opand  */
  YYSYMBOL_opnot = 84,                     /* opnot  */
  YYSYMBOL_IND = 85,                       /* IND  */
  YYSYMBOL_Print = 86,                     /* Print  */
  YYSYMBOL_toprint = 87,                   /* toprint  */
  YYSYMBOL_X = 88,                         /* X  */
  YYSYMBOL_LB = 89                         /* LB  */
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
typedef yytype_int8 yy_state_t;

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   110

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  79
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  125

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   307


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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    92,    92,    94,    95,    96,    98,    99,   100,   102,
     103,   105,   106,   108,   117,   118,   119,   120,   121,   124,
     130,   132,   138,   140,   155,   170,   198,   201,   202,   204,
     205,   208,   209,   210,   212,   220,   220,   242,   242,   244,
     264,   266,   267,   269,   270,   272,   273,   275,   276,   280,
     282,   307,   308,   309,   311,   312,   313,   315,   316,   317,
     318,   319,   320,   322,   323,   325,   327,   329,   332,   335,
     336,   337,   338,   341,   342,   344,   345,   346,   347,   349
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
  "\"end of file\"", "error", "\"invalid token\"", "DIGITS", "ID", "PLUS",
  "MINUS", "MUL", "DIVIDE", "NUM", "STRING", "INTEGER", "SPECIAL", "NL",
  "SPACE", "KEYWORD", "SPECIAL_START", "SPECIAL_END", "IF", "ELSE",
  "WHILE", "SEP", "END", "OR", "AND", "NOT", "IN", "NOTIN", "T", "F",
  "COLON", "SQUAREBRACKET_START", "SQUAREBRACKET_END", "MOD", "EQUAL",
  "PLUSEQUAL", "PRINT", "RANGE", "SINGLEQUOTE", "DOUBLEQUOTE",
  "EXPONENTIAL", "COMMA", "INDENT", "LIST", "DIVIDEEQUAL", "MINUSEQUAL",
  "MULEQUAL", "LESSTHAN", "LESSTHANEQUAL", "GREATERTHAN",
  "GREATERTHANEQUAL", "DOUBLEEQUAL", "NOTEQUAL", "$accept", "P", "S", "IS",
  "In", "Simple", "Assignment", "opassgn", "E1", "E2", "E4", "OP1", "OP2",
  "Compound", "only_if", "if_else", "$@1", "else_1", "$@2", "while_loop",
  "condition", "cond", "cond1", "cond2", "cond3", "relexp", "relop",
  "comparison", "bool", "opor", "opand", "opnot", "IND", "Print",
  "toprint", "X", "LB", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-85)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-36)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
       3,   -19,    36,    36,    -6,    14,   -85,     3,     9,     3,
       9,     9,     9,     9,   -85,   -85,   -85,   -85,   -85,    37,
     -85,   -85,   -85,    36,   -85,   -85,   -85,    -2,    20,    13,
     -85,   -85,   -18,   -85,    36,    19,    59,   -85,   -85,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,   -85,    37,
      52,    66,   -85,    -4,     9,   -85,    36,   -85,    36,   -85,
     -85,   -85,   -85,   -85,   -85,   -85,   -85,    37,   -85,   -85,
       9,   -85,   -85,   -85,   -85,    50,    18,    45,   -85,   -85,
      37,   -85,   -85,    37,   -85,    24,    13,   -85,    52,    24,
     -85,    21,    43,    59,   -85,    66,   -85,   -85,   -85,     0,
      60,   -85,    68,    70,   -85,   -85,    24,    24,    62,    -5,
      65,   -85,   -85,   -85,   -85,   -85,    49,   -85,    54,    75,
       9,    69,    24,   -85,   -85
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       5,     0,     0,     0,     0,     0,     2,     5,     0,     5,
       0,     0,     0,     0,    17,    18,    14,    16,    15,     0,
      51,    52,    53,     0,    67,    63,    64,     0,    40,    42,
      44,    46,    48,    49,     0,     0,     0,     1,     3,    79,
      11,     4,    32,    31,    33,    12,    25,    24,    23,     0,
      13,    20,    22,     0,     0,    65,     0,    66,     0,    55,
      56,    57,    58,    59,    60,    61,    62,     0,    54,    45,
       0,    76,    77,    75,    78,     0,    73,     0,    27,    28,
       0,    29,    30,     0,    47,     8,    41,    43,    50,     8,
      69,     0,     0,     0,    26,    19,    21,     9,    68,     0,
      34,    39,     0,     0,    74,    10,     8,     8,     0,     0,
       0,     6,     7,    37,    36,    71,     0,    72,     0,     0,
       0,     0,     8,    70,    38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -85,   -85,    47,   -31,   -85,   -12,   -85,   -85,   -43,     8,
       6,   -85,   -85,    -9,   -85,   -85,   -85,   -85,   -85,   -85,
      88,    71,    39,   -23,   -85,   -85,   -85,   -85,   -85,   -85,
     -85,   -85,   -84,   -85,    -1,   -85,   -10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     5,     6,    98,    99,     7,     8,    19,    50,    51,
      52,    80,    83,     9,    10,    11,   108,   114,   118,    12,
      27,    28,    29,    30,    31,    32,    67,    68,    33,    56,
      58,    34,   100,    13,    75,    76,    40
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
      42,    43,    44,    45,     1,   101,    77,     1,    59,    60,
      36,    69,   115,    84,    37,    14,    15,   116,     2,    55,
       3,     2,    39,     3,    88,    16,    17,    18,    54,    61,
      62,    63,    64,    65,    66,    87,     4,    57,   124,     4,
      20,    46,   105,    55,    85,    21,    47,    22,    48,    70,
      78,    79,    23,    49,    38,   102,    41,    78,    79,    93,
      89,    24,    94,    71,    25,    26,    97,    90,    72,    73,
      74,    91,    92,    81,    82,   111,   112,   103,   109,   -35,
     110,   113,   117,   119,   120,   121,   123,   106,    95,    96,
     107,    35,   104,     0,    53,    86,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     122
};

static const yytype_int8 yycheck[] =
{
      10,    11,    12,    13,     4,    89,    49,     4,    26,    27,
      16,    34,    17,    17,     0,    34,    35,    22,    18,    23,
      20,    18,    13,    20,    67,    44,    45,    46,    30,    47,
      48,    49,    50,    51,    52,    58,    36,    24,   122,    36,
       4,     4,    42,    23,    54,     9,     9,    11,    11,    30,
       5,     6,    16,    16,     7,    34,     9,     5,     6,    41,
      70,    25,    17,     4,    28,    29,    42,    17,     9,    10,
      11,    21,    22,     7,     8,   106,   107,    34,    10,    19,
      10,    19,    17,    34,    30,    10,    17,    99,    80,    83,
      99,     3,    93,    -1,    23,    56,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     120
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     4,    18,    20,    36,    54,    55,    58,    59,    66,
      67,    68,    72,    86,    34,    35,    44,    45,    46,    60,
       4,     9,    11,    16,    25,    28,    29,    73,    74,    75,
      76,    77,    78,    81,    84,    73,    16,     0,    55,    13,
      89,    55,    89,    89,    89,    89,     4,     9,    11,    16,
      61,    62,    63,    74,    30,    23,    82,    24,    83,    26,
      27,    47,    48,    49,    50,    51,    52,    79,    80,    76,
      30,     4,     9,    10,    11,    87,    88,    61,     5,     6,
      64,     7,     8,    65,    17,    89,    75,    76,    61,    89,
      17,    21,    22,    41,    17,    62,    63,    42,    56,    57,
      85,    85,    34,    34,    87,    42,    58,    66,    69,    10,
      10,    56,    56,    19,    70,    17,    22,    17,    71,    34,
      30,    10,    89,    17,    85
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    56,    56,    56,    57,
      57,    58,    58,    59,    60,    60,    60,    60,    60,    61,
      61,    62,    62,    63,    63,    63,    63,    64,    64,    65,
      65,    66,    66,    66,    67,    69,    68,    71,    70,    72,
      73,    74,    74,    75,    75,    76,    76,    77,    77,    77,
      78,    78,    78,    78,    79,    79,    79,    80,    80,    80,
      80,    80,    80,    81,    81,    82,    83,    84,    85,    86,
      86,    86,    86,    87,    87,    88,    88,    88,    88,    89
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     2,     0,     3,     3,     0,     1,
       2,     2,     2,     3,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     1,     1,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     5,     0,     7,     0,     5,     5,
       1,     3,     1,     3,     1,     2,     1,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
      10,     7,     7,     1,     3,     1,     1,     1,     1,     1
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
  case 2: /* P: S  */
#line 92 "proj1.y"
                                        {dollardollar = yyval;}
#line 1467 "y.tab.c"
    break;

  case 3: /* S: Simple S  */
#line 94 "proj1.y"
                                        {yyval=buildTree("SEQ",yyvsp[-1],yyvsp[0]);}
#line 1473 "y.tab.c"
    break;

  case 4: /* S: Compound S  */
#line 95 "proj1.y"
                                        {yyval=buildTree("SEQ",yyvsp[-1],yyvsp[0]);}
#line 1479 "y.tab.c"
    break;

  case 5: /* S: %empty  */
#line 96 "proj1.y"
                                        {yyval=buildTree("NULL",NULL,NULL);}
#line 1485 "y.tab.c"
    break;

  case 6: /* IS: In Simple IS  */
#line 98 "proj1.y"
                                        {yyval=buildTree("SEQ",yyvsp[-1],yyvsp[0]);}
#line 1491 "y.tab.c"
    break;

  case 7: /* IS: In Compound IS  */
#line 99 "proj1.y"
                                        {yyval=buildTree("SEQ",yyvsp[-1],yyvsp[0]);}
#line 1497 "y.tab.c"
    break;

  case 8: /* IS: %empty  */
#line 100 "proj1.y"
                                        {yyval=buildTree("NULL",NULL,NULL);}
#line 1503 "y.tab.c"
    break;

  case 9: /* In: INDENT  */
#line 102 "proj1.y"
                                        {g=1;}
#line 1509 "y.tab.c"
    break;

  case 10: /* In: In INDENT  */
#line 103 "proj1.y"
                                        {g=1;}
#line 1515 "y.tab.c"
    break;

  case 11: /* Simple: Assignment LB  */
#line 105 "proj1.y"
                                        {aeval = 0;yyval=yyvsp[-1];}
#line 1521 "y.tab.c"
    break;

  case 13: /* Assignment: ID opassgn E1  */
#line 108 "proj1.y"
                                        {
		                                push(yyvsp[-2]);
		                                codegen_assign();
		                                
		                                yyvsp[-2] = buildTree(yyvsp[-2],NULL,NULL);
		                                yyval = buildTree(yyvsp[-1],yyvsp[-2],yyvsp[0]);
		                                //addquad($2,$3,'_',$1);
    					}
#line 1534 "y.tab.c"
    break;

  case 14: /* opassgn: DIVIDEEQUAL  */
#line 117 "proj1.y"
                                        {yyval="/=";}
#line 1540 "y.tab.c"
    break;

  case 15: /* opassgn: MULEQUAL  */
#line 118 "proj1.y"
                                        {yyval="*=";}
#line 1546 "y.tab.c"
    break;

  case 16: /* opassgn: MINUSEQUAL  */
#line 119 "proj1.y"
                                        {yyval="-=";}
#line 1552 "y.tab.c"
    break;

  case 17: /* opassgn: EQUAL  */
#line 120 "proj1.y"
                                        {yyval="=";}
#line 1558 "y.tab.c"
    break;

  case 18: /* opassgn: PLUSEQUAL  */
#line 121 "proj1.y"
                                        {yyval="+=";}
#line 1564 "y.tab.c"
    break;

  case 19: /* E1: E1 OP1 E2  */
#line 124 "proj1.y"
                                        { 

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
#line 1575 "y.tab.c"
    break;

  case 21: /* E2: E2 OP2 E4  */
#line 132 "proj1.y"
                                        {

    						sprintf(aeval_,"%d",aeval);
    						codegen(aeval,aeval_);
    						//$$=addquad($2,$1,$3,aeval_);
    					}
#line 1586 "y.tab.c"
    break;

  case 23: /* E4: INTEGER  */
#line 140 "proj1.y"
                                                {
    							abc=atoi(yyvsp[0]);
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push(yyvsp[0]);
	          					yyval=yyvsp[0];
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
#line 1606 "y.tab.c"
    break;

  case 24: /* E4: NUM  */
#line 155 "proj1.y"
                                                {
    							abc=atoi(yyvsp[0]);
    							if(flag==1)
    								{aeval+=abc;}
    							else if(flag==2)
    								{aeval-=abc;}
    							else if(flag==3)
    								{aeval*=abc;}
    							else if(flag==4)
    								{aeval/=abc;}
    							else aeval=abc;
    							push(yyvsp[0]);
	          					yyval=yyvsp[0];
	          					//$$ = buildTree($1,NULL,NULL);
	          				}
#line 1626 "y.tab.c"
    break;

  case 25: /* E4: ID  */
#line 170 "proj1.y"
                                                {
                					t_ptr=search(yyvsp[0]);
                					
                					if(t_ptr==NULL)
                					{
                						printf("\n----------------------ERROR : variable %s undeclared-------------------\n",yyvsp[0]);
                						error = 1;
                					}
                					else
                					{
                					abc = t_ptr->value;
                					
                					if(flag == 1)
                						{aeval += abc;}
                					else if(flag == 2)
                						{aeval -= abc;}
                					
                					else if(flag==3)
                						{aeval *= abc;}
                					else if(flag==4)
                						{aeval /= abc;}
                					else
                						 aeval = abc;
                					push(yyvsp[0]);
	      						yyval=yyvsp[0];
	      						//$$ = buildTree($1,NULL,NULL);}
	      						}
	      					}
#line 1659 "y.tab.c"
    break;

  case 26: /* E4: SPECIAL_START E1 SPECIAL_END  */
#line 198 "proj1.y"
                                                {yyval=yyvsp[-1];}
#line 1665 "y.tab.c"
    break;

  case 27: /* OP1: PLUS  */
#line 201 "proj1.y"
                                                {flag = 1;push("+");yyval="+";}
#line 1671 "y.tab.c"
    break;

  case 28: /* OP1: MINUS  */
#line 202 "proj1.y"
                                                {flag = 2;push("-");yyval="-";}
#line 1677 "y.tab.c"
    break;

  case 29: /* OP2: MUL  */
#line 204 "proj1.y"
                                                {flag = 3;push("*");yyval="*";}
#line 1683 "y.tab.c"
    break;

  case 30: /* OP2: DIVIDE  */
#line 205 "proj1.y"
                                                {flag = 4;push("/");yyval="/";}
#line 1689 "y.tab.c"
    break;

  case 34: /* only_if: IF condition COLON LB IND  */
#line 212 "proj1.y"
                                                { 
    							strcpy(try1[x1],label);
    							codegen2();
    							x--;
    							x1++;
    							yyval = buildTree("IF",yyvsp[-3],yyvsp[0]);
    						}
#line 1701 "y.tab.c"
    break;

  case 35: /* $@1: %empty  */
#line 220 "proj1.y"
                                            {		strcat(ICG,"goto ");
    							char label_temp [2]= "l";
							sprintf(l__,"%d",l_);
							strcat(label_temp,l__);
							strcat(ICG,label_temp);
							
							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label_temp));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,label_temp);
						 	quadlen++;	
							strcpy(try1[x1],label_temp);
							x1++;
    							strcat(ICG,"\n");
    							}
#line 1726 "y.tab.c"
    break;

  case 36: /* if_else: IF condition COLON LB IND $@1 else_1  */
#line 240 "proj1.y"
                            { codegen2();x--;l_++;yyval=buildTree("SEQ",buildTree("IF",yyvsp[-5],yyvsp[-2]),yyvsp[0]);}
#line 1732 "y.tab.c"
    break;

  case 37: /* $@2: %empty  */
#line 242 "proj1.y"
                       {codegen3();}
#line 1738 "y.tab.c"
    break;

  case 38: /* else_1: ELSE $@2 COLON LB IND  */
#line 242 "proj1.y"
                                                        { yyval=buildTree("ELSE",yyvsp[0],NULL);}
#line 1744 "y.tab.c"
    break;

  case 39: /* while_loop: WHILE condition COLON LB IND  */
#line 244 "proj1.y"
                                                {
    							strcat(ICG,"goto ");
    							strcat(ICG,try1[--x1]);
    							strcat(ICG,"\n");
    							//goto in quad
							q[quadlen].op = (char*)malloc(sizeof(char)*2);
						 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(try1[--x1]));
						 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
							q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
							strcpy(q[quadlen].op,"goto");
							strcpy(q[quadlen].arg1,"");
							strcpy(q[quadlen].arg2,"");
						 	strcpy(q[quadlen].res,try1[--x1]);
						 	quadlen++;	
						 	
    							codegen2();
    							x--;
    							yyval=buildTree("while",yyvsp[-3],yyvsp[0]);
    						}
#line 1768 "y.tab.c"
    break;

  case 40: /* condition: cond  */
#line 264 "proj1.y"
                                                {yyval=yyvsp[0];}
#line 1774 "y.tab.c"
    break;

  case 41: /* cond: cond opor cond1  */
#line 266 "proj1.y"
                                                {yyval=buildTree("or",yyvsp[-2],yyvsp[0]);}
#line 1780 "y.tab.c"
    break;

  case 43: /* cond1: cond1 opand cond2  */
#line 269 "proj1.y"
                                                {yyval=buildTree("and",yyvsp[-2],yyvsp[0]);}
#line 1786 "y.tab.c"
    break;

  case 45: /* cond2: opnot cond2  */
#line 272 "proj1.y"
                                                {yyval=buildTree("not",yyvsp[0],NULL);}
#line 1792 "y.tab.c"
    break;

  case 47: /* cond3: SPECIAL_START cond SPECIAL_END  */
#line 275 "proj1.y"
                                                        {yyval=yyvsp[-1];}
#line 1798 "y.tab.c"
    break;

  case 48: /* cond3: relexp  */
#line 276 "proj1.y"
                                                {
							codegen1();
		    					
						}
#line 1807 "y.tab.c"
    break;

  case 50: /* relexp: relexp relop E1  */
#line 282 "proj1.y"
                                        {	
    						
						strcpy(label,"l");
						sprintf(l__,"%d",l_);
						strcat(label,l__);
						strcat(ICG,label);
						strcat(ICG,":\n");
						//label in quad
						q[quadlen].op = (char*)malloc(sizeof(char)*2);
					 	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
					 	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
						q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
						strcpy(q[quadlen].op,"Label");
						strcpy(q[quadlen].arg1,"");
						strcpy(q[quadlen].arg2,"");
					 	strcpy(q[quadlen].res,label);
					 	quadlen++;
						strcpy(try1[x1],label);		//current label pushed onto stack try1 
						l_++;
						x1++;
						sprintf(aeval_,"%d",aeval);
						codegen(aeval,aeval_);
						yyval=buildTree(yyvsp[-1],yyvsp[-2],yyvsp[0]);
	    				}
#line 1836 "y.tab.c"
    break;

  case 51: /* relexp: ID  */
#line 307 "proj1.y"
                                        {push(yyvsp[0]);yyval = yyvsp[0];}
#line 1842 "y.tab.c"
    break;

  case 52: /* relexp: NUM  */
#line 308 "proj1.y"
                                        {push(yyvsp[0]);yyval = yyvsp[0];}
#line 1848 "y.tab.c"
    break;

  case 53: /* relexp: INTEGER  */
#line 309 "proj1.y"
                                        {push(yyvsp[0]);yyval = yyvsp[0];}
#line 1854 "y.tab.c"
    break;

  case 54: /* relop: comparison  */
#line 311 "proj1.y"
                                        {yyval=yyvsp[0];}
#line 1860 "y.tab.c"
    break;

  case 57: /* comparison: LESSTHAN  */
#line 315 "proj1.y"
                                        {yyval="<";push("<");}
#line 1866 "y.tab.c"
    break;

  case 58: /* comparison: LESSTHANEQUAL  */
#line 316 "proj1.y"
                                        {yyval="<=";push("<=");}
#line 1872 "y.tab.c"
    break;

  case 59: /* comparison: GREATERTHAN  */
#line 317 "proj1.y"
                                        {yyval=">";push(">");}
#line 1878 "y.tab.c"
    break;

  case 60: /* comparison: GREATERTHANEQUAL  */
#line 318 "proj1.y"
                                        {yyval=">=";push(">=");}
#line 1884 "y.tab.c"
    break;

  case 61: /* comparison: DOUBLEEQUAL  */
#line 319 "proj1.y"
                                        {yyval="==";push("==");}
#line 1890 "y.tab.c"
    break;

  case 62: /* comparison: NOTEQUAL  */
#line 320 "proj1.y"
                                        {yyval="!=";push("!=");}
#line 1896 "y.tab.c"
    break;

  case 68: /* IND: IS  */
#line 332 "proj1.y"
                        {yyval=yyvsp[0];}
#line 1902 "y.tab.c"
    break;


#line 1906 "y.tab.c"

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

#line 353 "proj1.y"


int yyerror(){
	printf("\n------------------SYNTAX ERROR : at line number %d -------------------------\n",yylineno-1);
    	error = 1;
	v=0;
        return 0;
}
 void insert(char* l,char* t,int v,char* s,int ln)
{
	struct symbtab *n;
	n=search(l);
	if(n!=NULL)
        {
              	n->value = v;
              	n->lineno = ln;
              	strcpy(n->scope,s);  
        }
        else
        {
        	struct symbtab *p;
                p=malloc(sizeof(struct symbtab));
                strcpy(p->label,l);
                strcpy(p->type,t);
                p->value = v;
                p->lineno = ln;
                strcpy(p->scope,s);
                p->next=null;
                if(size==0)
                {
		        first=p;
		        last=p;
                }
                else
                {
                        last->next=p;
                        last=p;
                }
                size++;
        }
}

void display()
{
        int i;
        struct symbtab *p;
        p=first;
        printf("\n------------------SYMBOL TABLE after Optimisations----------------\n");
        printf("------------------------------------------------------------------\n");
        printf("LABEL\tTYPE\t\tVALUE\tSCOPE\tLINENO\n");
        for(i=0;i<size;i++)
        {
                printf("%s\t%s\t%d\t%s\t%d\n",p->label,p->type,p->value,p->scope,p->lineno);
                p=p->next;
        }
}
struct symbtab* search(char lab[])
{
        int i=0;
        struct symbtab *p,*flag;
        p=first;
        for(i=0;i<size;i++)
        {
                if(strcmp(p->label,lab)==0)
                {
                	flag=p;
                	return flag;
                }
                p=p->next;
        }
        p=NULL;
        return p;
}


node* buildTree(char *op,node *left,node *right)
{
	node *new = (node*)malloc(sizeof(node));
	char *newstr = (char *)malloc(strlen(op)+1);
	strcpy(newstr,op);
	new->left=left;
	new->right=right;
	new->name=newstr;
	return new;
}

void printTree(node *tree)
{
	if(tree->left!=NULL || tree->right!=NULL)
		printf("(");
	printf(" %s ",tree->name);
	if(tree->left!=NULL)
		printTree(tree->left);
	if(tree->right!=NULL)
		printTree(tree->right);
	if(tree->left!=NULL || tree->right!=NULL)
		printf(")");
	
}

void push(char *argu)
{
 //strcpy(st[++top],argu);
 strcpy(st[++top],argu);
 //printf("%s-----qwertyuio---%d\n",st[top],top);
 }
 
  
char* search_quad(char* op,char* arg1,char* arg2)
{
	int k = 0;
	while(k<quadlen)
	{
		if(!strcmp(q[k].op,op) && !strcmp(q[k].arg1,arg1) && !strcmp(q[k].arg2,arg2))
		{
			return (q[k].res);
		}
		k++;
	}
	return '\0';
		
	
}


void codegen(int val,char* aeval_)
{

	struct symbtab *v1,*v2;
	v1 = search(st[top-2]);
	v2 = search(st[top]);
	char t1_v[50] = {'\0'};
	char t2_v[50] = {'\0'};
	char* temp_search = search_quad(st[top-1],st[top-2],st[top]);
	if(temp_search != NULL)
	{
		strcpy(st[top],temp_search);
	}
	else
	{
		strcpy(temp,"t");
		sprintf(i__,"%d",i_);
		strcat(temp,i__);
		strcat(ICG,temp);
		strcat(ICG," ");
		strcat(ICG,"=");
		strcat(ICG," ");
		//char op[] = "+";
		//printf("DEBUGGING : %d",strcmp(st[top-1],op));
		int val_rel_operand1,val_rel_operand2,result_rel;
	
	
		//relexp 
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
		{
			//printf("INSIDE : %s\n",st[top-1]);
			if(v1!=NULL)
			{
				val_rel_operand1 = v1->value;
			}
			else
			{
				val_rel_operand1 = atoi(st[top-2]);
			}
		
			if(v2!=NULL)
			{
				val_rel_operand2 = v1->value;
			}
			else
			{
				val_rel_operand2 = atoi(st[top]);
			}
			
			if(!strcmp(st[top-1],">="))
				result_rel = val_rel_operand1 >= val_rel_operand2;
			else if(!strcmp(st[top-1],"<="))
				result_rel = val_rel_operand1 <= val_rel_operand2;
			else if(!strcmp(st[top-1],">"))
				result_rel = val_rel_operand1 > val_rel_operand2;
			else if(!strcmp(st[top-1],"<"))
				result_rel = val_rel_operand1 < val_rel_operand2;
			else if(!strcmp(st[top-1],"=="))
				result_rel = val_rel_operand1 == val_rel_operand2;
			else if(!strcmp(st[top-1],"!="))
				result_rel = val_rel_operand1 != val_rel_operand2;
			
			sprintf(result_rel_str,"%d",result_rel);
			
			//strcat(ICG,result_rel_str);
			
			
			//strcat(ICG," ");
			//strcat(ICG,"\n");
			
		}
		
		
		//Constant Propagation
		if(v1!=NULL)
		{
			sprintf(t1_v,"%d",v1->value);
			strcat(ICG,t1_v);
		

		}
		else
		{
			strcat(ICG,st[top-2]);
		}
	
		strcat(ICG," ");	
	
	
		strcat(ICG,st[top-1]);
		strcat(ICG," ");
		if(v2!=NULL)
		{
			sprintf(t2_v,"%d",v2->value);
			strcat(ICG,t2_v);
		}
		else
			strcat(ICG,st[top]);
		strcat(ICG," ");
		strcat(ICG,"\n");
	
		if(strcmp(st[top-1],"+") && strcmp(st[top-1],"-") && strcmp(st[top-1],"*") && strcmp(st[top-1],"/"))
			insert(temp,"identifier",result_rel,"-",yylineno-1);
		else
			insert(temp,"identifier",val,"-",yylineno-1);	
	
		q[quadlen].op = (char*)malloc(sizeof(char)*strlen(st[top-1]));
		q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-2]));
		q[quadlen].arg2 = (char*)malloc(sizeof(char)*strlen(st[top]));
		q[quadlen].res = (char*)malloc(sizeof(int)*10);
		strcpy(q[quadlen].op,st[top-1]);
		strcpy(q[quadlen].arg1,st[top-2]);
		strcpy(q[quadlen].arg2,st[top]);
		
		strcpy(q[quadlen].res,temp);
		quadlen++;

		top-=2;
		strcpy(st[top],temp);
		i_++;
	}
}


void codegen_assign()
 {
	 temp2 = search(st[top-1]);
	 int val;
	 if(temp2!=NULL)
	 {
	 	val=temp2->value;
	 	if(g==1)
	 		insert(st[top],"identifier",val,"local",yylineno-1);
	 	else
	 		insert(st[top],"identifier",val,"global",yylineno-1);
	 }
	 else
	 {
	 	val = atoi(st[top-1]);
	 	if(g==1)
	 		insert(st[top],"identifier",val,"local",yylineno-1);
	 	else
	 		insert(st[top],"identifier",val,"global",yylineno-1);
	 }
	 sprintf(val_str,"%d",val);
	 
	 strcat(ICG,st[top]);
	 strcat(ICG," ");
	 strcat(ICG,"=");
	 strcat(ICG," ");
	 strcat(ICG,val_str);
	 strcat(ICG,"\n");
	 q[quadlen].op = (char*)malloc(sizeof(char)*2);
	 q[quadlen].arg1 = (char*)malloc(sizeof(char)*strlen(st[top-1]));
	 q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	 q[quadlen].res = (char*)malloc(sizeof(int)*strlen(st[top]));
	 strcpy(q[quadlen].op,"=");
	 strcpy(q[quadlen].arg1,st[top-1]);
	 strcpy(q[quadlen].res,st[top]);
	 quadlen++;
	 top-=2;
 }

void codegen1()
{
	strcpy(temp,"t");
	sprintf(i__,"%d",i_);
	strcat(temp,i__);
	push(temp);
	//strcpy(st[top],temp);

	strcat(ICG,temp);
	strcat(ICG," ");
	strcat(ICG,"=");
	strcat(ICG," ");
	//strcat(ICG,"not ");

	temp2 = search(st[top-1]);
	int val;
	if(temp2!=NULL)
	{
		val=temp2->value;
	}
	else
	{
		val = atoi(st[top-1]);
	}


	int res = !(val);
	int r1 = val;
	sprintf(res_str,"%d",res);
	sprintf(res_str2,"%d",r1);
	strcat(ICG,"not ");
	strcat(ICG,res_str2);
	strcat(ICG,"\n");
	insert(temp,"identifier",res,"-",yylineno-1);

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcat(ICG,"if ");
	temp2 = search(st[top]);
	int val1;
	if(temp2!=NULL)
	{
		val1=temp2->value;
	}
	else
	{
		val1 = atoi(st[top]);
	}

	int res1 = (val1);
	sprintf(res_str1,"%d",res1);
	strcat(ICG,res_str1);
	strcat(ICG," goto ");
	strcat(ICG,label);

	//goto in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"goto");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;
	strcat(ICG,"\n");

	strcpy(try[x],label); 	//after finishing the cs go to label from try stack
	l_++;
	x++;
	i_++;
}

void codegen2()
{
	strcat(ICG,try[--x]);
	strcat(ICG,":\n");

	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*3);
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,try[x]);
	quadlen++;
}

void codegen3()
{
	strcat(ICG,label);
	strcat(ICG,":\n");
	//Label in quadruple
	q[quadlen].op = (char*)malloc(sizeof(char)*2);
	q[quadlen].res = (char*)malloc(sizeof(int)*strlen(label));
	q[quadlen].arg1 = (char*)malloc(sizeof(char)*2);
	q[quadlen].arg2 = (char*)malloc(sizeof(char)*2);
	strcpy(q[quadlen].op,"Label");
	strcpy(q[quadlen].arg1,"");
	strcpy(q[quadlen].arg2,"");
	strcpy(q[quadlen].res,label);
	quadlen++;

	strcpy(label,"l");
	sprintf(l__,"%d",l_);
	strcat(label,l__);
	strcpy(try[x],label);		
	x++;
}


void displayquad()
{
	int j=0;
	printf("\top");
	printf("\targ1");
	printf("\targ2");
	printf("\tresult");
	printf("\n");
	while(j<quadlen)
	{
		printf("\t%s",q[j].op);
		printf("\t%s",q[j].arg1);
		printf("\t%s",q[j].arg2);
		printf("\t%s",q[j].res);
		printf("\n");
		j++;
	}
}
 
int main(){
	extern FILE* yyin,*yyout;
	yyin = fopen("inp.py","r");
	yyparse();
	if(!error)
	{
		FILE *f;  
		char buff[10000];  
		f = fopen ("IntermediateCode.txt", "w");  
		fprintf (f, "%s", ICG);  
		fclose (f);
		printf("\n-------------TARGET CODE-------------\n");
		system("python3 final.py");
	}
	else
	{	
		printf("\nERROR\n");
	}
	return 1;
}
