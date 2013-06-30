
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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
/* Line 1676 of yacc.c  */
#line 37 "lalg.y"
YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 37 "lalg.y"

	int i_number;
	float r_number;
	char* name;
    VarValue value;
	char math_op;
    ListaLigadaVar list;



/* Line 1676 of yacc.c  */
#line 112 "lalg.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


