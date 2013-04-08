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
     SIMB_PROGRAM = 258,
     SIMB_BEGIN = 259,
     SIMB_END = 260,
     SIMB_VAR = 261,
     SIMB_CONST = 262,
     SIMB_REAL = 263,
     SIMB_INTEGER = 264,
     SIMB_PROCEDURE = 265,
     SIMB_READ = 266,
     SIMB_WRITE = 267,
     SIMB_WHILE = 268,
     SIMB_IF = 269,
     SIMB_THEN = 270,
     SIMB_ELSE = 271,
     SIMB_FOR = 272,
     SIMB_RELATION = 273,
     SIMB_OP_ADD = 274,
     SIMB_OP_MUL = 275,
     SIMB_ASSIGN = 276,
     SIMB_PONTO_VIRGULA = 277,
     SIMB_DOIS_PONTOS = 278,
     SIMB_ABRE_PARENTESE = 279,
     SIMB_FECHA_PARENTESE = 280,
     SIMB_VIRGULA = 281,
     SIMB_PONTO = 282,
     SIMB_NUM_INTEIRO = 283,
     SIMB_NUM_REAL = 284,
     SIMB_ID = 285
   };
#endif
/* Tokens.  */
#define SIMB_PROGRAM 258
#define SIMB_BEGIN 259
#define SIMB_END 260
#define SIMB_VAR 261
#define SIMB_CONST 262
#define SIMB_REAL 263
#define SIMB_INTEGER 264
#define SIMB_PROCEDURE 265
#define SIMB_READ 266
#define SIMB_WRITE 267
#define SIMB_WHILE 268
#define SIMB_IF 269
#define SIMB_THEN 270
#define SIMB_ELSE 271
#define SIMB_FOR 272
#define SIMB_RELATION 273
#define SIMB_OP_ADD 274
#define SIMB_OP_MUL 275
#define SIMB_ASSIGN 276
#define SIMB_PONTO_VIRGULA 277
#define SIMB_DOIS_PONTOS 278
#define SIMB_ABRE_PARENTESE 279
#define SIMB_FECHA_PARENTESE 280
#define SIMB_VIRGULA 281
#define SIMB_PONTO 282
#define SIMB_NUM_INTEIRO 283
#define SIMB_NUM_REAL 284
#define SIMB_ID 285




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


