
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
     ID = 258,
     ICONST = 259,
     FCONST = 260,
     CCONST = 261,
     SCONST = 262,
     CHAR = 263,
     INT = 264,
     SINGLE = 265,
     BOOL = 266,
     TSTRING = 267,
     VOID = 268,
     IF = 269,
     UNLESS = 270,
     RETURN = 271,
     SWITCH = 272,
     BREAK = 273,
     CONTINUE = 274,
     DEFAULT = 275,
     CASE = 276,
     DO = 277,
     WHILE = 278,
     FOR = 279,
     DOTIMES = 280,
     VAR = 281,
     FUNCTION = 282,
     MAIN = 283,
     DOT = 284,
     TRUE = 285,
     FALSE = 286,
     OUTPUT = 287,
     OUTPUTNL = 288,
     INPUT = 289,
     SEMIDEM = 290,
     NOTOP = 291,
     RPAREN = 292,
     LPAREN = 293,
     RBRACEDEM = 294,
     LBRACEDEM = 295,
     RBRACK = 296,
     LBRACK = 297,
     GTHANOP = 298,
     LTHANOP = 299,
     GEQTHANOP = 300,
     LEQTHANOP = 301,
     EQUOP = 302,
     ANDOP = 303,
     OROP = 304,
     NOTEQUOP = 305,
     COLON = 306,
     MODEQOP = 307,
     DIVEQOP = 308,
     MULEQOP = 309,
     MINEQOP = 310,
     ADDEQOP = 311,
     ASSIGN = 312,
     REFERVAR = 313,
     DINCROP = 314,
     IINCROP = 315,
     COMMA = 316,
     MINOP = 317,
     ADDOP = 318,
     EXPOP = 319,
     MODOP = 320,
     DIVOP = 321,
     MULOP = 322,
     ELSE = 323
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 16 "parser.y"

    char char_val;
	int int_val;
	double double_val;
	char* str_val;
	list_t* symtab_item;



/* Line 1676 of yacc.c  */
#line 130 "parser.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


