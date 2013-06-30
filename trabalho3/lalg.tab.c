
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

    int yylex (void);
    void yyerror (char *);

    /* Contador de erros */
    int numerrors;

    /* Flag para continuar ou parar a execucao de codigo */
    int code_generate;

    /* Proxima posicao na memoria */
    int next_position;

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
    ListaLigadaVar list;



/* Line 214 of yacc.c  */
#line 206 "lalg.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 218 "lalg.tab.c"

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
#define YYNNTS  71
/* YYNRULES -- Number of rules.  */
#define YYNRULES  137
/* YYNRULES -- Number of states.  */
#define YYNSTATES  236

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
     143,   147,   148,   149,   150,   157,   158,   164,   167,   168,
     172,   176,   180,   181,   186,   189,   190,   195,   196,   202,
     206,   209,   212,   214,   216,   218,   222,   226,   227,   230,
     231,   235,   238,   239,   240,   244,   245,   249,   250,   255,
     256,   261,   262,   267,   272,   275,   279,   282,   285,   288,
     297,   298,   304,   305,   311,   314,   315,   322,   323,   330,
     334,   336,   338,   340,   342,   344,   346,   348,   351,   353,
     355,   356,   360,   361,   363,   365,   369,   373,   374,   376,
     378,   380,   382,   385,   387,   390,   393,   395
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     4,    51,    -1,    -1,     1,    32,    49,
      57,    56,    -1,    -1,     1,    50,    57,    56,    -1,     1,
      37,    -1,    -1,    44,    52,    55,    -1,    -1,     1,    32,
      53,    57,    56,    -1,    -1,     1,    54,    57,    56,    -1,
       1,    37,    -1,    32,    57,    56,    -1,     1,    37,    -1,
      37,    -1,     1,    -1,    59,     5,    95,    58,    -1,    59,
       1,     6,    -1,     6,    -1,    60,    66,    73,    -1,    61,
      60,    -1,    -1,     8,    44,    63,    -1,    -1,     8,     1,
      21,    62,   117,    32,    -1,     8,     1,    32,    -1,    21,
      64,    -1,     1,    32,    -1,   117,    65,    -1,     1,    32,
      -1,    32,    -1,     1,    -1,    67,    66,    -1,    -1,     7,
      70,    33,    69,    68,    -1,     7,    70,     1,    32,    -1,
      32,    -1,     1,    -1,     9,    -1,    10,    -1,     1,    -1,
      44,    72,    -1,    -1,     1,    71,    72,    -1,    36,    70,
      -1,    -1,    -1,    75,    74,    73,    -1,    -1,    -1,    -1,
      11,    76,    44,    81,    77,    79,    -1,    -1,    11,     1,
      32,    78,    84,    -1,    32,    84,    -1,    -1,     1,    80,
      84,    -1,    34,    82,    35,    -1,    34,    82,     1,    -1,
      -1,    70,    33,    69,    83,    -1,    32,    82,    -1,    -1,
      88,     5,    95,    86,    -1,    -1,    88,     1,     6,    85,
      87,    -1,    88,     1,    32,    -1,     6,    87,    -1,     1,
      32,    -1,    32,    -1,     1,    -1,    66,    -1,    34,    90,
      35,    -1,    34,    90,     1,    -1,    -1,    44,    92,    -1,
      -1,     1,    91,    92,    -1,    32,    90,    -1,    -1,    -1,
      17,    94,    98,    -1,    -1,    98,    32,    95,    -1,    -1,
      98,     1,    96,    95,    -1,    -1,     1,    32,    97,    95,
      -1,    -1,    12,    34,    70,    35,    -1,    13,    34,    70,
      35,    -1,    15,    99,    -1,    44,    31,   108,    -1,    44,
      89,    -1,     5,   102,    -1,    14,   103,    -1,    18,    44,
      31,   108,    19,   108,    20,    98,    -1,    -1,   106,    16,
     100,    98,    93,    -1,    -1,   106,     1,   101,    98,    93,
      -1,    95,     6,    -1,    -1,    34,   106,    35,    20,   104,
      98,    -1,    -1,    34,   106,    35,     1,   105,    98,    -1,
     108,   107,   108,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,     1,    -1,   112,   110,
      -1,    27,    -1,    28,    -1,    -1,   111,   112,   110,    -1,
      -1,    27,    -1,    28,    -1,   109,   115,   113,    -1,   114,
     115,   113,    -1,    -1,    29,    -1,    30,    -1,    44,    -1,
     117,    -1,    34,   116,    -1,     1,    -1,   108,    35,    -1,
     108,     1,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   127,   127,   128,   128,   129,   129,   130,   133,   133,
     134,   134,   135,   135,   136,   139,   140,   143,   144,   148,
     149,   152,   156,   160,   161,   164,   165,   165,   166,   169,
     170,   173,   174,   177,   178,   182,   183,   186,   191,   194,
     195,   199,   200,   201,   205,   215,   215,   222,   224,   232,
     232,   233,   236,   236,   236,   237,   237,   240,   241,   241,
     245,   246,   248,   256,   274,   279,   287,   288,   288,   289,
     292,   293,   296,   297,   301,   305,   309,   315,   323,   332,
     332,   336,   341,   349,   349,   350,   354,   355,   355,   356,
     356,   357,   362,   367,   372,   373,   374,   375,   376,   377,
     386,   386,   387,   387,   390,   393,   393,   394,   394,   398,
     402,   403,   404,   405,   406,   407,   408,   412,   416,   417,
     418,   422,   423,   427,   428,   432,   436,   439,   443,   444,
     448,   464,   474,   475,   479,   480,   484,   485
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
  "$@11", "dc_p1", "$@12", "parametros", "lista_par", "mais_par",
  "corpo_p", "$@13", "corpo_p1", "corpo_p2", "dc_loc", "lista_arg",
  "argumentos", "$@14", "mais_ident", "pfalsa", "$@15", "comandos", "$@16",
  "$@17", "cmd", "cmd_if", "$@18", "$@19", "cmd_begin", "cmd_while",
  "$@20", "$@21", "condicao", "relacao", "expressao", "op_un",
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
      73,    73,    76,    77,    75,    78,    75,    79,    80,    79,
      81,    81,    81,    82,    83,    83,    84,    85,    84,    84,
      86,    86,    87,    87,    88,    89,    89,    89,    90,    91,
      90,    92,    92,    94,    93,    93,    95,    96,    95,    97,
      95,    95,    98,    98,    98,    98,    98,    98,    98,    98,
     100,    99,   101,    99,   102,   104,   103,   105,   103,   106,
     107,   107,   107,   107,   107,   107,   107,   108,   109,   109,
     109,   110,   110,   111,   111,   112,   113,   113,   114,   114,
     115,   115,   115,   115,   116,   116,   117,   117
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     3,     0,     6,     3,     2,
       2,     2,     2,     1,     1,     2,     0,     5,     4,     1,
       1,     1,     1,     1,     2,     0,     3,     2,     0,     0,
       3,     0,     0,     0,     6,     0,     5,     2,     0,     3,
       3,     3,     0,     4,     2,     0,     4,     0,     5,     3,
       2,     2,     1,     1,     1,     3,     3,     0,     2,     0,
       3,     2,     0,     0,     3,     0,     3,     0,     4,     0,
       4,     0,     4,     4,     2,     3,     2,     2,     2,     8,
       0,     5,     0,     5,     2,     0,     6,     0,     6,     3,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       0,     3,     0,     1,     1,     3,     3,     0,     1,     1,
       1,     1,     2,     1,     2,     2,     1,     1
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
      28,     0,     0,    25,    20,     0,     0,     0,     0,     0,
     120,     0,    77,     0,     0,    45,    48,     0,     0,    22,
      49,    35,     0,    13,    16,     0,     0,    30,     0,   136,
     137,    29,     0,    89,     0,    97,     0,     0,   120,    98,
     118,   119,    94,     0,     0,     0,   122,     0,   120,     0,
      96,    21,    19,    87,     0,    48,     0,    44,     0,     0,
       0,     0,    51,    11,    15,     0,    32,    34,    33,    31,
       0,   104,     0,     0,     0,   102,   100,   116,   110,   111,
     112,   113,   114,   115,   120,   133,   120,   130,   127,   131,
     123,   124,   117,   120,   120,    95,    79,    82,     0,     0,
      86,    46,    47,    38,    43,    41,    42,     0,    55,    62,
      50,    27,    90,    92,    93,     0,     0,     0,   109,     0,
     132,   128,   129,   125,     0,   122,     0,    82,     0,    78,
      76,    75,    88,    40,    39,    37,    36,     0,    53,   107,
     105,    85,    85,   135,   134,   127,   121,   120,    80,    81,
      74,    56,     0,     0,     0,     0,     0,     0,    83,   103,
     101,   126,     0,     0,     0,     0,    61,    60,    58,    36,
      54,   108,   106,     0,     0,    67,    69,     0,    65,    36,
      57,    84,    99,     0,     0,     0,    66,     0,    63,    59,
      73,    72,    68,    71,    70,    64
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    92,    14,    15,    16,    66,    43,    71,   109,   190,
      31,   175,   147,   193,    95,    97,    59,   102,    60,   101,
     195,   176,   210,   219,   178,   194,   228,   191,   223,   226,
     232,   192,    90,   138,   167,   169,   199,   213,    53,   139,
     110,    54,    82,   157,   156,    75,    79,   197,   196,    83,
     124,    84,    85,   132,   133,    86,   163,   164,   128,   160,
     129
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -203
static const yytype_int16 yypact[] =
{
     121,    53,    13,    99,  -203,  -203,    93,    54,  -203,  -203,
    -203,    93,    19,     5,   105,     6,    93,  -203,  -203,    93,
       8,     5,    63,    82,  -203,  -203,  -203,   127,    18,    21,
     123,     6,  -203,    93,     5,   -16,    93,  -203,  -203,  -203,
    -203,   107,     9,  -203,  -203,   108,    18,   103,   109,   110,
      60,    94,    92,   135,    66,  -203,   111,    25,    24,  -203,
    -203,  -203,     5,  -203,  -203,     5,    84,  -203,   113,  -203,
    -203,  -203,    70,  -203,   136,  -203,    21,    21,    60,  -203,
    -203,  -203,  -203,    81,    91,     7,   104,   115,    60,    26,
    -203,  -203,  -203,  -203,    18,   111,    21,  -203,   116,   118,
     117,   112,   123,  -203,  -203,   120,  -203,  -203,  -203,  -203,
      18,  -203,   122,   124,   125,  -203,  -203,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,    60,  -203,    60,  -203,   106,  -203,
    -203,  -203,  -203,    60,    60,  -203,  -203,   129,    10,    18,
    -203,  -203,  -203,  -203,  -203,  -203,  -203,    76,  -203,   128,
    -203,  -203,  -203,  -203,  -203,    15,    61,    61,  -203,    11,
    -203,  -203,  -203,  -203,     7,   104,   131,   129,    26,  -203,
    -203,  -203,  -203,  -203,  -203,  -203,     6,    21,  -203,  -203,
    -203,   134,   134,  -203,  -203,   106,  -203,    60,  -203,  -203,
    -203,  -203,   119,   130,    37,    77,    61,    61,  -203,  -203,
    -203,  -203,   133,    75,    18,   118,  -203,  -203,  -203,     6,
    -203,  -203,  -203,    61,    61,  -203,  -203,    88,   132,     6,
    -203,  -203,  -203,    79,   137,    79,  -203,    21,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,  -203
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,  -203,    -6,
      85,  -203,  -203,   138,  -203,  -203,  -203,  -203,  -203,     3,
    -203,  -203,   -50,   -27,  -203,    71,    65,  -203,  -203,  -203,
    -203,  -203,  -203,  -203,  -203,   -62,  -203,  -202,  -203,  -203,
     -57,  -203,  -203,     2,  -203,     4,   -10,  -203,   -46,  -203,
    -203,  -153,  -203,  -203,  -203,  -203,  -203,  -203,  -203,    95,
    -203,   -87,  -203,    12,  -203,    41,    -9,  -203,    14,  -203,
     -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -92
static const yytype_int16 yytable[] =
{
      74,   135,    57,   181,   182,    72,    24,   220,   125,    35,
      68,   170,   183,    29,     7,    38,   179,   229,    30,    45,
      22,    64,    55,    46,   -91,   100,    98,   136,    63,   105,
      47,    48,    49,    50,    61,   180,    51,   158,   206,   159,
      36,   126,    25,   211,   212,   171,   184,   166,   140,   112,
     113,   127,    69,    70,    69,    70,   103,     8,    99,   104,
     221,   222,    52,    23,   152,    56,    46,    93,   -52,   142,
     137,   107,   207,    47,    48,    49,    50,   173,   208,    51,
     230,   215,   115,    41,    39,     4,    17,    80,    81,   224,
       5,    18,   117,   172,   225,    40,    21,   116,    94,    10,
     202,    12,   108,    42,    34,    52,    27,   216,   174,   209,
      28,   231,   118,   119,   120,   121,   122,   123,    62,   144,
     203,    65,     1,    88,   204,     2,    89,   145,   146,    69,
      70,   130,   131,    44,    58,   161,   162,    76,    87,    67,
      73,    91,   111,    77,    78,   106,   134,    96,   143,   148,
     187,   198,   151,   214,    32,   218,   149,   153,   217,   154,
     155,   168,   177,   205,   227,   235,   141,   150,   234,   233,
     189,   188,   200,   114,   165,     0,   201,   186,   185
};

static const yytype_int16 yycheck[] =
{
      46,    88,    29,   156,   157,    42,     1,   209,     1,     1,
       1,     1,     1,     7,     1,    21,     1,   219,    15,     1,
       1,    37,     1,     5,     6,     1,     1,     1,    34,    66,
      12,    13,    14,    15,    31,    20,    18,   124,     1,   126,
      32,    34,    37,   196,   197,    35,    35,   134,    94,    76,
      77,    44,    45,    46,    45,    46,    62,    44,    33,    65,
     213,   214,    44,    44,   110,    44,     5,     1,    44,    96,
      44,     1,    35,    12,    13,    14,    15,     1,     1,    18,
       1,     6,     1,     1,    21,    32,    32,    27,    28,     1,
      37,    37,     1,   139,     6,    32,    11,    16,    32,     0,
     187,     8,    32,    21,    19,    44,     1,    32,    32,    32,
       5,    32,    21,    22,    23,    24,    25,    26,    33,     1,
       1,    36,     1,    31,     5,     4,    34,     9,    10,    45,
      46,    27,    28,     6,    11,    29,    30,    34,    44,    32,
      32,     6,     6,    34,    34,    32,    31,    36,    32,    32,
      19,    17,    32,    20,    16,   205,    44,    35,   204,    35,
      35,    32,    34,    33,    32,   227,    95,   102,   225,    32,
     168,   167,   182,    78,   133,    -1,   185,   165,   164
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
      15,    18,    44,    95,    98,     1,    44,    70,    11,    73,
      75,    66,    57,    56,    37,    57,    62,    32,     1,    45,
      46,    64,   117,    32,    95,   102,    34,    34,    34,   103,
      27,    28,    99,   106,   108,   109,   112,    44,    31,    34,
      89,     6,    58,     1,    32,    71,    36,    72,     1,    33,
       1,    76,    74,    56,    56,   117,    32,     1,    32,    65,
      97,     6,    70,    70,   106,     1,    16,     1,    21,    22,
      23,    24,    25,    26,   107,     1,    34,    44,   115,   117,
      27,    28,   110,   111,    31,   108,     1,    44,    90,    96,
      95,    72,    70,    32,     1,     9,    10,    69,    32,    44,
      73,    32,    95,    35,    35,    35,   101,   100,   108,   108,
     116,    29,    30,   113,   114,   112,   108,    91,    32,    92,
       1,    35,    95,     1,    32,    68,    78,    34,    81,     1,
      20,    98,    98,     1,    35,   115,   110,    19,    92,    90,
      66,    84,    88,    70,    82,    77,   105,   104,    17,    93,
      93,   113,   108,     1,     5,    33,     1,    35,     1,    32,
      79,    98,    98,    94,    20,     6,    32,    95,    69,    80,
      84,    98,    98,    85,     1,     6,    86,    32,    83,    84,
       1,    32,    87,    32,    87,    82
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
#line 127 "lalg.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 128 "lalg.y"
    { yyerror("program"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 129 "lalg.y"
    { yyerror("program");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 130 "lalg.y"
    { yyerror("program");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 133 "lalg.y"
    { addProgram((yyvsp[(1) - (1)].name)); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 133 "lalg.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 134 "lalg.y"
    { yyerror("id");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 135 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 136 "lalg.y"
    { yyerror("id");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 139 "lalg.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 140 "lalg.y"
    { yyerror(";");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 143 "lalg.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 144 "lalg.y"
    { yyerror(".");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 148 "lalg.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 149 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 152 "lalg.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 164 "lalg.y"
    { addConstant((yyvsp[(2) - (3)].name), (yyvsp[(3) - (3)].value)); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 165 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 166 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 169 "lalg.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 170 "lalg.y"
    { yyerror("="); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 173 "lalg.y"
    { (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 174 "lalg.y"
    { yyerror("numero"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 177 "lalg.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 178 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 182 "lalg.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 187 "lalg.y"
    {  
            /* Adiciona na tabela de simbolos todas as variaveis */
            addVariables( &(yyvsp[(2) - (5)].list), (yyvsp[(4) - (5)].value) );
        ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 191 "lalg.y"
    { yyerror(":"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 194 "lalg.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 195 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 199 "lalg.y"
    { (yyval.value).type = REAL; ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 200 "lalg.y"
    { (yyval.value).type = INTEGER; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 201 "lalg.y"
    { yyerror("tipo"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 206 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
            Variable variable;
            variable.name = (yyvsp[(1) - (2)].name);
            variable.value.type = INDEFINED;
            llvar_inserir( & (yyval.list), &variable);
            /*llvar_imprimir(& $$);*/
            /*printf("\n");*/
        ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 215 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 216 "lalg.y"
    {
            (yyval.list) = (yyvsp[(3) - (3)].list);
        ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 222 "lalg.y"
    { (yyval.list) = (yyvsp[(2) - (2)].list) ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 224 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) = lista;
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 232 "lalg.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    { addProcedure((yyvsp[(3) - (4)].name), &(yyvsp[(4) - (4)].list) ); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 237 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 240 "lalg.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 241 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 245 "lalg.y"
    { (yyval.list) = (yyvsp[(2) - (3)].list) ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 246 "lalg.y"
    { yyclearin; yyerror(")"); (yyval.list) = (yyvsp[(2) - (3)].list) ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 248 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 257 "lalg.y"
    { 
            (yyval.list) = (yyvsp[(4) - (4)].list);
            /* Adiciona as variaveis na lista do mais_par */            

            NoVar *paux = (yyvsp[(1) - (4)].list).inicio;
            while (paux != NULL) {
                paux->variable.value = (yyvsp[(3) - (4)].value);

                llvar_inserir( & (yyval.list), &paux->variable); 

                paux = paux->proximo;
            }

        ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 275 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
        ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 279 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 288 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 289 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 293 "lalg.y"
    { yyerror("end"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 297 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 306 "lalg.y"
    { 
            (yyval.list) = (yyvsp[(2) - (3)].list); 
        ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 310 "lalg.y"
    { 
            yyerror(")"); 
            (yyval.list) = (yyvsp[(2) - (3)].list); 
        ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 315 "lalg.y"
    { 
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista;
        ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 324 "lalg.y"
    {
           (yyval.list) = (yyvsp[(2) - (2)].list);
           Variable variable;
           variable.name = (yyvsp[(1) - (2)].name);
           variable.value.type = 0;
           llvar_inserir(& (yyval.list), &variable);
        
        ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 332 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 332 "lalg.y"
    { (yyval.list) = (yyvsp[(3) - (3)].list); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 337 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
        ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 341 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) =  lista; 
        ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 349 "lalg.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 355 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 356 "lalg.y"
    { yyerror("cmd"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 363 "lalg.y"
    { 
            /* Verifica se todos os argumentos sao do mesmo tipo */
            checkCallReadWrite("READ", &(yyvsp[(3) - (4)].list)); 
        ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 368 "lalg.y"
    {
            /* Verifica se todos os argumentos sao do mesmo tipo */
            checkCallReadWrite("WRITE", &(yyvsp[(3) - (4)].list)); 
        ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 373 "lalg.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 374 "lalg.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 375 "lalg.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 376 "lalg.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 377 "lalg.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 386 "lalg.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 386 "lalg.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 387 "lalg.y"
    {yyerror("then");;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 387 "lalg.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 393 "lalg.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 393 "lalg.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 394 "lalg.y"
    { yyerror("do") ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 398 "lalg.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 402 "lalg.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 403 "lalg.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 404 "lalg.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 405 "lalg.y"
    {;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 406 "lalg.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 407 "lalg.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 408 "lalg.y"
    { yyerror("sinal de relacao"); ;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 412 "lalg.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 416 "lalg.y"
    {;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 417 "lalg.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 418 "lalg.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 422 "lalg.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 423 "lalg.y"
    {;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 427 "lalg.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 428 "lalg.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 432 "lalg.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 436 "lalg.y"
    { /*$$ = $1;
        if($3 == NULL) { $$->right = $2; }
        else { $3->left = $2; $$->right = $3; }*/ ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 439 "lalg.y"
    { /*$$ = NULL;*/ ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 443 "lalg.y"
    { /*$$ = new ExpressionTree;*/ /*$$->type = OPERATOR; $$->math_op = TIMES;*/ ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 444 "lalg.y"
    { /*$$ = new ExpressionTree;*/ /*$$->type = OPERATOR; $$->math_op = DIVISION;*/ ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 449 "lalg.y"
    { 
            /* Verificando se o identificador foi declarado */
            Node* ident = find( (yyvsp[(1) - (1)].name) );
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
        ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 465 "lalg.y"
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

  case 132:

/* Line 1455 of yacc.c  */
#line 474 "lalg.y"
    { (yyval.value) = (yyvsp[(2) - (2)].value); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 475 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); /*$$ = new ExpressionTree;*/ /*$$->type = ERROR;*/ ;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 479 "lalg.y"
    { (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 480 "lalg.y"
    { yyerror(")"); (yyval.value) = (yyvsp[(1) - (2)].value); ;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 484 "lalg.y"
    { (yyval.value).type = INTEGER; (yyval.value).i_value = (yyvsp[(1) - (1)].i_number); ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 485 "lalg.y"
    { (yyval.value).type = REAL; (yyval.value).f_value = (yyvsp[(1) - (1)].r_number); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2477 "lalg.tab.c"
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
#line 488 "lalg.y"


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

    /* Inicializando variaveis auxiliarer */
    numerrors = 0;
    code_generate = 1;
    next_position = 0;

    /* Abrindo o arquivo de codigo */
    code_file = fopen("code.p", "w");
    fprintf( code_file, "INPP\n");

    int res = yyparse();

    fclose( code_file );

    if(numerrors==0)
        printf ( "Analise Sintatica Completada\n" );
    else
        printf ( "Analise Sintatica Completada Com %d Erros\n", numerrors);

    /* Remove o arquivo, caso a geracao tenha parado */
    if (!code_generate)
        remove( "code.p");
	
	/* imprimindo a talela de simbolos */
	printSimbolTable();
	
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

