
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
     ABSTRACT = 258,
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     BYVALUE = 262,
     CASE = 263,
     CAST = 264,
     CATCH = 265,
     CHAR = 266,
     CLASS = 267,
     CONST = 268,
     CONTINUE = 269,
     DEFAULT = 270,
     DO = 271,
     DOUBLE = 272,
     ELSE = 273,
     EXTENDS = 274,
     FINAL = 275,
     FINALLY = 276,
     FLOAT = 277,
     FOR = 278,
     FUTURE = 279,
     GENERIC = 280,
     GOTO = 281,
     IF = 282,
     IMPLEMENTS = 283,
     IMPORT = 284,
     INNER = 285,
     INSTANCEOF = 286,
     INT = 287,
     INTERFACE = 288,
     LONG = 289,
     NATIVE = 290,
     NEW = 291,
     JNULL = 292,
     OPERATOR = 293,
     OUTER = 294,
     PACKAGE = 295,
     PRIVATE = 296,
     PROTECTED = 297,
     PUBLIC = 298,
     REST = 299,
     RETURN = 300,
     SHORT = 301,
     STATIC = 302,
     SUPER = 303,
     SWITCH = 304,
     SYNCHRONIZED = 305,
     THIS = 306,
     THROW = 307,
     THROWS = 308,
     TRANSIENT = 309,
     TRY = 310,
     VAR = 311,
     VOID = 312,
     VOLATILE = 313,
     WHILE = 314,
     OP_INC = 315,
     OP_DEC = 316,
     OP_SHL = 317,
     OP_SHR = 318,
     OP_SHRR = 319,
     OP_GE = 320,
     OP_LE = 321,
     OP_EQ = 322,
     OP_NE = 323,
     OP_LAND = 324,
     OP_LOR = 325,
     OP_DIM = 326,
     ASS_MUL = 327,
     ASS_DIV = 328,
     ASS_MOD = 329,
     ASS_ADD = 330,
     ASS_SUB = 331,
     ASS_SHL = 332,
     ASS_SHR = 333,
     ASS_SHRR = 334,
     ASS_AND = 335,
     ASS_XOR = 336,
     ASS_OR = 337,
     IDENTIFIER = 338,
     LITERAL = 339,
     BOOLLIT = 340
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


