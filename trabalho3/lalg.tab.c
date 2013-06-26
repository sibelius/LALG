
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

	#define YYSTYPE double
    #define YYDEBUG 1 /*For Debugging */

	#include <math.h>
    #include <stdio.h>
    #include <string.h>
    #include <stdlib.h>	
    int yylex (void);
    void yyerror (char *);
        int numerrors=0;
    extern int num_lines;
    extern char *yytext;
	extern int column;


/* Line 189 of yacc.c  */
#line 90 "lalg.tab.c"

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

# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 177 "lalg.tab.c"

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
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  245

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
      59,    63,    65,    69,    72,    73,    74,    79,    80,    87,
      91,    94,    97,   100,   103,   105,   107,   110,   111,   112,
     119,   124,   126,   128,   130,   132,   134,   137,   138,   142,
     145,   146,   147,   151,   152,   153,   154,   161,   162,   168,
     171,   172,   176,   180,   184,   185,   190,   193,   194,   199,
     200,   206,   210,   213,   216,   218,   220,   222,   226,   230,
     231,   234,   235,   239,   242,   243,   244,   248,   249,   253,
     254,   259,   260,   265,   266,   267,   271,   272,   276,   277,
     281,   282,   287,   288,   292,   295,   296,   300,   301,   302,
     313,   317,   318,   324,   325,   331,   334,   335,   342,   343,
     350,   354,   356,   358,   360,   362,   364,   366,   368,   371,
     373,   375,   376,   380,   381,   383,   385,   389,   393,   394,
     396,   398,   400,   402,   405,   407,   410,   413,   415
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      48,     0,    -1,     4,    51,    -1,    -1,     1,    32,    49,
      57,    56,    -1,    -1,     1,    50,    57,    56,    -1,     1,
      37,    -1,    -1,    44,    52,    55,    -1,    -1,     1,    32,
      53,    57,    56,    -1,    -1,     1,    54,    57,    56,    -1,
       1,    37,    -1,    32,    57,    56,    -1,     1,    37,    -1,
      37,    -1,     1,    -1,    59,     5,    97,    58,    -1,    59,
       1,     6,    -1,     6,    -1,    60,    67,    75,    -1,    61,
      60,    -1,    -1,    -1,     8,    62,    44,    64,    -1,    -1,
       8,     1,    21,    63,   128,    32,    -1,     8,     1,    32,
      -1,    21,    65,    -1,     1,    32,    -1,   128,    66,    -1,
       1,    32,    -1,    32,    -1,     1,    -1,    68,    67,    -1,
      -1,    -1,     7,    72,    69,    33,    71,    70,    -1,     7,
      72,     1,    32,    -1,    32,    -1,     1,    -1,     9,    -1,
      10,    -1,     1,    -1,    44,    74,    -1,    -1,     1,    73,
      74,    -1,    36,    72,    -1,    -1,    -1,    77,    76,    75,
      -1,    -1,    -1,    -1,    11,    78,    44,    83,    79,    81,
      -1,    -1,    11,     1,    32,    80,    86,    -1,    32,    86,
      -1,    -1,     1,    82,    86,    -1,    34,    84,    35,    -1,
      34,    84,     1,    -1,    -1,    72,    33,    71,    85,    -1,
      32,    84,    -1,    -1,    90,     5,    97,    88,    -1,    -1,
      90,     1,     6,    87,    89,    -1,    90,     1,    32,    -1,
       6,    89,    -1,     1,    32,    -1,    32,    -1,     1,    -1,
      67,    -1,    34,    92,    35,    -1,    34,    92,     1,    -1,
      -1,    44,    94,    -1,    -1,     1,    93,    94,    -1,    32,
      92,    -1,    -1,    -1,    17,    96,   100,    -1,    -1,   100,
      32,    97,    -1,    -1,   100,     1,    98,    97,    -1,    -1,
       1,    32,    99,    97,    -1,    -1,    -1,    12,   101,   109,
      -1,    -1,    13,   102,   109,    -1,    -1,    15,   103,   110,
      -1,    -1,    44,   104,    31,   119,    -1,    -1,    44,   105,
      91,    -1,     5,   113,    -1,    -1,    14,   106,   114,    -1,
      -1,    -1,    18,   107,    44,   108,    31,   119,    19,   119,
      20,   100,    -1,    34,    72,    35,    -1,    -1,   117,    16,
     111,   100,    95,    -1,    -1,   117,     1,   112,   100,    95,
      -1,    97,     6,    -1,    -1,    34,   117,    35,    20,   115,
     100,    -1,    -1,    34,   117,    35,     1,   116,   100,    -1,
     119,   118,   119,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,     1,    -1,   123,   121,
      -1,    27,    -1,    28,    -1,    -1,   122,   123,   121,    -1,
      -1,    27,    -1,    28,    -1,   120,   126,   124,    -1,   125,
     126,   124,    -1,    -1,    29,    -1,    30,    -1,    44,    -1,
     128,    -1,    34,   127,    -1,     1,    -1,   119,    35,    -1,
     119,     1,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    77,    78,    78,    79,    82,    82,
      83,    83,    84,    84,    85,    88,    89,    92,    93,    97,
      98,   101,   105,   109,   110,   113,   113,   114,   114,   115,
     118,   119,   122,   123,   126,   127,   131,   132,   135,   135,
     136,   139,   140,   144,   145,   146,   150,   151,   151,   155,
     156,   160,   160,   161,   164,   164,   164,   165,   165,   168,
     169,   169,   173,   174,   175,   179,   183,   184,   188,   189,
     189,   190,   193,   194,   197,   198,   202,   206,   207,   208,
     212,   213,   213,   217,   218,   222,   222,   223,   227,   228,
     228,   229,   229,   230,   235,   235,   236,   236,   237,   237,
     238,   238,   239,   239,   240,   241,   241,   242,   242,   242,
     246,   249,   249,   250,   250,   253,   256,   256,   257,   257,
     261,   265,   266,   267,   268,   269,   270,   271,   275,   279,
     280,   281,   285,   286,   290,   291,   295,   299,   300,   304,
     305,   309,   310,   311,   312,   316,   317,   321,   322
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
  "ERR_COMMENT", "ERR_UNKNOWN", "\"identificador\"", "\"numero inteiro\"",
  "\"numero real\"", "$accept", "programa", "$@1", "$@2", "programa1",
  "$@3", "$@4", "$@5", "programa2", "programa3", "corpo", "corpo1", "dc",
  "dc_c", "dc_c0", "$@6", "$@7", "dc_c1", "dc_c2", "dc_c3", "dc_v",
  "dc_v0", "$@8", "dc_v1", "tipo_var", "variaveis", "$@9", "mais_var",
  "dc_p", "$@10", "dc_p0", "$@11", "$@12", "$@13", "dc_p1", "$@14",
  "parametros", "lista_par", "mais_par", "corpo_p", "$@15", "corpo_p1",
  "corpo_p2", "dc_loc", "lista_arg", "argumentos", "$@16", "mais_ident",
  "pfalsa", "$@17", "comandos", "$@18", "$@19", "cmd", "$@20", "$@21",
  "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "cmd_param", "cmd_if",
  "$@28", "$@29", "cmd_begin", "cmd_while", "$@30", "$@31", "condicao",
  "relacao", "expressao", "op_un", "outros_termos", "op_ad", "termo",
  "mais_fatores", "op_mul", "fator", "fator_exp", "numero", 0
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
      57,    58,    59,    60,    60,    62,    61,    63,    61,    61,
      64,    64,    65,    65,    66,    66,    67,    67,    69,    68,
      68,    70,    70,    71,    71,    71,    72,    73,    72,    74,
      74,    76,    75,    75,    78,    79,    77,    80,    77,    81,
      82,    81,    83,    83,    83,    84,    85,    85,    86,    87,
      86,    86,    88,    88,    89,    89,    90,    91,    91,    91,
      92,    93,    92,    94,    94,    96,    95,    95,    97,    98,
      97,    99,    97,    97,   101,   100,   102,   100,   103,   100,
     104,   100,   105,   100,   100,   106,   100,   107,   108,   100,
     109,   111,   110,   112,   110,   113,   115,   114,   116,   114,
     117,   118,   118,   118,   118,   118,   118,   118,   119,   120,
     120,   120,   121,   121,   122,   122,   123,   124,   124,   125,
     125,   126,   126,   126,   126,   127,   127,   128,   128
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     0,     4,     0,     6,     3,
       2,     2,     2,     2,     1,     1,     2,     0,     0,     6,
       4,     1,     1,     1,     1,     1,     2,     0,     3,     2,
       0,     0,     3,     0,     0,     0,     6,     0,     5,     2,
       0,     3,     3,     3,     0,     4,     2,     0,     4,     0,
       5,     3,     2,     2,     1,     1,     1,     3,     3,     0,
       2,     0,     3,     2,     0,     0,     3,     0,     3,     0,
       4,     0,     4,     0,     0,     3,     0,     3,     0,     3,
       0,     4,     0,     3,     2,     0,     3,     0,     0,    10,
       3,     0,     5,     0,     5,     2,     0,     6,     0,     6,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     3,     0,     1,     1,     3,     3,     0,     1,
       1,     1,     1,     2,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     3,     7,    24,    12,     8,     2,
       1,    24,     0,     0,     0,    37,    24,    10,    14,    24,
       0,     0,     0,     0,    18,    17,     6,     0,     0,     0,
      53,    37,    23,    24,     0,     0,    24,     9,     4,    27,
      29,     0,    20,     0,     0,    94,    96,   105,    98,   107,
     102,     0,     0,    47,    50,     0,     0,    22,    51,    36,
       0,    13,    16,     0,     0,     0,     0,    26,    91,     0,
     104,     0,     0,     0,   131,     0,     0,    79,    21,    19,
      89,     0,    50,     0,    46,     0,     0,     0,     0,    53,
      11,    15,   147,   148,     0,    31,     0,    30,     0,     0,
     115,     0,    95,    97,   131,   106,   129,   130,    99,     0,
       0,     0,   133,   108,   131,     0,   103,     0,    88,    48,
      49,    40,     0,    57,    64,    52,    28,    33,    35,    34,
      32,    92,     0,     0,   113,   111,   127,   121,   122,   123,
     124,   125,   126,   131,   144,   131,   141,   138,   142,   134,
     135,   128,   131,     0,   101,    81,    84,     0,    90,    45,
      43,    44,     0,    37,     0,    55,   110,     0,     0,     0,
     120,     0,   143,   139,   140,   136,     0,   133,   131,    84,
       0,    80,    78,    77,    42,    41,    39,    76,    58,     0,
       0,     0,     0,   118,   116,    87,    87,   146,   145,   138,
     132,     0,    82,    83,     0,     0,     0,    63,    62,    60,
      37,    56,     0,     0,    85,   114,   112,   137,   131,    69,
      71,     0,    67,    37,    59,   119,   117,     0,     0,     0,
       0,     0,    68,     0,    65,    61,    86,     0,    75,    74,
      70,    73,    72,    66,   109
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    79,    14,    15,    16,    23,    64,    67,    97,   130,
     187,    31,    86,   186,   162,   190,    82,    84,    57,    89,
      58,    88,   192,   163,   211,   223,   165,   191,   234,   188,
     229,   232,   240,   189,   116,   157,   179,   181,   215,   227,
      51,   117,    99,    52,    71,    72,    74,    76,    77,    73,
      75,   153,   102,   108,   169,   168,    70,   105,   213,   212,
     109,   143,   110,   111,   151,   152,   112,   175,   176,   147,
     172,   148
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -182
static const yytype_int16 yypact[] =
{
     124,    85,    13,    31,  -182,  -182,   100,    86,  -182,  -182,
    -182,   100,    16,     4,    92,   112,   100,  -182,  -182,   100,
      35,     4,    62,    42,  -182,  -182,  -182,   115,    10,    17,
     120,   112,  -182,   100,     4,    97,   100,  -182,  -182,  -182,
    -182,    79,  -182,   104,    10,  -182,  -182,  -182,  -182,  -182,
     106,   129,    57,  -182,   105,    12,    19,  -182,  -182,  -182,
       4,  -182,  -182,     4,    50,   107,     7,  -182,  -182,   132,
    -182,   108,   108,   109,    99,    96,   113,   111,  -182,  -182,
    -182,    10,   105,    17,  -182,   114,   116,   118,   110,   120,
    -182,  -182,  -182,  -182,   121,  -182,   123,  -182,    58,    10,
    -182,    17,  -182,  -182,    99,  -182,  -182,  -182,  -182,    87,
      90,     5,   102,  -182,    99,    20,  -182,    10,  -182,  -182,
    -182,  -182,    25,  -182,   117,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   122,   125,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,  -182,    99,  -182,    99,  -182,   103,  -182,  -182,
    -182,  -182,    99,   127,  -182,  -182,   130,     8,  -182,  -182,
    -182,  -182,    69,   112,    17,  -182,  -182,    18,    63,    63,
    -182,     9,  -182,  -182,  -182,  -182,     5,   102,    99,   130,
      20,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,   119,
     126,    11,    70,  -182,  -182,   131,   131,  -182,  -182,   103,
    -182,   128,  -182,  -182,     1,    10,    25,  -182,  -182,  -182,
     112,  -182,    63,    63,  -182,  -182,  -182,  -182,    99,  -182,
    -182,    98,   133,   112,  -182,  -182,  -182,    63,   136,    78,
     134,    78,  -182,    17,  -182,  -182,  -182,    63,  -182,  -182,
    -182,  -182,  -182,  -182,  -182
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,  -182,     6,
      73,  -182,  -182,   147,  -182,  -182,  -182,  -182,  -182,  -182,
      67,  -182,  -182,  -182,   -54,   -27,  -182,    82,    80,  -182,
    -182,  -182,  -182,  -182,  -182,  -182,  -182,   -66,  -182,  -181,
    -182,  -182,   -63,  -182,  -182,   -10,  -182,    -8,   -24,  -182,
     -44,  -182,  -182,  -165,  -182,  -182,  -182,  -182,  -182,  -182,
    -182,  -182,   101,  -182,  -182,  -182,  -182,  -182,  -182,  -182,
      71,  -182,  -113,  -182,    -3,  -182,    24,   -22,  -182,     2,
    -182,    21
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -101
static const yytype_int16 yytable[] =
{
      69,   154,    55,   195,   196,    24,   144,   219,    96,   182,
     197,    43,   207,    85,     7,    44,   -93,    22,    53,   193,
      87,   155,    45,    46,    47,    48,   159,    38,    49,   224,
     170,    10,   171,   220,   160,   161,    35,   118,   194,   145,
      61,    25,   235,   183,   198,   -38,   208,   225,   226,   146,
      92,    93,    92,    93,    50,   131,   120,     8,    80,   128,
     -25,    54,   236,   -54,   156,   201,    90,    36,    44,    91,
     184,   209,   244,   158,   132,    45,    46,    47,    48,   238,
      65,    49,    30,    39,    21,    94,    41,    98,   134,    81,
     129,   136,    34,    27,    40,    92,    93,    28,    59,   230,
      66,   185,   210,   135,   231,   228,    60,    50,    12,    63,
     239,   137,   138,   139,   140,   141,   142,     4,    17,    29,
     204,    42,     5,    18,   205,     1,   106,   107,     2,   149,
     150,    56,   173,   174,    62,    78,    68,  -100,   100,    95,
     113,    83,   101,   104,   114,   115,   121,   218,   214,   122,
     123,   164,   222,   126,   124,   127,   237,   166,   178,   206,
     167,   221,   180,    32,   119,   233,   241,   243,   242,   125,
     203,   202,   216,   103,   200,   133,   177,   217,   199
};

static const yytype_uint8 yycheck[] =
{
      44,   114,    29,   168,   169,     1,     1,     6,     1,     1,
       1,     1,     1,     1,     1,     5,     6,     1,     1,     1,
       1,     1,    12,    13,    14,    15,     1,    21,    18,   210,
     143,     0,   145,    32,     9,    10,     1,    81,    20,    34,
      34,    37,   223,    35,    35,    33,    35,   212,   213,    44,
      45,    46,    45,    46,    44,    99,    83,    44,     1,     1,
      44,    44,   227,    44,    44,   178,    60,    32,     5,    63,
       1,     1,   237,   117,   101,    12,    13,    14,    15,     1,
       1,    18,    15,    21,    11,    64,    44,    66,     1,    32,
      32,     1,    19,     1,    32,    45,    46,     5,    31,     1,
      21,    32,    32,    16,     6,   218,    33,    44,     8,    36,
      32,    21,    22,    23,    24,    25,    26,    32,    32,     7,
       1,     6,    37,    37,     5,     1,    27,    28,     4,    27,
      28,    11,    29,    30,    37,     6,    32,    31,     6,    32,
      44,    36,    34,    34,    31,    34,    32,    19,    17,    33,
      32,    34,   206,    32,    44,    32,    20,    35,    31,    33,
      35,   205,    32,    16,    82,    32,    32,   233,   231,    89,
     180,   179,   196,    72,   177,   104,   152,   199,   176
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    48,    32,    37,    50,     1,    44,    51,
       0,    49,     8,    57,    59,    60,    61,    32,    37,    54,
      52,    57,     1,    62,     1,    37,    56,     1,     5,     7,
      67,    68,    60,    53,    57,     1,    32,    55,    56,    21,
      32,    44,     6,     1,     5,    12,    13,    14,    15,    18,
      44,    97,   100,     1,    44,    72,    11,    75,    77,    67,
      57,    56,    37,    57,    63,     1,    21,    64,    32,    97,
     113,   101,   102,   106,   103,   107,   104,   105,     6,    58,
       1,    32,    73,    36,    74,     1,    69,     1,    78,    76,
      56,    56,    45,    46,   128,    32,     1,    65,   128,    99,
       6,    34,   109,   109,    34,   114,    27,    28,   110,   117,
     119,   120,   123,    44,    31,    34,    91,    98,    97,    74,
      72,    32,    33,    32,    44,    75,    32,    32,     1,    32,
      66,    97,    72,   117,     1,    16,     1,    21,    22,    23,
      24,    25,    26,   118,     1,    34,    44,   126,   128,    27,
      28,   121,   122,   108,   119,     1,    44,    92,    97,     1,
       9,    10,    71,    80,    34,    83,    35,    35,   112,   111,
     119,   119,   127,    29,    30,   124,   125,   123,    31,    93,
      32,    94,     1,    35,     1,    32,    70,    67,    86,    90,
      72,    84,    79,     1,    20,   100,   100,     1,    35,   126,
     121,   119,    94,    92,     1,     5,    33,     1,    35,     1,
      32,    81,   116,   115,    17,    95,    95,   124,    19,     6,
      32,    97,    71,    82,    86,   100,   100,    96,   119,    87,
       1,     6,    88,    32,    85,    86,   100,    20,     1,    32,
      89,    32,    89,    84,   100
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
#line 76 "lalg.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 77 "lalg.y"
    { yyerror("program"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "lalg.y"
    { yyerror("program");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 "lalg.y"
    { yyerror("program");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 82 "lalg.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 82 "lalg.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 83 "lalg.y"
    { yyerror("id");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 85 "lalg.y"
    { yyerror("id");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 88 "lalg.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 89 "lalg.y"
    { yyerror(";");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 92 "lalg.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 93 "lalg.y"
    { yyerror(".");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 97 "lalg.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 98 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 101 "lalg.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 105 "lalg.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 109 "lalg.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 113 "lalg.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 113 "lalg.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 114 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 115 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 118 "lalg.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 119 "lalg.y"
    { yyerror("="); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 122 "lalg.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 123 "lalg.y"
    { yyerror("numero"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 126 "lalg.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 127 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 131 "lalg.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 135 "lalg.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 135 "lalg.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 136 "lalg.y"
    { yyerror(":"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 139 "lalg.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 140 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 144 "lalg.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 145 "lalg.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 146 "lalg.y"
    { yyerror("tipo"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 150 "lalg.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 151 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 151 "lalg.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 155 "lalg.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 156 "lalg.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 160 "lalg.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 164 "lalg.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 164 "lalg.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 165 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 168 "lalg.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 169 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 173 "lalg.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 174 "lalg.y"
    { yyclearin; yyerror(")"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 175 "lalg.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 179 "lalg.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 183 "lalg.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 184 "lalg.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 188 "lalg.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 189 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 190 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 193 "lalg.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 194 "lalg.y"
    { yyerror("end"); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 198 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 206 "lalg.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 207 "lalg.y"
    { yyerror(")"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 208 "lalg.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 212 "lalg.y"
    {;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 213 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 213 "lalg.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 217 "lalg.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 218 "lalg.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 222 "lalg.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 228 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 229 "lalg.y"
    { yyerror("cmd"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 235 "lalg.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 235 "lalg.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 237 "lalg.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 238 "lalg.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 238 "lalg.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 239 "lalg.y"
    {;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 239 "lalg.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 240 "lalg.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 241 "lalg.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 241 "lalg.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 242 "lalg.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 242 "lalg.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 242 "lalg.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 246 "lalg.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 249 "lalg.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 249 "lalg.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 250 "lalg.y"
    {yyerror("then");;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 250 "lalg.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 256 "lalg.y"
    {;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 256 "lalg.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 257 "lalg.y"
    { yyerror("do") ;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 261 "lalg.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 265 "lalg.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 266 "lalg.y"
    {;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 267 "lalg.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 268 "lalg.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 269 "lalg.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 270 "lalg.y"
    {;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 271 "lalg.y"
    { yyerror("sinal de relacao"); ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 275 "lalg.y"
    {;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 279 "lalg.y"
    {;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 280 "lalg.y"
    {;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 281 "lalg.y"
    {;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 285 "lalg.y"
    {;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 286 "lalg.y"
    {;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 290 "lalg.y"
    {;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 291 "lalg.y"
    {;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 295 "lalg.y"
    {;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 299 "lalg.y"
    {;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 300 "lalg.y"
    {;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 304 "lalg.y"
    {;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 305 "lalg.y"
    {;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 309 "lalg.y"
    {;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 310 "lalg.y"
    {;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 311 "lalg.y"
    {;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 312 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 316 "lalg.y"
    {;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 317 "lalg.y"
    { yyerror(")"); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 321 "lalg.y"
    {;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 322 "lalg.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2461 "lalg.tab.c"
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
#line 325 "lalg.y"


extern FILE *yyin;

int main (int argc, char *argv[])
{
#ifdef YYDEBUG
	yydebug=0;
#endif
    if(argc != 2) {
        printf("Uso: %s programa.lalg\n", argv[0]);
        return -1;
    }

    FILE *entrada = fopen(argv[1], "r");
    if(!entrada) {
        printf("Nao foi possivel abrir o arquivo %s\n", argv[1]);
        return -1;
    }
    // Lex ira ler arquivo de entrada inves do STDIN
    yyin = entrada;

    yyparse();
    if(numerrors==0)
        printf ( "Analise Sintatica Completada\n" );
    else
        printf ( "Analise Sintatica Completada Com %d Erros\n", numerrors);

    return 0;
}

void yyerror (char *s)
{
        if(strcmp(s,"syntax error")){ /*Descartamos as mensagens padrões "syntax error do Bison*/
                fprintf (stderr, "Erro Sintatico: Linha %d, Coluna %d. Era esperado %s, encontrado: %s\n", num_lines, column, s, yytext);
                numerrors++;
        } 
}

