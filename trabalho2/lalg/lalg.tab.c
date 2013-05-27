
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
        #define YYDEBUG 1 /* For Debugging */

	#include <math.h>
        #include <stdio.h>
        #include <string.h>
        #include <stdlib.h>	
        int yylex (void);
        void yyerror (char *);
        int numerrors=0;
        extern int num_lines;


/* Line 189 of yacc.c  */
#line 88 "lalg.tab.c"

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
#line 175 "lalg.tab.c"

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
#define YYFINAL  8
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   173

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  75
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

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
       0,     0,     3,     6,     9,    10,    14,    15,    21,    24,
      28,    31,    33,    35,    40,    44,    46,    50,    53,    54,
      55,    60,    61,    68,    72,    75,    78,    81,    84,    86,
      88,    91,    92,    93,   100,   105,   107,   109,   111,   113,
     115,   118,   119,   123,   126,   127,   128,   132,   133,   134,
     135,   142,   143,   149,   152,   153,   157,   161,   165,   166,
     171,   174,   175,   180,   181,   187,   191,   194,   197,   199,
     201,   203,   207,   211,   212,   215,   216,   220,   223,   224,
     225,   229,   230,   234,   235,   236,   240,   241,   245,   246,
     250,   251,   256,   257,   261,   264,   265,   269,   270,   271,
     282,   286,   287,   293,   296,   297,   302,   306,   308,   310,
     312,   314,   316,   318,   320,   323,   325,   327,   328,   332,
     333,   335,   337,   341,   345,   346,   348,   350,   352,   354,
     357,   359,   362,   365,   367
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     4,    49,    -1,     1,    37,    -1,    -1,
      44,    50,    52,    -1,    -1,     1,    32,    51,    54,    53,
      -1,     1,    37,    -1,    32,    54,    53,    -1,     1,    37,
      -1,    37,    -1,     1,    -1,    56,     5,    94,    55,    -1,
      56,     1,     6,    -1,     6,    -1,    57,    64,    72,    -1,
      58,    57,    -1,    -1,    -1,     8,    59,    44,    61,    -1,
      -1,     8,     1,    21,    60,   121,    32,    -1,     8,     1,
      32,    -1,    21,    62,    -1,     1,    32,    -1,   121,    63,
      -1,     1,    32,    -1,    32,    -1,     1,    -1,    65,    64,
      -1,    -1,    -1,     7,    69,    66,    33,    68,    67,    -1,
       7,    69,     1,    32,    -1,    32,    -1,     1,    -1,     9,
      -1,    10,    -1,     1,    -1,    44,    71,    -1,    -1,     1,
      70,    71,    -1,    36,    69,    -1,    -1,    -1,    74,    73,
      72,    -1,    -1,    -1,    -1,    11,    75,    44,    80,    76,
      78,    -1,    -1,    11,     1,    32,    77,    83,    -1,    32,
      83,    -1,    -1,     1,    79,    83,    -1,    34,    81,    35,
      -1,    34,    81,     1,    -1,    -1,    69,    33,    68,    82,
      -1,    32,    81,    -1,    -1,    87,     5,    94,    85,    -1,
      -1,    87,     1,     6,    84,    86,    -1,    87,     1,    32,
      -1,     6,    86,    -1,     1,    32,    -1,    32,    -1,     1,
      -1,    64,    -1,    34,    89,    35,    -1,    34,    89,     1,
      -1,    -1,    44,    91,    -1,    -1,     1,    90,    91,    -1,
      32,    89,    -1,    -1,    -1,    17,    93,    95,    -1,    -1,
      95,    32,    94,    -1,    -1,    -1,    12,    96,   104,    -1,
      -1,    13,    97,   104,    -1,    -1,    15,    98,   105,    -1,
      -1,    44,    99,    31,   112,    -1,    -1,    44,   100,    88,
      -1,     5,   107,    -1,    -1,    14,   101,   108,    -1,    -1,
      -1,    18,   102,    44,   103,    31,   112,    19,   112,    20,
      95,    -1,    34,    69,    35,    -1,    -1,   110,    16,   106,
      95,    92,    -1,    94,     6,    -1,    -1,   110,    20,   109,
      95,    -1,   112,   111,   112,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,     1,    -1,
     116,   114,    -1,    27,    -1,    28,    -1,    -1,   115,   116,
     114,    -1,    -1,    27,    -1,    28,    -1,   113,   119,   117,
      -1,   118,   119,   117,    -1,    -1,    29,    -1,    30,    -1,
      44,    -1,   121,    -1,    34,   120,    -1,     1,    -1,   112,
      35,    -1,   112,     1,    -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    75,    78,    78,    79,    79,    80,    83,
      84,    87,    88,    92,    93,    96,   100,   104,   105,   108,
     108,   109,   109,   110,   113,   114,   117,   118,   121,   122,
     126,   127,   130,   130,   131,   134,   135,   139,   140,   141,
     145,   146,   146,   150,   151,   155,   155,   156,   159,   159,
     159,   160,   160,   163,   164,   164,   168,   169,   170,   174,
     178,   179,   183,   184,   184,   185,   188,   189,   192,   193,
     197,   201,   202,   203,   207,   208,   208,   212,   213,   217,
     217,   218,   222,   225,   230,   230,   231,   231,   232,   232,
     233,   233,   234,   234,   235,   236,   236,   237,   237,   237,
     240,   243,   243,   246,   249,   249,   253,   257,   258,   259,
     260,   261,   262,   263,   267,   271,   272,   273,   277,   278,
     282,   283,   287,   291,   292,   296,   297,   301,   302,   303,
     304,   308,   309,   313,   314
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
  "\"numero real\"", "$accept", "programa", "programa1", "$@1", "$@2",
  "programa2", "programa3", "corpo", "corpo1", "dc", "dc_c", "dc_c0",
  "$@3", "$@4", "dc_c1", "dc_c2", "dc_c3", "dc_v", "dc_v0", "$@5", "dc_v1",
  "tipo_var", "variaveis", "$@6", "mais_var", "dc_p", "$@7", "dc_p0",
  "$@8", "$@9", "$@10", "dc_p1", "$@11", "parametros", "lista_par",
  "mais_par", "corpo_p", "$@12", "corpo_p1", "corpo_p2", "dc_loc",
  "lista_arg", "argumentos", "$@13", "mais_ident", "pfalsa", "$@14",
  "comandos", "cmd", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "$@22", "cmd_param", "cmd_if", "$@23", "cmd_begin", "cmd_while",
  "$@24", "condicao", "relacao", "expressao", "op_un", "outros_termos",
  "op_ad", "termo", "mais_fatores", "op_mul", "fator", "fator_exp",
  "numero", 0
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
       0,    47,    48,    48,    50,    49,    51,    49,    49,    52,
      52,    53,    53,    54,    54,    55,    56,    57,    57,    59,
      58,    60,    58,    58,    61,    61,    62,    62,    63,    63,
      64,    64,    66,    65,    65,    67,    67,    68,    68,    68,
      69,    70,    69,    71,    71,    73,    72,    72,    75,    76,
      74,    77,    74,    78,    79,    78,    80,    80,    80,    81,
      82,    82,    83,    84,    83,    83,    85,    85,    86,    86,
      87,    88,    88,    88,    89,    90,    89,    91,    91,    93,
      92,    92,    94,    94,    96,    95,    97,    95,    98,    95,
      99,    95,   100,    95,    95,   101,    95,   102,   103,    95,
     104,   106,   105,   107,   109,   108,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   113,   113,   113,   114,   114,
     115,   115,   116,   117,   117,   118,   118,   119,   119,   119,
     119,   120,   120,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     2,     0,     3,     0,     5,     2,     3,
       2,     1,     1,     4,     3,     1,     3,     2,     0,     0,
       4,     0,     6,     3,     2,     2,     2,     2,     1,     1,
       2,     0,     0,     6,     4,     1,     1,     1,     1,     1,
       2,     0,     3,     2,     0,     0,     3,     0,     0,     0,
       6,     0,     5,     2,     0,     3,     3,     3,     0,     4,
       2,     0,     4,     0,     5,     3,     2,     2,     1,     1,
       1,     3,     3,     0,     2,     0,     3,     2,     0,     0,
       3,     0,     3,     0,     0,     3,     0,     3,     0,     3,
       0,     4,     0,     3,     2,     0,     3,     0,     0,    10,
       3,     0,     5,     2,     0,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     0,     3,     0,
       1,     1,     3,     3,     0,     1,     1,     1,     1,     2,
       1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     4,     2,     1,     6,
       8,     0,    18,     0,    18,     5,     0,     0,     0,    31,
      18,    10,     0,     0,     0,    12,    11,     7,     0,    83,
       0,    47,    31,    17,     9,    21,    23,     0,    14,    83,
      84,    86,    95,    88,    97,    92,     0,     0,    41,    44,
       0,     0,    16,    45,    30,     0,     0,     0,    20,     0,
      94,     0,     0,   117,   117,     0,     0,    73,    15,    13,
      83,    44,     0,    40,     0,     0,     0,     0,    47,   133,
     134,     0,    25,     0,    24,     0,   103,     0,    85,    87,
     115,   116,    96,     0,     0,     0,   119,    89,     0,    98,
     117,     0,    93,    82,    42,    43,    34,     0,    51,    58,
      46,    22,    27,    29,    28,    26,     0,   104,   113,   107,
     108,   109,   110,   111,   112,   117,   130,   117,   127,   124,
     128,   120,   121,   114,   117,   101,     0,    91,    75,    78,
       0,    39,    37,    38,     0,    31,     0,    49,   100,     0,
     106,     0,   129,   125,   126,   122,     0,   119,     0,   117,
      78,     0,    74,    72,    71,    36,    35,    33,    70,    52,
       0,     0,     0,     0,   105,   132,   131,   124,   118,    81,
       0,    76,    77,     0,    83,     0,    57,    56,    54,    31,
      50,   123,    79,   102,   117,    63,    65,     0,    61,    31,
      53,     0,     0,     0,     0,     0,    62,     0,    59,    55,
      80,     0,    69,    68,    64,    67,    66,    60,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     7,    11,    12,    15,    27,    17,    69,    18,
      19,    20,    24,    55,    58,    84,   115,   168,    32,    75,
     167,   144,   171,    71,    73,    52,    78,    53,    77,   173,
     145,   190,   199,   147,   172,   208,   169,   203,   206,   214,
     170,   102,   140,   160,   162,   193,   201,    46,    47,    61,
      62,    64,    66,    67,    63,    65,   136,    88,    97,   158,
      60,    92,   149,    93,   125,    94,    95,   133,   134,    96,
     155,   156,   129,   152,   130
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -167
static const yytype_int16 yypact[] =
{
      70,   -16,     9,    82,  -167,   -15,  -167,  -167,  -167,  -167,
    -167,    15,    86,    32,    86,  -167,    11,     2,    19,    83,
      86,  -167,     2,    -3,    52,  -167,  -167,  -167,    99,    22,
      12,    95,    83,  -167,  -167,  -167,  -167,    66,  -167,    22,
    -167,  -167,  -167,  -167,  -167,    77,   101,    78,  -167,    73,
      29,    13,  -167,  -167,  -167,    47,    80,     6,  -167,   105,
    -167,    81,    81,    58,    58,    72,    87,    85,  -167,  -167,
      22,    73,    12,  -167,    88,    84,    89,    90,    95,  -167,
    -167,    91,  -167,    92,  -167,    31,  -167,    12,  -167,  -167,
    -167,  -167,  -167,    93,    76,     4,    61,  -167,    98,  -167,
      58,    14,  -167,  -167,  -167,  -167,  -167,    69,  -167,    94,
    -167,  -167,  -167,  -167,  -167,  -167,    96,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,  -167,    58,  -167,    58,  -167,    74,
    -167,  -167,  -167,  -167,    58,  -167,   102,  -167,  -167,    97,
       7,  -167,  -167,  -167,    40,    83,    12,  -167,  -167,    22,
    -167,     8,  -167,  -167,  -167,  -167,     4,    61,    22,    58,
      97,    14,  -167,  -167,  -167,  -167,  -167,  -167,  -167,  -167,
      79,   103,    24,    43,  -167,  -167,  -167,    74,  -167,   108,
     107,  -167,  -167,    59,    22,    69,  -167,  -167,  -167,    83,
    -167,  -167,  -167,  -167,    58,  -167,  -167,    67,   100,    83,
    -167,    22,   110,    44,   106,    44,  -167,    12,  -167,  -167,
    -167,    22,  -167,  -167,  -167,  -167,  -167,  -167,  -167
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -167,  -167,  -167,  -167,  -167,  -167,   113,   123,  -167,  -167,
     119,  -167,  -167,  -167,  -167,  -167,  -167,   -13,  -167,  -167,
    -167,   -63,   -26,  -167,    56,    62,  -167,  -167,  -167,  -167,
    -167,  -167,  -167,  -167,   -66,  -167,  -166,  -167,  -167,   -62,
    -167,  -167,   -19,  -167,   -14,  -167,  -167,   -39,  -147,  -167,
    -167,  -167,  -167,  -167,  -167,  -167,  -167,   104,  -167,  -167,
    -167,  -167,  -167,   109,  -167,   -99,  -167,   -10,  -167,    10,
     -29,  -167,    -7,  -167,    26
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -91
static const yytype_int16 yytable[] =
{
      59,   137,   174,    25,    50,   126,    31,    83,   163,   175,
       5,   179,    23,    48,    76,   138,    13,     9,    35,    54,
      28,     4,    10,   200,    29,   186,   150,    39,   151,    36,
      74,   103,   113,   209,    40,    41,    42,    43,   127,    26,
      44,   165,   164,   176,   188,   212,   105,    14,   128,    79,
      80,    79,    80,     6,   210,   -19,    49,   -48,   139,   187,
     180,   116,   -32,   114,   218,   195,    45,    56,   204,    21,
     141,     1,   166,   205,     2,   189,   213,   118,   142,   143,
     183,    81,     8,    85,   184,    90,    91,    57,   131,   132,
      30,   196,    79,    80,    16,   202,    37,   119,   120,   121,
     122,   123,   124,   153,   154,    38,    51,    68,   -90,    72,
      70,    86,    82,   117,   135,    87,    99,   107,   100,   101,
     106,   108,   198,   111,   112,   192,   194,   104,   146,   161,
     211,   148,   207,   159,   109,    34,   185,    22,   215,    33,
     110,   217,   182,   216,   157,   197,   181,   178,   191,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    89,     0,     0,     0,
       0,     0,     0,    98
};

static const yytype_int16 yycheck[] =
{
      39,   100,   149,     1,    30,     1,    19,     1,     1,     1,
       1,   158,     1,     1,     1,     1,     1,    32,    21,    32,
       1,    37,    37,   189,     5,     1,   125,     5,   127,    32,
       1,    70,     1,   199,    12,    13,    14,    15,    34,    37,
      18,     1,    35,    35,     1,     1,    72,    32,    44,    45,
      46,    45,    46,    44,   201,    44,    44,    44,    44,    35,
     159,    87,    33,    32,   211,     6,    44,     1,     1,    37,
       1,     1,    32,     6,     4,    32,    32,     1,     9,    10,
       1,    55,     0,    57,     5,    27,    28,    21,    27,    28,
       7,    32,    45,    46,     8,   194,    44,    21,    22,    23,
      24,    25,    26,    29,    30,     6,    11,     6,    31,    36,
      32,     6,    32,    20,    16,    34,    44,    33,    31,    34,
      32,    32,   185,    32,    32,    17,    19,    71,    34,    32,
      20,    35,    32,    31,    44,    22,    33,    14,    32,    20,
      78,   207,   161,   205,   134,   184,   160,   157,   177,   156,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,
      -1,    -1,    -1,    64
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     4,    48,    37,     1,    44,    49,     0,    32,
      37,    50,    51,     1,    32,    52,     8,    54,    56,    57,
      58,    37,    54,     1,    59,     1,    37,    53,     1,     5,
       7,    64,    65,    57,    53,    21,    32,    44,     6,     5,
      12,    13,    14,    15,    18,    44,    94,    95,     1,    44,
      69,    11,    72,    74,    64,    60,     1,    21,    61,    94,
     107,    96,    97,   101,    98,   102,    99,   100,     6,    55,
      32,    70,    36,    71,     1,    66,     1,    75,    73,    45,
      46,   121,    32,     1,    62,   121,     6,    34,   104,   104,
      27,    28,   108,   110,   112,   113,   116,   105,   110,    44,
      31,    34,    88,    94,    71,    69,    32,    33,    32,    44,
      72,    32,    32,     1,    32,    63,    69,    20,     1,    21,
      22,    23,    24,    25,    26,   111,     1,    34,    44,   119,
     121,    27,    28,   114,   115,    16,   103,   112,     1,    44,
      89,     1,     9,    10,    68,    77,    34,    80,    35,   109,
     112,   112,   120,    29,    30,   117,   118,   116,   106,    31,
      90,    32,    91,     1,    35,     1,    32,    67,    64,    83,
      87,    69,    81,    76,    95,     1,    35,   119,   114,    95,
     112,    91,    89,     1,     5,    33,     1,    35,     1,    32,
      78,   117,    17,    92,    19,     6,    32,    94,    68,    79,
      83,    93,   112,    84,     1,     6,    85,    32,    82,    83,
      95,    20,     1,    32,    86,    32,    86,    81,    95
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
        case 3:

/* Line 1455 of yacc.c  */
#line 75 "lalg.y"
    { yyerror("program"); yyclearin;;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 78 "lalg.y"
    {;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "lalg.y"
    {;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 79 "lalg.y"
    { yyerror("id"); yyclearin;;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 "lalg.y"
    { yyerror("program1"); yyclearin; ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 83 "lalg.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 84 "lalg.y"
    { yyerror("program2"); yyclearin; ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 87 "lalg.y"
    {;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 88 "lalg.y"
    { yyerror("program3"); yyclearin; ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 93 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 108 "lalg.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 108 "lalg.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 109 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 110 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 113 "lalg.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 114 "lalg.y"
    { yyerror("="); ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 117 "lalg.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 118 "lalg.y"
    { yyerror("numero"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 122 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 130 "lalg.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 130 "lalg.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 131 "lalg.y"
    { yyerror(":"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 135 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 139 "lalg.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 140 "lalg.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 141 "lalg.y"
    { yyerror("tipo"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 145 "lalg.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 146 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 146 "lalg.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 150 "lalg.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 151 "lalg.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 155 "lalg.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 159 "lalg.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 159 "lalg.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 160 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 164 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 168 "lalg.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 169 "lalg.y"
    { yyclearin; yyerror(")"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 170 "lalg.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 174 "lalg.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 178 "lalg.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 179 "lalg.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 184 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 185 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 189 "lalg.y"
    { yyerror("end"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 193 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 201 "lalg.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 202 "lalg.y"
    { yyerror(")"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 203 "lalg.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 207 "lalg.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 208 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 208 "lalg.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 212 "lalg.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 213 "lalg.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 217 "lalg.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 230 "lalg.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 230 "lalg.y"
    {;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 231 "lalg.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 231 "lalg.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 232 "lalg.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 233 "lalg.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 233 "lalg.y"
    {;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 234 "lalg.y"
    {;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 234 "lalg.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 235 "lalg.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 236 "lalg.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 237 "lalg.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 237 "lalg.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 237 "lalg.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 240 "lalg.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 243 "lalg.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 243 "lalg.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 249 "lalg.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 249 "lalg.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 253 "lalg.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 257 "lalg.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 258 "lalg.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 259 "lalg.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 260 "lalg.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 261 "lalg.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 262 "lalg.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 263 "lalg.y"
    { yyerror("sinal de relacao"); ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 267 "lalg.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 271 "lalg.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 272 "lalg.y"
    {;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 273 "lalg.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 277 "lalg.y"
    {;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 278 "lalg.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 282 "lalg.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 283 "lalg.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 287 "lalg.y"
    {;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 291 "lalg.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 292 "lalg.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 296 "lalg.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 297 "lalg.y"
    {;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 301 "lalg.y"
    {;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 302 "lalg.y"
    {;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 303 "lalg.y"
    {;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 304 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); ;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 308 "lalg.y"
    {;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 309 "lalg.y"
    { yyerror(")"); ;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 313 "lalg.y"
    {;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 314 "lalg.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2306 "lalg.tab.c"
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
#line 317 "lalg.y"


int main (int argc, char *argv[])
{
        yyparse();
        if(numerrors==0)
                printf ( "Parse Completed\n" );
        else
                printf ( "Parse Completed with %d errors\n", numerrors);

        return 0;
}

void yyerror (char *s)
{
        if(strcmp(s,"syntax error")){ /*Descartamos as mensagens padrões "syntax error do Bison*/
                fprintf (stderr, " Erro sintatico: Line %d, Era esperado %s\n", num_lines, s);
                numerrors++;
        } 
}

