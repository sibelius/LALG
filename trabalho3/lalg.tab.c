
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
    #include "simbolTable.h"
    #include "ListaLigada/ListaLigadaVar.h"
    #include "ListaLigada/ListaLigadaInt.h"

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
	int type;
    struct snode {
        int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
    ListaLigadaVar list;



/* Line 214 of yacc.c  */
#line 211 "lalg.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 223 "lalg.tab.c"

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
#define YYLAST   179

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  47
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  147
/* YYNRULES -- Number of states.  */
#define YYNSTATES  244

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
      91,    94,    97,   100,   103,   105,   107,   110,   111,   117,
     122,   124,   126,   128,   130,   132,   135,   136,   140,   143,
     144,   145,   149,   150,   151,   152,   159,   160,   166,   169,
     170,   174,   178,   182,   183,   188,   191,   192,   197,   198,
     204,   208,   211,   214,   216,   218,   220,   224,   228,   229,
     232,   233,   237,   240,   241,   242,   246,   247,   251,   252,
     257,   258,   263,   264,   265,   269,   270,   274,   275,   279,
     280,   285,   286,   290,   293,   294,   298,   299,   300,   311,
     315,   316,   322,   323,   329,   332,   333,   340,   341,   348,
     352,   354,   356,   358,   360,   362,   364,   366,   369,   371,
     373,   374,   378,   379,   381,   383,   387,   391,   392,   394,
     396,   398,   400,   403,   405,   408,   411,   413
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      48,     0,    -1,     4,    51,    -1,    -1,     1,    32,    49,
      57,    56,    -1,    -1,     1,    50,    57,    56,    -1,     1,
      37,    -1,    -1,    44,    52,    55,    -1,    -1,     1,    32,
      53,    57,    56,    -1,    -1,     1,    54,    57,    56,    -1,
       1,    37,    -1,    32,    57,    56,    -1,     1,    37,    -1,
      37,    -1,     1,    -1,    59,     5,    96,    58,    -1,    59,
       1,     6,    -1,     6,    -1,    60,    67,    74,    -1,    61,
      60,    -1,    -1,    -1,     8,    62,    44,    64,    -1,    -1,
       8,     1,    21,    63,   127,    32,    -1,     8,     1,    32,
      -1,    21,    65,    -1,     1,    32,    -1,   127,    66,    -1,
       1,    32,    -1,    32,    -1,     1,    -1,    68,    67,    -1,
      -1,     7,    71,    33,    70,    69,    -1,     7,    71,     1,
      32,    -1,    32,    -1,     1,    -1,     9,    -1,    10,    -1,
       1,    -1,    44,    73,    -1,    -1,     1,    72,    73,    -1,
      36,    71,    -1,    -1,    -1,    76,    75,    74,    -1,    -1,
      -1,    -1,    11,    77,    44,    82,    78,    80,    -1,    -1,
      11,     1,    32,    79,    85,    -1,    32,    85,    -1,    -1,
       1,    81,    85,    -1,    34,    83,    35,    -1,    34,    83,
       1,    -1,    -1,    71,    33,    70,    84,    -1,    32,    83,
      -1,    -1,    89,     5,    96,    87,    -1,    -1,    89,     1,
       6,    86,    88,    -1,    89,     1,    32,    -1,     6,    88,
      -1,     1,    32,    -1,    32,    -1,     1,    -1,    67,    -1,
      34,    91,    35,    -1,    34,    91,     1,    -1,    -1,    44,
      93,    -1,    -1,     1,    92,    93,    -1,    32,    91,    -1,
      -1,    -1,    17,    95,    99,    -1,    -1,    99,    32,    96,
      -1,    -1,    99,     1,    97,    96,    -1,    -1,     1,    32,
      98,    96,    -1,    -1,    -1,    12,   100,   108,    -1,    -1,
      13,   101,   108,    -1,    -1,    15,   102,   109,    -1,    -1,
      44,   103,    31,   118,    -1,    -1,    44,   104,    90,    -1,
       5,   112,    -1,    -1,    14,   105,   113,    -1,    -1,    -1,
      18,   106,    44,   107,    31,   118,    19,   118,    20,    99,
      -1,    34,    71,    35,    -1,    -1,   116,    16,   110,    99,
      94,    -1,    -1,   116,     1,   111,    99,    94,    -1,    96,
       6,    -1,    -1,    34,   116,    35,    20,   114,    99,    -1,
      -1,    34,   116,    35,     1,   115,    99,    -1,   118,   117,
     118,    -1,    21,    -1,    22,    -1,    23,    -1,    24,    -1,
      25,    -1,    26,    -1,     1,    -1,   122,   120,    -1,    27,
      -1,    28,    -1,    -1,   121,   122,   120,    -1,    -1,    27,
      -1,    28,    -1,   119,   125,   123,    -1,   124,   125,   123,
      -1,    -1,    29,    -1,    30,    -1,    44,    -1,   127,    -1,
      34,   126,    -1,     1,    -1,   118,    35,    -1,   118,     1,
      -1,    45,    -1,    46,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   120,   120,   121,   121,   122,   122,   123,   126,   126,
     127,   127,   128,   128,   129,   132,   133,   136,   137,   141,
     142,   145,   149,   153,   154,   157,   157,   158,   158,   159,
     162,   163,   166,   167,   170,   171,   175,   176,   179,   184,
     187,   188,   192,   193,   194,   198,   208,   208,   215,   217,
     225,   225,   226,   229,   229,   229,   230,   230,   233,   234,
     234,   238,   239,   240,   244,   248,   249,   253,   254,   254,
     255,   258,   259,   262,   263,   267,   271,   272,   273,   277,
     278,   278,   282,   283,   287,   287,   288,   292,   293,   293,
     294,   294,   295,   300,   300,   301,   301,   302,   302,   303,
     303,   304,   304,   305,   306,   306,   307,   307,   307,   311,
     314,   314,   315,   315,   318,   321,   321,   322,   322,   326,
     330,   331,   332,   333,   334,   335,   336,   340,   344,   345,
     346,   350,   351,   355,   356,   360,   364,   367,   371,   372,
     376,   392,   402,   403,   407,   408,   412,   413
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
  "$@6", "$@7", "dc_c1", "dc_c2", "dc_c3", "dc_v", "dc_v0", "dc_v1",
  "tipo_var", "variaveis", "$@8", "mais_var", "dc_p", "$@9", "dc_p0",
  "$@10", "$@11", "$@12", "dc_p1", "$@13", "parametros", "lista_par",
  "mais_par", "corpo_p", "$@14", "corpo_p1", "corpo_p2", "dc_loc",
  "lista_arg", "argumentos", "$@15", "mais_ident", "pfalsa", "$@16",
  "comandos", "$@17", "$@18", "cmd", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "cmd_param", "cmd_if", "$@27", "$@28",
  "cmd_begin", "cmd_while", "$@29", "$@30", "condicao", "relacao",
  "expressao", "op_un", "outros_termos", "op_ad", "termo", "mais_fatores",
  "op_mul", "fator", "fator_exp", "numero", 0
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
      64,    64,    65,    65,    66,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    71,    72,    71,    73,    73,
      75,    74,    74,    77,    78,    76,    79,    76,    80,    81,
      80,    82,    82,    82,    83,    84,    84,    85,    86,    85,
      85,    87,    87,    88,    88,    89,    90,    90,    90,    91,
      92,    91,    93,    93,    95,    94,    94,    96,    97,    96,
      98,    96,    96,   100,    99,   101,    99,   102,    99,   103,
      99,   104,    99,    99,   105,    99,   106,   107,    99,   108,
     110,   109,   111,   109,   112,   114,   113,   115,   113,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   119,   119,
     119,   120,   120,   121,   121,   122,   123,   123,   124,   124,
     125,   125,   125,   125,   126,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     0,     4,     0,     6,     3,
       2,     2,     2,     2,     1,     1,     2,     0,     5,     4,
       1,     1,     1,     1,     1,     2,     0,     3,     2,     0,
       0,     3,     0,     0,     0,     6,     0,     5,     2,     0,
       3,     3,     3,     0,     4,     2,     0,     4,     0,     5,
       3,     2,     2,     1,     1,     1,     3,     3,     0,     2,
       0,     3,     2,     0,     0,     3,     0,     3,     0,     4,
       0,     4,     0,     0,     3,     0,     3,     0,     3,     0,
       4,     0,     3,     2,     0,     3,     0,     0,    10,     3,
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
       1,    24,     0,     0,     0,    37,    24,    10,    14,    24,
       0,     0,     0,     0,    18,    17,     6,     0,     0,     0,
      52,    37,    23,    24,     0,     0,    24,     9,     4,    27,
      29,     0,    20,     0,     0,    93,    95,   104,    97,   106,
     101,     0,     0,    46,    49,     0,     0,    22,    50,    36,
       0,    13,    16,     0,     0,     0,     0,    26,    90,     0,
     103,     0,     0,     0,   130,     0,     0,    78,    21,    19,
      88,     0,    49,     0,    45,     0,     0,     0,     0,    52,
      11,    15,   146,   147,     0,    31,     0,    30,     0,     0,
     114,     0,    94,    96,   130,   105,   128,   129,    98,     0,
       0,     0,   132,   107,   130,     0,   102,     0,    87,    47,
      48,    39,    44,    42,    43,     0,    56,    63,    51,    28,
      33,    35,    34,    32,    91,     0,     0,   112,   110,   126,
     120,   121,   122,   123,   124,   125,   130,   143,   130,   140,
     137,   141,   133,   134,   127,   130,     0,   100,    80,    83,
       0,    89,    41,    40,    38,    37,     0,    54,   109,     0,
       0,     0,   119,     0,   142,   138,   139,   135,     0,   132,
     130,    83,     0,    79,    77,    76,    75,    57,     0,     0,
       0,     0,   117,   115,    86,    86,   145,   144,   137,   131,
       0,    81,    82,     0,     0,     0,    62,    61,    59,    37,
      55,     0,     0,    84,   113,   111,   136,   130,    68,    70,
       0,    66,    37,    58,   118,   116,     0,     0,     0,     0,
       0,    67,     0,    64,    60,    85,     0,    74,    73,    69,
      72,    71,    65,   108
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    79,    14,    15,    16,    23,    64,    67,    97,   133,
     186,    31,   164,   125,   189,    82,    84,    57,    89,    58,
      88,   191,   165,   210,   222,   167,   190,   233,   187,   228,
     231,   239,   188,   116,   160,   181,   183,   214,   226,    51,
     117,    99,    52,    71,    72,    74,    76,    77,    73,    75,
     156,   102,   108,   171,   170,    70,   105,   212,   211,   109,
     146,   110,   111,   154,   155,   112,   177,   178,   150,   174,
     151
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -168
static const yytype_int16 yypact[] =
{
     119,    -1,    10,    66,  -168,  -168,    88,    55,  -168,  -168,
    -168,    88,    16,    27,    29,    96,    88,  -168,  -168,    88,
      15,    27,    63,    64,  -168,  -168,  -168,   112,     9,    17,
     120,    96,  -168,    88,    27,    97,    88,  -168,  -168,  -168,
    -168,    80,  -168,   104,     9,  -168,  -168,  -168,  -168,  -168,
     106,   129,    39,  -168,   105,    24,    18,  -168,  -168,  -168,
      27,  -168,  -168,    27,    82,   107,     6,  -168,  -168,   132,
    -168,   108,   108,   109,    98,   100,   114,   113,  -168,  -168,
    -168,     9,   105,    17,  -168,   117,    90,   118,   110,   120,
    -168,  -168,  -168,  -168,   121,  -168,   123,  -168,    40,     9,
    -168,    17,  -168,  -168,    98,  -168,  -168,  -168,  -168,    81,
      89,     4,   102,  -168,    98,    19,  -168,     9,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,    57,  -168,   122,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,   111,   124,  -168,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,    98,  -168,    98,  -168,
     103,  -168,  -168,  -168,  -168,    98,   126,  -168,  -168,   130,
       7,  -168,  -168,  -168,  -168,    96,    17,  -168,  -168,    85,
      65,    65,  -168,     8,  -168,  -168,  -168,  -168,     4,   102,
      98,   130,    19,  -168,  -168,  -168,  -168,  -168,   116,   115,
      11,    74,  -168,  -168,   134,   134,  -168,  -168,   103,  -168,
     133,  -168,  -168,     0,     9,    90,  -168,  -168,  -168,    96,
    -168,    65,    65,  -168,  -168,  -168,  -168,    98,  -168,  -168,
      87,   131,    96,  -168,  -168,  -168,    65,   138,    75,   135,
      75,  -168,    17,  -168,  -168,  -168,    65,  -168,  -168,  -168,
    -168,  -168,  -168,  -168
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,  -168,     5,
      83,  -168,  -168,   145,  -168,  -168,  -168,  -168,  -168,  -168,
      -2,  -168,  -168,   -65,   -27,  -168,    84,    76,  -168,  -168,
    -168,  -168,  -168,  -168,  -168,  -168,   -68,  -168,  -124,  -168,
    -168,   -62,  -168,  -168,   -13,  -168,   -11,   -24,  -168,   -44,
    -168,  -168,  -167,  -168,  -168,  -168,  -168,  -168,  -168,  -168,
    -168,   101,  -168,  -168,  -168,  -168,  -168,  -168,  -168,    68,
    -168,  -113,  -168,    -5,  -168,    20,   -22,  -168,     1,  -168,
      58
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -100
static const yytype_int16 yytable[] =
{
      69,   157,    55,   194,   195,   147,   218,    96,   184,   196,
      43,     7,   206,    30,    44,   -92,    35,    22,    53,    87,
     158,    45,    46,    47,    48,    85,    38,    49,    24,    59,
      27,     4,   219,   172,    28,   173,     5,   118,   148,    61,
      80,   131,   185,   197,   224,   225,   207,    36,   149,    92,
      93,    92,    93,    50,     8,   134,   120,    86,   162,   235,
     -25,    54,   -53,   159,    25,    90,    10,   200,    91,   243,
      44,    81,   132,   161,   135,   208,   237,    45,    46,    47,
      48,    65,   137,    49,    39,   223,   192,    17,   229,   163,
     139,   122,    18,   230,    21,    40,    12,   138,   234,   123,
     124,    66,    34,    29,   227,   193,   209,   238,    41,    50,
     140,   141,   142,   143,   144,   145,    60,   203,    42,    63,
       1,   204,    94,     2,    98,   106,   107,    92,    93,   152,
     153,    56,   175,   176,    62,    78,    68,   -99,   100,    95,
     221,    83,   101,   104,   113,   114,   168,   115,   205,   121,
     126,   213,   217,   129,   127,   130,   166,   180,   236,   169,
     220,    32,   182,   232,   242,   128,   119,   240,   241,   202,
     201,   215,   136,   103,   199,   179,   216,     0,     0,   198
};

static const yytype_int16 yycheck[] =
{
      44,   114,    29,   170,   171,     1,     6,     1,     1,     1,
       1,     1,     1,    15,     5,     6,     1,     1,     1,     1,
       1,    12,    13,    14,    15,     1,    21,    18,     1,    31,
       1,    32,    32,   146,     5,   148,    37,    81,    34,    34,
       1,     1,    35,    35,   211,   212,    35,    32,    44,    45,
      46,    45,    46,    44,    44,    99,    83,    33,     1,   226,
      44,    44,    44,    44,    37,    60,     0,   180,    63,   236,
       5,    32,    32,   117,   101,     1,     1,    12,    13,    14,
      15,     1,     1,    18,    21,   209,     1,    32,     1,    32,
       1,     1,    37,     6,    11,    32,     8,    16,   222,     9,
      10,    21,    19,     7,   217,    20,    32,    32,    44,    44,
      21,    22,    23,    24,    25,    26,    33,     1,     6,    36,
       1,     5,    64,     4,    66,    27,    28,    45,    46,    27,
      28,    11,    29,    30,    37,     6,    32,    31,     6,    32,
     205,    36,    34,    34,    44,    31,    35,    34,    33,    32,
      32,    17,    19,    32,    44,    32,    34,    31,    20,    35,
     204,    16,    32,    32,   232,    89,    82,    32,   230,   182,
     181,   195,   104,    72,   179,   155,   198,    -1,    -1,   178
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
      44,    96,    99,     1,    44,    71,    11,    74,    76,    67,
      57,    56,    37,    57,    63,     1,    21,    64,    32,    96,
     112,   100,   101,   105,   102,   106,   103,   104,     6,    58,
       1,    32,    72,    36,    73,     1,    33,     1,    77,    75,
      56,    56,    45,    46,   127,    32,     1,    65,   127,    98,
       6,    34,   108,   108,    34,   113,    27,    28,   109,   116,
     118,   119,   122,    44,    31,    34,    90,    97,    96,    73,
      71,    32,     1,     9,    10,    70,    32,    44,    74,    32,
      32,     1,    32,    66,    96,    71,   116,     1,    16,     1,
      21,    22,    23,    24,    25,    26,   117,     1,    34,    44,
     125,   127,    27,    28,   120,   121,   107,   118,     1,    44,
      91,    96,     1,    32,    69,    79,    34,    82,    35,    35,
     111,   110,   118,   118,   126,    29,    30,   123,   124,   122,
      31,    92,    32,    93,     1,    35,    67,    85,    89,    71,
      83,    78,     1,    20,    99,    99,     1,    35,   125,   120,
     118,    93,    91,     1,     5,    33,     1,    35,     1,    32,
      80,   115,   114,    17,    94,    94,   123,    19,     6,    32,
      96,    70,    81,    85,    99,    99,    95,   118,    86,     1,
       6,    87,    32,    84,    85,    99,    20,     1,    32,    88,
      32,    88,    83,    99
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
#line 120 "lalg.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 121 "lalg.y"
    { yyerror("program"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 122 "lalg.y"
    { yyerror("program");;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 123 "lalg.y"
    { yyerror("program");;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 126 "lalg.y"
    {;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 126 "lalg.y"
    {;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 127 "lalg.y"
    { yyerror("id");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 128 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 129 "lalg.y"
    { yyerror("id");;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 132 "lalg.y"
    {;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 133 "lalg.y"
    { yyerror(";");;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 136 "lalg.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 137 "lalg.y"
    { yyerror(".");;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 141 "lalg.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 142 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 145 "lalg.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 149 "lalg.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 153 "lalg.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 157 "lalg.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 157 "lalg.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 158 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 159 "lalg.y"
    { yyerror("id"); ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 162 "lalg.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 163 "lalg.y"
    { yyerror("="); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 166 "lalg.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 167 "lalg.y"
    { yyerror("numero"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 170 "lalg.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 171 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 175 "lalg.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 180 "lalg.y"
    {  
            /* Adiciona na tabela de simbolos todas as variaveis */
            addVariables( &(yyvsp[(2) - (5)].list), (yyvsp[(4) - (5)].snode).type );
        ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 184 "lalg.y"
    { yyerror(":"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 187 "lalg.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 188 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 192 "lalg.y"
    { (yyval.snode).type = REAL; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 193 "lalg.y"
    { (yyval.snode).type = INTEGER; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 194 "lalg.y"
    { yyerror("tipo"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 199 "lalg.y"
    {
            (yyval.list) = (yyvsp[(2) - (2)].list);
            Variable variable;
            variable.name = (yyvsp[(1) - (2)].name);
            variable.type = 0;
            llvar_inserir( & (yyval.list), &variable);
            llvar_imprimir(& (yyval.list));
            printf("\n");
        ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 208 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 209 "lalg.y"
    {
            (yyval.list) = (yyvsp[(3) - (3)].list);
        ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 215 "lalg.y"
    { (yyval.list) = (yyvsp[(2) - (2)].list) ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 217 "lalg.y"
    {
            ListaLigadaVar lista;
            llvar_criar(&lista);
            (yyval.list) = lista;
        ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 225 "lalg.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 229 "lalg.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 229 "lalg.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 230 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 233 "lalg.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 234 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 238 "lalg.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 239 "lalg.y"
    { yyclearin; yyerror(")"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 240 "lalg.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 244 "lalg.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 248 "lalg.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 249 "lalg.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 253 "lalg.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 254 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 255 "lalg.y"
    { yyerror("begin"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 258 "lalg.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 259 "lalg.y"
    { yyerror("end"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 263 "lalg.y"
    { yyerror(";"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 271 "lalg.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 272 "lalg.y"
    { yyerror(")"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 273 "lalg.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 277 "lalg.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 278 "lalg.y"
    { yyclearin; yyerror("id"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 278 "lalg.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 282 "lalg.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 283 "lalg.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 287 "lalg.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 293 "lalg.y"
    { yyclearin; yyerror(";"); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 294 "lalg.y"
    { yyerror("cmd"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 300 "lalg.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 300 "lalg.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 301 "lalg.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 301 "lalg.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 302 "lalg.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 303 "lalg.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 303 "lalg.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 304 "lalg.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 304 "lalg.y"
    {;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 305 "lalg.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 306 "lalg.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 306 "lalg.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 307 "lalg.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 307 "lalg.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 307 "lalg.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 311 "lalg.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 314 "lalg.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 314 "lalg.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 315 "lalg.y"
    {yyerror("then");;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 315 "lalg.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 321 "lalg.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 321 "lalg.y"
    {;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 322 "lalg.y"
    { yyerror("do") ;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 326 "lalg.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 330 "lalg.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 331 "lalg.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 332 "lalg.y"
    {;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 333 "lalg.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 334 "lalg.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 335 "lalg.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 336 "lalg.y"
    { yyerror("sinal de relacao"); ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 340 "lalg.y"
    {;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 344 "lalg.y"
    {;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 345 "lalg.y"
    {;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 346 "lalg.y"
    {;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 350 "lalg.y"
    {;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 351 "lalg.y"
    {;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 355 "lalg.y"
    {;}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 356 "lalg.y"
    {;}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 360 "lalg.y"
    {;}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 364 "lalg.y"
    { /*$$ = $1;
        if($3 == NULL) { $$->right = $2; }
        else { $3->left = $2; $$->right = $3; }*/ ;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 367 "lalg.y"
    { /*$$ = NULL;*/ ;}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 371 "lalg.y"
    { /*$$ = new ExpressionTree;*/ /*$$->type = OPERATOR; $$->math_op = TIMES;*/ ;}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 372 "lalg.y"
    { /*$$ = new ExpressionTree;*/ /*$$->type = OPERATOR; $$->math_op = DIVISION;*/ ;}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 377 "lalg.y"
    { 
            /* Verificando se o identificador foi declarado */
            Node* ident = find( (yyvsp[(1) - (1)].name) );
            if ( ident == NULL ) {
                code_generate = FALSE;
                fprintf (stderr, 
                "Erro Semantico: Linha %d, Coluna %d. Identificador %s nao declarado\n", 
                num_lines, column, (yyvsp[(1) - (1)].name));

                (yyval.snode).type = INDEFINED;
            } else {
                (yyval.snode).type = ident->type;
                /* buildReadMemory */
            }
        ;}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 393 "lalg.y"
    { 
            if((yyvsp[(1) - (1)].snode).type == INTEGER) {
                (yyval.snode).type = INTEGER;
                (yyval.snode).i_value = (yyvsp[(1) - (1)].snode).i_value;
            } else {
                (yyval.snode).type = REAL;
                (yyval.snode).i_value = (yyvsp[(1) - (1)].snode).f_value;
            }
        ;}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 402 "lalg.y"
    { (yyval.snode) = (yyvsp[(2) - (2)].snode); ;}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 403 "lalg.y"
    { yyclearin; yyerror("sinal de relacao"); /*$$ = new ExpressionTree;*/ /*$$->type = ERROR;*/ ;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 407 "lalg.y"
    { (yyval.snode) = (yyvsp[(1) - (2)].snode); ;}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 408 "lalg.y"
    { yyerror(")"); (yyval.snode) = (yyvsp[(1) - (2)].snode); ;}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 412 "lalg.y"
    { (yyval.snode).type = INTEGER; (yyval.snode).i_value = (yyvsp[(1) - (1)].i_number); ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 413 "lalg.y"
    { (yyval.snode).type = REAL; (yyval.snode).f_value = (yyvsp[(1) - (1)].r_number); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2541 "lalg.tab.c"
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
#line 416 "lalg.y"


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

