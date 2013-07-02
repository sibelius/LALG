
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "lalg.y"

	//#define YYSTYPE double
    #define YYDEBUG 1 /*For Debugging */

	#include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>
    #include "ListaLigada/ListaLigadaVar.h"
    #include "ListaLigada/ListaLigadaVarType.h"
    #include "simbolTable.h"
    #include "codeGenerate.h"
    #include "InfixToPostFix/expressionConvert.h"


    int yylex (void);
    void yyerror (char *);

    /* Contador de erros */
    int numerrors;

    /* Flag para continuar ou parar a execucao de codigo */
    int code_generate;

    /* Arquivo onde sera armazenado o codigo */
    FILE *code_file;

    extern int num_lines;
    extern char *yytext;
	extern int column;
    
    /* Manipulacao da Tabela de simbolos */
    void addInTable( char *name, int type, int i_value, float f_value );



/* Line 189 of yacc.c  */
#line 110 "lalg.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_EOF = 258,
     T_PROGRAM = 259,
     T_BEGIN = 260,
     T_END = 261,
     T_VAR = 262,
     T_CONST = 263,
     T_REAL = 264,
     T_INTEGER = 265,
     T_PROCEDURE = 266,
     T_READ = 267,
     T_WRITE = 268,
     T_WHILE = 269,
     T_IF = 270,
     T_THEN = 271,
     T_ELSE = 272,
     T_FOR = 273,
     T_TO = 274,
     T_DO = 275,
     T_EQUAL = 276,
     T_DIFF = 277,
     T_GREATER_EQ = 278,
     T_LESSER_EQ = 279,
     T_GREATER = 280,
     T_LESSER = 281,
     T_PLUS = 282,
     T_MINUS = 283,
     T_TIMES = 284,
     T_DIVISION = 285,
     T_ASSIGN = 286,
     T_SEMICOLON = 287,
     T_COLON = 288,
     T_L_PAREN = 289,
     T_R_PAREN = 290,
     T_COMMA = 291,
     T_DOT = 292,
     ERR_MF_INTEGER = 293,
     ERR_MF_REAL = 294,
     ERR_MF_ID = 295,
     ERR_LONG_ID = 296,
     ERR_COMMENT = 297,
     ERR_UNKNOWN = 298,
     T_ID = 299,
     T_INUMBER = 300,
     T_RNUMBER = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
/* Line 214 of yacc.c  */
#line 37 "lalg.y"
YYSTYPE
{

/* Line 214 of yacc.c  */
#line 37 "lalg.y"

	int i_number;
	float r_number;
	char* name;
    VarValue value;
	char math_op;
	VarValue* values;
    ListaLigadaVar list;
	Condicao condicao;



/* Line 214 of yacc.c  */
#line 208 "lalg.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 220 "lalg.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   178

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  139
/* YYNRULES -- Number of states.  */
#define YYNSTATES  238

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   301

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
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
      45,    46
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    14,    19,    22,    23,
      27,    28,    34,    35,    40,    43,    47,    50,    52,    54,
      59,    63,    65,    69,    72,    73,    77,    78,    85,    89,
      92,    95,    98,   101,   103,   105,   108,   109,   115,   120,
     122,   124,   126,   128,   130,   133,   134,   138,   141,   142,
     143,   147,   148,   149,   155,   156,   162,   165,   166,   170,
     174,   178,   179,   184,   187,   188,   193,   194,   200,   204,
     207,   210,   212,   214,   216,   220,   224,   225,   228,   229,
     233,   236,   237,   238,   242,   243,   247,   248,   253,   254,
     259,   260,   261,   267,   268,   274,   275,   279,   283,   286,
     289,   292,   301,   302,   308,   309,   315,   318,   319,   326,
     327,   334,   338,   340,   342,   344,   346,   348,   350,   352,
     355,   357,   359,   360,   364,   365,   367,   369,   373,   377,
     378,   380,   382,   384,   386,   389,   391,   394,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     4,    51,    -1,    -1,     1,    32,    49,
      57,    56,    -1,    -1,     1,    50,    57,    56,    -1,     1,
      37,    -1,    -1,    44,    52,    55,    -1,    -1,     1,    32,
      53,    57,    56,    -1,    -1,     1,    54,    57,    56,    -1,
       1,    37,    -1,    32,    57,    56,    -1,     1,    37,    -1,
      37,    -1,     1,    -1,    59,     5,    94,    58,    -1,    59,
       1,     6,    -1,     6,    -1,    60,    66,    73,    -1,    61,
      60,    -1,    -1,     8,    44,    63,    -1,    -1,     8,     1,
      21,    62,   119,    32,    -1,     8,     1,    32,    -1,    21,
      64,    -1,     1,    32,    -1,   119,    65,    -1,     1,    32,
      -1,    32,    -1,     1,    -1,    67,    66,    -1,    -1,     7,
      70,    33,    69,    68,    -1,     7,    70,     1,    32,    -1,
      32,    -1,     1,    -1,     9,    -1,    10,    -1,     1,    -1,
      44,    72,    -1,    -1,     1,    71,    72,    -1,    36,    70,
      -1,    -1,    -1,    75,    74,    73,    -1,    -1,    -1,    11,
      44,    80,    76,    78,    -1,    -1,    11,     1,    32,    77,
      83,    -1,    32,    83,    -1,    -1,     1,    79,    83,    -1,
      34,    81,    35,    -1,    34,    81,     1,    -1,    -1,    70,
      33,    69,    82,    -1,    32,    81,    -1,    -1,    87,     5,
      94,    85,    -1,    -1,    87,     1,     6,    84,    86,    -1,
      87,     1,    32,    -1,     6,    86,    -1,     1,    32,    -1,
      32,    -1,     1,    -1,    66,    -1,    34,    89,    35,    -1,
      34,    89,     1,    -1,    -1,    44,    91,    -1,    -1,     1,
      90,    91,    -1,    32,    89,    -1,    -1,    -1,    17,    93,
      97,    -1,    -1,    97,    32,    94,    -1,    -1,    97,     1,
      95,    94,    -1,    -1,     1,    32,    96,    94,    -1,    -1,
      -1,    12,    98,    34,    70,    35,    -1,    -1,    13,    99,
      34,    70,    35,    -1,    -1,    15,   100,   101,    -1,    44,
      31,   110,    -1,    44,    88,    -1,     5,   104,    -1,    14,
     105,    -1,    18,    44,    31,   110,    19,   110,    20,    97,
      -1,    -1,   108,    16,   102,    97,    92,    -1,    -1,   108,
       1,   103,    97,    92,    -1,    94,     6,    -1,    -1,    34,
     108,    35,    20,   106,    97,    -1,    -1,    34,   108,    35,
       1,   107,    97,    -1,   110,   109,   110,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
       1,    -1,   114,   112,    -1,    27,    -1,    28,    -1,    -1,
     113,   114,   112,    -1,    -1,    27,    -1,    28,    -1,   111,
     117,   115,    -1,   116,   117,   115,    -1,    -1,    29,    -1,
      30,    -1,    44,    -1,   119,    -1,    34,   118,    -1,     1,
      -1,   110,    35,    -1,   110,     1,    -1,    45,    -1,    46,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   134,   134,   135,   135,   136,   136,   137,   140,   140,
     141,   141,   142,   142,   143,   146,   147,   150,   151,   155,
     156,   159,   163,   167,   168,   171,   172,   172,   173,   176,
     177,   180,   181,   184,   185,   189,   190,   193,   198,   201,
     202,   206,   207,   208,   212,   229,   229,   236,   238,   246,
     246,   247,   250,   250,   251,   251,   254,   255,   255,   259,
     264,   266,   274,   300,   305,   313,   314,   314,   315,   318,
     319,   322,   323,   327,   331,   335,   341,   349,   358,   358,
     362,   367,   375,   375,   376,   380,   381,   381,   382,   382,
     383,   388,   388,   393,   393,   398,   398,   399,   415,   420,
     421,   422,   431,   431,   435,   435,   438,   441,   441,   442,
     442,   446,   466,   469,   472,   475,   478,   481,   484,   488,
     500,   503,   506,   512,   516,   522,   525,   531,   539,   543,
     549,   552,   558,   576,   586,   593,   597,   601,   605,   609
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_EOF", "\"program\"", "\"begin\"",
  "\"end\"", "\"var\"", "\"const\"", "\"real\"", "\"integer\"",
  "\"procedure\"", "\"read\"", "\"write\"", "\"while\"", "\"if\"",
  "\"then\"", "\"else\"", "\"for\"", "\"to\"", "\"do\"", "\"=\"", "\"<>\"",
  "\">=\"", "\"<=\"", "\">\"", "\"<\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"",
  "\":=\"", "\";\"", "\":\"", "\"(\"", "\")\"", "\",\"", "\".\"",
  "ERR_MF_INTEGER", "ERR_MF_REAL", "ERR_MF_ID", "ERR_LONG_ID",
  "ERR_COMMENT", "ERR_UNKNOWN", "T_ID", "T_INUMBER", "T_RNUMBER",
  "$accept", "programa", "$@1", "$@2", "programa1", "$@3", "$@4", "$@5",
  "programa2", "programa3", "corpo", "corpo1", "dc", "dc_c", "dc_c0",
  "$@6", "dc_c1", "dc_c2", "dc_c3", "dc_v", "dc_v0", "dc_v1", "tipo_var",
  "variaveis", "$@7", "mais_var", "dc_p", "$@8", "dc_p0", "$@9", "$@10",
  "dc_p1", "$@11", "parametros", "lista_par", "mais_par", "corpo_p",
  "$@12", "corpo_p1", "corpo_p2", "dc_loc", "lista_arg", "argumentos",
  "$@13", "mais_ident", "pfalsa", "$@14", "comandos", "$@15", "$@16",
  "cmd", "$@17", "$@18", "$@19", "cmd_if", "$@20", "$@21", "cmd_begin",
  "cmd_while", "$@22", "$@23", "condicao", "relacao", "expressao", "op_un",
  "outros_termos", "op_ad", "termo", "mais_fatores", "op_mul", "fator",
  "fator_exp", "numero", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    47,    48,    49,    48,    50,    48,    48,    52,    51,
      53,    51,    54,    51,    51,    55,    55,    56,    56,    57,
      57,    58,    59,    60,    60,    61,    62,    61,    61,    63,
      63,    64,    64,    65,    65,    66,    66,    67,    67,    68,
      68,    69,    69,    69,    70,    71,    70,    72,    72,    74,
      73,    73,    76,    75,    77,    75,    78,    79,    78,    80,
      80,    80,    81,    82,    82,    83,    84,    83,    83,    85,
      85,    86,    86,    87,    88,    88,    88,    89,    90,    89,
      91,    91,    93,    92,    92,    94,    95,    94,    96,    94,
      94,    98,    97,    99,    97,   100,    97,    97,    97,    97,
      97,    97,   102,   101,   103,   101,   104,   106,   105,   107,
     105,   108,   109,   109,   109,   109,   109,   109,   109,   110,
     111,   111,   111,   112,   112,   113,   113,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   118,   118,   119,   119
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     3,     0,     6,     3,     2,
       2,     2,     2,     1,     1,     2,     0,     5,     4,     1,
       1,     1,     1,     1,     2,     0,     3,     2,     0,     0,
       3,     0,     0,     5,     0,     5,     2,     0,     3,     3,
       3,     0,     4,     2,     0,     4,     0,     5,     3,     2,
       2,     1,     1,     1,     3,     3,     0,     2,     0,     3,
       2,     0,     0,     3,     0,     3,     0,     4,     0,     4,
       0,     0,     5,     0,     5,     0,     3,     3,     2,     2,
       2,     8,     0,     5,     0,     5,     2,     0,     6,     0,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     0,     3,     0,     1,     1,     3,     3,     0,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     3,     7,    24,    12,     8,     2,
       1,    24,     0,     0,     0,    36,    24,    10,    14,    24,
       0,     0,     0,     0,    18,    17,     6,     0,     0,     0,
      51,    36,    23,    24,     0,     0,    24,     9,     4,    26,
      28,     0,     0,    25,    20,     0,     0,    91,    93,     0,
      95,     0,    76,     0,     0,    45,    48,     0,     0,    22,
      49,    35,     0,    13,    16,     0,     0,    30,     0,   138,
     139,    29,     0,    88,     0,    99,     0,     0,   122,   100,
     122,     0,   122,     0,    98,    21,    19,    86,     0,    48,
       0,    44,     0,     0,     0,    61,    51,    11,    15,     0,
      32,    34,    33,    31,     0,   106,     0,     0,   120,   121,
       0,     0,     0,   124,    96,     0,   122,    97,    78,    81,
       0,     0,    85,    46,    47,    38,    43,    41,    42,     0,
      54,     0,    52,    50,    27,    89,     0,     0,     0,   118,
     112,   113,   114,   115,   116,   117,   122,   135,   122,   132,
     129,   133,   125,   126,   119,   122,   104,   102,     0,    81,
       0,    77,    75,    74,    87,    40,    39,    37,    36,     0,
       0,     0,    92,    94,   109,   107,   111,     0,   134,   130,
     131,   127,     0,   124,     0,     0,   122,    79,    80,    73,
      55,     0,     0,    60,    59,    57,    36,    53,     0,     0,
     137,   136,   129,   123,    84,    84,     0,     0,     0,    64,
      36,    56,   110,   108,   128,    82,   105,   103,     0,    66,
      68,     0,     0,    62,    58,     0,   101,     0,     0,     0,
      65,    63,    83,    72,    71,    67,    70,    69
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    86,    14,    15,    16,    66,    43,    71,   103,   189,
      31,   167,   129,   169,    89,    91,    59,    96,    60,   171,
     168,   197,   210,   132,   170,   223,   190,   227,   230,   235,
     191,    84,   120,   159,   161,   216,   225,    53,   121,   104,
      54,    76,    77,    80,   114,   185,   184,    75,    79,   199,
     198,   110,   146,   111,   112,   154,   155,   113,   181,   182,
     150,   178,   151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -117
static const yytype_int16 yypact[] =
{
     123,    52,     8,   101,  -117,  -117,     0,    54,  -117,  -117,
    -117,     0,    11,     6,   117,   112,     0,  -117,  -117,     0,
      28,     6,    64,    76,  -117,  -117,  -117,   122,    12,    13,
       9,   112,  -117,     0,     6,    97,     0,  -117,  -117,  -117,
    -117,   108,     4,  -117,  -117,   109,    12,  -117,  -117,   104,
    -117,    98,    95,   131,    32,  -117,   110,    20,    15,  -117,
    -117,  -117,     6,  -117,  -117,     6,    42,  -117,   111,  -117,
    -117,  -117,    60,  -117,   133,  -117,   113,   114,   103,  -117,
     103,   118,   103,    18,  -117,  -117,  -117,  -117,    12,   110,
      13,  -117,   119,   107,   121,   116,     9,  -117,  -117,   124,
    -117,  -117,  -117,  -117,    12,  -117,    13,    13,  -117,  -117,
     125,    89,     2,   105,  -117,    77,   103,  -117,  -117,   126,
      10,    12,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    71,
    -117,    13,  -117,  -117,  -117,  -117,   128,   129,    14,  -117,
    -117,  -117,  -117,  -117,  -117,  -117,   103,  -117,   103,  -117,
     106,  -117,  -117,  -117,  -117,   103,  -117,  -117,   135,   126,
      18,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   112,   132,
      31,    72,  -117,  -117,  -117,  -117,  -117,    36,  -117,  -117,
    -117,  -117,     2,   105,    26,    26,   103,  -117,  -117,  -117,
    -117,   120,   107,  -117,  -117,  -117,   112,  -117,    26,    26,
    -117,  -117,   106,  -117,   127,   127,   137,    68,    12,   134,
     112,  -117,  -117,  -117,  -117,  -117,  -117,  -117,    26,  -117,
    -117,    93,    13,  -117,  -117,    26,  -117,    75,   136,    75,
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,   -11,
      87,  -117,  -117,   139,  -117,  -117,  -117,  -117,  -117,    -9,
    -117,  -117,   -47,   -27,  -117,    63,    65,  -117,  -117,  -117,
    -117,  -117,  -117,  -117,   -63,  -117,  -115,  -117,  -117,   -62,
    -117,  -117,    16,  -117,    19,   -36,  -117,   -46,  -117,  -117,
    -116,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,  -117,
    -117,    90,  -117,   -81,  -117,   -12,  -117,    17,   -29,  -117,
      -8,  -117,   -38
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -91
static const yytype_int16 yytable[] =
{
      74,   117,    57,   147,    72,    68,    30,    24,    12,     7,
      38,   162,    22,    45,    55,   174,    94,    46,   -90,   118,
      58,    92,    61,    63,    47,    48,    49,    50,    99,    35,
      51,    46,   193,    87,   175,   158,   148,   200,    47,    48,
      49,    50,   122,    25,    51,   163,   149,    69,    70,    69,
      70,    97,     8,    93,    98,    23,    52,    56,   135,    95,
      36,   101,   119,   124,    88,   176,   194,   177,   204,   205,
      52,   201,   165,   195,   219,   164,   233,    41,   156,   136,
     137,   211,   212,   213,     4,    39,    17,    69,    70,     5,
     139,    18,   102,   157,   228,   224,    40,    42,    21,   229,
     220,    10,   226,   166,   196,   206,    34,   234,   126,   232,
     140,   141,   142,   143,   144,   145,   127,   128,    27,    29,
      62,   207,    28,    65,     1,   208,    82,     2,    44,    83,
     108,   109,   152,   153,    64,   179,   180,    85,    78,   105,
      67,    73,    81,   100,   215,   209,    90,   106,   107,   116,
     131,   125,   123,   130,   186,    32,   134,   218,   160,   231,
     138,   133,   221,   172,   173,   192,   222,   237,   236,   217,
     115,   203,   183,   214,   202,     0,   188,     0,   187
};

static const yytype_int16 yycheck[] =
{
      46,    82,    29,     1,    42,     1,    15,     1,     8,     1,
      21,     1,     1,     1,     1,     1,     1,     5,     6,     1,
      11,     1,    31,    34,    12,    13,    14,    15,    66,     1,
      18,     5,     1,     1,    20,   116,    34,     1,    12,    13,
      14,    15,    88,    37,    18,    35,    44,    45,    46,    45,
      46,    62,    44,    33,    65,    44,    44,    44,   104,    44,
      32,     1,    44,    90,    32,   146,    35,   148,   184,   185,
      44,    35,     1,     1,     6,   121,     1,     1,     1,   106,
     107,   196,   198,   199,    32,    21,    32,    45,    46,    37,
       1,    37,    32,    16,     1,   210,    32,    21,    11,     6,
      32,     0,   218,    32,    32,   186,    19,    32,     1,   225,
      21,    22,    23,    24,    25,    26,     9,    10,     1,     7,
      33,     1,     5,    36,     1,     5,    31,     4,     6,    34,
      27,    28,    27,    28,    37,    29,    30,     6,    34,     6,
      32,    32,    44,    32,    17,   192,    36,    34,    34,    31,
      34,    32,    89,    32,    19,    16,    32,    20,    32,   222,
      35,    96,   208,    35,    35,    33,    32,   229,    32,   205,
      80,   183,   155,   202,   182,    -1,   160,    -1,   159
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    48,    32,    37,    50,     1,    44,    51,
       0,    49,     8,    57,    59,    60,    61,    32,    37,    54,
      52,    57,     1,    44,     1,    37,    56,     1,     5,     7,
      66,    67,    60,    53,    57,     1,    32,    55,    56,    21,
      32,     1,    21,    63,     6,     1,     5,    12,    13,    14,
      15,    18,    44,    94,    97,     1,    44,    70,    11,    73,
      75,    66,    57,    56,    37,    57,    62,    32,     1,    45,
      46,    64,   119,    32,    94,   104,    98,    99,    34,   105,
     100,    44,    31,    34,    88,     6,    58,     1,    32,    71,
      36,    72,     1,    33,     1,    44,    74,    56,    56,   119,
      32,     1,    32,    65,    96,     6,    34,    34,    27,    28,
     108,   110,   111,   114,   101,   108,    31,   110,     1,    44,
      89,    95,    94,    72,    70,    32,     1,     9,    10,    69,
      32,    34,    80,    73,    32,    94,    70,    70,    35,     1,
      21,    22,    23,    24,    25,    26,   109,     1,    34,    44,
     117,   119,    27,    28,   112,   113,     1,    16,   110,    90,
      32,    91,     1,    35,    94,     1,    32,    68,    77,    70,
      81,    76,    35,    35,     1,    20,   110,   110,   118,    29,
      30,   115,   116,   114,   103,   102,    19,    91,    89,    66,
      83,    87,    33,     1,    35,     1,    32,    78,   107,   106,
       1,    35,   117,   112,    97,    97,   110,     1,     5,    69,
      79,    83,    97,    97,   115,    17,    92,    92,    20,     6,
      32,    94,    32,    82,    83,    93,    97,    84,     1,     6,
      85,    81,    97,     1,    32,    86,    32,    86
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
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



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 134 "lalg.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 135 "lalg.y"
    { yyerror("program"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 136 "lalg.y"
    { yyerror("program");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 137 "lalg.y"
    { yyerror("program");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 140 "lalg.y"
    { addProgram((yyvsp[(1) - (1)].name)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 140 "lalg.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 141 "lalg.y"
    { yyerror("id");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 142 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 143 "lalg.y"
    { yyerror("id");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 146 "lalg.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 147 "lalg.y"
    { yyerror(";");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 150 "lalg.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 151 "lalg.y"
    { yyerror(".");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 155 "lalg.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 156 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 159 "lalg.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 171 "lalg.y"
    { addConstant((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].value)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 172 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 173 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 176 "lalg.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 177 "lalg.y"
    { yyerror("="); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 180 "lalg.y"
    { (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 181 "lalg.y"
    { yyerror("numero"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 184 "lalg.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 185 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 189 "lalg.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 194 "lalg.y"
    {  
            /* Adiciona na tabela de simbolos todas as variaveis */
            addVariables( &(yyvsp[(2) - (5)].list), (yyvsp[(4) - (5)].value) );
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 198 "lalg.y"
    { yyerror(":"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 201 "lalg.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 202 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 206 "lalg.y"
    { (yyval.value).type = REAL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 207 "lalg.y"
    { (yyval.value).type = INTEGER; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 208 "lalg.y"
    { yyerror("tipo"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 213 "lalg.y"
    {
            ListaLigadaVar lista;                                   
            llvar_criar(&lista);
                                                        
            Variable variable;
            variable.name = (yyvsp[(1) - (2)].name);
            variable.value.type = INDEFINED;
            llvar_inserir(&lista, &variable);
                                                        
            NoVar *paux = (yyvsp[(2) - (2)].list).inicio;
            while(paux != NULL) {
                llvar_inserir(&lista, &paux->variable);
                paux = paux->proximo;
            }
            (yyval.list) = lista;
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 229 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 230 "lalg.y"
    {
            (yyval.list) = (yyvsp[(3) - (3)].list);
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    { (yyval.list) = (yyvsp[(2) - (2)].list) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 238 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) = lista;
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 246 "lalg.y"
    { endProcedure(); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 250 "lalg.y"
    { addProcedure((yyvsp[(2) - (3)].name), &(yyvsp[(3) - (3)].list) ); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 251 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 254 "lalg.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 255 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 260 "lalg.y"
    { 
            (yyval.list) = (yyvsp[(2) - (3)].list);
            /*llvar_imprimir(&$$);*/
        ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 264 "lalg.y"
    { yyclearin; yyerror(")"); (yyval.list) = (yyvsp[(2) - (3)].list) ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 266 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 275 "lalg.y"
    {
        
            ListaLigadaVar lista;                                  
            llvar_criar(&lista);
                                                        
            NoVar *paux;
            
            paux = (yyvsp[(4) - (4)].list).inicio;
            while(paux != NULL) {
                llvar_inserir(&lista, &paux->variable);
                paux = paux->proximo;
            }
            
            paux = (yyvsp[(1) - (4)].list).inicio;
            while (paux != NULL) {
                paux->variable.value = (yyvsp[(3) - (4)].value);                                             
                llvar_inserir(&lista, &paux->variable);               
                paux = paux->proximo;
            }

            (yyval.list) = lista;
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 301 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 305 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 314 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 315 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 319 "lalg.y"
    { yyerror("end"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 323 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 332 "lalg.y"
    { 
            (yyval.list) = (yyvsp[(2) - (3)].list); 
        ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 336 "lalg.y"
    { 
            yyerror(")"); 
            (yyval.list) = (yyvsp[(2) - (3)].list); 
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 341 "lalg.y"
    { 
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista;
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 350 "lalg.y"
    {
        
           (yyval.list) = (yyvsp[(2) - (2)].list);
           Variable variable;
           variable.name = (yyvsp[(1) - (2)].name);
           variable.value.type = 0;
           llvar_inserir(& (yyval.list), &variable);
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 358 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 358 "lalg.y"
    { (yyval.list) = (yyvsp[(3) - (3)].list); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 363 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
        ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 367 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 375 "lalg.y"
    {;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 381 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 382 "lalg.y"
    { yyerror("cmd"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 388 "lalg.y"
    {  ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 389 "lalg.y"
    { 
            /* Verifica se todos os argumentos sao do mesmo tipo */
            checkCallReadWrite("READ", &(yyvsp[(4) - (5)].list)); 
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 393 "lalg.y"
    { ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 394 "lalg.y"
    {
            /* Verifica se todos os argumentos sao do mesmo tipo */
            checkCallReadWrite("WRITE", &(yyvsp[(4) - (5)].list)); 
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 398 "lalg.y"
    { ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 398 "lalg.y"
    { ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 400 "lalg.y"
    {  
            /* Verificando se o identificador foi declarado */
            Node* ident = findSymbol( (yyvsp[(1) - (3)].name) );
            if ( ident == NULL ) {
                code_generate = FALSE;
                fprintf (stderr, 
                "Erro Semantico: Linha %d, Coluna %d. Identificador %s nao declarado\n", 
                num_lines, column, (yyvsp[(1) - (3)].name));

                (yyval.value).type = INDEFINED;
            } else {
                (yyval.value).type = ident->value.type;
                /* buildReadMemory */
            }
		;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 416 "lalg.y"
    {
            /* Verifica se o procedimento existe, e se os argumentos sao validos */
           checkCallProcedure((yyvsp[(1) - (2)].name), & (yyvsp[(2) - (2)].list));
        ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 420 "lalg.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 421 "lalg.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 422 "lalg.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 431 "lalg.y"
    { buildStartIf((yyvsp[(1) - (2)].condicao)) ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 431 "lalg.y"
    {  
            buildEndIf((yyvsp[(1) - (5)].condicao));
            /*printf("esta dentro do cmd_if\n");*/
        ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 435 "lalg.y"
    {yyerror("then");;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 435 "lalg.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 441 "lalg.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 441 "lalg.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 442 "lalg.y"
    { yyerror("do") ;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 446 "lalg.y"
    {  
            char posExp1[100], posExp2[100];
            infix2postfix((yyvsp[(1) - (3)].value).c_value, posExp1, 1);
            infix2postfix((yyvsp[(3) - (3)].value).c_value, posExp2, 1);
            strcpy((yyval.condicao).c_value, posExp1);
            strcat((yyval.condicao).c_value, (yyvsp[(2) - (3)].condicao).c_value);
            strcat((yyval.condicao).c_value, posExp2);

            printf("postfix: %s", (yyval.condicao).c_value);
           /* strcat($$.c_value, $2.c_value);
            strcat($$.c_value, $3.c_value);
*/
            /*printf("passara para a arvore a expressao %s\n", $$.c_value);*/
            /* criara a expressionTree */
            /*PNode root = CreateInfixTree($$.c_value);*/
            /*PostOrderPrintTree(root);*/
         ;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 466 "lalg.y"
    {
		    strcpy((yyval.condicao).c_value, " = ");
        ;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 469 "lalg.y"
    {
            strcpy((yyval.condicao).c_value, " <> ");
        ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 472 "lalg.y"
    {
            strcpy((yyval.condicao).c_value, " >= ");
        ;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 475 "lalg.y"
    {
            strcpy((yyval.condicao).c_value, " <= ");
        ;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 478 "lalg.y"
    {
            strcpy((yyval.condicao).c_value, " > ");
        ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 481 "lalg.y"
    {
            strcpy((yyval.condicao).c_value, " < ");
    ;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 484 "lalg.y"
    { yyerror("sinal de relacao"); ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 488 "lalg.y"
    {
          /*printf("dentro de expressao\n");*/
          strcpy((yyval.value).c_value, (yyvsp[(1) - (2)].condicao).c_value);
/*          printf("o valor de $$.c_value e %s\n", $$.c_value);
          printf("o valor de $1.c_value e %s\n", $1.c_value);
                        */
            strcat((yyval.value).c_value, (yyvsp[(2) - (2)].condicao).c_value);
/*           printf("o valor final de expressao e %s\n", $$.c_value);*/
          ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 500 "lalg.y"
    {
        strcpy((yyval.condicao).c_value, "+");
      ;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 503 "lalg.y"
    {
        strcpy((yyval.condicao).c_value, "-"); 
    ;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 506 "lalg.y"
    {
        strcpy((yyval.condicao).c_value, " ");
    ;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 512 "lalg.y"
    {
                strcat((yyval.condicao).c_value, (yyvsp[(2) - (3)].condicao).c_value);
                strcat((yyval.condicao).c_value, (yyvsp[(3) - (3)].condicao).c_value);
              ;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 516 "lalg.y"
    { 
            strcpy((yyval.condicao).c_value, " ");
        ;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 522 "lalg.y"
    { 
        strcpy((yyval.condicao).c_value, " +");
      ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 525 "lalg.y"
    {
        strcpy((yyval.condicao).c_value, " -");
    ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 531 "lalg.y"
    {
        strcat((yyval.condicao).c_value, (yyvsp[(2) - (3)].value).c_value);
        strcat((yyval.condicao).c_value, (yyvsp[(3) - (3)].condicao).c_value);
/*        printf("o valor final de termo e %s\n", $$.c_value);*/
      ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 539 "lalg.y"
    {  
                strcat((yyval.condicao).c_value, (yyvsp[(2) - (3)].value).c_value);
                strcat((yyval.condicao).c_value, (yyvsp[(3) - (3)].condicao).c_value);
             ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 543 "lalg.y"
    { 
        strcpy((yyval.condicao).c_value, " ");
    ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 549 "lalg.y"
    { 
            strcpy( (yyval.condicao).c_value, " * " );
       ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 552 "lalg.y"
    { 
            strcpy( (yyval.condicao).c_value, " / " );
        ;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 559 "lalg.y"
    {
            /* Verificando se o identificador foi declarado */
            Node* ident = findSymbol( (yyvsp[(1) - (1)].name) );
            if ( ident == NULL ) {
                code_generate = FALSE;
                fprintf (stderr, 
                "Erro Semantico: Linha %d, Coluna %d. Identificador %s nao declarado\n", 
                num_lines, column, (yyvsp[(1) - (1)].name));

                (yyval.value).type = INDEFINED;
            } else {
                (yyval.value).type = ident->value.type;
                /* buildReadMemory */
            }

            strcpy((yyval.value).c_value, (yyvsp[(1) - (1)].name));
        ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 577 "lalg.y"
    {
            if((yyvsp[(1) - (1)].value).type == INTEGER) {
                (yyval.value).type = INTEGER;
                (yyval.value).i_value = (yyvsp[(1) - (1)].value).i_value;
            } else {
                (yyval.value).type = REAL;
                (yyval.value).i_value = (yyvsp[(1) - (1)].value).f_value;
            }
        ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 586 "lalg.y"
    { 
            char buffer[40];
            (yyval.value) = (yyvsp[(2) - (2)].value);
            strcpy(buffer, " ( ");
            strcat(buffer, (yyval.value).c_value);
            strcpy((yyval.value).c_value, buffer);
        ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 593 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); /*$$ = new ExpressionTree;*/ /*$$->type = ERROR;*/ ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 597 "lalg.y"
    { 
            (yyval.value) = (yyvsp[(1) - (2)].value);
            strcat((yyval.value).c_value, " ) ");
        ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 601 "lalg.y"
    { yyerror(")"); (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 605 "lalg.y"
    { 
        (yyval.value).type = INTEGER; (yyval.value).i_value = (yyvsp[(1) - (1)].i_number);
        sprintf((yyval.value).c_value, "%d", (yyval.value).i_value); 
       ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 609 "lalg.y"
    { 
        (yyval.value).type = REAL; (yyval.value).f_value = (yyvsp[(1) - (1)].r_number); 
        sprintf((yyval.value).c_value, "%f", (yyval.value).f_value);
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 2618 "lalg.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
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

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
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
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 615 "lalg.y"


extern FILE *yyin;

int main (int argc, char *argv[])
{
#ifdef YYDEBUG
	yydebug=0;
#endif
   /*
   if(argc != 2) {
        printf("Uso: %s programa.lalg\n", argv[0]);
        return -1;
    }
*/
    FILE *entrada = fopen(argv[1], "r");
    if(!entrada) {
        printf("Nao foi possivel abrir o arquivo %s\n", argv[1]);
        return -1;
    }
    // Lex ira ler arquivo de entrada inves do STDIN
    yyin = entrada;

    /* Inicia a tabela de simbolos */
    init();
    init_codigo();

    /* Inicializando variaveis auxiliarer */
    numerrors = 0;
    code_generate = 1;

    /* Abrindo o arquivo de codigo */
    code_file = fopen("code.p", "w");

    int res = yyparse();

    fclose( code_file );

    end_codigo();
    //printCodigo();


    if(numerrors==0)
        printf ( "Analise Sintatica Completada\n" );
    else
        printf ( "Analise Sintatica Completada Com %d Erros\n", numerrors);

    /* Remove o arquivo, caso a geracao tenha parado */
    if (!code_generate)
        remove( "code.p");
	
	/* imprimindo a talela de simbolos */
	//printSimbolTable(1);
	
    return res;
}

void yyerror (char *s)
{
    code_generate = 0;
    /*Descartamos as mensagens padrões "syntax error do Bison*/
    if(strcmp(s,"syntax error")){
        fprintf (stderr, 
        "Erro Sintatico: Linha %d, Coluna %d. Era esperado %s, encontrado: %s\n", 
        num_lines, column, s, yytext);
        numerrors++;
    } 
}

