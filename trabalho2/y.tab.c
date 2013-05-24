/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "sintatico.y"


extern "C"
{
	int yyparse(void);
	int yylex(void);  
	int yywrap()
	{
		return 1;
	}
}




/* Line 268 of yacc.c  */
#line 87 "y.tab.c"

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
     T_PROGRAM = 258,
     T_BEGIN = 259,
     T_END = 260,
     T_VAR = 261,
     T_CONST = 262,
     T_REAL = 263,
     T_INTEGER = 264,
     T_PROCEDURE = 265,
     T_READ = 266,
     T_WRITE = 267,
     T_WHILE = 268,
     T_IF = 269,
     T_THEN = 270,
     T_ELSE = 271,
     T_FOR = 272,
     T_TO = 273,
     T_DO = 274,
     T_EQUAL = 275,
     T_DIFF = 276,
     T_GREATER_EQ = 277,
     T_LESSER_EQ = 278,
     T_GREATER = 279,
     T_LESSER = 280,
     T_PLUS = 281,
     T_MINUS = 282,
     T_TIMES = 283,
     T_DIVISION = 284,
     T_ASSIGN = 285,
     T_SEMICOLON = 286,
     T_COLON = 287,
     T_L_PAREN = 288,
     T_R_PAREN = 289,
     T_COMMA = 290,
     T_DOT = 291,
     T_ID = 292,
     ERR_MF_INTEGER = 293,
     ERR_MF_REAL = 294,
     ERR_MF_ID = 295,
     ERR_LONG_ID = 296,
     ERR_COMMENT = 297,
     ERR_UNKNOWN = 298,
     T_INUMBER = 299,
     T_RNUMBER = 300
   };
#endif
/* Tokens.  */
#define T_PROGRAM 258
#define T_BEGIN 259
#define T_END 260
#define T_VAR 261
#define T_CONST 262
#define T_REAL 263
#define T_INTEGER 264
#define T_PROCEDURE 265
#define T_READ 266
#define T_WRITE 267
#define T_WHILE 268
#define T_IF 269
#define T_THEN 270
#define T_ELSE 271
#define T_FOR 272
#define T_TO 273
#define T_DO 274
#define T_EQUAL 275
#define T_DIFF 276
#define T_GREATER_EQ 277
#define T_LESSER_EQ 278
#define T_GREATER 279
#define T_LESSER 280
#define T_PLUS 281
#define T_MINUS 282
#define T_TIMES 283
#define T_DIVISION 284
#define T_ASSIGN 285
#define T_SEMICOLON 286
#define T_COLON 287
#define T_L_PAREN 288
#define T_R_PAREN 289
#define T_COMMA 290
#define T_DOT 291
#define T_ID 292
#define ERR_MF_INTEGER 293
#define ERR_MF_REAL 294
#define ERR_MF_ID 295
#define ERR_LONG_ID 296
#define ERR_COMMENT 297
#define ERR_UNKNOWN 298
#define T_INUMBER 299
#define T_RNUMBER 300




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union 
/* Line 293 of yacc.c  */
#line 16 "sintatico.y"
YYSTYPE
{

/* Line 293 of yacc.c  */
#line 16 "sintatico.y"

	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;



/* Line 293 of yacc.c  */
#line 230 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 242 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   518

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  31
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  292

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    15,    21,    27,    33,    39,    41,
      46,    51,    56,    61,    66,    68,    72,    76,    80,    84,
      90,    96,   102,   108,   114,   120,   122,   123,   130,   137,
     144,   151,   158,   165,   172,   174,   175,   177,   179,   181,
     184,   187,   190,   193,   195,   202,   209,   216,   223,   230,
     237,   244,   246,   250,   254,   258,   262,   264,   269,   274,
     279,   284,   289,   291,   294,   297,   299,   305,   311,   317,
     323,   329,   335,   337,   341,   345,   349,   353,   355,   358,
     361,   364,   366,   369,   372,   374,   377,   380,   383,   385,
     389,   393,   397,   401,   403,   408,   413,   420,   426,   430,
     433,   437,   439,   443,   447,   451,   455,   457,   459,   461,
     463,   465,   467,   469,   472,   475,   478,   480,   482,   484,
     488,   492,   496,   500,   502,   504,   506,   510,   514,   518,
     522,   524,   528,   530,   532,   534,   536,   538,   540,   544,
     546,   548
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,     3,    37,    31,    48,    36,    -1,     1,
      37,    31,    48,    36,    -1,     3,     1,    31,    48,    36,
      -1,     3,    37,     1,    48,    36,    -1,     3,    37,    31,
       1,    36,    -1,     3,    37,    31,    48,     1,    -1,     1,
      -1,    49,     4,    64,     5,    -1,     1,     4,    64,     5,
      -1,    49,     1,    64,     5,    -1,    49,     4,     1,     5,
      -1,    49,     4,    64,     1,    -1,     1,    -1,    50,    51,
      55,    -1,     1,    51,    55,    -1,    50,     1,    55,    -1,
      50,    51,     1,    -1,     7,    37,    76,    31,    50,    -1,
       1,    37,    76,    31,    50,    -1,     7,     1,    76,    31,
      50,    -1,     7,    37,     1,    31,    50,    -1,     7,    37,
      76,     1,    50,    -1,     7,    37,    76,    31,     1,    -1,
       1,    -1,    -1,     6,    53,    32,    52,    31,    51,    -1,
       1,    53,    32,    52,    31,    51,    -1,     6,     1,    32,
      52,    31,    51,    -1,     6,    53,     1,    52,    31,    51,
      -1,     6,    53,    32,     1,    31,    51,    -1,     6,    53,
      32,    52,     1,    51,    -1,     6,    53,    32,    52,    31,
       1,    -1,     1,    -1,    -1,     8,    -1,     9,    -1,     1,
      -1,    37,    54,    -1,    35,    53,    -1,     1,    53,    -1,
      35,     1,    -1,     1,    -1,    10,    37,    56,    31,    59,
      55,    -1,     1,    37,    56,    31,    59,    55,    -1,    10,
       1,    56,    31,    59,    55,    -1,    10,    37,     1,    31,
      59,    55,    -1,    10,    37,    56,     1,    59,    55,    -1,
      10,    37,    56,    31,     1,    55,    -1,    10,    37,    56,
      31,    59,     1,    -1,     1,    -1,    33,    57,    34,    -1,
       1,    57,    34,    -1,    33,     1,    34,    -1,    33,    57,
       1,    -1,     1,    -1,    53,    32,    52,    58,    -1,     1,
      32,    52,    58,    -1,    53,     1,    52,    58,    -1,    53,
      32,     1,    58,    -1,    53,    32,    52,     1,    -1,     1,
      -1,    31,    57,    -1,     1,    57,    -1,     1,    -1,    51,
       4,    64,     5,    31,    -1,     1,     4,    64,     5,    31,
      -1,    51,     1,    64,     5,    31,    -1,    51,     4,     1,
       5,    31,    -1,    51,     4,    64,     1,    31,    -1,    51,
       4,    64,     5,     1,    -1,     1,    -1,    33,    61,    34,
      -1,     1,    61,    34,    -1,    33,     1,    34,    -1,    33,
      61,     1,    -1,     1,    -1,    37,    62,    -1,     1,    62,
      -1,    37,     1,    -1,     1,    -1,    31,    61,    -1,     1,
      61,    -1,     1,    -1,    16,    65,    -1,     1,    65,    -1,
      16,     1,    -1,     1,    -1,    65,    31,    64,    -1,     1,
      31,    64,    -1,    65,     1,    64,    -1,    65,    31,     1,
      -1,     1,    -1,    11,    33,    53,    34,    -1,    12,    33,
      53,    34,    -1,    13,    33,    66,    34,    19,    65,    -1,
      14,    66,    15,    65,    63,    -1,    37,    30,    68,    -1,
      37,    60,    -1,     4,    64,     5,    -1,     1,    -1,    68,
      67,    68,    -1,     1,    67,    68,    -1,    68,     1,    68,
      -1,    68,    67,     1,    -1,     1,    -1,    20,    -1,    21,
      -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,    72,
      70,    -1,     1,    70,    -1,    72,     1,    -1,     1,    -1,
      26,    -1,    27,    -1,    71,    72,    70,    -1,     1,    72,
      70,    -1,    71,     1,    70,    -1,    71,    72,     1,    -1,
       1,    -1,    26,    -1,    27,    -1,    69,    75,    73,    -1,
       1,    75,    73,    -1,    69,     1,    73,    -1,    69,    75,
       1,    -1,     1,    -1,    74,    75,    73,    -1,     1,    -1,
      28,    -1,    29,    -1,     1,    -1,    37,    -1,    76,    -1,
      33,    68,    34,    -1,    44,    -1,    45,    -1,     1,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    75,    75,    76,    77,    78,    79,    80,    81,    83,
      84,    85,    86,    87,    88,    90,    91,    92,    93,    96,
      97,    98,    99,   100,   101,   102,   103,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   115,   116,   117,   119,
     121,   122,   123,   124,   126,   127,   128,   129,   130,   131,
     132,   133,   135,   136,   137,   138,   139,   141,   142,   143,
     144,   145,   146,   148,   149,   151,   154,   155,   156,   157,
     158,   159,   160,   166,   167,   168,   169,   170,   172,   173,
     174,   175,   177,   178,   180,   182,   183,   184,   185,   187,
     188,   189,   190,   191,   193,   194,   195,   196,   197,   198,
     199,   200,   202,   203,   204,   205,   206,   208,   209,   210,
     211,   212,   213,   216,   217,   218,   219,   221,   222,   225,
     226,   227,   228,   229,   231,   232,   235,   236,   237,   238,
     239,   241,   242,   244,   245,   246,   248,   249,   250,   252,
     253,   254
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_PROGRAM", "T_BEGIN", "T_END", "T_VAR",
  "T_CONST", "T_REAL", "T_INTEGER", "T_PROCEDURE", "T_READ", "T_WRITE",
  "T_WHILE", "T_IF", "T_THEN", "T_ELSE", "T_FOR", "T_TO", "T_DO",
  "T_EQUAL", "T_DIFF", "T_GREATER_EQ", "T_LESSER_EQ", "T_GREATER",
  "T_LESSER", "T_PLUS", "T_MINUS", "T_TIMES", "T_DIVISION", "T_ASSIGN",
  "T_SEMICOLON", "T_COLON", "T_L_PAREN", "T_R_PAREN", "T_COMMA", "T_DOT",
  "T_ID", "ERR_MF_INTEGER", "ERR_MF_REAL", "ERR_MF_ID", "ERR_LONG_ID",
  "ERR_COMMENT", "ERR_UNKNOWN", "T_INUMBER", "T_RNUMBER", "$accept",
  "programa", "corpo", "dc", "dc_c", "dc_v", "tipo_var", "variaveis",
  "mais_var", "dc_p", "parametros", "lista_par", "mais_par", "corpo_p",
  "lista_arg", "argumentos", "mais_ident", "pfalsa", "comandos", "cmd",
  "condicao", "relacao", "expressao", "op_un", "outros_termos", "op_ad",
  "termo", "mais_fatores", "op_mul", "fator", "numero", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    47,    47,    47,    47,    47,    47,    48,
      48,    48,    48,    48,    48,    49,    49,    49,    49,    50,
      50,    50,    50,    50,    50,    50,    50,    51,    51,    51,
      51,    51,    51,    51,    51,    51,    52,    52,    52,    53,
      54,    54,    54,    54,    55,    55,    55,    55,    55,    55,
      55,    55,    56,    56,    56,    56,    56,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    59,
      59,    59,    59,    60,    60,    60,    60,    60,    61,    61,
      61,    61,    62,    62,    62,    63,    63,    63,    63,    64,
      64,    64,    64,    64,    65,    65,    65,    65,    65,    65,
      65,    65,    66,    66,    66,    66,    66,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    69,    69,    70,
      70,    70,    70,    70,    71,    71,    72,    72,    72,    72,
      72,    73,    73,    74,    74,    74,    75,    75,    75,    76,
      76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     5,     5,     5,     5,     5,     1,     4,
       4,     4,     4,     4,     1,     3,     3,     3,     3,     5,
       5,     5,     5,     5,     5,     1,     0,     6,     6,     6,
       6,     6,     6,     6,     1,     0,     1,     1,     1,     2,
       2,     2,     2,     1,     6,     6,     6,     6,     6,     6,
       6,     1,     3,     3,     3,     3,     1,     4,     4,     4,
       4,     4,     1,     2,     2,     1,     5,     5,     5,     5,
       5,     5,     1,     3,     3,     3,     3,     1,     2,     2,
       2,     1,     2,     2,     1,     2,     2,     2,     1,     3,
       3,     3,     3,     1,     4,     4,     6,     5,     3,     2,
       3,     1,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     3,
       3,     3,     3,     1,     1,     1,     3,     3,     3,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     8,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,     0,     0,     0,     3,     0,
       0,     0,     0,     4,     5,     6,     7,     2,     0,     0,
      93,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   141,   139,   140,     0,    51,     0,    16,     0,   141,
       0,     0,    93,     0,    17,    18,    15,    43,     0,    39,
       0,     0,     0,     0,     0,     0,     0,   117,   118,     0,
       0,     0,     0,     0,     0,     0,    99,    10,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,    12,    13,     9,    41,    42,    40,    38,    36,
      37,     0,    90,   100,     0,     0,     0,     0,   107,   108,
     109,   110,   111,   112,   124,   125,     0,   136,     0,   114,
       0,     0,   137,     0,     0,     0,     0,     0,     0,   113,
       0,     0,     0,     0,    98,     0,     0,    91,    92,    89,
       0,     0,    38,     0,    25,    20,     0,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    19,     0,    94,    95,
       0,     0,     0,     0,   103,     0,     0,   135,   133,   134,
     127,     0,   101,     0,   104,     0,   102,   128,   135,   126,
       0,     0,    79,     0,    78,    74,    75,    76,    73,     0,
       0,     0,     0,     0,    62,     0,     0,    62,     0,     0,
       0,     0,     0,     0,    28,     0,     0,   120,   138,   121,
       0,   119,     0,     0,     0,    97,    83,    82,    29,    30,
      31,    32,    33,    27,     0,     0,     0,    53,    54,    55,
      52,    34,     0,     0,     0,     0,     0,     0,     0,    96,
     131,    86,    87,    85,     0,     0,     0,     0,     0,     0,
       0,    45,    46,    47,    48,    49,    50,    44,     0,     0,
      58,    59,    60,     0,    57,     0,     0,    93,     0,    64,
      63,     0,     0,     0,     0,     0,    67,    68,    69,    70,
      71,    66
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    14,    15,    16,   242,   111,   205,    69,    57,
     158,   206,   270,   243,    86,   226,   192,   225,    47,    48,
      79,   128,    80,    81,   129,   130,    82,   180,   181,   131,
     132
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -153
static const yytype_int16 yypact[] =
{
      31,     2,    52,    99,    82,   116,   246,  -153,   413,   413,
     413,   442,   108,    95,   163,   252,   460,   185,   191,   301,
      55,   201,   200,    97,    35,    34,    35,    42,  -153,   200,
     238,   105,   293,  -153,  -153,  -153,  -153,  -153,   101,   196,
     241,   200,   264,   275,   308,   154,   167,   269,   286,   377,
     142,  -153,  -153,  -153,   370,   393,   145,  -153,   384,   386,
     288,   471,   291,   487,  -153,   393,  -153,   201,   195,  -153,
      37,   200,   478,   201,   201,   154,   104,  -153,  -153,   453,
     417,   150,   378,    10,   385,   222,  -153,  -153,   200,   253,
      37,    37,   463,   444,   153,   153,   207,   444,   444,   444,
     452,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,  -153,
    -153,   426,  -153,  -153,   456,   457,   464,   305,  -153,  -153,
    -153,  -153,  -153,  -153,  -153,  -153,   385,  -153,   385,  -153,
     395,   352,  -153,   267,   385,   399,   352,   369,   334,  -153,
     261,   292,   465,    39,  -153,   281,    89,  -153,   241,  -153,
     469,   470,   472,   309,   467,  -153,    57,   223,   474,   475,
     119,   312,  -153,  -153,  -153,   467,  -153,   341,  -153,  -153,
     483,   132,   402,   473,  -153,   134,   405,   407,  -153,  -153,
    -153,   165,  -153,    32,  -153,    48,  -153,  -153,   409,  -153,
     138,   224,  -153,   151,  -153,  -153,  -153,  -153,  -153,   341,
     341,   341,   341,   459,   476,   152,   477,   173,   139,   480,
     480,   480,   480,   481,  -153,   267,   351,  -153,  -153,  -153,
     368,  -153,   352,   232,   272,  -153,  -153,  -153,  -153,  -153,
    -153,  -153,   201,  -153,    37,    37,   466,  -153,  -153,  -153,
    -153,    20,   423,    34,    34,    34,    34,    27,   406,  -153,
    -153,  -153,  -153,  -153,   313,   313,   313,   315,   200,   200,
     287,  -153,  -153,  -153,  -153,  -153,   393,  -153,   169,   233,
    -153,  -153,  -153,   221,  -153,   504,   505,   382,   488,  -153,
    -153,   482,   484,   485,   486,   317,  -153,  -153,  -153,  -153,
    -153,  -153
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -153,  -153,    41,  -153,   380,   -10,   -72,    -6,  -153,   -28,
     360,  -152,   107,   284,  -153,   -69,   371,  -153,   -29,  -120,
     439,   438,   -57,  -153,   -75,  -153,  -109,  -114,  -153,   -71,
     420
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -142
static const yytype_int16 yytable[] =
{
      61,    63,    25,    64,    66,   208,    32,   139,   172,    25,
     137,   140,    72,   183,   142,    39,   146,    50,   150,   151,
     153,   176,   187,   189,   258,    39,   -77,   144,    55,   172,
     -72,   258,     1,   223,     2,    55,    51,    56,   108,     4,
     117,   -77,   112,    59,    56,   109,   110,   141,   224,   117,
      17,    18,    20,     5,  -116,  -116,    36,    38,   204,   147,
     149,   105,   107,  -105,    38,   124,   125,   114,   115,   173,
    -116,   174,   126,  -116,   124,   125,   127,   184,   186,    52,
      53,   126,  -105,    52,    53,   127,    52,    53,   -56,     6,
     197,    37,    52,    53,    38,   249,    26,   217,    49,     7,
     219,   221,    67,   251,   253,   117,    55,   172,   250,    21,
     222,   172,    22,     8,    23,    56,   279,   280,   -25,  -106,
     204,   279,   227,   198,   118,   119,   120,   121,   122,   123,
     124,   125,    27,    51,    38,   117,    68,   126,  -106,   140,
     239,   127,    38,    91,   -14,    24,    95,     9,    52,    53,
     211,   136,   140,   235,   156,    76,    38,   214,  -130,  -130,
     124,   125,   254,   255,   257,   126,    51,   126,    83,   127,
     204,   127,   -84,   240,    92,   141,    52,    53,    52,    53,
      77,    78,    96,   126,   236,   -80,   157,   127,   141,   228,
     229,   230,   231,   233,    52,    53,   106,    84,   126,    28,
      85,    40,   127,   -65,    41,   234,    38,   238,   160,    52,
      53,    42,    43,    44,    45,   261,   262,   263,   264,   265,
     267,    33,   204,   145,   207,   140,    39,    34,    70,   275,
     276,   278,    38,   182,   204,    39,    41,    46,    38,    62,
     157,    39,    41,    42,    43,    44,    45,    10,   -88,    42,
      43,    44,    45,    29,   148,   -61,    30,    41,    38,   141,
      38,   141,   190,   -88,    42,    43,    44,    45,   182,    46,
      38,    41,    71,   252,    87,    46,    41,    11,    42,    43,
      44,    45,   190,    42,    43,    44,    45,    88,   277,    99,
      46,    41,   191,   193,    65,   -81,   102,    73,    42,    43,
      44,    45,    21,    56,    46,    22,   171,    23,    74,    46,
     202,   -25,   191,   212,   268,   196,   273,    89,   290,   100,
    -123,  -123,    71,   191,    46,  -123,  -123,  -123,  -123,  -123,
    -123,    77,    78,  -141,  -141,   171,  -123,    35,    24,  -123,
     203,    75,    21,   213,   269,   -35,   269,    23,   291,  -115,
    -115,   -35,   171,   177,  -115,  -115,  -115,  -115,  -115,  -115,
      77,    78,   271,   272,   274,  -115,  -123,  -123,  -115,   171,
     188,  -123,  -123,  -123,  -123,  -123,  -123,    77,    78,   138,
     178,   179,  -123,  -122,  -122,  -123,   143,   283,  -122,  -122,
    -122,  -122,  -122,  -122,    77,    78,   175,   178,   179,  -122,
     185,    93,  -122,   216,   124,   125,   220,   266,  -132,    90,
    -129,    77,    78,    71,    12,    97,    56,    98,   134,   -26,
      13,    77,    78,   -26,   259,    77,    78,   260,   124,   125,
      94,   124,   125,  -132,  -132,  -129,  -129,   118,   119,   120,
     121,   122,   123,    19,    54,   154,    58,    60,   -26,    13,
     -26,    13,   -26,   165,   -26,   159,   161,   167,   -26,    13,
     232,    31,   -26,   -35,   152,    23,    23,   256,   133,   -35,
     -35,   109,   110,   155,   109,   110,   101,   162,   163,   164,
     166,   241,   247,   113,   -35,   -35,    23,    23,   103,   284,
     168,   169,   104,   285,   244,   245,   246,   248,   170,   195,
     199,   200,   215,   201,    24,   209,   210,   218,   234,   281,
     282,   237,   194,   286,   116,   287,   288,   289,   135
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-153))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_uint16 yycheck[] =
{
      29,    30,    12,    31,    32,   157,    16,    82,   117,    19,
      81,     1,    41,   133,    83,    21,    85,    23,    90,    91,
      92,   130,   136,   137,     4,    31,    16,    84,     1,   138,
      10,     4,     1,     1,     3,     1,     1,    10,     1,    37,
       1,    31,    71,     1,    10,     8,     9,    37,    16,     1,
       9,    10,    11,     1,    15,    16,     1,    37,     1,    88,
      89,    67,    68,    15,    37,    26,    27,    73,    74,   126,
      31,   128,    33,    34,    26,    27,    37,   134,   135,    44,
      45,    33,    34,    44,    45,    37,    44,    45,    31,    37,
       1,    36,    44,    45,    37,   215,     1,   172,     1,     0,
     175,   176,     1,   223,   224,     1,     1,   216,   222,     1,
     181,   220,     4,    31,     6,    10,   268,   269,    10,    15,
       1,   273,   191,    34,    20,    21,    22,    23,    24,    25,
      26,    27,    37,     1,    37,     1,    35,    33,    34,     1,
       1,    37,    37,     1,    36,    37,     1,    31,    44,    45,
      31,     1,     1,     1,     1,     1,    37,   167,    26,    27,
      26,    27,   234,   235,   236,    33,     1,    33,     1,    37,
       1,    37,    34,    34,    32,    37,    44,    45,    44,    45,
      26,    27,    37,    33,    32,    34,    33,    37,    37,   199,
     200,   201,   202,   203,    44,    45,     1,    30,    33,    36,
      33,     1,    37,    34,     4,    32,    37,    34,     1,    44,
      45,    11,    12,    13,    14,   243,   244,   245,   246,   247,
     248,    36,     1,     1,     1,     1,   232,    36,    32,   258,
     259,   260,    37,     1,     1,   241,     4,    37,    37,     1,
      33,   247,     4,    11,    12,    13,    14,     1,    16,    11,
      12,    13,    14,     1,     1,    34,     4,     4,    37,    37,
      37,    37,     1,    31,    11,    12,    13,    14,     1,    37,
      37,     4,    31,     1,     5,    37,     4,    31,    11,    12,
      13,    14,     1,    11,    12,    13,    14,     1,     1,     1,
      37,     4,    31,     1,     1,    34,     5,    33,    11,    12,
      13,    14,     1,    10,    37,     4,     1,     6,    33,    37,
       1,    10,    31,     1,     1,    34,     1,    31,     1,    31,
      15,    16,    31,    31,    37,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     1,    31,    36,    37,    34,
      31,    33,     1,    31,    31,     4,    31,     6,    31,    15,
      16,    10,     1,     1,    20,    21,    22,    23,    24,    25,
      26,    27,   255,   256,   257,    31,    15,    16,    34,     1,
       1,    20,    21,    22,    23,    24,    25,    26,    27,     1,
      28,    29,    31,    15,    16,    34,     1,     5,    20,    21,
      22,    23,    24,    25,    26,    27,     1,    28,    29,    31,
       1,    31,    34,     1,    26,    27,     1,     1,     1,    32,
       1,    26,    27,    31,     1,    31,    10,    31,     1,     6,
       7,    26,    27,    10,     1,    26,    27,     4,    26,    27,
      37,    26,    27,    26,    27,    26,    27,    20,    21,    22,
      23,    24,    25,     1,    24,     1,    26,    27,     6,     7,
       6,     7,    10,     1,    10,    95,    96,    31,     6,     7,
       1,     1,    10,     4,     1,     6,     6,     1,    15,    10,
      10,     8,     9,    93,     8,     9,     5,    97,    98,    99,
     100,     1,     1,     5,     4,     4,     6,     6,     1,     1,
      34,    34,     5,     5,   210,   211,   212,   213,    34,    34,
      31,    31,    19,    31,    37,    31,    31,    34,    32,     5,
       5,    34,   141,    31,    75,    31,    31,    31,    80
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    47,    37,     1,    37,     0,    31,    31,
       1,    31,     1,     7,    48,    49,    50,    48,    48,     1,
      48,     1,     4,     6,    37,    51,     1,    37,    36,     1,
       4,     1,    51,    36,    36,    36,     1,    36,    37,    53,
       1,     4,    11,    12,    13,    14,    37,    64,    65,     1,
      53,     1,    44,    45,    76,     1,    10,    55,    76,     1,
      76,    64,     1,    64,    55,     1,    55,     1,    35,    54,
      32,    31,    64,    33,    33,    33,     1,    26,    27,    66,
      68,    69,    72,     1,    30,    33,    60,     5,     1,    31,
      32,     1,    32,    31,    37,     1,    37,    31,    31,     1,
      31,     5,     5,     1,     5,    53,     1,    53,     1,     8,
       9,    52,    64,     5,    53,    53,    66,     1,    20,    21,
      22,    23,    24,    25,    26,    27,    33,    37,    67,    70,
      71,    75,    76,    15,     1,    67,     1,    75,     1,    70,
       1,    37,    61,     1,    68,     1,    61,    64,     1,    64,
      52,    52,     1,    52,     1,    50,     1,    33,    56,    56,
       1,    56,    50,    50,    50,     1,    50,    31,    34,    34,
      34,     1,    72,    68,    68,     1,    72,     1,    28,    29,
      73,    74,     1,    65,    68,     1,    68,    73,     1,    73,
       1,    31,    62,     1,    62,    34,    34,     1,    34,    31,
      31,    31,     1,    31,     1,    53,    57,     1,    57,    31,
      31,    31,     1,    31,    51,    19,     1,    70,    34,    70,
       1,    70,    75,     1,    16,    63,    61,    61,    51,    51,
      51,    51,     1,    51,    32,     1,    32,    34,    34,     1,
      34,     1,    51,    59,    59,    59,    59,     1,    59,    65,
      73,    65,     1,    65,    52,    52,     1,    52,     4,     1,
       4,    55,    55,    55,    55,    55,     1,    55,     1,    31,
      58,    58,    58,     1,    58,    64,    64,     1,    64,    57,
      57,     5,     5,     5,     1,     5,    31,    31,    31,    31,
       1,    31
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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

/* Line 1806 of yacc.c  */
#line 75 "sintatico.y"
    { end(); }
    break;

  case 3:

/* Line 1806 of yacc.c  */
#line 76 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'program', encontrado %d\n", yychar); }
    break;

  case 4:

/* Line 1806 of yacc.c  */
#line 77 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'ident', encontrado %d\n", yychar); }
    break;

  case 5:

/* Line 1806 of yacc.c  */
#line 78 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
    break;

  case 6:

/* Line 1806 of yacc.c  */
#line 79 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao do corpo do programa, encontrado %d\n", yychar); }
    break;

  case 7:

/* Line 1806 of yacc.c  */
#line 80 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando '.', encontrado %d\n", yychar); }
    break;

  case 8:

/* Line 1806 of yacc.c  */
#line 81 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 9:

/* Line 1806 of yacc.c  */
#line 83 "sintatico.y"
    {}
    break;

  case 10:

/* Line 1806 of yacc.c  */
#line 84 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro de declaracao, encontrado %d\n", yychar); }
    break;

  case 11:

/* Line 1806 of yacc.c  */
#line 85 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar); }
    break;

  case 12:

/* Line 1806 of yacc.c  */
#line 86 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de comandos, encontrado %d\n", yychar); }
    break;

  case 13:

/* Line 1806 of yacc.c  */
#line 87 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar); }
    break;

  case 14:

/* Line 1806 of yacc.c  */
#line 88 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 15:

/* Line 1806 of yacc.c  */
#line 90 "sintatico.y"
    {}
    break;

  case 16:

/* Line 1806 of yacc.c  */
#line 91 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
    break;

  case 17:

/* Line 1806 of yacc.c  */
#line 92 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
    break;

  case 18:

/* Line 1806 of yacc.c  */
#line 93 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de parametros, encontrado %d\n", yychar); }
    break;

  case 19:

/* Line 1806 of yacc.c  */
#line 96 "sintatico.y"
    {}
    break;

  case 20:

/* Line 1806 of yacc.c  */
#line 97 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'const', encontrado %d\n", yychar); }
    break;

  case 21:

/* Line 1806 of yacc.c  */
#line 98 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar); }
    break;

  case 22:

/* Line 1806 of yacc.c  */
#line 99 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de numero, encontrado %d\n", yychar); }
    break;

  case 23:

/* Line 1806 of yacc.c  */
#line 100 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
    break;

  case 24:

/* Line 1806 of yacc.c  */
#line 101 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
    break;

  case 25:

/* Line 1806 of yacc.c  */
#line 102 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 27:

/* Line 1806 of yacc.c  */
#line 105 "sintatico.y"
    {}
    break;

  case 28:

/* Line 1806 of yacc.c  */
#line 106 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'var', encontrado %d\n", yychar); }
    break;

  case 29:

/* Line 1806 of yacc.c  */
#line 107 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de nome das variaveis, encontrado %d\n", yychar); }
    break;

  case 30:

/* Line 1806 of yacc.c  */
#line 108 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar); }
    break;

  case 31:

/* Line 1806 of yacc.c  */
#line 109 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de tipo_var, encontrado %d\n", yychar); }
    break;

  case 32:

/* Line 1806 of yacc.c  */
#line 110 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 111 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
    break;

  case 34:

/* Line 1806 of yacc.c  */
#line 112 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 36:

/* Line 1806 of yacc.c  */
#line 115 "sintatico.y"
    {}
    break;

  case 37:

/* Line 1806 of yacc.c  */
#line 116 "sintatico.y"
    {}
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 117 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 39:

/* Line 1806 of yacc.c  */
#line 119 "sintatico.y"
    {}
    break;

  case 40:

/* Line 1806 of yacc.c  */
#line 121 "sintatico.y"
    {}
    break;

  case 41:

/* Line 1806 of yacc.c  */
#line 122 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ',', encontrado %d\n", yychar}
    break;

  case 42:

/* Line 1806 of yacc.c  */
#line 123 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era na declaracao de variaveis, encontrado %d\n", yychar}
    break;

  case 43:

/* Line 1806 of yacc.c  */
#line 124 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 44:

/* Line 1806 of yacc.c  */
#line 126 "sintatico.y"
    {}
    break;

  case 45:

/* Line 1806 of yacc.c  */
#line 127 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'procedure', encontrado %d\n", yychar}
    break;

  case 46:

/* Line 1806 of yacc.c  */
#line 128 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar}
    break;

  case 47:

/* Line 1806 of yacc.c  */
#line 129 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era na declaracao dos parametros, encontrado %d\n", yychar}
    break;

  case 48:

/* Line 1806 of yacc.c  */
#line 130 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
    break;

  case 49:

/* Line 1806 of yacc.c  */
#line 131 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era na declaracao do corpo do programa, encontrado %d\n", yychar}
    break;

  case 50:

/* Line 1806 of yacc.c  */
#line 132 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de procedimentos, encontrado %d\n", yychar}
    break;

  case 51:

/* Line 1806 of yacc.c  */
#line 133 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 52:

/* Line 1806 of yacc.c  */
#line 135 "sintatico.y"
    {}
    break;

  case 53:

/* Line 1806 of yacc.c  */
#line 136 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
    break;

  case 54:

/* Line 1806 of yacc.c  */
#line 137 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao dos parametros, encontrado %d\n", yychar}
    break;

  case 55:

/* Line 1806 of yacc.c  */
#line 138 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar)}
    break;

  case 56:

/* Line 1806 of yacc.c  */
#line 139 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 57:

/* Line 1806 of yacc.c  */
#line 141 "sintatico.y"
    {}
    break;

  case 58:

/* Line 1806 of yacc.c  */
#line 142 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar}
    break;

  case 59:

/* Line 1806 of yacc.c  */
#line 143 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar}
    break;

  case 60:

/* Line 1806 of yacc.c  */
#line 144 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro no tipo das variaveis, encontrado %d\n", yychar}
    break;

  case 61:

/* Line 1806 of yacc.c  */
#line 145 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de mais parametros, encontrado %d\n", yychar}
    break;

  case 62:

/* Line 1806 of yacc.c  */
#line 146 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 148 "sintatico.y"
    {}
    break;

  case 64:

/* Line 1806 of yacc.c  */
#line 149 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
    break;

  case 65:

/* Line 1806 of yacc.c  */
#line 151 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 66:

/* Line 1806 of yacc.c  */
#line 154 "sintatico.y"
    {}
    break;

  case 67:

/* Line 1806 of yacc.c  */
#line 155 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis locais, encontrado %d\n", yychar}
    break;

  case 68:

/* Line 1806 of yacc.c  */
#line 156 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar}
    break;

  case 69:

/* Line 1806 of yacc.c  */
#line 157 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 158 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar}
    break;

  case 71:

/* Line 1806 of yacc.c  */
#line 159 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
    break;

  case 72:

/* Line 1806 of yacc.c  */
#line 160 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 73:

/* Line 1806 of yacc.c  */
#line 166 "sintatico.y"
    {}
    break;

  case 74:

/* Line 1806 of yacc.c  */
#line 167 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
    break;

  case 75:

/* Line 1806 of yacc.c  */
#line 168 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao dos argumentos, encontrado %d\n", yychar}
    break;

  case 76:

/* Line 1806 of yacc.c  */
#line 169 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar}
    break;

  case 77:

/* Line 1806 of yacc.c  */
#line 170 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 78:

/* Line 1806 of yacc.c  */
#line 172 "sintatico.y"
    {}
    break;

  case 79:

/* Line 1806 of yacc.c  */
#line 173 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'ID', encontrado %d\n", yychar}
    break;

  case 80:

/* Line 1806 of yacc.c  */
#line 174 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de mais argumentos, encontrado %d\n", yychar}
    break;

  case 81:

/* Line 1806 of yacc.c  */
#line 175 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 82:

/* Line 1806 of yacc.c  */
#line 177 "sintatico.y"
    {}
    break;

  case 83:

/* Line 1806 of yacc.c  */
#line 178 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
    break;

  case 84:

/* Line 1806 of yacc.c  */
#line 180 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 85:

/* Line 1806 of yacc.c  */
#line 182 "sintatico.y"
    {}
    break;

  case 86:

/* Line 1806 of yacc.c  */
#line 183 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando 'else', encontrado %d\n", yychar}
    break;

  case 87:

/* Line 1806 of yacc.c  */
#line 184 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
    break;

  case 88:

/* Line 1806 of yacc.c  */
#line 185 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 89:

/* Line 1806 of yacc.c  */
#line 187 "sintatico.y"
    {}
    break;

  case 90:

/* Line 1806 of yacc.c  */
#line 188 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro no comando, encontrado %d\n", yychar}
    break;

  case 91:

/* Line 1806 of yacc.c  */
#line 189 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
    break;

  case 92:

/* Line 1806 of yacc.c  */
#line 190 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
    break;

  case 93:

/* Line 1806 of yacc.c  */
#line 191 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 94:

/* Line 1806 of yacc.c  */
#line 193 "sintatico.y"
    {}
    break;

  case 95:

/* Line 1806 of yacc.c  */
#line 194 "sintatico.y"
    {}
    break;

  case 96:

/* Line 1806 of yacc.c  */
#line 195 "sintatico.y"
    {}
    break;

  case 97:

/* Line 1806 of yacc.c  */
#line 196 "sintatico.y"
    {}
    break;

  case 98:

/* Line 1806 of yacc.c  */
#line 197 "sintatico.y"
    {}
    break;

  case 99:

/* Line 1806 of yacc.c  */
#line 198 "sintatico.y"
    {}
    break;

  case 100:

/* Line 1806 of yacc.c  */
#line 199 "sintatico.y"
    {}
    break;

  case 101:

/* Line 1806 of yacc.c  */
#line 200 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 103:

/* Line 1806 of yacc.c  */
#line 203 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
    break;

  case 104:

/* Line 1806 of yacc.c  */
#line 204 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao da relcao, encontrado %d\n", yychar}
    break;

  case 105:

/* Line 1806 of yacc.c  */
#line 205 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
    break;

  case 106:

/* Line 1806 of yacc.c  */
#line 206 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 107:

/* Line 1806 of yacc.c  */
#line 208 "sintatico.y"
    {}
    break;

  case 108:

/* Line 1806 of yacc.c  */
#line 209 "sintatico.y"
    {}
    break;

  case 109:

/* Line 1806 of yacc.c  */
#line 210 "sintatico.y"
    {}
    break;

  case 110:

/* Line 1806 of yacc.c  */
#line 211 "sintatico.y"
    {}
    break;

  case 111:

/* Line 1806 of yacc.c  */
#line 212 "sintatico.y"
    {}
    break;

  case 112:

/* Line 1806 of yacc.c  */
#line 213 "sintatico.y"
    {}
    break;

  case 114:

/* Line 1806 of yacc.c  */
#line 217 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
    break;

  case 115:

/* Line 1806 of yacc.c  */
#line 218 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
    break;

  case 116:

/* Line 1806 of yacc.c  */
#line 219 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 120:

/* Line 1806 of yacc.c  */
#line 226 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
    break;

  case 121:

/* Line 1806 of yacc.c  */
#line 227 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
    break;

  case 122:

/* Line 1806 of yacc.c  */
#line 228 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 229 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 127:

/* Line 1806 of yacc.c  */
#line 236 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
    break;

  case 128:

/* Line 1806 of yacc.c  */
#line 237 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de fator, encontrado %d\n", yychar}
    break;

  case 129:

/* Line 1806 of yacc.c  */
#line 238 "sintatico.y"
    { yyerrok; printf("Erro sintatico: Erro na declaracao de mais fatores, encontrado %d\n", yychar}
    break;

  case 130:

/* Line 1806 of yacc.c  */
#line 239 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 242 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 135:

/* Line 1806 of yacc.c  */
#line 246 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;

  case 141:

/* Line 1806 of yacc.c  */
#line 254 "sintatico.y"
    { printf("erro sintatico\n"); }
    break;



/* Line 1806 of yacc.c  */
#line 2630 "y.tab.c"
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



