
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
     PACKAGE = 258,
     CLASS = 259,
     THROW = 260,
     INTERFACE = 261,
     THROWS = 262,
     EXTENDS = 263,
     IMPLEMENTS = 264,
     MAIN = 265,
     HEADERC = 266,
     HEADERJ = 267,
     RETURN = 268,
     BREAK = 269,
     NEW = 270,
     JNULL = 271,
     LONG = 272,
     DOUBLE = 273,
     STRING = 274,
     INT = 275,
     FLOAT = 276,
     CHAR = 277,
     SHORT = 278,
     VOID = 279,
     BOOLEAN = 280,
     BOOLLIT = 281,
     PUBLIC = 282,
     PRIVATE = 283,
     PROTECTED = 284,
     TRY = 285,
     CATCH = 286,
     STATIC = 287,
     THIS = 288,
     FOR = 289,
     WHILE = 290,
     IF = 291,
     ELSE = 292,
     LE = 293,
     GE = 294,
     EQ = 295,
     NE = 296,
     OR = 297,
     AND = 298,
     ID = 299,
     NUM = 300,
     DOT = 301
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


