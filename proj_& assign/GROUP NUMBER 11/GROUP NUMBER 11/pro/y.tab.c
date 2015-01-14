
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "cpp.y"

#include<string.h>
#include<stdio.h>
#include<stdlib.h>



/* Line 189 of yacc.c  */
#line 81 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 287 "y.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  40
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2375

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  107
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  94
/* YYNRULES -- Number of rules.  */
#define YYNRULES  261
/* YYNRULES -- Number of states.  */
#define YYNSTATES  428

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   337

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    97,     2,     2,     2,   102,   103,     2,
      91,    92,   100,    98,    83,    99,    87,   101,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    93,    84,
      85,    90,    86,   106,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    94,     2,    95,   104,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    88,   105,    89,    96,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    35,    37,    40,
      42,    44,    46,    49,    51,    54,    57,    59,    62,    67,
      69,    73,    81,    88,    92,    96,    99,   103,   105,   108,
     110,   114,   117,   119,   122,   124,   126,   128,   130,   132,
     134,   136,   138,   140,   142,   144,   147,   149,   152,   155,
     158,   160,   162,   164,   166,   168,   172,   175,   177,   181,
     183,   187,   189,   192,   196,   198,   202,   205,   210,   214,
     216,   218,   223,   227,   230,   232,   236,   239,   243,   245,
     248,   250,   252,   256,   259,   264,   268,   271,   273,   277,
     280,   282,   285,   287,   289,   293,   298,   301,   303,   305,
     307,   310,   312,   314,   316,   318,   320,   323,   330,   335,
     339,   341,   344,   348,   351,   353,   359,   367,   373,   379,
     387,   395,   402,   405,   407,   409,   412,   414,   416,   418,
     422,   426,   429,   433,   436,   440,   443,   445,   447,   449,
     451,   453,   457,   459,   461,   463,   465,   467,   469,   474,
     479,   483,   487,   491,   495,   499,   504,   508,   510,   512,
     514,   516,   518,   520,   522,   526,   528,   532,   534,   536,
     540,   544,   549,   554,   560,   565,   570,   574,   578,   580,
     583,   587,   589,   592,   594,   596,   599,   602,   605,   608,
     611,   613,   615,   618,   620,   622,   624,   626,   628,   633,
     638,   643,   645,   648,   651,   653,   657,   661,   665,   667,
     671,   675,   677,   681,   685,   689,   691,   695,   699,   703,
     707,   711,   713,   717,   721,   723,   727,   729,   733,   735,
     739,   741,   745,   747,   751,   753,   759,   761,   765,   767,
     769,   771,   773,   775,   777,   779,   781,   783,   785,   787,
     789,   791
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     112,     0,    -1,   109,    -1,   109,   176,    -1,   110,    -1,
     118,    -1,     5,    -1,    11,    -1,     7,    -1,    44,    -1,
      31,    -1,    33,    -1,    22,    -1,    19,    -1,    54,    -1,
      84,    -1,   111,    84,    -1,   113,    -1,   116,   114,    -1,
     116,    -1,   114,    -1,   115,    -1,   114,   115,    -1,   119,
      -1,   119,   111,    -1,     1,    84,    -1,   117,    -1,   116,
     117,    -1,    28,    85,   118,    86,    -1,    80,    -1,   118,
      87,    80,    -1,   122,    88,   126,    89,   110,     4,   120,
      -1,   122,    88,   126,    89,     4,   120,    -1,   122,    88,
      89,    -1,   110,     4,   120,    -1,     4,   120,    -1,    88,
     121,    89,    -1,   120,    -1,   148,   121,    -1,   148,    -1,
     123,   125,    80,    -1,   125,    80,    -1,   124,    -1,   123,
     124,    -1,     3,    -1,    21,    -1,    41,    -1,    40,    -1,
      39,    -1,    45,    -1,    51,    -1,    55,    -1,    34,    -1,
      12,    -1,   127,    -1,   126,   127,    -1,   128,    -1,   128,
     111,    -1,     1,    84,    -1,   129,    84,    -1,   134,    -1,
     140,    -1,   142,    -1,   143,    -1,   119,    -1,   123,   108,
     130,    -1,   108,   130,    -1,   131,    -1,   130,    83,   131,
      -1,   138,    -1,   138,    90,   132,    -1,   199,    -1,    88,
      89,    -1,    88,   133,    89,    -1,   132,    -1,   133,    83,
     132,    -1,   133,    83,    -1,   123,   108,   135,   139,    -1,
     108,   135,   139,    -1,    48,    -1,    49,    -1,   138,    91,
     136,    92,    -1,   138,    91,    92,    -1,   135,    68,    -1,
     137,    -1,   136,    83,   137,    -1,   108,   138,    -1,    21,
     108,   138,    -1,    80,    -1,   138,    68,    -1,   144,    -1,
      84,    -1,   123,   141,   144,    -1,   141,   144,    -1,    80,
      91,   136,    92,    -1,    80,    91,    92,    -1,    45,   144,
      -1,   144,    -1,    88,   145,    89,    -1,    88,    89,    -1,
     146,    -1,   145,   146,    -1,   147,    -1,   148,    -1,   108,
     130,    84,    -1,    21,   108,   130,    84,    -1,     1,    84,
      -1,   150,    -1,   151,    -1,   149,    -1,   152,    84,    -1,
     153,    -1,   154,    -1,   159,    -1,   147,    -1,   144,    -1,
       1,    84,    -1,    15,    59,    32,    80,    32,    84,    -1,
      15,    59,    80,    84,    -1,    16,    80,    84,    -1,    84,
      -1,    80,    93,    -1,     9,   200,    93,    -1,    17,    93,
      -1,   199,    -1,    27,    91,   199,    92,   148,    -1,    27,
      91,   199,    92,   148,    20,   148,    -1,    47,    91,   199,
      92,   144,    -1,    56,    91,   199,    92,   148,    -1,    18,
     148,    56,    91,   199,    92,    84,    -1,    23,    91,   155,
     156,   157,    92,   148,    -1,    23,    91,   155,   156,    92,
     148,    -1,   158,    84,    -1,   147,    -1,    84,    -1,   199,
      84,    -1,    84,    -1,   158,    -1,   152,    -1,   158,    83,
     152,    -1,     6,    80,    84,    -1,     6,    84,    -1,    14,
      80,    84,    -1,    14,    84,    -1,    43,   199,    84,    -1,
      43,    84,    -1,   118,    -1,   161,    -1,   168,    -1,   170,
      -1,   162,    -1,    91,   199,    92,    -1,   163,    -1,    81,
      -1,    82,    -1,   164,    -1,   165,    -1,   166,    -1,   118,
      94,   199,    95,    -1,   162,    94,   199,    95,    -1,   161,
      87,    80,    -1,   178,    87,    80,    -1,   118,    87,    50,
      -1,   118,    87,    12,    -1,   110,    87,    12,    -1,   167,
      91,   169,    92,    -1,   167,    91,    92,    -1,   163,    -1,
     168,    -1,   118,    -1,    50,    -1,    46,    -1,    36,    -1,
     199,    -1,   169,    83,   199,    -1,   171,    -1,   118,    87,
     171,    -1,   173,    -1,   172,    -1,   173,    88,    89,    -1,
     172,    88,    89,    -1,   173,    88,   133,    89,    -1,   172,
      88,   126,    89,    -1,    35,   109,    91,   169,    92,    -1,
      35,   109,    91,    92,    -1,    35,   109,   174,   176,    -1,
      35,   109,   174,    -1,    35,   109,   176,    -1,   175,    -1,
     174,   175,    -1,    94,   199,    95,    -1,    68,    -1,   176,
      68,    -1,   160,    -1,   178,    -1,   177,    57,    -1,   177,
      58,    -1,    57,   179,    -1,    58,   179,    -1,   182,   183,
      -1,   180,    -1,   177,    -1,   181,   179,    -1,    96,    -1,
      97,    -1,    98,    -1,    99,    -1,   179,    -1,    91,   184,
      92,   183,    -1,    91,   185,    92,   183,    -1,    91,   199,
      92,   180,    -1,   110,    -1,   110,   176,    -1,   118,   176,
      -1,   183,    -1,   186,   100,   183,    -1,   186,   101,   183,
      -1,   186,   102,   183,    -1,   186,    -1,   187,    98,   186,
      -1,   187,    99,   186,    -1,   187,    -1,   188,    59,   187,
      -1,   188,    60,   187,    -1,   188,    61,   187,    -1,   188,
      -1,   189,    85,   188,    -1,   189,    86,   188,    -1,   189,
      63,   188,    -1,   189,    62,   188,    -1,   189,    30,   108,
      -1,   189,    -1,   190,    64,   189,    -1,   190,    65,   189,
      -1,   190,    -1,   191,   103,   190,    -1,   191,    -1,   192,
     104,   191,    -1,   192,    -1,   193,   105,   192,    -1,   193,
      -1,   194,    66,   193,    -1,   194,    -1,   195,    67,   194,
      -1,   195,    -1,   195,   106,   199,    93,   196,    -1,   196,
      -1,   179,   198,   197,    -1,    90,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,   197,
      -1,   196,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    45,    46,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    67,    68,    72,    76,    77,
      78,    83,    84,    88,    89,    90,    94,    95,    99,   103,
     104,   108,   109,   110,   111,   112,   114,   117,   118,   119,
     123,   124,   128,   129,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   145,   149,   150,   154,   155,   156,   160,
     161,   162,   163,   164,   165,   169,   170,   174,   175,   179,
     180,   184,   185,   186,   190,   191,   192,   196,   197,   198,
     199,   203,   204,   205,   209,   210,   214,   215,   219,   220,
     224,   225,   229,   230,   234,   235,   239,   243,   247,   248,
     252,   253,   257,   258,   262,   263,   264,   268,   269,   270,
     271,   272,   273,   274,   275,   276,   277,   281,   282,   283,
     286,   290,   291,   292,   296,   300,   301,   302,   306,   307,
     308,   309,   313,   314,   315,   319,   320,   324,   328,   329,
     333,   334,   335,   336,   337,   338,   343,   344,   348,   349,
     350,   354,   355,   359,   360,   361,   362,   363,   367,   368,
     372,   373,   374,   375,   376,   380,   381,   385,   386,   387,
     391,   392,   393,   397,   398,   402,   403,   407,   408,   409,
     410,   411,   412,   416,   417,   421,   422,   423,   427,   428,
     432,   436,   437,   441,   442,   446,   447,   451,   452,   453,
     454,   458,   459,   463,   464,   468,   469,   473,   474,   475,
     476,   480,   481,   485,   489,   490,   491,   492,   496,   497,
     498,   502,   503,   504,   505,   509,   510,   511,   512,   513,
     514,   518,   519,   520,   524,   525,   529,   530,   534,   535,
     539,   540,   544,   545,   549,   550,   554,   555,   559,   560,
     561,   562,   563,   564,   565,   566,   567,   568,   569,   570,
     574,   578
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "MAIN", "BOOLEAN", "BREAK",
  "BYTE", "BYVALUE", "CASE", "CAST", "CHAR", "CLASS", "CONST", "CONTINUE",
  "COUT", "CIN", "DEFAULT", "DO", "DOUBLE", "ELSE", "FINAL", "FLOAT",
  "FOR", "FUTURE", "GENERIC", "GOTO", "IF", "IMPORT", "INNER",
  "INSTANCEOF", "INT", "INVERT", "LONG", "NATIVE", "NEW", "JNULL",
  "OPERATOR", "OUTER", "PRIVATE", "PROTECTED", "PUBLIC", "REST", "RETURN",
  "SHORT", "STATIC", "SUPER", "SWITCH", "PRINTF", "SCANF", "THIS",
  "TRANSIENT", "TRY", "VAR", "VOID", "VOLATILE", "WHILE", "OP_INC",
  "OP_DEC", "OP_SHL", "OP_SHR", "OP_SHRR", "OP_GE", "OP_LE", "OP_EQ",
  "OP_NE", "OP_LAND", "OP_LOR", "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_MOD",
  "ASS_ADD", "ASS_SUB", "ASS_SHL", "ASS_SHR", "ASS_SHRR", "ASS_AND",
  "ASS_XOR", "ASS_OR", "IDENTIFIER", "LITERAL", "BOOLLIT", "','", "';'",
  "'<'", "'>'", "'.'", "'{'", "'}'", "'='", "'('", "')'", "':'", "'['",
  "']'", "'~'", "'!'", "'+'", "'-'", "'*'", "'/'", "'%'", "'&'", "'^'",
  "'|'", "'?'", "$accept", "TypeSpecifier", "TypeName", "PrimitiveType",
  "SemiColons", "CompilationUnit", "ProgramFile", "TypeDeclarations",
  "TypeDeclarationOptSemi", "ImportStatements", "ImportStatement",
  "QualifiedName", "TypeDeclaration", "BLO", "CODE", "ClassHeader",
  "Modifiers", "Modifier", "ClassWord", "FieldDeclarations",
  "FieldDeclarationOptSemi", "FieldDeclaration",
  "FieldVariableDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "MethodBody", "ConstructorDeclaration", "ConstructorDeclarator",
  "StaticInitializer", "NonStaticInitializer", "Block",
  "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "IOStatement",
  "EmptyStatement", "LabelStatement", "ExpressionStatement",
  "SelectionStatement", "IterationStatement", "ForInit", "ForExpr",
  "ForIncr", "ExpressionStatements", "JumpStatement", "PrimaryExpression",
  "NotJustName", "ComplexPrimary", "ComplexPrimaryNoParenthesis",
  "ArrayAccess", "FieldAccess", "MethodCall", "MethodAccess",
  "SpecialName", "ArgumentList", "NewAllocationExpression",
  "PlainNewAllocationExpression", "ClassAllocationExpression",
  "ArrayAllocationExpression", "DimExprs", "DimExpr", "Dims",
  "PostfixExpression", "RealPostfixExpression", "UnaryExpression",
  "LogicalUnaryExpression", "LogicalUnaryOperator",
  "ArithmeticUnaryOperator", "CastExpression", "PrimitiveTypeExpression",
  "ClassTypeExpression", "MultiplicativeExpression", "AdditiveExpression",
  "ShiftExpression", "RelationalExpression", "EqualityExpression",
  "AndExpression", "ExclusiveOrExpression", "InclusiveOrExpression",
  "ConditionalAndExpression", "ConditionalOrExpression",
  "ConditionalExpression", "AssignmentExpression", "AssignmentOperator",
  "Expression", "ConstantExpression", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,    44,    59,    60,    62,    46,   123,   125,
      61,    40,    41,    58,    91,    93,   126,    33,    43,    45,
      42,    47,    37,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   107,   108,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   113,   113,
     113,   114,   114,   115,   115,   115,   116,   116,   117,   118,
     118,   119,   119,   119,   119,   119,   120,   121,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   124,   124,   124,
     124,   124,   124,   125,   126,   126,   127,   127,   127,   128,
     128,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   134,   134,   134,
     134,   135,   135,   135,   136,   136,   137,   137,   138,   138,
     139,   139,   140,   140,   141,   141,   142,   143,   144,   144,
     145,   145,   146,   146,   147,   147,   147,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   149,   149,   149,
     150,   151,   151,   151,   152,   153,   153,   153,   154,   154,
     154,   154,   155,   155,   155,   156,   156,   157,   158,   158,
     159,   159,   159,   159,   159,   159,   160,   160,   161,   161,
     161,   162,   162,   163,   163,   163,   163,   163,   164,   164,
     165,   165,   165,   165,   165,   166,   166,   167,   167,   167,
     168,   168,   168,   169,   169,   170,   170,   171,   171,   171,
     171,   171,   171,   172,   172,   173,   173,   173,   174,   174,
     175,   176,   176,   177,   177,   178,   178,   179,   179,   179,
     179,   180,   180,   181,   181,   182,   182,   183,   183,   183,
     183,   184,   184,   185,   186,   186,   186,   186,   187,   187,
     187,   188,   188,   188,   188,   189,   189,   189,   189,   189,
     189,   190,   190,   190,   191,   191,   192,   192,   193,   193,
     194,   194,   195,   195,   196,   196,   197,   197,   198,   198,
     198,   198,   198,   198,   198,   198,   198,   198,   198,   198,
     199,   200
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     1,
       1,     1,     2,     1,     2,     2,     1,     2,     4,     1,
       3,     7,     6,     3,     3,     2,     3,     1,     2,     1,
       3,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     3,     2,     1,     3,     1,
       3,     1,     2,     3,     1,     3,     2,     4,     3,     1,
       1,     4,     3,     2,     1,     3,     2,     3,     1,     2,
       1,     1,     3,     2,     4,     3,     2,     1,     3,     2,
       1,     2,     1,     1,     3,     4,     2,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     2,     6,     4,     3,
       1,     2,     3,     2,     1,     5,     7,     5,     5,     7,
       7,     6,     2,     1,     1,     2,     1,     1,     1,     3,
       3,     2,     3,     2,     3,     2,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     3,     3,     3,     3,     4,     3,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     3,
       3,     4,     4,     5,     4,     4,     3,     3,     1,     2,
       3,     1,     2,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     2,     1,     1,     1,     1,     1,     4,     4,
       4,     1,     2,     2,     1,     3,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     1,     3,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    44,     0,     6,     8,     7,    53,    13,    45,
      12,     0,    10,    11,    52,    48,    47,    46,     9,    49,
      50,    14,    51,     0,     0,    17,     0,    21,     0,    26,
      23,     0,     0,    42,     0,    25,     0,    35,     0,     0,
       1,    22,     0,    27,    15,    24,     0,    43,     0,    41,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   172,     0,   171,     0,   170,     0,     0,     0,
      29,   153,   154,   120,     0,     0,   203,   204,   205,   206,
       0,     2,     4,   146,    37,     0,   115,   114,     0,   109,
     107,   108,     0,   111,   112,   113,   193,   147,   150,   152,
     155,   156,   157,     0,   148,   149,   175,   178,   177,   201,
     194,   207,   200,     0,     0,   214,   218,   221,   225,   231,
     234,   236,   238,   240,   242,   244,   246,   260,   124,    29,
       0,    34,    16,     0,    49,    79,    80,    29,     0,    33,
       0,     4,     5,    64,     0,     0,    54,    56,     0,    60,
      61,     0,    62,    63,    97,    40,   106,     0,   141,     0,
     146,   207,   261,     0,     0,   143,     0,     0,   123,     0,
       0,     4,     0,     0,     0,   145,     0,     0,     0,     0,
     197,   198,   121,    99,     0,   100,   102,     0,   211,   146,
       0,     0,     0,    88,     0,    67,    69,   191,     3,     0,
       0,     0,    36,    38,   110,     0,     0,     0,     0,     0,
     195,   196,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   248,     0,   202,   199,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    28,
       0,    58,    96,     0,   103,    66,     0,    69,     0,     0,
       0,    55,    57,    59,    93,   140,   122,   142,     0,     0,
     119,     0,     0,     0,   134,   133,   138,     0,     0,     0,
       0,     0,   186,   188,   187,   144,     0,     0,     0,    98,
     101,   212,   213,     0,     0,   151,     0,   104,    89,     0,
     192,   164,   163,   162,    30,   176,     0,   160,     0,   166,
       0,   173,   180,     0,     0,   179,    74,     0,    71,   161,
     247,   215,   216,   217,   219,   220,   222,   223,   224,   230,
     229,   228,   226,   227,   232,   233,   235,   237,   239,   241,
     243,     0,     0,    95,     0,     0,    84,    83,    91,    78,
      90,     0,    65,     0,    92,     0,     0,     0,   118,     0,
     105,   106,   136,     0,     0,     0,   132,     0,   184,     0,
       0,   189,   185,     0,     0,   151,   208,   209,   210,    68,
      70,   158,   159,     0,   165,   182,    72,     0,    76,   181,
       0,     0,    86,     0,    94,    82,     0,    77,    32,     0,
       0,     0,     0,     0,   137,   135,   139,   125,   183,   190,
     127,   128,   174,    73,    75,   245,    87,    85,    81,    31,
     117,     0,   131,     0,     0,   129,   130,   126
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    80,    81,   159,    45,    24,    25,    26,    27,    28,
      29,   160,    30,    84,    85,    31,    32,    33,    34,   145,
     146,   147,   148,   194,   195,   316,   317,   149,   256,   345,
     346,   196,   349,   150,   151,   152,   153,    86,   184,   185,
      87,    88,    89,    90,    91,    92,    93,    94,   277,   363,
     403,   278,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   310,   105,   106,   107,   108,   282,   283,   198,
     109,   110,   111,   112,   113,   114,   115,   190,   191,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   225,   128,   163
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -286
static const yytype_int16 yypact[] =
{
    2320,   -59,  -286,   -48,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,   -37,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,    49,    30,  -286,  2219,  -286,  2163,  -286,
     -19,   -17,   288,  -286,    -3,  -286,   840,  -286,     9,   -48,
    -286,  -286,  2275,  -286,  -286,    27,  1874,  -286,    60,  -286,
      45,    12,  1710,    26,    88,    86,    58,   939,   244,    85,
      92,   244,  -286,  1268,  -286,    97,  -286,   106,  1767,  1767,
     114,  -286,  -286,  -286,   436,  1710,  -286,  -286,  -286,  -286,
     119,   136,   124,    66,  -286,   120,  -286,  -286,   543,  -286,
    -286,  -286,   138,  -286,  -286,  -286,  -286,   150,   146,   154,
    -286,  -286,  -286,   155,   161,  -286,  -286,   173,   179,   101,
     181,   536,  -286,  1767,  1710,  -286,    35,    63,   110,    56,
     121,   166,   174,   176,   216,   -38,  -286,  -286,  -286,  -286,
     104,  -286,  -286,   200,   197,  -286,  -286,   195,   642,  -286,
     119,    49,   202,  -286,  2107,  1934,  -286,   -19,   206,  -286,
    -286,   197,  -286,  -286,  -286,  -286,  -286,   209,  -286,   124,
     -67,  -286,  -286,   199,   210,  -286,   -16,   211,  -286,   240,
     119,  -286,  1021,  1710,   -24,  -286,   218,  1710,  1710,  1710,
    -286,  -286,  -286,  -286,   741,  -286,  -286,   543,   -35,   -18,
     212,   213,   214,  -286,   111,  -286,     4,  -286,   235,   295,
      10,  1710,  -286,  -286,  -286,   230,  1710,  1325,  1994,  1078,
    -286,  -286,   231,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  1710,  -286,  -286,  1710,  1710,
    1710,  1710,  1710,  1710,  1710,  1710,   244,  1710,  1710,  1710,
    1710,  1710,  1710,  1710,  1710,  1710,  1710,  1710,  1710,  -286,
     232,  -286,  -286,   243,  -286,   233,    64,    23,   119,   197,
    1077,  -286,    27,  -286,  -286,  -286,  -286,  -286,   237,   236,
    -286,   224,   122,   241,  -286,  -286,  -286,  1407,   151,   227,
    1464,  1710,   -45,  -286,   235,  -286,   234,   238,   239,  -286,
    -286,   235,   235,  1710,  1710,  1807,   119,  -286,  -286,  1546,
    -286,  -286,  -286,  -286,  -286,  -286,   242,  -286,   249,  -286,
     -36,  -286,  -286,  2054,  1173,  -286,  -286,    -5,  -286,  -286,
    -286,  -286,  -286,  -286,    35,    35,    63,    63,    63,  -286,
     110,   110,   110,   110,    56,    56,   121,   166,   174,   176,
     216,   245,   244,  -286,   119,    25,  -286,  -286,  -286,  -286,
    -286,   347,   233,    64,  -286,   -48,   328,   302,  -286,  1710,
    -286,  -286,  -286,  1628,   252,  1710,  -286,   939,  -286,    71,
     250,  -286,   235,   197,   939,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,  -286,  1710,  -286,  -286,  -286,    32,  1546,  -286,
    1710,   119,   278,    76,  -286,  -286,    72,  -286,  -286,   -48,
     264,   263,   939,   265,   276,  -286,  -286,   340,  -286,  -286,
    -286,  -286,  -286,  -286,  -286,  -286,   278,  -286,  -286,  -286,
    -286,   279,  -286,   939,   939,  -286,  -286,  -286
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -286,   -43,   301,     0,   217,  -286,  -286,   337,    -7,  -286,
     345,     5,   -41,    -2,   -75,  -286,   -40,   -21,   -20,   167,
    -135,  -286,  -286,  -131,    81,  -285,    68,  -286,   125,    33,
      -4,  -132,    37,  -286,   248,  -286,  -286,   -12,  -286,   204,
     -56,   -53,  -286,  -286,  -286,  -165,  -286,  -286,  -286,  -286,
    -286,    31,  -286,  -286,  -286,  -286,  -286,  -286,  -286,  -286,
    -286,  -286,   115,  -286,   196,  -286,  -286,  -286,   117,  -157,
    -286,  -286,   -14,   105,  -286,  -286,   -55,  -286,  -286,    11,
     -32,   -58,    15,   160,   162,   159,   164,   158,  -286,   -50,
     183,  -286,   208,  -286
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -170
static const yytype_int16 yytable[] =
{
      23,    37,   162,   140,   169,   143,   144,   276,   257,   255,
     261,    47,    48,   203,   380,   170,   268,   284,   186,    41,
     200,   187,   302,   197,  -169,    35,    23,   201,    23,   247,
      40,   291,   292,   197,   154,    41,    82,   131,   161,   272,
      36,    83,    23,   130,   197,    61,   141,   383,    38,   281,
     197,   142,   199,    39,   180,   181,   384,    82,   171,   227,
     303,   171,    83,   142,   269,    44,   142,   280,   248,   200,
     281,    46,   298,  -169,    82,   188,   201,    49,   388,    83,
     189,     4,   186,     5,   389,   254,   236,     6,    82,   129,
     304,   298,   157,    83,   299,     8,   158,   342,    10,   226,
     161,   258,   140,   414,   143,   144,   164,    12,   393,    13,
     165,   132,   203,   299,   351,   388,   275,   394,   237,   238,
      18,   413,   252,    47,    48,   372,   257,   352,   186,   156,
      21,   254,   347,   154,    -5,   228,   229,   230,    82,   264,
     155,   239,   240,    83,   171,   141,    -5,   166,   348,   142,
     142,   168,   138,   200,   383,   393,   129,  -169,   210,   211,
     201,   231,   232,   408,   418,   140,   167,   143,   144,   233,
     234,   235,    82,   321,   322,   323,   172,    83,   261,   330,
     331,   332,   333,   173,    82,   241,   242,    82,   177,    83,
     249,   250,    83,   329,   296,   297,   154,   178,   276,   193,
     406,   326,   327,   328,   197,   296,   360,   182,   141,   202,
     344,   199,   392,   142,   161,   161,   161,   161,   161,   161,
     161,   161,   204,   161,   161,   161,   161,   161,   161,   161,
     161,   161,   161,   161,   365,   366,   171,   205,   376,   377,
     206,   142,   324,   325,   350,  -167,   207,   354,     4,     4,
       5,     5,  -168,   171,     6,     6,   334,   335,   142,   416,
     356,   208,     8,     8,   342,    10,    10,   209,   212,   243,
     140,   176,   143,   144,    12,    12,    13,    13,   244,   161,
     161,   245,   246,   192,   251,   138,   253,    18,    18,   250,
     263,     2,   266,   265,   267,   270,   271,    21,    21,   391,
       7,   154,   285,   300,   293,   294,   295,   301,   344,     9,
     307,   319,   304,   141,   407,   359,   296,   357,   142,   367,
     358,   411,    14,   129,   129,   361,   373,    15,    16,    17,
     374,   375,   399,    19,   400,   343,   405,   381,   390,    20,
     415,   350,   171,    22,   382,   409,   298,   142,   420,   422,
     344,   171,     4,   398,     5,   421,   142,   423,     6,   365,
     424,   410,   174,   425,   262,    42,     8,    82,   342,    10,
     426,   427,    83,    43,    82,   313,   161,   379,    12,    83,
      13,   279,   387,   353,   396,   286,   287,   288,   290,   417,
     397,    18,   259,   171,   404,   369,   305,   419,   142,   371,
     378,    21,    82,   336,   338,   340,   337,    83,   320,   306,
     339,     0,     0,     0,   308,   311,     0,   318,     0,     0,
       0,     0,     0,    82,    82,     0,     0,   129,    83,    83,
       0,     0,     0,     0,     0,     0,     0,    50,     0,   395,
       0,     4,    51,     5,     0,    52,     0,     6,     0,     0,
      53,    54,    55,    56,    57,     8,   341,    58,    10,    59,
       0,     0,     0,    60,     0,     0,     0,    12,     0,    13,
       0,    61,    62,     0,     0,     0,     0,     0,     0,    63,
      18,     0,    64,    65,     0,   364,    66,     0,   311,   370,
      21,     0,    67,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   318,     0,     0,
       0,     0,     0,     0,     0,     0,    70,    71,    72,     0,
      73,     0,   318,     0,    74,   183,     0,    75,     0,     0,
       0,     0,    76,    77,    78,    79,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,     0,     0,     4,    51,
       5,     0,    52,     0,     6,     0,     0,    53,    54,    55,
      56,    57,     8,     0,    58,    10,    59,   401,     0,     0,
      60,     0,     0,     0,    12,     0,    13,     0,    61,    62,
       0,     0,     0,     0,     0,     0,    63,    18,     0,    64,
      65,   412,     0,    66,     0,     0,   318,    21,     0,    67,
      68,    69,     0,     0,     0,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,     0,     0,     0,     0,
       0,     0,     0,    70,    71,    72,   224,    73,     0,     0,
       0,    74,   -39,     0,    75,     0,     0,     0,     0,    76,
      77,    78,    79,    50,     0,     0,     0,     4,    51,     5,
       0,    52,     0,     6,     0,     0,    53,    54,    55,    56,
      57,     8,     0,    58,    10,    59,     0,     0,     0,    60,
       0,     0,     0,    12,     0,    13,     0,    61,    62,     0,
       0,     0,     0,     0,     0,    63,    18,     0,    64,    65,
       0,     0,    66,     0,     0,     0,    21,     0,    67,    68,
      69,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    70,    71,    72,     0,    73,     0,     0,     0,
     138,   183,     0,    75,     0,     0,     0,     0,    76,    77,
      78,    79,    50,     0,     0,     0,     4,    51,     5,     0,
      52,     0,     6,     0,     0,    53,    54,    55,    56,    57,
       8,     0,    58,    10,    59,     0,     0,     0,    60,     0,
       0,     0,    12,     0,    13,     0,    61,    62,     0,     0,
       0,     0,     0,     0,    63,    18,     0,    64,    65,     0,
       0,    66,     0,     0,     0,    21,     0,    67,    68,    69,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    70,    71,    72,     0,    73,     0,     0,     0,   138,
     289,     0,    75,     0,     0,     0,     0,    76,    77,    78,
      79,    50,     0,     0,     0,     4,    51,     5,     0,    52,
       0,     6,     0,     0,    53,    54,    55,    56,    57,     8,
       0,    58,    10,    59,     0,     0,     0,    60,     0,     0,
       0,    12,     0,    13,     0,    61,    62,     0,     0,     0,
       0,     0,     0,    63,    18,     0,    64,    65,     0,     0,
      66,     0,     0,     0,    21,     0,    67,    68,    69,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      70,    71,    72,     0,    73,     0,     0,     0,    74,     0,
       0,    75,     0,     0,     0,     0,    76,    77,    78,    79,
      50,     0,     0,     0,     4,    51,     5,     0,    52,     0,
       6,     0,     0,    53,    54,    55,    56,    57,     8,     0,
      58,    10,    59,     0,     0,     0,    60,     0,     0,     0,
      12,     0,    13,     0,    61,    62,     0,     0,     0,     0,
       0,     0,    63,    18,     0,    64,    65,     0,     0,    66,
       0,     0,     0,    21,     0,    67,    68,    69,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    70,
      71,    72,   273,    73,     0,     0,     4,   138,     5,     0,
      75,     0,     6,     0,     0,    76,    77,    78,    79,     0,
       8,     0,    58,    10,     0,     0,     0,     0,     0,     0,
       0,     0,    12,     0,    13,     0,    61,    62,     0,     0,
       0,     0,     0,     0,     0,    18,     0,    64,     0,     0,
       0,    66,     0,     0,     0,    21,     0,     0,    68,    69,
       0,   355,     4,     4,     5,     5,     0,     0,     6,     6,
       0,     0,     0,     0,     0,     0,     8,     8,     0,    10,
      10,   129,    71,    72,     0,   274,     0,     0,    12,    12,
      13,    13,    75,    61,    62,     0,     0,    76,    77,    78,
      79,    18,    18,     0,    64,     0,     0,     0,    66,     0,
       0,    21,    21,     0,     0,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,    71,
      72,     0,     0,     0,     0,     0,   314,   315,     0,    75,
       0,     0,     0,     0,    76,    77,    78,    79,     4,     0,
       5,     0,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,    10,     0,     0,     0,     0,
       0,     0,     0,     0,    12,     0,    13,     0,    61,    62,
       0,     0,     0,     0,     0,     0,     0,    18,     0,    64,
       0,     0,     0,    66,     0,     0,     0,    21,     0,     0,
      68,    69,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   129,    71,    72,     0,     0,     0,     0,
       0,   314,   386,     0,    75,     0,     0,     0,     0,    76,
      77,    78,    79,     4,     0,     5,     0,     0,     0,     6,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,    13,     0,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    18,     0,    64,     0,     0,     0,    66,     0,
       0,     0,    21,     0,     0,    68,    69,     0,     0,     0,
       4,     0,     5,     0,     0,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     8,     0,     0,    10,   129,    71,
      72,     0,   175,     0,     0,     0,    12,     0,    13,    75,
      61,    62,     0,     0,    76,    77,    78,    79,     0,    18,
       0,    64,     0,     0,     0,    66,     0,     0,     0,    21,
       0,     0,    68,    69,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   129,    71,    72,     0,     0,
       0,     0,     4,     0,     5,     0,    75,   309,     6,     0,
       0,    76,    77,    78,    79,     0,     8,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,     0,    61,    62,     0,     0,     0,     0,     0,     0,
       0,    18,     0,    64,     0,     0,     0,    66,     0,     0,
       0,    21,     0,     0,    68,    69,     0,     0,     0,     4,
       0,     5,     0,     0,     0,     6,     0,     0,     0,     0,
       0,     0,     0,     8,     0,     0,    10,   129,    71,    72,
       0,   362,     0,     0,     0,    12,     0,    13,    75,    61,
      62,     0,     0,    76,    77,    78,    79,     0,    18,     0,
      64,     0,     0,     0,    66,     0,     0,     0,    21,     0,
       0,    68,    69,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   129,    71,    72,     0,     0,     0,
       0,     4,     0,     5,     0,    75,   368,     6,     0,     0,
      76,    77,    78,    79,     0,     8,     0,     0,    10,     0,
       0,     0,     0,     0,     0,     0,     0,    12,     0,    13,
       0,    61,    62,     0,     0,     0,     0,     0,     0,     0,
      18,     0,    64,     0,     0,     0,    66,     0,     0,     0,
      21,     0,     0,    68,    69,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   129,    71,    72,     0,
       0,     0,     0,     4,   314,     5,     0,    75,     0,     6,
       0,     0,    76,    77,    78,    79,     0,     8,     0,     0,
      10,     0,     0,     0,     0,     0,     0,     0,     0,    12,
       0,    13,     0,    61,    62,     0,     0,     0,     0,     0,
       0,     0,    18,     0,    64,     0,     0,     0,    66,     0,
       0,     0,    21,     0,     0,    68,    69,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   129,    71,
      72,     0,     0,     0,     0,     4,     0,     5,     0,    75,
     402,     6,     0,     0,    76,    77,    78,    79,     0,     8,
       0,     0,    10,     0,     0,     0,     0,     0,     0,     0,
       0,    12,     0,    13,     0,    61,    62,     0,     0,     0,
       0,     0,     0,     0,    18,     0,    64,     0,     0,     0,
      66,     0,     0,     0,    21,     0,     0,    68,    69,     0,
       0,     0,     4,     0,     5,     0,     0,     0,     6,     0,
       0,     0,     0,     0,     0,     0,     8,     0,     0,    10,
     129,    71,    72,     0,     0,     0,     0,     0,    12,     0,
      13,    75,    61,    62,     0,     0,    76,    77,    78,    79,
       0,    18,     4,    64,     5,     0,     0,    66,     6,     0,
       0,    21,     0,     0,    68,    69,     8,     0,     0,    10,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
      13,     0,    61,    62,     0,     0,     0,   129,    71,    72,
       0,    18,     0,    64,     0,     0,     0,    66,   179,     0,
       0,    21,     0,    76,    77,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,   133,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     7,   129,    71,    72,
       0,     0,     0,     8,     0,     9,    10,     0,   179,     0,
       0,     0,     0,    76,    77,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    18,   134,
       0,     0,   135,   136,     0,    20,     0,     0,    21,    22,
       0,     0,     0,     0,     0,   133,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     8,   137,     9,    10,     0,     0,     0,
       0,     0,   138,   139,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    18,   134,
       0,     0,   135,   136,     0,    20,     0,     0,    21,    22,
       0,     0,     0,     0,     0,   133,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     8,   137,     9,    10,     0,     0,     0,
       0,     0,   138,   260,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    18,   134,
       0,     0,   135,   136,     0,    20,     0,     0,    21,    22,
       0,     0,     0,     0,     0,   133,     0,     2,     3,     4,
       0,     5,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,     8,   137,     9,    10,     0,     0,     0,
       0,     0,   138,   312,     0,    12,     0,    13,    14,     0,
       0,     0,     0,    15,    16,    17,     0,     0,    18,   134,
       0,     0,   135,   136,     0,    20,     0,     0,    21,    22,
       2,     0,     4,     0,     5,     0,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     0,     8,     0,     9,    10,
       0,     0,     0,     0,   137,     0,     0,     0,    12,     0,
      13,    14,   138,   385,     0,     0,    15,    16,    17,     0,
       0,    18,    19,     0,     0,     0,     0,     0,    20,     0,
       0,    21,    22,   -19,     1,     0,     2,     3,     4,     0,
       5,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     0,     8,     0,     9,    10,     0,   137,     0,     0,
       0,    11,     0,     0,    12,     0,    13,    14,     0,     0,
       0,     0,    15,    16,    17,     0,     0,    18,    19,     0,
       0,     0,     0,     0,    20,     0,     0,    21,    22,   -20,
       1,     0,     2,     3,     4,     0,     5,     0,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,     8,     0,
       9,    10,     0,     0,     0,     0,     0,     0,     0,     0,
      12,     0,    13,    14,     0,     0,     0,     0,    15,    16,
      17,     0,     0,    18,    19,     0,     0,     0,     0,     0,
      20,     0,     0,    21,    22,   -18,     1,     0,     2,     3,
       4,     0,     5,     0,     0,     0,     6,     7,     0,     0,
       0,     0,     0,     0,     8,     0,     9,    10,     0,     0,
       0,     0,     0,     0,     0,     0,    12,     0,    13,    14,
       0,     0,     0,     0,    15,    16,    17,     0,     0,    18,
      19,     1,     0,     2,     3,     4,    20,     5,     0,    21,
      22,     6,     7,     0,     0,     0,     0,     0,     0,     8,
       0,     9,    10,     0,     0,     0,     0,     0,    11,     0,
       0,    12,     0,    13,    14,     0,     0,     0,     0,    15,
      16,    17,     0,     0,    18,    19,     0,     0,     0,     0,
       0,    20,     0,     0,    21,    22
};

static const yytype_int16 yycheck[] =
{
       0,     3,    52,    46,    57,    46,    46,   172,   140,   140,
     145,    32,    32,    88,   299,    58,    32,   174,    74,    26,
      87,    74,    12,    68,    91,    84,    26,    94,    28,    67,
       0,   188,   189,    68,    46,    42,    36,    39,    52,   170,
      88,    36,    42,    38,    68,    35,    46,    83,    85,    94,
      68,    46,    87,     4,    68,    69,    92,    57,    58,   114,
      50,    61,    57,    58,    80,    84,    61,    91,   106,    87,
      94,    88,    68,    91,    74,    75,    94,    80,    83,    74,
      75,     5,   138,     7,    89,   138,    30,    11,    88,    80,
      80,    68,    80,    88,    90,    19,    84,    21,    22,   113,
     114,   144,   145,   388,   145,   145,    80,    31,    83,    33,
      84,    84,   187,    90,    91,    83,   172,    92,    62,    63,
      44,    89,   134,   144,   144,   282,   258,   258,   184,    84,
      54,   184,    68,   145,    68,   100,   101,   102,   138,   151,
      80,    85,    86,   138,   144,   145,    80,    59,    84,   144,
     145,    93,    88,    87,    83,    83,    80,    91,    57,    58,
      94,    98,    99,    92,    92,   208,    80,   208,   208,    59,
      60,    61,   172,   228,   229,   230,    91,   172,   313,   237,
     238,   239,   240,    91,   184,    64,    65,   187,    91,   184,
      86,    87,   187,   236,    83,    84,   208,    91,   363,    80,
     365,   233,   234,   235,    68,    83,    84,    93,   208,    89,
     253,    87,   344,   208,   228,   229,   230,   231,   232,   233,
     234,   235,    84,   237,   238,   239,   240,   241,   242,   243,
     244,   245,   246,   247,    83,    84,   236,    87,   293,   294,
      94,   236,   231,   232,   256,    91,    91,   259,     5,     5,
       7,     7,    91,   253,    11,    11,   241,   242,   253,   391,
     260,    88,    19,    19,    21,    22,    22,    88,    87,   103,
     313,    63,   313,   313,    31,    31,    33,    33,   104,   293,
     294,   105,    66,    75,    84,    88,    91,    44,    44,    87,
      84,     3,    93,    84,    84,    84,    56,    54,    54,   342,
      12,   313,    84,    68,    92,    92,    92,    12,   351,    21,
      80,    80,    80,   313,   367,    91,    83,    80,   313,    92,
      84,   374,    34,    80,    80,    84,    92,    39,    40,    41,
      92,    92,     4,    45,    32,    92,    84,    95,    93,    51,
     390,   353,   342,    55,    95,    95,    68,   342,    84,   402,
     393,   351,     5,   355,     7,    92,   351,    92,    11,    83,
      20,   373,    61,    84,   147,    28,    19,   367,    21,    22,
     423,   424,   367,    28,   374,   208,   390,   296,    31,   374,
      33,   173,   314,   258,   351,   177,   178,   179,   184,   393,
     353,    44,   144,   393,   363,   280,   200,   399,   393,   282,
     295,    54,   402,   243,   245,   247,   244,   402,   225,   201,
     246,    -1,    -1,    -1,   206,   207,    -1,   209,    -1,    -1,
      -1,    -1,    -1,   423,   424,    -1,    -1,    80,   423,   424,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     1,    -1,    92,
      -1,     5,     6,     7,    -1,     9,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,   248,    21,    22,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      44,    -1,    46,    47,    -1,   277,    50,    -1,   280,   281,
      54,    -1,    56,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   299,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,
      84,    -1,   314,    -1,    88,    89,    -1,    91,    -1,    -1,
      -1,    -1,    96,    97,    98,    99,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,     5,     6,
       7,    -1,     9,    -1,    11,    -1,    -1,    14,    15,    16,
      17,    18,    19,    -1,    21,    22,    23,   359,    -1,    -1,
      27,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    46,
      47,   383,    -1,    50,    -1,    -1,   388,    54,    -1,    56,
      57,    58,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    90,    84,    -1,    -1,
      -1,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,     1,    -1,    -1,    -1,     5,     6,     7,
      -1,     9,    -1,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    -1,    21,    22,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    43,    44,    -1,    46,    47,
      -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    80,    81,    82,    -1,    84,    -1,    -1,    -1,
      88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,
      98,    99,     1,    -1,    -1,    -1,     5,     6,     7,    -1,
       9,    -1,    11,    -1,    -1,    14,    15,    16,    17,    18,
      19,    -1,    21,    22,    23,    -1,    -1,    -1,    27,    -1,
      -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    44,    -1,    46,    47,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    80,    81,    82,    -1,    84,    -1,    -1,    -1,    88,
      89,    -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,
      99,     1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,
      -1,    11,    -1,    -1,    14,    15,    16,    17,    18,    19,
      -1,    21,    22,    23,    -1,    -1,    -1,    27,    -1,    -1,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    56,    57,    58,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      80,    81,    82,    -1,    84,    -1,    -1,    -1,    88,    -1,
      -1,    91,    -1,    -1,    -1,    -1,    96,    97,    98,    99,
       1,    -1,    -1,    -1,     5,     6,     7,    -1,     9,    -1,
      11,    -1,    -1,    14,    15,    16,    17,    18,    19,    -1,
      21,    22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    44,    -1,    46,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    56,    57,    58,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,
      81,    82,     1,    84,    -1,    -1,     5,    88,     7,    -1,
      91,    -1,    11,    -1,    -1,    96,    97,    98,    99,    -1,
      19,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,
      -1,    50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,
      -1,     4,     5,     5,     7,     7,    -1,    -1,    11,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    19,    -1,    22,
      22,    80,    81,    82,    -1,    84,    -1,    -1,    31,    31,
      33,    33,    91,    35,    36,    -1,    -1,    96,    97,    98,
      99,    44,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    54,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,    -1,    88,    89,    -1,    91,
      -1,    -1,    -1,    -1,    96,    97,    98,    99,     5,    -1,
       7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    -1,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    31,    -1,    33,    -1,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    -1,    46,
      -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    81,    82,    -1,    -1,    -1,    -1,
      -1,    88,    89,    -1,    91,    -1,    -1,    -1,    -1,    96,
      97,    98,    99,     5,    -1,     7,    -1,    -1,    -1,    11,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
       5,    -1,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    -1,    22,    80,    81,
      82,    -1,    84,    -1,    -1,    -1,    31,    -1,    33,    91,
      35,    36,    -1,    -1,    96,    97,    98,    99,    -1,    44,
      -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,
      -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,    -1,
      -1,    -1,     5,    -1,     7,    -1,    91,    92,    11,    -1,
      -1,    96,    97,    98,    99,    -1,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,
      -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,     5,
      -1,     7,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    -1,    -1,    22,    80,    81,    82,
      -1,    84,    -1,    -1,    -1,    31,    -1,    33,    91,    35,
      36,    -1,    -1,    96,    97,    98,    99,    -1,    44,    -1,
      46,    -1,    -1,    -1,    50,    -1,    -1,    -1,    54,    -1,
      -1,    57,    58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    80,    81,    82,    -1,    -1,    -1,
      -1,     5,    -1,     7,    -1,    91,    92,    11,    -1,    -1,
      96,    97,    98,    99,    -1,    19,    -1,    -1,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    -1,    46,    -1,    -1,    -1,    50,    -1,    -1,    -1,
      54,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    80,    81,    82,    -1,
      -1,    -1,    -1,     5,    88,     7,    -1,    91,    -1,    11,
      -1,    -1,    96,    97,    98,    99,    -1,    19,    -1,    -1,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,
      -1,    33,    -1,    35,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    54,    -1,    -1,    57,    58,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    80,    81,
      82,    -1,    -1,    -1,    -1,     5,    -1,     7,    -1,    91,
      92,    11,    -1,    -1,    96,    97,    98,    99,    -1,    19,
      -1,    -1,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    -1,    33,    -1,    35,    36,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    -1,    22,
      80,    81,    82,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    91,    35,    36,    -1,    -1,    96,    97,    98,    99,
      -1,    44,     5,    46,     7,    -1,    -1,    50,    11,    -1,
      -1,    54,    -1,    -1,    57,    58,    19,    -1,    -1,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,
      33,    -1,    35,    36,    -1,    -1,    -1,    80,    81,    82,
      -1,    44,    -1,    46,    -1,    -1,    -1,    50,    91,    -1,
      -1,    54,    -1,    96,    97,    98,    99,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    80,    81,    82,
      -1,    -1,    -1,    19,    -1,    21,    22,    -1,    91,    -1,
      -1,    -1,    -1,    96,    97,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    80,    21,    22,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    80,    21,    22,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    54,    55,
      -1,    -1,    -1,    -1,    -1,     1,    -1,     3,     4,     5,
      -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    80,    21,    22,    -1,    -1,    -1,
      -1,    -1,    88,    89,    -1,    31,    -1,    33,    34,    -1,
      -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,
      -1,    -1,    48,    49,    -1,    51,    -1,    -1,    54,    55,
       3,    -1,     5,    -1,     7,    -1,    -1,    -1,    11,    12,
      -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,
      -1,    -1,    -1,    -1,    80,    -1,    -1,    -1,    31,    -1,
      33,    34,    88,    89,    -1,    -1,    39,    40,    41,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    51,    -1,
      -1,    54,    55,     0,     1,    -1,     3,     4,     5,    -1,
       7,    -1,    -1,    -1,    11,    12,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    -1,    21,    22,    -1,    80,    -1,    -1,
      -1,    28,    -1,    -1,    31,    -1,    33,    34,    -1,    -1,
      -1,    -1,    39,    40,    41,    -1,    -1,    44,    45,    -1,
      -1,    -1,    -1,    -1,    51,    -1,    -1,    54,    55,     0,
       1,    -1,     3,     4,     5,    -1,     7,    -1,    -1,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,    40,
      41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,
      51,    -1,    -1,    54,    55,     0,     1,    -1,     3,     4,
       5,    -1,     7,    -1,    -1,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    33,    34,
      -1,    -1,    -1,    -1,    39,    40,    41,    -1,    -1,    44,
      45,     1,    -1,     3,     4,     5,    51,     7,    -1,    54,
      55,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      -1,    31,    -1,    33,    34,    -1,    -1,    -1,    -1,    39,
      40,    41,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,
      -1,    51,    -1,    -1,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,     5,     7,    11,    12,    19,    21,
      22,    28,    31,    33,    34,    39,    40,    41,    44,    45,
      51,    54,    55,   110,   112,   113,   114,   115,   116,   117,
     119,   122,   123,   124,   125,    84,    88,   120,    85,     4,
       0,   115,   114,   117,    84,   111,    88,   124,   125,    80,
       1,     6,     9,    14,    15,    16,    17,    18,    21,    23,
      27,    35,    36,    43,    46,    47,    50,    56,    57,    58,
      80,    81,    82,    84,    88,    91,    96,    97,    98,    99,
     108,   109,   110,   118,   120,   121,   144,   147,   148,   149,
     150,   151,   152,   153,   154,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   170,   171,   172,   173,   177,
     178,   179,   180,   181,   182,   183,   186,   187,   188,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   199,    80,
     118,   120,    84,     1,    45,    48,    49,    80,    88,    89,
     108,   110,   118,   119,   123,   126,   127,   128,   129,   134,
     140,   141,   142,   143,   144,    80,    84,    80,    84,   110,
     118,   179,   196,   200,    80,    84,    59,    80,    93,   148,
     108,   110,    91,    91,   109,    84,   199,    91,    91,    91,
     179,   179,    93,    89,   145,   146,   147,   148,   110,   118,
     184,   185,   199,    80,   130,   131,   138,    68,   176,    87,
      87,    94,    89,   121,    84,    87,    94,    91,    88,    88,
      57,    58,    87,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    90,   198,   179,   183,   100,   101,
     102,    98,    99,    59,    60,    61,    30,    62,    63,    85,
      86,    64,    65,   103,   104,   105,    66,    67,   106,    86,
      87,    84,   144,    91,   148,   130,   135,   138,   108,   141,
      89,   127,   111,    84,   144,    84,    93,    84,    32,    80,
      84,    56,   130,     1,    84,   147,   152,   155,   158,   199,
      91,    94,   174,   175,   176,    84,   199,   199,   199,    89,
     146,   176,   176,    92,    92,    92,    83,    84,    68,    90,
      68,    12,    12,    50,    80,   171,   199,    80,   199,    92,
     169,   199,    89,   126,    88,    89,   132,   133,   199,    80,
     197,   183,   183,   183,   186,   186,   187,   187,   187,   108,
     188,   188,   188,   188,   189,   189,   190,   191,   192,   193,
     194,   199,    21,    92,   108,   136,   137,    68,    84,   139,
     144,    91,   130,   135,   144,     4,   110,    80,    84,    91,
      84,    84,    84,   156,   199,    83,    84,    92,    92,   169,
     199,   175,   176,    92,    92,    92,   183,   183,   180,   131,
     132,    95,    95,    83,    92,    89,    89,   133,    83,    89,
      93,   108,   138,    83,    92,    92,   136,   139,   120,     4,
      32,   199,    92,   157,   158,    84,   152,   148,    92,    95,
     144,   148,   199,    89,   132,   196,   138,   137,    92,   120,
      84,    92,   148,    92,    20,    84,   148,   148
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 25:

/* Line 1455 of yacc.c  */
#line 90 "cpp.y"
    { yyerrok; }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 156 "cpp.y"
    { yyerrok; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 264 "cpp.y"
    { yyerrok; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 277 "cpp.y"
    { yyerrok; }
    break;



/* Line 1455 of yacc.c  */
#line 2354 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 581 "cpp.y"

extern FILE *yyin;

int main(int argc, char *argv[])
{

 FILE *fp;
 int i;
 if(argc>1)
 { 
 fp = fopen(argv[1],"r");
 }
 if(!fp)
 {
  printf("\n File not found");  
  exit(0);
 }
 yyin = fp;

yyparse();
return 0;
}

