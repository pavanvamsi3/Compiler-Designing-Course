
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
     MAIN = 259,
     BOOLEAN = 260,
     BREAK = 261,
     BYTE = 262,
     BYVALUE = 263,
     CASE = 264,
     CAST = 265,
     CHAR = 266,
     CLASS = 267,
     CONST = 268,
     CONTINUE = 269,
     COUT = 270,
     CIN = 271,
     DEFAULT = 272,
     DO = 273,
     DOUBLE = 274,
     ELSE = 275,
     FINAL = 276,
     FLOAT = 277,
     FOR = 278,
     FUTURE = 279,
     GENERIC = 280,
     GOTO = 281,
     IF = 282,
     IMPORT = 283,
     INNER = 284,
     INSTANCEOF = 285,
     INT = 286,
     INVERT = 287,
     LONG = 288,
     NATIVE = 289,
     NEW = 290,
     JNULL = 291,
     OPERATOR = 292,
     OUTER = 293,
     PRIVATE = 294,
     PROTECTED = 295,
     PUBLIC = 296,
     REST = 297,
     RETURN = 298,
     SHORT = 299,
     STATIC = 300,
     SUPER = 301,
     SWITCH = 302,
     PRINTF = 303,
     SCANF = 304,
     THIS = 305,
     TRANSIENT = 306,
     TRY = 307,
     VAR = 308,
     VOID = 309,
     VOLATILE = 310,
     WHILE = 311,
     OP_INC = 312,
     OP_DEC = 313,
     OP_SHL = 314,
     OP_SHR = 315,
     OP_SHRR = 316,
     OP_GE = 317,
     OP_LE = 318,
     OP_EQ = 319,
     OP_NE = 320,
     OP_LAND = 321,
     OP_LOR = 322,
     OP_DIM = 323,
     ASS_MUL = 324,
     ASS_DIV = 325,
     ASS_MOD = 326,
     ASS_ADD = 327,
     ASS_SUB = 328,
     ASS_SHL = 329,
     ASS_SHR = 330,
     ASS_SHRR = 331,
     ASS_AND = 332,
     ASS_XOR = 333,
     ASS_OR = 334,
     IDENTIFIER = 335,
     LITERAL = 336,
     BOOLLIT = 337
   };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define MAIN 259
#define BOOLEAN 260
#define BREAK 261
#define BYTE 262
#define BYVALUE 263
#define CASE 264
#define CAST 265
#define CHAR 266
#define CLASS 267
#define CONST 268
#define CONTINUE 269
#define COUT 270
#define CIN 271
#define DEFAULT 272
#define DO 273
#define DOUBLE 274
#define ELSE 275
#define FINAL 276
#define FLOAT 277
#define FOR 278
#define FUTURE 279
#define GENERIC 280
#define GOTO 281
#define IF 282
#define IMPORT 283
#define INNER 284
#define INSTANCEOF 285
#define INT 286
#define INVERT 287
#define LONG 288
#define NATIVE 289
#define NEW 290
#define JNULL 291
#define OPERATOR 292
#define OUTER 293
#define PRIVATE 294
#define PROTECTED 295
#define PUBLIC 296
#define REST 297
#define RETURN 298
#define SHORT 299
#define STATIC 300
#define SUPER 301
#define SWITCH 302
#define PRINTF 303
#define SCANF 304
#define THIS 305
#define TRANSIENT 306
#define TRY 307
#define VAR 308
#define VOID 309
#define VOLATILE 310
#define WHILE 311
#define OP_INC 312
#define OP_DEC 313
#define OP_SHL 314
#define OP_SHR 315
#define OP_SHRR 316
#define OP_GE 317
#define OP_LE 318
#define OP_EQ 319
#define OP_NE 320
#define OP_LAND 321
#define OP_LOR 322
#define OP_DIM 323
#define ASS_MUL 324
#define ASS_DIV 325
#define ASS_MOD 326
#define ASS_ADD 327
#define ASS_SUB 328
#define ASS_SHL 329
#define ASS_SHR 330
#define ASS_SHRR 331
#define ASS_AND 332
#define ASS_XOR 333
#define ASS_OR 334
#define IDENTIFIER 335
#define LITERAL 336
#define BOOLLIT 337




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


