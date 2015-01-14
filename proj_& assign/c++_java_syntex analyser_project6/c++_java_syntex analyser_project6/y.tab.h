/* A Bison parser, made by GNU Bison 2.7.  */

/* Bison interface for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2012 Free Software Foundation, Inc.
   
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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     HASH = 258,
     INCLUDE = 259,
     DEFINE = 260,
     CLASS = 261,
     PACKAGE = 262,
     IMPORT = 263,
     INTERFACE = 264,
     IMPLEMENTS = 265,
     EXTENDS = 266,
     IDENTIFIER = 267,
     CONSTANT = 268,
     STRING_LITERAL = 269,
     ABSTRACT = 270,
     FINAL = 271,
     PUBLIC = 272,
     PRIVATE = 273,
     PROTECTED = 274,
     STATIC = 275,
     TRANSIENT = 276,
     VOLATILE = 277,
     NATIVE = 278,
     SYNCHRONIZED = 279,
     CHAR = 280,
     SHORT = 281,
     INT = 282,
     LONG = 283,
     SIGNED = 284,
     UNSIGNED = 285,
     FLOAT = 286,
     DOUBLE = 287,
     CONST = 288,
     VOID = 289,
     BOOLEAN = 290,
     BYTE = 291
   };
#endif
/* Tokens.  */
#define HASH 258
#define INCLUDE 259
#define DEFINE 260
#define CLASS 261
#define PACKAGE 262
#define IMPORT 263
#define INTERFACE 264
#define IMPLEMENTS 265
#define EXTENDS 266
#define IDENTIFIER 267
#define CONSTANT 268
#define STRING_LITERAL 269
#define ABSTRACT 270
#define FINAL 271
#define PUBLIC 272
#define PRIVATE 273
#define PROTECTED 274
#define STATIC 275
#define TRANSIENT 276
#define VOLATILE 277
#define NATIVE 278
#define SYNCHRONIZED 279
#define CHAR 280
#define SHORT 281
#define INT 282
#define LONG 283
#define SIGNED 284
#define UNSIGNED 285
#define FLOAT 286
#define DOUBLE 287
#define CONST 288
#define VOID 289
#define BOOLEAN 290
#define BYTE 291



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;

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

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
