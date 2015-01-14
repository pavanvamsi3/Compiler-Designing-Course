
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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     PTR_OP = 262,
     INC_OP = 263,
     DEC_OP = 264,
     LEFT_OP = 265,
     RIGHT_OP = 266,
     LE_OP = 267,
     GE_OP = 268,
     EQ_OP = 269,
     NE_OP = 270,
     AND_OP = 271,
     OR_OP = 272,
     ENDWHILE = 273,
     REPEAT = 274,
     UNTIL = 275,
     TO = 276,
     ASSIGN_OP = 277,
     TYPE_NAME = 278,
     TYPEDEF = 279,
     EXTERN = 280,
     STATIC = 281,
     AUTO = 282,
     REGISTER = 283,
     CHAR = 284,
     SHORT = 285,
     INT = 286,
     LONG = 287,
     SIGNED = 288,
     UNSIGNED = 289,
     FLOAT = 290,
     DOUBLE = 291,
     CONST = 292,
     VOLATILE = 293,
     VOID = 294,
     STRUCT = 295,
     UNION = 296,
     ENUM = 297,
     ELLIPSIS = 298,
     CASE = 299,
     DEFAULT = 300,
     IF = 301,
     ELSE = 302,
     SWITCH = 303,
     WHILE = 304,
     FOR = 305,
     GOTO = 306,
     CONTINUE = 307,
     BREAK = 308,
     RETURN = 309
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define PTR_OP 262
#define INC_OP 263
#define DEC_OP 264
#define LEFT_OP 265
#define RIGHT_OP 266
#define LE_OP 267
#define GE_OP 268
#define EQ_OP 269
#define NE_OP 270
#define AND_OP 271
#define OR_OP 272
#define ENDWHILE 273
#define REPEAT 274
#define UNTIL 275
#define TO 276
#define ASSIGN_OP 277
#define TYPE_NAME 278
#define TYPEDEF 279
#define EXTERN 280
#define STATIC 281
#define AUTO 282
#define REGISTER 283
#define CHAR 284
#define SHORT 285
#define INT 286
#define LONG 287
#define SIGNED 288
#define UNSIGNED 289
#define FLOAT 290
#define DOUBLE 291
#define CONST 292
#define VOLATILE 293
#define VOID 294
#define STRUCT 295
#define UNION 296
#define ENUM 297
#define ELLIPSIS 298
#define CASE 299
#define DEFAULT 300
#define IF 301
#define ELSE 302
#define SWITCH 303
#define WHILE 304
#define FOR 305
#define GOTO 306
#define CONTINUE 307
#define BREAK 308
#define RETURN 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


