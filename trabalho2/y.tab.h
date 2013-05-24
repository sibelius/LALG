/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison interface for Yacc-like parsers in C
   
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
/* Line 2068 of yacc.c  */
#line 16 "sintatico.y"
YYSTYPE
{

/* Line 2068 of yacc.c  */
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



/* Line 2068 of yacc.c  */
#line 157 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


