#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20070509

#define YYEMPTY (-1)
#define yyclearin    (yychar = YYEMPTY)
#define yyerrok      (yyerrflag = 0)
#define YYRECOVERING (yyerrflag != 0)

extern int yyparse(void);

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "sintatico.y"

extern "C"
{
	int yyparse(void);
	int yylex(void);  
	int yywrap()
	{
		return 1;
	}
}


#line 16 "sintatico.y"
typedef union YYSTYPE {
	int i_number;
	float r_number;
	char* name;
	struct snode {
		int i_value;
		float f_value;
		int type;
	} snode;
	char math_op;
} YYSTYPE;
#line 48 "y.tab.c"
#define T_PROGRAM 257
#define T_BEGIN 258
#define T_END 259
#define T_VAR 260
#define T_CONST 261
#define T_REAL 262
#define T_INTEGER 263
#define T_PROCEDURE 264
#define T_READ 265
#define T_WRITE 266
#define T_WHILE 267
#define T_IF 268
#define T_THEN 269
#define T_ELSE 270
#define T_FOR 271
#define T_TO 272
#define T_DO 273
#define T_EQUAL 274
#define T_DIFF 275
#define T_GREATER_EQ 276
#define T_LESSER_EQ 277
#define T_GREATER 278
#define T_LESSER 279
#define T_PLUS 280
#define T_MINUS 281
#define T_TIMES 282
#define T_DIVISION 283
#define T_ASSIGN 284
#define T_SEMICOLON 285
#define T_COLON 286
#define T_L_PAREN 287
#define T_R_PAREN 288
#define T_COMMA 289
#define T_DOT 290
#define T_ID 291
#define ERR_MF_INTEGER 292
#define ERR_MF_REAL 293
#define ERR_MF_ID 294
#define ERR_LONG_ID 295
#define ERR_COMMENT 296
#define ERR_UNKNOWN 297
#define T_INUMBER 298
#define T_RNUMBER 299
#define YYERRCODE 256
short yylhs[] = {                                        -1,
    0,    0,    0,    0,    0,    0,    0,    1,    1,    1,
    1,    1,    1,    2,    2,    2,    2,    4,    4,    4,
    4,    4,    4,    4,    4,    5,    5,    5,    5,    5,
    5,    5,    5,    5,    9,    9,    9,    8,   10,   10,
   10,   10,    6,    6,    6,    6,    6,    6,    6,    6,
   11,   11,   11,   11,   11,   13,   13,   13,   13,   13,
   13,   14,   14,   14,   12,   12,   12,   12,   12,   12,
   12,   15,   15,   15,   15,   15,   16,   16,   16,   16,
   17,   17,   17,   18,   18,   18,   18,    3,    3,    3,
    3,    3,   19,   19,   19,   19,   19,   19,   19,   19,
   20,   20,   20,   20,   20,   22,   22,   22,   22,   22,
   22,   21,   21,   21,   21,   25,   25,   24,   24,   24,
   24,   24,   26,   26,   23,   23,   23,   23,   23,   28,
   28,   29,   29,   29,   27,   27,   27,    7,    7,    7,
};
short yylen[] = {                                         2,
    5,    5,    5,    5,    5,    5,    1,    4,    4,    4,
    4,    4,    1,    3,    3,    3,    3,    5,    5,    5,
    5,    5,    5,    1,    0,    6,    6,    6,    6,    6,
    6,    6,    1,    0,    1,    1,    1,    2,    2,    2,
    2,    1,    6,    6,    6,    6,    6,    6,    6,    1,
    3,    3,    3,    3,    1,    4,    4,    4,    4,    4,
    1,    2,    2,    1,    5,    5,    5,    5,    5,    5,
    1,    3,    3,    3,    3,    1,    2,    2,    2,    1,
    2,    2,    1,    2,    2,    2,    1,    3,    3,    3,
    3,    1,    4,    4,    6,    5,    3,    2,    3,    1,
    3,    3,    3,    3,    1,    1,    1,    1,    1,    1,
    1,    2,    2,    2,    1,    1,    1,    3,    3,    3,
    3,    1,    1,    1,    3,    3,    3,    3,    1,    3,
    1,    1,    1,    1,    1,    1,    3,    1,    1,    1,
};
short yydefred[] = {                                      0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    2,    0,    0,    0,
    0,    3,    4,    5,    6,    1,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  140,
  138,  139,    0,    0,    0,   15,    0,    0,    0,    0,
    0,    0,   16,    0,   14,    0,    0,   38,    0,    0,
    0,    0,    0,    0,    0,  116,  117,    0,    0,    0,
    0,    0,    0,    0,   98,    9,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,   10,
   11,   12,    8,   40,   41,   39,   37,   35,   36,    0,
   89,   99,    0,    0,    0,    0,  106,  107,  108,  109,
  110,  111,  123,  124,    0,  135,  136,    0,  113,    0,
    0,    0,    0,    0,    0,  112,    0,    0,    0,    0,
    0,    0,   97,    0,    0,   90,    0,   88,    0,    0,
    0,    0,    0,   19,    0,    0,    0,    0,    0,    0,
   20,   21,   22,    0,   18,    0,   93,   94,    0,    0,
    0,    0,  102,    0,    0,    0,  132,  133,  126,    0,
  100,    0,  103,    0,  101,  127,    0,  125,    0,    0,
   78,    0,   77,   73,   74,   75,   72,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   27,    0,    0,  119,  137,  120,    0,  118,
    0,    0,    0,   96,   82,   81,   28,   29,   30,   31,
    0,   26,    0,    0,    0,   52,   53,   54,   51,    0,
    0,    0,    0,    0,    0,    0,    0,   95,  130,   85,
   86,   84,    0,    0,    0,    0,    0,    0,    0,   44,
   45,   46,   47,   48,    0,   43,    0,    0,   57,   58,
   59,    0,   56,    0,    0,    0,    0,   63,   62,    0,
    0,    0,    0,    0,   66,   67,   68,   69,   70,   65,
};
short yydgoto[] = {                                       3,
   13,   14,   46,   15,  241,   56,  127,  204,  110,   68,
  157,  242,  205,  269,   85,  225,  191,  224,   47,   78,
   79,  128,   80,  129,   81,  130,  131,  179,  180,
};
short yysindex[] = {                                   -223,
 -198, -233,    0, -183, -149,  -18,    8,    8,    8,   68,
 -104, -205, -141,  145,  127,  -34,   25, -118, -245,  -63,
 -121, -168, -228, -221, -228, -220,    0, -121,  -91, -166,
   15,    0,    0,    0,    0,    0, -217,  -20,   -4, -121,
   66,   79,   98,   18, -101,  134,  -12,   42,  -98,    0,
    0,    0,  101,  129, -157,    0,  178,  179,   -8,  170,
  -13,  -62,    0,  129,    0,  -63, -143,    0,  153, -121,
  189,  -63,  -63,   18, -148,    0,    0,  193,   58,   20,
 -207,  -96,   22,  -95,    0,    0, -121,  -87,  153,  153,
  161,  166, -224, -224, -175,  166,  166,  166,  172,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  180,
    0,    0,  181,  182,  183,   24,    0,    0,    0,    0,
    0,    0,    0,    0,   22,    0,    0,   22,    0,   29,
    9,  -57,   22,   37,   24,    0,    9,   12,   -3,   -2,
  184, -243,    0,  -49, -206,    0,   -4,    0,  188,  192,
  194,   -1,  185,    0,  -88,  -54,  195,  196, -132,    1,
    0,    0,    0,  185,    0,  144,    0,    0,  201, -202,
   41,  187,    0, -243,   50,    0,    0,    0,    0, -202,
    0, -229,    0, -243,    0,    0,    0,    0,  -96,  -96,
    0,  -96,    0,    0,    0,    0,    0,  144,  144,  144,
  144,  174,  200,  -24,  204,   39, -147,  175,  175,  175,
  175,  176,    0,  -57,   24,    0,    0,    0,   24,    0,
    9,  -57,  -44,    0,    0,    0,    0,    0,    0,    0,
  -63,    0,  153,  153,  163,    0,    0,    0,    0, -218,
  198, -221, -221, -221, -221,  -31,   94,    0,    0,    0,
    0,    0,    2,    2,    2,    3, -121, -121,  -16,    0,
    0,    0,    0,    0,  129,    0,  -88,  -88,    0,    0,
    0,  -88,    0,  207,  208,    4,  162,    0,    0,  205,
  206,  209,  210,    5,    0,    0,    0,    0,    0,    0,
};
short yyrindex[] = {                                      0,
  468,    0,    0,    0,    0,    0,  177,  177,  177,  177,
    6,    0,    0,    0,  214,    0,    0,  218,    0,   55,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,  190,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  199,    0,    0,    0,  227,    0,    0,
  228,    0,    0,  202,    0,  -43,    0,    0,    0,    0,
    0,    0,    0,    0,   71,    0,    0,    0,    0,    0,
    0, -170,    0,    0,    0,    0,    0,    0,    0,    0,
    0,  177,    0,    0,    0,  177,  177,  177,  177,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,   69,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,   86,    0,    0,    0,  211,    0,
    0,   38,    0,    0,    0,    0,  191,    0,    0,    0,
  229,    0,   56,    0,  212,    0,    0,    0,    0,    0,
    0,    0,    0,  146,    0,  112,    0,    0,    0,  -75,
    0,    0,    0,    0,    0, -234,    0,    0,    0,    0,
    0,    0,    0,   80,    0,    0, -204,    0,  213,    0,
    0,  215,    0,    0,    0,    0,    0,  112,  112,  112,
  112,  112,  -90,    0,    0,  231,    0,  230,  230,  230,
  230,  230,    0,    0,  103,    0,    0,    0,  120,    0,
    0, -167,    0,    0,    0,    0,    0,    0,    0,    0,
  111,    0,    0,    0,    0,    0,    0,    0,    0,  128,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,  203,    0,  216,    0,    0,    0,
    0,  217,    0,    0,    0,  228,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
short yygindex[] = {                                      0,
  430,    0,  -28,  315,   -9,  -27,  159,   -5,  -71,    0,
  247,  233, -151,  197,    0,  -68,  349,    0, -103,  419,
  -59,  417, -109,  -70,    0,    0,  -73, -107,    0,
};
#define YYTABLESIZE 505
short yytable[] = {                                      60,
   62,   24,   63,   65,  207,   31,  171,  138,   24,  136,
   35,   71,  116,  141,   38,  145,   49,  149,  150,  152,
  175,  131,    5,  143,   38,  171,  222,   50,  182,  186,
  188,  155,    1,    2,   54,   58,  123,  124,   66,  257,
  223,  111,   55,  125,   36,  131,  131,  126,  137,  196,
   25,  128,  134,   50,   51,   52,  134,    6,  146,  148,
  104,  106,  156,  134,  134,  172,  113,  114,  173,   51,
   52,   67,   37,  183,  185,  128,  128,   51,   52,  125,
  159,  197,  134,  126,  125,   26,  134,   48,  126,   54,
   51,   52,    4,  134,  134,   51,   52,   55,   94,   76,
  216,    7,   87,  218,  220,  171,  221,  116,  238,  171,
  248,  156,  105,  249,   76,  278,  279,   87,  250,  252,
  278,  226,   37,  203,   37,  117,  118,  119,  120,  121,
  122,  123,  124,   95,   39,    8,   40,   20,  125,   21,
  239,   22,  126,   41,   42,   43,   44,   37,   27,   51,
   52,   20,  210,   21,   82,   22,  213,   90,   37,  139,
  144,  253,  254,  256,   61,   61,   40,  203,  147,   45,
   40,   34,   23,   41,   42,   43,   44,   41,   42,   43,
   44,   53,   83,   57,   59,   84,   23,   91,  227,  228,
  229,  230,  232,  102,  140,  140,  103,   61,  181,   45,
   40,  206,   37,   45,  129,  129,  189,   41,   42,   43,
   44,  251,   42,   40,  260,  261,  262,  263,  264,  266,
   41,   42,   43,   44,   54,   38,  257,   37,  274,  275,
  277,  234,   55,   45,   38,  190,   37,    9,  195,  276,
   38,   40,   42,   87,   42,  101,   45,   98,   41,   42,
   43,   44,  189,  192,  201,   32,  211,  267,  272,   37,
  289,  235,  282,   11,  176,   69,   10,  187,   12,   24,
   64,   70,   88,   75,   45,  135,   99,  142,   55,  170,
   70,  190,  190,  202,  174,  212,  268,  268,   70,  290,
  177,  178,  184,  177,  178,   13,  215,   76,   77,  123,
  124,   76,   77,   76,   77,  219,  115,  115,   76,   77,
   33,   24,   33,  133,   33,   24,   76,   77,   33,   24,
  123,  124,  115,   18,  233,  115,  237,   89,   12,  123,
  124,  117,  118,  119,  120,  121,  122,  122,  122,  105,
  158,  160,  122,  122,  122,  122,  122,  122,  104,  265,
  140,  140,   72,  122,  114,  114,  122,   55,  105,  114,
  114,  114,  114,  114,  114,   73,   32,  104,   32,   34,
  114,  122,  122,  114,   32,   34,  122,  122,  122,  122,
  122,  122,   30,   33,   74,   92,   22,  122,  121,  121,
  122,   71,   86,  121,  121,  121,  121,  121,  121,   20,
   28,   23,   29,   22,  121,   23,  154,  121,  107,   23,
  161,  162,  163,  165,  108,  109,  151,  283,  255,   93,
  284,  153,  108,  109,  108,  109,   12,  164,  100,  231,
  240,  246,   12,   22,   22,   22,   25,   16,   17,   19,
   25,  243,  244,  245,  247,   92,   91,  112,   92,   91,
  270,  271,  273,  258,   50,  259,   50,   17,   49,   17,
   49,  132,   96,   97,  166,  280,  281,    7,  167,  168,
  169,  194,  198,  214,  217,   23,  199,   34,  200,  208,
  209,   24,  140,   92,   37,  233,   61,   34,  193,  285,
  286,  236,  115,  287,  288,  134,   55,    0,   80,    0,
   83,    0,   79,   64,   60,
};
short yycheck[] = {                                      28,
   29,   11,   30,   31,  156,   15,  116,   81,   18,   80,
  256,   40,  256,   82,   20,   84,   22,   89,   90,   91,
  130,  256,  256,   83,   30,  135,  256,  256,  132,  137,
  138,  256,  256,  257,  256,  256,  280,  281,  256,  258,
  270,   70,  264,  287,  290,  280,  281,  291,  256,  256,
  256,  256,  287,  256,  298,  299,  291,  291,   87,   88,
   66,   67,  287,  298,  299,  125,   72,   73,  128,  298,
  299,  289,  291,  133,  134,  280,  281,  298,  299,  287,
  256,  288,  287,  291,  287,  291,  291,  256,  291,  256,
  298,  299,  291,  298,  299,  298,  299,  264,  256,  270,
  171,  285,  270,  174,  175,  215,  180,  256,  256,  219,
  214,  287,  256,  221,  285,  267,  268,  285,  222,  223,
  272,  190,  291,  256,  291,  274,  275,  276,  277,  278,
  279,  280,  281,  291,  256,  285,  258,  256,  287,  258,
  288,  260,  291,  265,  266,  267,  268,  291,  290,  298,
  299,  256,  285,  258,  256,  260,  166,  256,  291,  256,
  256,  233,  234,  235,  256,  256,  258,  256,  256,  291,
  258,  290,  291,  265,  266,  267,  268,  265,  266,  267,
  268,   23,  284,   25,   26,  287,  291,  286,  198,  199,
  200,  201,  202,  256,  291,  291,  259,  288,  256,  291,
  258,  256,  291,  291,  280,  281,  256,  265,  266,  267,
  268,  256,  256,  258,  242,  243,  244,  245,  246,  247,
  265,  266,  267,  268,  256,  231,  258,  291,  257,  258,
  259,  256,  264,  291,  240,  285,  291,  256,  288,  256,
  246,  258,  286,  256,  288,  259,  291,  256,  265,  266,
  267,  268,  256,  256,  256,  290,  256,  256,  256,  291,
  256,  286,  259,  256,  256,  286,  285,  256,  261,  264,
  256,  285,  285,  256,  291,  256,  285,  256,  264,  256,
  285,  285,  285,  285,  256,  285,  285,  285,  285,  285,
  282,  283,  256,  282,  283,  290,  256,  280,  281,  280,
  281,  280,  281,  280,  281,  256,  269,  270,  280,  281,
  256,  256,  258,  256,  290,  260,  280,  281,  264,  264,
  280,  281,  285,  256,  286,  288,  288,  286,  261,  280,
  281,  274,  275,  276,  277,  278,  279,  269,  270,  269,
   94,   95,  274,  275,  276,  277,  278,  279,  269,  256,
  282,  283,  287,  285,  269,  270,  288,  264,  288,  274,
  275,  276,  277,  278,  279,  287,  256,  288,  258,  258,
  285,  269,  270,  288,  264,  264,  274,  275,  276,  277,
  278,  279,  256,  256,  287,  285,  260,  285,  269,  270,
  288,  264,  259,  274,  275,  276,  277,  278,  279,  256,
  256,  256,  258,  260,  285,  260,   92,  288,  256,  264,
   96,   97,   98,   99,  262,  263,  256,  256,  256,  291,
  259,  256,  262,  263,  262,  263,  261,  256,  259,  256,
  256,  256,  261,  260,  260,  260,  260,    8,    9,   10,
  264,  209,  210,  211,  212,  256,  256,  259,  259,  259,
  254,  255,  256,  256,  256,  258,  258,  256,  256,  258,
  258,  269,  285,  285,  285,  259,  259,    0,  288,  288,
  288,  288,  285,  273,  288,  291,  285,  264,  285,  285,
  285,  264,  256,  256,  256,  286,  256,  258,  140,  285,
  285,  288,   74,  285,  285,   79,  285,   -1,  288,   -1,
  288,   -1,  288,  288,  288,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 299
#if YYDEBUG
char *yyname[] = {
"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"T_PROGRAM","T_BEGIN","T_END",
"T_VAR","T_CONST","T_REAL","T_INTEGER","T_PROCEDURE","T_READ","T_WRITE",
"T_WHILE","T_IF","T_THEN","T_ELSE","T_FOR","T_TO","T_DO","T_EQUAL","T_DIFF",
"T_GREATER_EQ","T_LESSER_EQ","T_GREATER","T_LESSER","T_PLUS","T_MINUS",
"T_TIMES","T_DIVISION","T_ASSIGN","T_SEMICOLON","T_COLON","T_L_PAREN",
"T_R_PAREN","T_COMMA","T_DOT","T_ID","ERR_MF_INTEGER","ERR_MF_REAL","ERR_MF_ID",
"ERR_LONG_ID","ERR_COMMENT","ERR_UNKNOWN","T_INUMBER","T_RNUMBER",
};
char *yyrule[] = {
"$accept : programa",
"programa : T_PROGRAM T_ID T_SEMICOLON corpo T_DOT",
"programa : error T_ID T_SEMICOLON corpo T_DOT",
"programa : T_PROGRAM error T_SEMICOLON corpo T_DOT",
"programa : T_PROGRAM T_ID error corpo T_DOT",
"programa : T_PROGRAM T_ID T_SEMICOLON error T_DOT",
"programa : T_PROGRAM T_ID T_SEMICOLON corpo error",
"programa : error",
"corpo : dc T_BEGIN comandos T_END",
"corpo : error T_BEGIN comandos T_END",
"corpo : dc error comandos T_END",
"corpo : dc T_BEGIN error T_END",
"corpo : dc T_BEGIN comandos error",
"corpo : error",
"dc : dc_c dc_v dc_p",
"dc : error dc_v dc_p",
"dc : dc_c error dc_p",
"dc : dc_c dc_v error",
"dc_c : T_CONST T_ID numero T_SEMICOLON dc_c",
"dc_c : error T_ID numero T_SEMICOLON dc_c",
"dc_c : T_CONST error numero T_SEMICOLON dc_c",
"dc_c : T_CONST T_ID error T_SEMICOLON dc_c",
"dc_c : T_CONST T_ID numero error dc_c",
"dc_c : T_CONST T_ID numero T_SEMICOLON error",
"dc_c : error",
"dc_c :",
"dc_v : T_VAR variaveis T_COLON tipo_var T_SEMICOLON dc_v",
"dc_v : error variaveis T_COLON tipo_var T_SEMICOLON dc_v",
"dc_v : T_VAR error T_COLON tipo_var T_SEMICOLON dc_v",
"dc_v : T_VAR variaveis error tipo_var T_SEMICOLON dc_v",
"dc_v : T_VAR variaveis T_COLON error T_SEMICOLON dc_v",
"dc_v : T_VAR variaveis T_COLON tipo_var error dc_v",
"dc_v : T_VAR variaveis T_COLON tipo_var T_SEMICOLON error",
"dc_v : error",
"dc_v :",
"tipo_var : T_REAL",
"tipo_var : T_INTEGER",
"tipo_var : error",
"variaveis : T_ID mais_var",
"mais_var : T_COMMA variaveis",
"mais_var : error variaveis",
"mais_var : T_COMMA error",
"mais_var : error",
"dc_p : T_PROCEDURE T_ID parametros T_SEMICOLON corpo_p dc_p",
"dc_p : error T_ID parametros T_SEMICOLON corpo_p dc_p",
"dc_p : T_PROCEDURE error parametros T_SEMICOLON corpo_p dc_p",
"dc_p : T_PROCEDURE T_ID error T_SEMICOLON corpo_p dc_p",
"dc_p : T_PROCEDURE T_ID parametros error corpo_p dc_p",
"dc_p : T_PROCEDURE T_ID parametros T_SEMICOLON error dc_p",
"dc_p : T_PROCEDURE T_ID parametros T_SEMICOLON corpo_p error",
"dc_p : error",
"parametros : T_L_PAREN lista_par T_R_PAREN",
"parametros : error lista_par T_R_PAREN",
"parametros : T_L_PAREN error T_R_PAREN",
"parametros : T_L_PAREN lista_par error",
"parametros : error",
"lista_par : variaveis T_COLON tipo_var mais_par",
"lista_par : error T_COLON tipo_var mais_par",
"lista_par : variaveis error tipo_var mais_par",
"lista_par : variaveis T_COLON error mais_par",
"lista_par : variaveis T_COLON tipo_var error",
"lista_par : error",
"mais_par : T_SEMICOLON lista_par",
"mais_par : error lista_par",
"mais_par : error",
"corpo_p : dc_v T_BEGIN comandos T_END T_SEMICOLON",
"corpo_p : error T_BEGIN comandos T_END T_SEMICOLON",
"corpo_p : dc_v error comandos T_END T_SEMICOLON",
"corpo_p : dc_v T_BEGIN error T_END T_SEMICOLON",
"corpo_p : dc_v T_BEGIN comandos error T_SEMICOLON",
"corpo_p : dc_v T_BEGIN comandos T_END error",
"corpo_p : error",
"lista_arg : T_L_PAREN argumentos T_R_PAREN",
"lista_arg : error argumentos T_R_PAREN",
"lista_arg : T_L_PAREN error T_R_PAREN",
"lista_arg : T_L_PAREN argumentos error",
"lista_arg : error",
"argumentos : T_ID mais_ident",
"argumentos : error mais_ident",
"argumentos : T_ID error",
"argumentos : error",
"mais_ident : T_SEMICOLON argumentos",
"mais_ident : error argumentos",
"mais_ident : error",
"pfalsa : T_ELSE cmd",
"pfalsa : error cmd",
"pfalsa : T_ELSE error",
"pfalsa : error",
"comandos : cmd T_SEMICOLON comandos",
"comandos : error T_SEMICOLON comandos",
"comandos : cmd error comandos",
"comandos : cmd T_SEMICOLON error",
"comandos : error",
"cmd : T_READ T_L_PAREN variaveis T_R_PAREN",
"cmd : T_WRITE T_L_PAREN variaveis T_R_PAREN",
"cmd : T_WHILE T_L_PAREN condicao T_R_PAREN T_DO cmd",
"cmd : T_IF condicao T_THEN cmd pfalsa",
"cmd : T_ID T_ASSIGN expressao",
"cmd : T_ID lista_arg",
"cmd : T_BEGIN comandos T_END",
"cmd : error",
"condicao : expressao relacao expressao",
"condicao : error relacao expressao",
"condicao : expressao error expressao",
"condicao : expressao relacao error",
"condicao : error",
"relacao : T_EQUAL",
"relacao : T_DIFF",
"relacao : T_GREATER_EQ",
"relacao : T_LESSER_EQ",
"relacao : T_GREATER",
"relacao : T_LESSER",
"expressao : termo outros_termos",
"expressao : error outros_termos",
"expressao : termo error",
"expressao : error",
"op_un : T_PLUS",
"op_un : T_MINUS",
"outros_termos : op_ad termo outros_termos",
"outros_termos : error termo outros_termos",
"outros_termos : op_ad error outros_termos",
"outros_termos : op_ad termo error",
"outros_termos : error",
"op_ad : T_PLUS",
"op_ad : T_MINUS",
"termo : op_un fator mais_fatores",
"termo : error fator mais_fatores",
"termo : op_un error mais_fatores",
"termo : op_un fator error",
"termo : error",
"mais_fatores : op_mul fator mais_fatores",
"mais_fatores : error",
"op_mul : T_TIMES",
"op_mul : T_DIVISION",
"op_mul : error",
"fator : T_ID",
"fator : numero",
"fator : T_L_PAREN expressao T_R_PAREN",
"numero : T_INUMBER",
"numero : T_RNUMBER",
"numero : error",
};
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static int      yystacksize;
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int newsize, i;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR goto yyerrlab
int
yyparse(void)
{
    register int yym, yyn, yystate;
#if YYDEBUG
    register const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    *yyssp = yystate = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        *++yyssp = yystate = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

#ifdef lint
    goto yyerrlab;
#endif

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                *++yyssp = yystate = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 75 "sintatico.y"
{ end(); }
break;
case 2:
#line 76 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'program', encontrado %d\n", yychar); }
break;
case 3:
#line 77 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'ident', encontrado %d\n", yychar); }
break;
case 4:
#line 78 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
break;
case 5:
#line 79 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao do corpo do programa, encontrado %d\n", yychar); }
break;
case 6:
#line 80 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando '.', encontrado %d\n", yychar); }
break;
case 7:
#line 81 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 8:
#line 83 "sintatico.y"
{}
break;
case 9:
#line 84 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro de declaracao, encontrado %d\n", yychar); }
break;
case 10:
#line 85 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar); }
break;
case 11:
#line 86 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de comandos, encontrado %d\n", yychar); }
break;
case 12:
#line 87 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar); }
break;
case 13:
#line 88 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 14:
#line 90 "sintatico.y"
{}
break;
case 15:
#line 91 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
break;
case 16:
#line 92 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
break;
case 17:
#line 93 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de parametros, encontrado %d\n", yychar); }
break;
case 18:
#line 96 "sintatico.y"
{}
break;
case 19:
#line 97 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'const', encontrado %d\n", yychar); }
break;
case 20:
#line 98 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar); }
break;
case 21:
#line 99 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de numero, encontrado %d\n", yychar); }
break;
case 22:
#line 100 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
break;
case 23:
#line 101 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de constantes, encontrado %d\n", yychar); }
break;
case 24:
#line 102 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 26:
#line 105 "sintatico.y"
{}
break;
case 27:
#line 106 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'var', encontrado %d\n", yychar); }
break;
case 28:
#line 107 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de nome das variaveis, encontrado %d\n", yychar); }
break;
case 29:
#line 108 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar); }
break;
case 30:
#line 109 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de tipo_var, encontrado %d\n", yychar); }
break;
case 31:
#line 110 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar); }
break;
case 32:
#line 111 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar); }
break;
case 33:
#line 112 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 35:
#line 115 "sintatico.y"
{}
break;
case 36:
#line 116 "sintatico.y"
{}
break;
case 37:
#line 117 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 38:
#line 119 "sintatico.y"
{}
break;
case 39:
#line 121 "sintatico.y"
{}
break;
case 40:
#line 122 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ',', encontrado %d\n", yychar}
break;
case 41:
#line 123 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era na declaracao de variaveis, encontrado %d\n", yychar}
break;
case 42:
#line 124 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 43:
#line 126 "sintatico.y"
{}
break;
case 44:
#line 127 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'procedure', encontrado %d\n", yychar}
break;
case 45:
#line 128 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'id', encontrado %d\n", yychar}
break;
case 46:
#line 129 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era na declaracao dos parametros, encontrado %d\n", yychar}
break;
case 47:
#line 130 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
break;
case 48:
#line 131 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era na declaracao do corpo do programa, encontrado %d\n", yychar}
break;
case 49:
#line 132 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de procedimentos, encontrado %d\n", yychar}
break;
case 50:
#line 133 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 51:
#line 135 "sintatico.y"
{}
break;
case 52:
#line 136 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
break;
case 53:
#line 137 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao dos parametros, encontrado %d\n", yychar}
break;
case 54:
#line 138 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar)}
break;
case 55:
#line 139 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 56:
#line 141 "sintatico.y"
{}
break;
case 57:
#line 142 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis, encontrado %d\n", yychar}
break;
case 58:
#line 143 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ':', encontrado %d\n", yychar}
break;
case 59:
#line 144 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro no tipo das variaveis, encontrado %d\n", yychar}
break;
case 60:
#line 145 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de mais parametros, encontrado %d\n", yychar}
break;
case 61:
#line 146 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 62:
#line 148 "sintatico.y"
{}
break;
case 63:
#line 149 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
break;
case 64:
#line 151 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 65:
#line 154 "sintatico.y"
{}
break;
case 66:
#line 155 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de variaveis locais, encontrado %d\n", yychar}
break;
case 67:
#line 156 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'begin', encontrado %d\n", yychar}
break;
case 68:
#line 157 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
break;
case 69:
#line 158 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'end', encontrado %d\n", yychar}
break;
case 70:
#line 159 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
break;
case 71:
#line 160 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 72:
#line 166 "sintatico.y"
{}
break;
case 73:
#line 167 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando '(', encontrado %d\n", yychar}
break;
case 74:
#line 168 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao dos argumentos, encontrado %d\n", yychar}
break;
case 75:
#line 169 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ')', encontrado %d\n", yychar}
break;
case 76:
#line 170 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 77:
#line 172 "sintatico.y"
{}
break;
case 78:
#line 173 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'ID', encontrado %d\n", yychar}
break;
case 79:
#line 174 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de mais argumentos, encontrado %d\n", yychar}
break;
case 80:
#line 175 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 81:
#line 177 "sintatico.y"
{}
break;
case 82:
#line 178 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
break;
case 83:
#line 180 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 84:
#line 182 "sintatico.y"
{}
break;
case 85:
#line 183 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando 'else', encontrado %d\n", yychar}
break;
case 86:
#line 184 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
break;
case 87:
#line 185 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 88:
#line 187 "sintatico.y"
{}
break;
case 89:
#line 188 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro no comando, encontrado %d\n", yychar}
break;
case 90:
#line 189 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Era esperado o comando ';', encontrado %d\n", yychar}
break;
case 91:
#line 190 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao dos comandos, encontrado %d\n", yychar}
break;
case 92:
#line 191 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 93:
#line 193 "sintatico.y"
{}
break;
case 94:
#line 194 "sintatico.y"
{}
break;
case 95:
#line 195 "sintatico.y"
{}
break;
case 96:
#line 196 "sintatico.y"
{}
break;
case 97:
#line 197 "sintatico.y"
{}
break;
case 98:
#line 198 "sintatico.y"
{}
break;
case 99:
#line 199 "sintatico.y"
{}
break;
case 100:
#line 200 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 102:
#line 203 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
break;
case 103:
#line 204 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao da relcao, encontrado %d\n", yychar}
break;
case 104:
#line 205 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao da expressao, encontrado %d\n", yychar}
break;
case 105:
#line 206 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 106:
#line 208 "sintatico.y"
{}
break;
case 107:
#line 209 "sintatico.y"
{}
break;
case 108:
#line 210 "sintatico.y"
{}
break;
case 109:
#line 211 "sintatico.y"
{}
break;
case 110:
#line 212 "sintatico.y"
{}
break;
case 111:
#line 213 "sintatico.y"
{}
break;
case 113:
#line 217 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
break;
case 114:
#line 218 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
break;
case 115:
#line 219 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 119:
#line 226 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
break;
case 120:
#line 227 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao do termo, encontrado %d\n", yychar}
break;
case 121:
#line 228 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de outros termos, encontrado %d\n", yychar}
break;
case 122:
#line 229 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 126:
#line 236 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de operador de mais ou menos, encontrado %d\n", yychar}
break;
case 127:
#line 237 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de fator, encontrado %d\n", yychar}
break;
case 128:
#line 238 "sintatico.y"
{ yyerrok; printf("Erro sintatico: Erro na declaracao de mais fatores, encontrado %d\n", yychar}
break;
case 129:
#line 239 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 131:
#line 242 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 134:
#line 246 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
case 140:
#line 254 "sintatico.y"
{ printf("erro sintatico\n"); }
break;
#line 1201 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
