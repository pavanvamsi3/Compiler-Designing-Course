
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
#line 1 "yacc.y"

#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int lineno;
void       yyerror(  char *msg );
int   yylex();
extern int column; 
int total=0;
//S         : ST {printf("Input accepted\n"); exit(0);}
#include"lex.yy.c"


/* Line 189 of yacc.c  */
#line 87 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     STRINGFOR = 262,
     PTR_OP = 263,
     INC_OP = 264,
     DEC_OP = 265,
     LEFT_OP = 266,
     RIGHT_OP = 267,
     LE_OP = 268,
     GE_OP = 269,
     EQ_OP = 270,
     NE_OP = 271,
     L_OP = 272,
     G_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     MUL_ASSIGN = 276,
     DIV_ASSIGN = 277,
     MOD_ASSIGN = 278,
     ADD_ASSIGN = 279,
     SUB_ASSIGN = 280,
     LEFT_ASSIGN = 281,
     RIGHT_ASSIGN = 282,
     AND_ASSIGN = 283,
     XOR_ASSIGN = 284,
     OR_ASSIGN = 285,
     TYPE_NAME = 286,
     DEFINE = 287,
     SCANF = 288,
     INT_SPEC = 289,
     TYPEDEF = 290,
     EXTERN = 291,
     STATIC = 292,
     AUTO = 293,
     REGISTER = 294,
     CHAR = 295,
     SHORT = 296,
     INT = 297,
     LONG = 298,
     SIGNED = 299,
     UNSIGNED = 300,
     FLOAT = 301,
     DOUBLE = 302,
     CONST = 303,
     VOLATILE = 304,
     VOID = 305,
     STRUCT = 306,
     UNION = 307,
     ENUM = 308,
     ELLIPSIS = 309,
     CASE = 310,
     DEFAULT = 311,
     IF = 312,
     ELSE = 313,
     SWITCH = 314,
     WHILE = 315,
     DO = 316,
     FOR = 317,
     GOTO = 318,
     CONTINUE = 319,
     BREAK = 320,
     RETURN = 321
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define STRINGFOR 262
#define PTR_OP 263
#define INC_OP 264
#define DEC_OP 265
#define LEFT_OP 266
#define RIGHT_OP 267
#define LE_OP 268
#define GE_OP 269
#define EQ_OP 270
#define NE_OP 271
#define L_OP 272
#define G_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPE_NAME 286
#define DEFINE 287
#define SCANF 288
#define INT_SPEC 289
#define TYPEDEF 290
#define EXTERN 291
#define STATIC 292
#define AUTO 293
#define REGISTER 294
#define CHAR 295
#define SHORT 296
#define INT 297
#define LONG 298
#define SIGNED 299
#define UNSIGNED 300
#define FLOAT 301
#define DOUBLE 302
#define CONST 303
#define VOLATILE 304
#define VOID 305
#define STRUCT 306
#define UNION 307
#define ENUM 308
#define ELLIPSIS 309
#define CASE 310
#define DEFAULT 311
#define IF 312
#define ELSE 313
#define SWITCH 314
#define WHILE 315
#define DO 316
#define FOR 317
#define GOTO 318
#define CONTINUE 319
#define BREAK 320
#define RETURN 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 261 "y.tab.c"

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
#define YYFINAL  71
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   2154

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  305
/* YYNRULES -- Number of states.  */
#define YYNSTATES  494

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    79,     2,     2,     2,    80,    75,     2,
      67,    68,    72,    76,    74,    77,    71,    81,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    85,    73,
       2,    86,     2,    84,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    69,     2,    70,    82,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    87,    83,    88,    78,     2,     2,     2,
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
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    17,    19,    24,
      29,    33,    37,    42,    47,    51,    55,    58,    61,    66,
      68,    72,    73,    78,    80,    83,    86,    89,    92,    97,
     102,   104,   106,   108,   110,   112,   114,   116,   118,   123,
     124,   130,   132,   136,   140,   144,   146,   150,   154,   156,
     160,   164,   166,   170,   174,   176,   180,   184,   186,   190,
     192,   196,   198,   202,   204,   208,   210,   214,   216,   222,
     224,   228,   232,   234,   236,   238,   240,   242,   244,   246,
     248,   250,   252,   254,   256,   260,   263,   265,   268,   271,
     275,   279,   288,   297,   298,   308,   310,   313,   315,   318,
     320,   323,   325,   329,   332,   334,   338,   340,   342,   344,
     346,   348,   350,   352,   354,   356,   358,   360,   362,   364,
     366,   368,   370,   372,   379,   380,   387,   393,   399,   404,
     405,   411,   414,   416,   418,   420,   423,   427,   431,   434,
     436,   439,   441,   443,   447,   450,   452,   455,   459,   464,
     469,   470,   476,   482,   488,   489,   496,   499,   501,   505,
     508,   510,   514,   516,   518,   521,   523,   525,   529,   533,
     538,   543,   547,   551,   556,   561,   566,   570,   574,   576,
     579,   582,   586,   588,   591,   593,   597,   600,   602,   606,
     610,   613,   616,   618,   620,   624,   625,   630,   632,   635,
     637,   639,   642,   646,   650,   653,   656,   660,   664,   668,
     672,   677,   682,   685,   689,   693,   697,   701,   706,   711,
     713,   717,   721,   722,   727,   732,   737,   742,   744,   748,
     751,   753,   755,   757,   759,   761,   763,   765,   769,   774,
     778,   781,   783,   784,   788,   792,   796,   797,   802,   806,
     810,   811,   816,   821,   826,   828,   831,   833,   836,   838,
     841,   844,   846,   852,   853,   860,   861,   868,   876,   881,
     887,   888,   895,   896,   903,   904,   910,   916,   919,   924,
     932,   939,   946,   954,   964,   971,   972,   981,   985,   988,
     991,   994,   997,  1000,  1004,  1008,  1010,  1013,  1016,  1019,
    1021,  1023,  1024,  1029,  1033,  1037
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     168,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    67,
     111,    68,    -1,    67,   111,     1,    -1,    90,    -1,    91,
      69,   111,    70,    -1,    91,    69,   111,     1,    -1,    91,
      67,    68,    -1,    91,    67,     1,    -1,    91,    67,    92,
      68,    -1,    91,    67,    92,     1,    -1,    91,    71,     3,
      -1,    91,     8,     3,    -1,    91,     9,    -1,    91,    10,
      -1,    91,    72,    90,    73,    -1,   109,    -1,    92,    74,
     109,    -1,    -1,    92,     1,    93,   109,    -1,    91,    -1,
       9,    94,    -1,    10,    94,    -1,    95,    96,    -1,     6,
      94,    -1,     6,    67,   144,    68,    -1,     6,    67,   144,
       1,    -1,    75,    -1,    72,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    94,    -1,    67,   144,
      68,    96,    -1,    -1,    67,   144,     1,    97,    96,    -1,
      96,    -1,    98,    72,    96,    -1,    98,    81,    96,    -1,
      98,    80,    96,    -1,    98,    -1,    99,    76,    98,    -1,
      99,    77,    98,    -1,    99,    -1,   100,    11,    99,    -1,
     100,    12,    99,    -1,   100,    -1,   101,    13,   100,    -1,
     101,    14,   100,    -1,   101,    -1,   102,    15,   101,    -1,
     102,    16,   101,    -1,   102,    -1,   103,    75,   102,    -1,
     103,    -1,   104,    82,   103,    -1,   104,    -1,   105,    83,
     104,    -1,   105,    -1,   106,    19,   105,    -1,   106,    -1,
     107,    20,   106,    -1,   107,    -1,   107,    84,   111,    85,
     108,    -1,   108,    -1,    94,   110,   109,    -1,    94,   110,
       1,    -1,    86,    -1,    21,    -1,    22,    -1,    23,    -1,
      24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,
      29,    -1,    30,    -1,   109,    -1,   111,    74,   109,    -1,
     111,     1,    -1,   108,    -1,   115,    73,    -1,   115,     1,
      -1,   115,   116,    73,    -1,   115,   116,     1,    -1,    33,
      67,     5,    74,    75,     3,    68,    73,    -1,    33,    67,
       5,    74,    75,     3,    68,     1,    -1,    -1,    33,    67,
       5,    74,     1,   114,     3,    68,    73,    -1,   118,    -1,
     118,   115,    -1,   119,    -1,   119,   115,    -1,   134,    -1,
     134,   115,    -1,   117,    -1,   116,    74,   117,    -1,   116,
       1,    -1,   135,    -1,   135,    86,   147,    -1,    35,    -1,
      36,    -1,    37,    -1,    38,    -1,    39,    -1,    50,    -1,
      40,    -1,    41,    -1,    42,    -1,    43,    -1,    46,    -1,
      47,    -1,    44,    -1,    45,    -1,   120,    -1,   129,    -1,
      31,    -1,   123,     3,    87,   124,    88,    73,    -1,    -1,
     123,     3,     1,   121,   124,    88,    -1,   123,     3,    87,
     124,     1,    -1,   123,    87,   124,    88,    73,    -1,   123,
      87,   124,     1,    -1,    -1,   123,     1,   122,   124,    88,
      -1,   123,     3,    -1,    51,    -1,    52,    -1,   125,    -1,
     124,   125,    -1,   126,   127,    73,    -1,   126,   127,     1,
      -1,   119,   126,    -1,   119,    -1,   134,   126,    -1,   134,
      -1,   128,    -1,   127,    74,   128,    -1,   127,     1,    -1,
     135,    -1,    85,   112,    -1,   135,    85,   112,    -1,    53,
      87,   132,    88,    -1,    53,    87,   132,     1,    -1,    -1,
      53,     1,   130,   132,    88,    -1,    53,     3,    87,   132,
      88,    -1,    53,     3,    87,   132,     1,    -1,    -1,    53,
       3,     1,   131,   132,    88,    -1,    53,     3,    -1,   133,
      -1,   132,    74,   133,    -1,   132,     1,    -1,     3,    -1,
       3,    86,   112,    -1,    48,    -1,    49,    -1,   137,   136,
      -1,   136,    -1,     3,    -1,    67,   135,    68,    -1,    67,
     135,     1,    -1,   136,    69,   112,    70,    -1,   136,    69,
     112,     1,    -1,   136,    69,    70,    -1,   136,    69,     1,
      -1,   136,    67,   139,    68,    -1,   136,    67,   142,    68,
      -1,   136,    67,   142,     1,    -1,   136,    67,    68,    -1,
     136,    67,     1,    -1,    72,    -1,    72,   138,    -1,    72,
     137,    -1,    72,   138,   137,    -1,   134,    -1,   138,   134,
      -1,   140,    -1,   140,    74,    54,    -1,   140,     1,    -1,
     141,    -1,   140,    74,   141,    -1,   140,   141,     1,    -1,
     115,   135,    -1,   115,   145,    -1,   115,    -1,     3,    -1,
     142,    74,     3,    -1,    -1,   142,     1,   143,     3,    -1,
     126,    -1,   126,   145,    -1,   137,    -1,   146,    -1,   137,
     146,    -1,    67,   145,    68,    -1,    67,   145,     1,    -1,
      69,    70,    -1,    69,     1,    -1,    69,   112,    70,    -1,
      69,   112,     1,    -1,   146,    69,    70,    -1,   146,    69,
       1,    -1,   146,    69,   112,    70,    -1,   146,    69,   112,
       1,    -1,    67,    68,    -1,    67,   139,    68,    -1,    67,
     139,     1,    -1,   146,    67,    68,    -1,   146,    67,     1,
      -1,   146,    67,   139,    68,    -1,   146,    67,   139,     1,
      -1,   109,    -1,    87,   149,    88,    -1,    87,   149,     1,
      -1,    -1,     1,   148,   149,    88,    -1,    87,   149,    74,
      88,    -1,    87,   149,    74,     1,    -1,   149,    74,    88,
       1,    -1,   147,    -1,   149,    74,   147,    -1,   149,     1,
      -1,    33,    -1,   151,    -1,   152,    -1,   158,    -1,   159,
      -1,   165,    -1,   167,    -1,     3,    85,   150,    -1,    55,
     112,    85,   150,    -1,    56,    85,   150,    -1,    87,    88,
      -1,    87,    -1,    -1,     1,   153,    88,    -1,    87,   157,
      88,    -1,    87,   157,     1,    -1,    -1,     1,   154,   157,
      88,    -1,    87,   156,    88,    -1,    87,   156,     1,    -1,
      -1,     1,   155,   156,    88,    -1,    87,   156,   157,    88,
      -1,    87,   156,   157,     1,    -1,   113,    -1,   156,   113,
      -1,   150,    -1,   157,   150,    -1,    73,    -1,   111,    73,
      -1,   111,     1,    -1,     1,    -1,    57,    67,   111,    68,
     150,    -1,    -1,    57,     1,   160,   111,    68,   150,    -1,
      -1,    57,    67,   111,     1,   161,   150,    -1,    57,    67,
     111,    68,   150,    58,   150,    -1,    57,    67,   111,     1,
      -1,    59,    67,   111,    68,   150,    -1,    -1,    59,    67,
     111,     1,   162,   150,    -1,    -1,    59,     1,   163,   111,
      68,   150,    -1,    -1,   150,    58,     1,   164,   150,    -1,
      60,    67,   111,    68,   150,    -1,    60,     1,    -1,    60,
      67,   111,     1,    -1,    61,   150,    60,    67,   111,    68,
      73,    -1,    61,   150,    60,    67,   111,     1,    -1,    62,
      67,   158,   158,    68,   150,    -1,    62,    67,   158,   158,
     111,    68,   150,    -1,    62,    67,   119,   158,   158,   111,
      68,   150,     1,    -1,    62,    67,   158,   158,   111,     1,
      -1,    -1,    62,     1,   166,   158,   158,   111,    68,   150,
      -1,    63,     3,    73,    -1,    64,    73,    -1,    65,    73,
      -1,    65,     1,    -1,    66,    73,    -1,    66,     1,    -1,
      66,   111,    73,    -1,    66,   111,     1,    -1,   169,    -1,
     168,   169,    -1,    32,   168,    -1,    33,    73,    -1,   170,
      -1,   113,    -1,    -1,   115,   135,   156,   152,    -1,   115,
     135,   152,    -1,   135,   156,   152,    -1,   135,   152,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    31,    31,    32,    33,    34,    35,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    55,
      56,    57,    57,    61,    62,    63,    64,    65,    66,    67,
      71,    72,    73,    74,    75,    76,    77,    81,    82,    83,
      83,    87,    88,    89,    90,    94,    95,    96,   100,   101,
     102,   106,   107,   108,   112,   113,   114,   118,   119,   123,
     124,   128,   129,   133,   134,   138,   139,   143,   144,   148,
     149,   150,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   168,   169,   170,   175,   180,   181,   182,
     183,   184,   185,   186,   186,   190,   191,   192,   193,   194,
     195,   199,   200,   201,   206,   207,   211,   212,   213,   214,
     215,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,   230,   234,   235,   235,   236,   237,   238,   239,
     239,   240,   244,   245,   249,   250,   254,   255,   259,   260,
     261,   262,   266,   267,   268,   273,   274,   275,   279,   280,
     281,   281,   282,   283,   284,   284,   285,   289,   290,   291,
     295,   296,   300,   301,   305,   306,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   325,   326,
     327,   328,   332,   333,   338,   339,   340,   344,   345,   346,
     350,   351,   352,   356,   357,   358,   358,   362,   363,   367,
     368,   369,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   393,
     394,   395,   396,   396,   397,   398,   399,   403,   404,   405,
     409,   410,   411,   412,   413,   414,   415,   419,   420,   421,
     425,   426,   427,   427,   428,   429,   430,   430,   431,   432,
     433,   433,   435,   436,   440,   441,   445,   446,   450,   451,
     452,   453,   457,   458,   458,   459,   459,   460,   461,   462,
     463,   463,   464,   464,   465,   465,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   478,   482,   483,   484,
     485,   486,   487,   488,   489,   493,   494,   495,   496,   500,
     501,   502,   506,   507,   508,   509
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "STRINGFOR", "PTR_OP", "INC_OP", "DEC_OP",
  "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "L_OP",
  "G_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "DEFINE", "SCANF", "INT_SPEC",
  "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT",
  "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST",
  "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "'*'",
  "';'", "','", "'&'", "'+'", "'-'", "'~'", "'!'", "'%'", "'/'", "'^'",
  "'|'", "'?'", "':'", "'='", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "$@1", "unary_expression", "unary_operator", "cast_expression", "$@2",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration", "$@3",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "$@4", "$@5", "struct_or_union", "struct_declaration_list",
  "struct_declaration", "specifier_qualifier_list",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "$@6",
  "$@7", "enumerator_list", "enumerator", "type_qualifier", "declarator",
  "direct_declarator", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "$@8", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "$@9", "initializer_list",
  "statement", "labeled_statement", "compound_statement", "$@10", "$@11",
  "$@12", "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "$@13", "$@14", "$@15", "$@16", "$@17",
  "iteration_statement", "$@18", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", 0
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
     315,   316,   317,   318,   319,   320,   321,    40,    41,    91,
      93,    46,    42,    59,    44,    38,    43,    45,   126,    33,
      37,    47,    94,   124,    63,    58,    61,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    90,    91,    91,    91,
      91,    91,    91,    91,    91,    91,    91,    91,    91,    92,
      92,    93,    92,    94,    94,    94,    94,    94,    94,    94,
      95,    95,    95,    95,    95,    95,    95,    96,    96,    97,
      96,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   102,   102,   102,   103,   103,   104,
     104,   105,   105,   106,   106,   107,   107,   108,   108,   109,
     109,   109,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   111,   111,   111,   112,   113,   113,   113,
     113,   113,   113,   114,   113,   115,   115,   115,   115,   115,
     115,   116,   116,   116,   117,   117,   118,   118,   118,   118,
     118,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   120,   121,   120,   120,   120,   120,   122,
     120,   120,   123,   123,   124,   124,   125,   125,   126,   126,
     126,   126,   127,   127,   127,   128,   128,   128,   129,   129,
     130,   129,   129,   129,   131,   129,   129,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   137,   137,
     137,   137,   138,   138,   139,   139,   139,   140,   140,   140,
     141,   141,   141,   142,   142,   143,   142,   144,   144,   145,
     145,   145,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   147,
     147,   147,   148,   147,   147,   147,   147,   149,   149,   149,
     150,   150,   150,   150,   150,   150,   150,   151,   151,   151,
     152,   152,   153,   152,   152,   152,   154,   152,   152,   152,
     155,   152,   152,   152,   156,   156,   157,   157,   158,   158,
     158,   158,   159,   160,   159,   161,   159,   159,   159,   159,
     162,   159,   163,   159,   164,   159,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   165,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   169,
     169,   169,   170,   170,   170,   170
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     3,     1,     4,     4,
       3,     3,     4,     4,     3,     3,     2,     2,     4,     1,
       3,     0,     4,     1,     2,     2,     2,     2,     4,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     0,
       5,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     2,     1,     2,     2,     3,
       3,     8,     8,     0,     9,     1,     2,     1,     2,     1,
       2,     1,     3,     2,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     6,     0,     6,     5,     5,     4,     0,
       5,     2,     1,     1,     1,     2,     3,     3,     2,     1,
       2,     1,     1,     3,     2,     1,     2,     3,     4,     4,
       0,     5,     5,     5,     0,     6,     2,     1,     3,     2,
       1,     3,     1,     1,     2,     1,     1,     3,     3,     4,
       4,     3,     3,     4,     4,     4,     3,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     2,     1,     3,     3,
       2,     2,     1,     1,     3,     0,     4,     1,     2,     1,
       1,     2,     3,     3,     2,     2,     3,     3,     3,     3,
       4,     4,     2,     3,     3,     3,     3,     4,     4,     1,
       3,     3,     0,     4,     4,     4,     4,     1,     3,     2,
       1,     1,     1,     1,     1,     1,     1,     3,     4,     3,
       2,     1,     0,     3,     3,     3,     0,     4,     3,     3,
       0,     4,     4,     4,     1,     2,     1,     2,     1,     2,
       2,     1,     5,     0,     6,     0,     6,     7,     4,     5,
       0,     6,     0,     6,     0,     5,     5,     2,     4,     7,
       6,     6,     7,     9,     6,     0,     8,     3,     2,     2,
       2,     2,     2,     3,     3,     1,     2,     2,     2,     1,
       1,     0,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
     301,   166,   122,   301,     0,   106,   107,   108,   109,   110,
     112,   113,   114,   115,   118,   119,   116,   117,   162,   163,
     111,   132,   133,     0,     0,   178,   300,     0,    95,    97,
     120,     0,   121,    99,     0,   165,     0,     0,   295,   299,
     297,     0,   298,   150,     0,     0,     0,   182,   180,   179,
      88,    87,     0,   101,     0,    96,    98,   129,     0,     0,
     100,   246,     0,     0,   254,     0,   305,     0,     0,     0,
     164,     1,   296,     0,     0,   154,     0,   160,     0,   157,
     168,   167,   183,   181,    90,    89,     0,     0,   303,     0,
       0,   124,     0,   139,     0,   134,     0,   141,     0,     0,
       0,   246,     2,     3,     4,     0,     0,     0,   230,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    31,   258,    30,    32,    33,    34,    35,    36,   240,
       7,    23,    37,     0,    41,    45,    48,    51,    54,    57,
      59,    61,    63,    65,    67,    69,    83,     0,   256,   231,
     232,     0,     0,   233,   234,   235,   236,   104,   255,   304,
     177,   193,   176,   192,     0,     0,   187,     0,   172,     2,
     171,    37,    86,     0,     0,     0,     0,     0,     0,   149,
       0,   148,   102,   222,     0,   219,   105,     0,   302,     0,
       0,     0,   138,   128,     0,   135,     0,     0,   142,   145,
     140,   243,   230,     0,     0,     0,     0,    27,     0,    24,
      25,     0,     0,   263,     0,   272,     0,   277,     0,     0,
     285,     0,     0,   288,   290,   289,   292,   291,     0,     0,
     197,     0,     0,    16,    17,     0,     0,     0,     0,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    72,
       0,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   260,
     259,     0,     0,   246,   248,     0,   245,   244,   257,     0,
       0,   190,   199,   191,   200,   173,   186,     0,     0,   175,
     174,     0,   170,   169,    93,     0,   159,   151,     0,   153,
     152,   161,   158,     0,   227,     0,   229,     0,   130,     0,
     126,     0,   127,   146,   137,   136,     0,     0,   247,   251,
     237,     0,     0,   239,     0,     0,     0,     0,     0,     0,
       0,   261,     0,     0,   287,   294,   293,     6,     5,     0,
     199,   198,    39,     0,    15,    11,    10,     0,    19,     0,
      14,     0,    71,    70,    42,    44,    43,    46,    47,    49,
      50,    52,    53,    55,    56,    58,    60,    62,    64,    66,
       0,    84,   274,   246,   252,   212,     0,     0,   205,   204,
       0,   201,     0,     0,   185,   188,   189,     0,   194,     0,
       0,   155,     0,   221,     0,   220,     0,   227,   125,   123,
     143,   147,    29,    28,   238,     0,   265,     0,     0,   270,
       0,   278,     0,     0,     0,     0,     0,     0,    38,    13,
      12,     0,     9,     8,    18,    85,     0,     0,   214,   213,
     203,   202,   207,   206,   216,   215,     0,   209,   208,     0,
     196,     0,     0,   223,   222,     0,   226,     0,     0,   262,
       0,     0,   269,   276,     0,     0,     0,     0,     0,    40,
       0,    20,    68,   275,   218,   217,   211,   210,     0,    92,
      91,   264,   266,     0,   273,   271,   280,     0,     0,     0,
     281,   284,     0,    22,    94,   246,   267,   279,     0,     0,
     282,   286,     0,   283
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   130,   131,   347,   460,   132,   133,   134,   417,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   250,   147,   173,    26,   389,    65,    52,    53,    28,
      29,    30,   190,    90,    31,    94,    95,    96,   197,   198,
      32,    74,   176,    78,    79,    33,    34,    35,    36,    49,
     376,   165,   166,   167,   387,   231,   377,   284,   304,   303,
     187,   148,   149,   150,    98,    99,   100,    67,   152,   153,
     154,   324,   448,   451,   326,   427,   155,   330,   156,    37,
      38,    39
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -219
static const yytype_int16 yypact[] =
{
    1700,  -219,  -219,  1700,    -4,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,  -219,  -219,    23,   205,   322,  -219,   544,  2078,  2078,
    -219,    29,  -219,  2078,  1145,    19,   265,  1649,  -219,  -219,
    1802,    20,  -219,  -219,   894,    64,    21,  -219,  -219,   322,
    -219,  -219,    82,  -219,  1088,  -219,  -219,  -219,   947,  2101,
    -219,  1912,   -24,   380,  -219,   544,  -219,  1145,  1855,  1251,
      19,  -219,  -219,     1,    64,  -219,    64,   -16,    35,  -219,
    -219,  -219,  -219,  -219,     5,  -219,   205,  1144,  -219,  1145,
    2101,  -219,  2101,  2101,   716,  -219,   179,  2101,    -3,  1000,
    2055,  1387,   122,  -219,  -219,  1493,  1515,  1515,   -24,  1542,
     130,    92,   178,   222,  1000,   264,   174,   112,    55,  1278,
    1464,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    -219,   580,   598,  1542,  -219,   -15,   277,   394,   396,   435,
     195,   206,   227,   283,   266,  -219,  -219,   156,   285,  -219,
    -219,   520,   600,  -219,  -219,  -219,  -219,   242,  -219,  -219,
    -219,  -219,  -219,   546,   293,  1595,  -219,    26,  -219,  -219,
    -219,  -219,  -219,    80,    40,   100,    64,   136,  1542,   263,
      64,  -219,  -219,  -219,  1144,  -219,  -219,    75,  -219,  1938,
    2101,   782,  -219,  -219,   290,  -219,  1542,   210,  -219,   287,
    -219,  -219,  -219,   635,  1889,  1000,  1464,  -219,  1542,  -219,
    -219,   306,  1000,  -219,  1542,  -219,  1542,  -219,  1542,   123,
    -219,  1198,   305,  -219,  -219,  -219,  -219,  -219,   217,    51,
     335,    59,   390,  -219,  -219,  1292,  1542,   398,   485,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,
    1411,  -219,  1542,  1542,  1542,  1542,  1542,  1542,  1542,  1542,
    1542,  1542,  1542,  1542,  1542,  1542,  1542,  1542,  1542,   219,
    -219,  1542,   411,   434,  -219,   715,   366,  -219,   285,  1751,
    1306,  -219,   295,  -219,   211,  -219,  -219,  2031,   490,   493,
    -219,   524,  -219,  -219,  -219,   529,  -219,  -219,   143,   263,
    -219,  -219,  -219,  1144,  -219,   160,  -219,   805,  -219,  1961,
    -219,   469,  -219,  -219,   421,  -219,   179,  1542,  -219,  -219,
     285,    96,  1000,   285,  1542,   237,  1542,   241,   259,   471,
    1331,  -219,  1331,  1331,  -219,   219,  -219,  -219,  -219,  1992,
     250,  -219,  -219,  1542,  -219,  -219,  -219,   268,  -219,   188,
    -219,   470,  -219,  -219,  -219,  -219,  -219,   -15,   -15,   277,
     277,   394,   394,   396,   396,   435,   195,   206,   227,   283,
      33,  -219,  -219,   462,  -219,  -219,   185,   239,  -219,  -219,
     101,   211,   811,  1386,  -219,  -219,  -219,   541,  -219,   543,
     480,  -219,   183,  -219,   835,  -219,   553,   486,  -219,  -219,
    -219,  -219,  -219,  -219,   285,   284,   175,  1000,   299,   300,
    1000,   300,  1000,  1542,  1331,  1331,   320,  1542,  -219,   270,
    -219,  1542,  -219,  -219,  -219,  -219,  1542,  1000,  -219,  -219,
    -219,  -219,  -219,  -219,  -219,  -219,   240,  -219,  -219,   226,
    -219,   510,    61,  -219,   375,    79,  -219,  1000,  1000,   533,
    1000,  1000,   285,   285,   340,  1542,  1542,  1000,   460,  -219,
    1542,  -219,  -219,   285,  -219,  -219,  -219,  -219,   521,  -219,
    -219,   285,   285,  1035,   285,   285,   300,   539,   463,   465,
     285,   300,  1000,  -219,  -219,  1387,   285,  -219,  1000,  1000,
     285,   285,   319,  -219
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -219,   364,  -219,  -219,  -219,   -61,  -219,  -122,  -219,   261,
     278,   281,   257,   351,   365,   367,   368,   363,  -219,   -67,
     -81,  -219,  -110,   -36,    24,  -219,     0,  -219,   545,  -219,
     -43,  -219,  -219,  -219,  -219,   -69,   -77,   -38,  -219,   321,
    -219,  -219,  -219,   -56,   455,    46,   -12,   -23,   -18,  -219,
     -64,  -219,  -146,  -219,  -219,   436,    17,  -218,   -82,  -219,
    -170,  -113,  -219,   616,  -219,  -219,  -219,   303,    88,  -160,
    -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,  -219,   640,
      -2,  -219
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -269
static const yytype_int16 yytable[] =
{
      27,   219,   172,    27,   164,   186,   185,    48,   171,   228,
     229,   251,    46,    70,   305,    54,    93,   195,   175,   288,
     177,   189,    80,   191,    43,    73,    44,   289,    55,    56,
      57,    83,    58,    60,   425,    72,   179,    27,    72,   278,
      27,   294,   172,    41,   207,   209,   210,    93,   171,    93,
      93,    93,   337,   157,    93,   192,   224,   252,    64,   200,
     342,   333,   469,    41,   381,   253,   254,    77,   163,    42,
     178,    47,   171,   211,   157,   174,   306,    93,    64,  -103,
     446,   292,   230,    84,   199,   201,    68,    64,    69,    81,
     278,   158,   320,   213,   290,    82,   229,   402,   229,   323,
     291,   296,   432,   185,   325,    97,   327,   271,   328,   180,
      45,   172,   195,   158,   195,   295,    59,   171,   426,   338,
     298,   309,   381,   181,    64,   271,   349,   343,   225,   172,
     354,   355,   356,   392,   470,   171,    97,   299,    97,    97,
      97,   385,   301,    97,   296,   282,    93,    93,    93,   307,
     293,   281,  -224,  -224,   348,    85,    86,   269,   370,   214,
     313,   393,   278,    93,   403,   163,    97,  -224,   230,   353,
     414,   433,   415,   416,   180,   158,   -85,   222,   332,   215,
     283,   272,     1,   329,   306,   223,   428,   203,   297,   422,
     371,   171,   171,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   171,   171,   171,   205,     1,   404,
     180,   314,   340,   172,   405,   212,   408,   180,   335,   171,
     -85,   418,   185,   217,   300,   397,   185,   466,   158,   270,
     271,   391,   195,  -268,   394,    97,    97,    97,   406,   275,
     430,   464,   409,   -85,   380,   216,    24,   341,   395,   -85,
     172,    25,    97,   429,   455,   456,   171,   307,   423,    70,
     411,   282,   271,  -268,   196,   220,    93,    46,     1,   419,
     263,   443,    24,   -21,   -21,   -21,   -21,    25,   382,   163,
     383,   401,   171,   315,   316,   425,   267,   163,   264,   218,
     336,   271,   -85,   -85,   449,   459,   467,   452,     1,   453,
     425,   -85,   266,   454,   199,   407,   458,   431,   465,   410,
     265,   271,   397,   185,   463,   271,   172,   339,   436,   280,
     493,   340,   171,   169,   103,   104,   105,   412,    87,   106,
     107,   221,    24,   271,   471,   472,   420,   474,   475,   163,
     461,   476,   421,   272,   480,   478,   479,   439,   -21,   -21,
     268,  -159,   447,   255,   256,    97,   171,    89,   271,   462,
     486,   285,   279,   312,   280,   171,   151,   450,   -85,   490,
      18,    19,   317,   271,   -85,   491,   492,   272,   334,   483,
    -241,   101,   163,   102,   103,   104,   105,   120,   457,   106,
     107,   322,   121,   344,    25,   123,   124,   125,   126,   127,
     128,   350,   339,   204,   280,   257,   258,    25,   477,   259,
     260,     2,   372,   108,   271,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,  -249,   109,   110,   111,  -241,   112,
     113,   114,   115,   116,   117,   118,   119,   120,  -225,  -225,
     261,   262,   121,   122,  -242,   123,   124,   125,   126,   127,
     128,   481,  -253,  -225,   425,  -249,   425,    63,   129,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,
    -249,  -249,  -249,  -249,  -249,  -249,  -249,  -249,   169,   103,
     104,   386,  -249,  -250,  -144,  -144,  -195,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,   357,   358,   363,   364,
    -253,   273,  -242,   102,   103,   104,   105,   388,   482,   106,
     107,   488,   390,   489,   271,   359,   360,   271,   413,   271,
     361,   362,   399,   424,   440,    50,   441,     1,   442,     1,
    -242,     2,   208,   108,   446,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,  -228,   109,   110,   111,   468,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   232,   233,
     234,   473,   121,   122,   484,   123,   124,   125,   126,   127,
     128,   276,   351,   102,   103,   104,   105,    63,   274,   106,
     107,    24,   487,   279,   365,   280,    25,    51,    25,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   366,
     369,   182,   367,   202,   368,   302,   101,   400,   102,   103,
     104,   105,   321,    40,   106,   107,     0,   235,     0,   236,
      66,   237,   238,     0,     0,   109,   110,   111,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   202,     0,
      88,     0,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,     0,   159,   249,     0,     0,    63,   277,     0,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,     0,   188,     0,   121,   122,     0,
     123,   124,   125,   126,   127,   128,   373,   193,   102,   103,
     104,   105,    63,   318,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,   202,     0,
       0,     0,     0,     0,     0,     0,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   310,     0,     0,     0,   121,   122,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,    63,   374,   194,     0,   183,     0,   169,   103,
     104,   105,   434,     2,   106,   107,     0,     0,     0,     0,
       0,     0,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   444,     0,   169,   103,
     104,   105,     2,     0,   106,   107,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
     311,     0,   120,     0,     0,     0,     0,   121,     0,   435,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,   184,   396,     0,    75,     0,  -156,  -156,  -156,
    -156,     0,   120,  -156,  -156,     0,     0,   121,     0,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     0,
       0,     0,   184,   445,     0,  -156,     0,     0,     0,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,  -156,  -156,  -156,    91,     0,
    -131,  -131,  -131,  -131,     0,     0,  -131,  -131,     0,     0,
       0,  -156,  -156,  -156,     0,     0,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,     0,     0,     0,  -131,  -156,
       0,    76,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,
    -131,   101,     0,   102,   103,   104,   105,     0,     0,   106,
     107,     0,     0,     0,  -131,  -131,  -131,     0,     0,  -131,
    -131,  -131,  -131,  -131,  -131,  -131,  -131,  -131,     0,     0,
       0,     0,  -131,   202,    92,     0,   485,     0,   102,   103,
     104,   105,     0,     0,   106,   107,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   109,   110,   111,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   202,     0,
       0,     0,   121,   122,     0,   123,   124,   125,   126,   127,
     128,     0,     0,     0,     0,     0,     0,    63,     0,    61,
     109,   110,   111,     0,   112,   113,   114,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,   121,   122,     0,
     123,   124,   125,   126,   127,   128,     0,     0,     0,     2,
       0,    62,    63,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,     0,     0,   183,    61,   169,   103,   104,
     105,     0,     0,   106,   107,     0,     0,     0,     0,     0,
       0,  -104,  -104,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    63,     2,     0,    62,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,   331,
       0,   169,   103,   104,   105,     0,     0,   106,   107,     0,
       0,   120,     0,     0,     0,     0,   121,     0,     0,   123,
     124,   125,   126,   127,   128,     0,     0,     0,     0,     2,
       0,   184,    63,     0,     0,     0,     0,     0,    10,    11,
      12,    13,    14,    15,    16,    17,     0,     0,    20,    21,
      22,    23,   168,     0,   169,   103,   104,   105,     0,     0,
     106,   107,     0,     0,     0,   120,     0,     0,     0,     0,
     121,   122,     0,   123,   124,   125,   126,   127,   128,   226,
       0,   169,   103,   104,   105,     0,     0,   106,   107,     0,
       0,     0,     0,   345,     0,   169,   103,   104,   105,     0,
       0,   106,   107,     0,     0,     0,     0,   378,     0,   169,
     103,   104,   105,     0,     0,   106,   107,     0,   120,     0,
       0,   170,     0,   121,     0,     0,   123,   124,   125,   126,
     127,   128,   331,     0,   169,   103,   104,   105,     0,     0,
     106,   107,     0,     0,     0,   120,     0,     0,     0,     0,
     121,   227,     0,   123,   124,   125,   126,   127,   128,   120,
     346,     0,     0,     0,   121,     0,     0,   123,   124,   125,
     126,   127,   128,   120,     0,     0,   379,     0,   121,     0,
       0,   123,   124,   125,   126,   127,   128,   437,     0,   169,
     103,   104,   105,     0,     0,   106,   107,     0,   120,     0,
       0,     0,     0,   121,   122,     0,   123,   124,   125,   126,
     127,   128,   352,     0,   169,   103,   104,   105,  -250,     0,
     106,   107,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,     0,     0,     0,     0,  -261,     0,     0,     0,     0,
       0,     0,     0,   120,     0,     0,   438,     0,   121,     0,
       0,   123,   124,   125,   126,   127,   128,   169,   103,   104,
     105,     0,     0,   106,   107,  -242,     0,     0,   120,     0,
       0,     0,     0,   121,     0,     0,   123,   124,   125,   126,
     127,   128,     0,     0,     0,     2,   169,   103,   104,   105,
       0,     0,   106,   107,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,   169,   103,
     104,   105,     0,     0,   106,   107,     0,     0,     0,     0,
       0,   120,     0,     0,     0,     0,   121,     0,     0,   123,
     124,   125,   126,   127,   128,   169,   103,   104,   105,     0,
       0,   106,   107,     0,     0,     0,     0,     0,     0,     0,
     206,     0,     0,     0,     0,   121,     0,     0,   123,   124,
     125,   126,   127,   128,     0,     0,     0,     0,     0,     0,
       0,     0,   208,     0,     0,     0,     0,   121,     0,     0,
     123,   124,   125,   126,   127,   128,   286,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   120,
       0,     0,     0,     0,   121,     0,     0,   123,   124,   125,
     126,   127,   128,     0,     0,     0,     2,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    71,
       0,     0,     1,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -184,     0,     0,     0,     0,     0,   287,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,    62,     0,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     0,     0,     0,
       0,    25,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     2,     3,     4,     0,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     1,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    24,     0,     0,
       0,     0,    25,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     0,     0,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     1,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   279,   375,
     280,     0,     0,    25,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,    62,     0,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,   160,     0,   161,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    24,
       0,     0,     0,     0,    25,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       2,     0,    62,   162,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,  -250,     0,     0,     0,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,  -250,
    -250,  -250,  -250,  -250,  -250,  -250,     0,     0,     0,     2,
       0,     0,     0,     0,     0,     0,     0,   319,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     2,     0,     0,     0,     0,     0,     0,     0,
    -242,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,     0,     0,     0,     0,     0,
       0,     0,     0,     2,     0,     0,   308,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,     0,     0,     0,   398,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   339,
     375,   280,     2,     0,    25,     0,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,   384,     2,     0,    62,     0,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,     2,
       0,     0,     0,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     2,     0,     0,     0,     0,     0,     0,     0,
       0,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23
};

static const yytype_int16 yycheck[] =
{
       0,   114,    69,     3,    68,    87,    87,    25,    69,   119,
     120,   133,    24,    36,   184,    27,    59,    94,    74,   165,
      76,    90,     1,    92,     1,     5,     3,     1,    28,    29,
       1,    49,     3,    33,     1,    37,     1,    37,    40,   152,
      40,     1,   109,    67,   105,   106,   107,    90,   109,    92,
      93,    94,     1,    65,    97,    93,     1,    72,    34,    97,
       1,   221,     1,    67,   282,    80,    81,     3,    68,    73,
      86,    25,   133,   109,    86,    74,     1,   120,    54,    74,
       1,     1,   120,     1,    96,    88,    67,    63,    69,    68,
     203,    67,   205,     1,    68,    49,   206,     1,   208,   212,
      74,     1,     1,   184,   214,    59,   216,    74,   218,    74,
      87,   178,   189,    89,   191,    75,    87,   178,    85,    68,
     176,   190,   340,    88,   100,    74,   236,    68,    73,   196,
     252,   253,   254,   303,    73,   196,    90,     1,    92,    93,
      94,   287,   178,    97,     1,   163,   189,   190,   191,    74,
      70,   163,    73,    74,   235,    73,    74,     1,   268,    67,
     196,     1,   275,   206,    68,   165,   120,    88,   206,   250,
     330,    70,   332,   333,    74,   151,     1,     3,   221,     1,
     163,    58,     3,    60,     1,    73,     1,    99,    88,     1,
     271,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   267,    85,     3,   322,
      74,     1,   230,   280,   324,    85,   326,    74,     1,   280,
       1,   343,   303,     1,    88,   307,   307,     1,   204,    73,
      74,    88,   309,    58,    74,   189,   190,   191,     1,   151,
       1,     1,     1,    68,   280,    67,    67,   230,    88,    74,
     317,    72,   206,    68,   414,   415,   317,    74,    70,   282,
       1,   279,    74,    88,    85,     1,   309,   279,     3,     1,
      75,    88,    67,     3,     4,     5,     6,    72,    67,   279,
      69,   317,   343,    73,    74,     1,    20,   287,    82,    67,
      73,    74,    73,    74,   407,   417,    70,   410,     3,   412,
       1,     1,    19,   413,   316,    68,   416,    68,    68,    68,
      83,    74,   394,   394,   427,    74,   383,    67,   382,    69,
       1,   339,   383,     3,     4,     5,     6,    68,    86,     9,
      10,    67,    67,    74,   447,   448,    68,   450,   451,   339,
     421,     1,    74,    58,   457,   455,   456,   383,    78,    79,
      84,    88,    68,    76,    77,   309,   417,    54,    74,   426,
     473,    68,    67,    73,    69,   426,    63,    68,    68,   482,
      48,    49,    85,    74,    74,   488,   489,    58,    73,   460,
       0,     1,   382,     3,     4,     5,     6,    67,    68,     9,
      10,    85,    72,     3,    72,    75,    76,    77,    78,    79,
      80,     3,    67,   100,    69,    11,    12,    72,    68,    13,
      14,    31,     1,    33,    74,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    73,    74,
      15,    16,    72,    73,    88,    75,    76,    77,    78,    79,
      80,     1,     0,    88,     1,    31,     1,    87,    88,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     1,    58,    31,    73,    74,     3,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   255,   256,   261,   262,
      58,     1,    88,     3,     4,     5,     6,     3,    68,     9,
      10,    68,     3,    68,    74,   257,   258,    74,    67,    74,
     259,   260,    73,    73,     3,     1,     3,     3,    68,     3,
      88,    31,    67,    33,     1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    88,    55,    56,    57,    68,    59,
      60,    61,    62,    63,    64,    65,    66,    67,     8,     9,
      10,    58,    72,    73,    73,    75,    76,    77,    78,    79,
      80,     1,   238,     3,     4,     5,     6,    87,    88,     9,
      10,    67,    73,    67,   263,    69,    72,    73,    72,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,   264,
     267,    86,   265,    33,   266,   180,     1,   316,     3,     4,
       5,     6,   206,     3,     9,    10,    -1,    67,    -1,    69,
      34,    71,    72,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    33,    -1,
      54,    -1,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    67,    86,    -1,    -1,    87,    88,    -1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    89,    -1,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,     1,     1,     3,     4,
       5,     6,    87,    88,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    33,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,     1,    -1,    -1,    -1,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    88,    -1,     1,    -1,     3,     4,
       5,     6,     1,    31,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,     3,     4,
       5,     6,    31,    -1,     9,    10,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      88,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    68,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,     1,    -1,     3,     4,     5,
       6,    -1,    67,     9,    10,    -1,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,
      -1,    -1,    87,    88,    -1,    31,    -1,    -1,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     1,    -1,
       3,     4,     5,     6,    -1,    -1,     9,    10,    -1,    -1,
      -1,    67,    68,    69,    -1,    -1,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    31,    85,
      -1,    87,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     1,    -1,     3,     4,     5,     6,    -1,    -1,     9,
      10,    -1,    -1,    -1,    67,    68,    69,    -1,    -1,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    -1,    -1,
      -1,    -1,    85,    33,    87,    -1,     1,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    56,    57,    -1,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    33,    -1,
      -1,    -1,    72,    73,    -1,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    87,    -1,     1,
      55,    56,    57,    -1,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    -1,    -1,    -1,    -1,    72,    73,    -1,
      75,    76,    77,    78,    79,    80,    -1,    -1,    -1,    31,
      -1,    33,    87,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    -1,    -1,     1,     1,     3,     4,     5,
       6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    31,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,    -1,    -1,    -1,    -1,    31,
      -1,    87,    87,    -1,    -1,    -1,    -1,    -1,    40,    41,
      42,    43,    44,    45,    46,    47,    -1,    -1,    50,    51,
      52,    53,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,     1,
      -1,     3,     4,     5,     6,    -1,    -1,     9,    10,    -1,
      -1,    -1,    -1,     1,    -1,     3,     4,     5,     6,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    67,    -1,
      -1,    70,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,     1,    -1,     3,     4,     5,     6,    -1,    -1,
       9,    10,    -1,    -1,    -1,    67,    -1,    -1,    -1,    -1,
      72,    73,    -1,    75,    76,    77,    78,    79,    80,    67,
      68,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,     1,    -1,     3,
       4,     5,     6,    -1,    -1,     9,    10,    -1,    67,    -1,
      -1,    -1,    -1,    72,    73,    -1,    75,    76,    77,    78,
      79,    80,     1,    -1,     3,     4,     5,     6,    31,    -1,
       9,    10,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    -1,    -1,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    67,    -1,    -1,    70,    -1,    72,    -1,
      -1,    75,    76,    77,    78,    79,    80,     3,     4,     5,
       6,    -1,    -1,     9,    10,    88,    -1,    -1,    67,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,    78,
      79,    80,    -1,    -1,    -1,    31,     3,     4,     5,     6,
      -1,    -1,     9,    10,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     3,     4,
       5,     6,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,
      76,    77,    78,    79,    80,     3,     4,     5,     6,    -1,
      -1,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      67,    -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,
      77,    78,    79,    80,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    67,    -1,    -1,    -1,    -1,    72,    -1,    -1,
      75,    76,    77,    78,    79,    80,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    75,    76,    77,
      78,    79,    80,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
      -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    68,    -1,    -1,    -1,    -1,    -1,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     3,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,    -1,
      -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    31,    32,    33,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     3,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    -1,    -1,
      -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,    68,
      69,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     1,    -1,     3,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    33,    68,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    31,    -1,    -1,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    88,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      88,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    88,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    -1,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    67,
      68,    69,    31,    -1,    72,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    31,    -1,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    31,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    31,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    31,    32,    33,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    67,    72,   113,   115,   118,   119,
     120,   123,   129,   134,   135,   136,   137,   168,   169,   170,
     168,    67,    73,     1,     3,    87,   135,   134,   137,   138,
       1,    73,   116,   117,   135,   115,   115,     1,     3,    87,
     115,     1,    33,    87,   113,   115,   152,   156,    67,    69,
     136,     0,   169,     5,   130,     1,    87,     3,   132,   133,
       1,    68,   134,   137,     1,    73,    74,    86,   152,   156,
     122,     1,    87,   119,   124,   125,   126,   134,   153,   154,
     155,     1,     3,     4,     5,     6,     9,    10,    33,    55,
      56,    57,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    72,    73,    75,    76,    77,    78,    79,    80,    88,
      90,    91,    94,    95,    96,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   111,   150,   151,
     152,   156,   157,   158,   159,   165,   167,   135,   113,   152,
       1,     3,    68,   115,   139,   140,   141,   142,     1,     3,
      70,    94,   108,   112,    74,   132,   131,   132,    86,     1,
      74,    88,   117,     1,    87,   109,   147,   149,   152,   124,
     121,   124,   126,     1,    88,   125,    85,   127,   128,   135,
     126,    88,    33,   157,   156,    85,    67,    94,    67,    94,
      94,   112,    85,     1,    67,     1,    67,     1,    67,   150,
       1,    67,     3,    73,     1,    73,     1,    73,   111,   111,
     126,   144,     8,     9,    10,    67,    69,    71,    72,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    86,
     110,    96,    72,    80,    81,    76,    77,    11,    12,    13,
      14,    15,    16,    75,    82,    83,    19,    20,    84,     1,
      73,    74,    58,     1,    88,   157,     1,    88,   150,    67,
      69,   135,   137,   145,   146,    68,     1,    74,   141,     1,
      68,    74,     1,    70,     1,    75,     1,    88,   132,     1,
      88,   112,   133,   148,   147,   149,     1,    74,    88,   124,
       1,    88,    73,   112,     1,    73,    74,    85,    88,    88,
     150,   144,    85,   150,   160,   111,   163,   111,   111,    60,
     166,     1,   119,   158,    73,     1,    73,     1,    68,    67,
     137,   145,     1,    68,     3,     1,    68,    92,   109,   111,
       3,    90,     1,   109,    96,    96,    96,    98,    98,    99,
      99,   100,   100,   101,   101,   102,   103,   104,   105,   106,
     111,   109,     1,     1,    88,    68,   139,   145,     1,    70,
     112,   146,    67,    69,    54,   141,     1,   143,     3,   114,
       3,    88,   149,     1,    74,    88,    88,   147,    88,    73,
     128,   112,     1,    68,   150,   111,     1,    68,   111,     1,
      68,     1,    68,    67,   158,   158,   158,    97,    96,     1,
      68,    74,     1,    70,    73,     1,    85,   164,     1,    68,
       1,    68,     1,    70,     1,    68,   139,     1,    70,   112,
       3,     3,    68,    88,     1,    88,     1,    68,   161,   150,
      68,   162,   150,   150,   111,   158,   158,    68,   111,    96,
      93,   109,   108,   150,     1,    68,     1,    70,    68,     1,
      73,   150,   150,    58,   150,   150,     1,    68,   111,   111,
     150,     1,    68,   109,    73,     1,   150,    73,    68,    68,
     150,   150,   150,     1
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
        case 6:

/* Line 1455 of yacc.c  */
#line 35 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 41 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 43 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 45 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 57 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 67 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 83 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 150 "yacc.y"
    {printf("line no %d column no %d expected Identifier or value \n",lineno ,column);yyerrok;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 170 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 181 "yacc.y"
    { printf("line no %d column no %d expected ';' or ',' \n",lineno,column);yyerrok;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 183 "yacc.y"
    { printf("line no %d cloumn no %d expected ';'  \n",lineno-1,column);yyerrok; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 185 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno-1,column);yyerrok;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 186 "yacc.y"
    {printf("line number %d column number %d\n",lineno,column);yyerrok;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 201 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 235 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 236 "yacc.y"
    {printf("line no %d column no %d expected '}' or ';'\n" , lineno,column); yyerrok;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 238 "yacc.y"
    {printf("line no %d column no %d expected '}' or ';' \n" , lineno,column); yyerrok;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 239 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 255 "yacc.y"
    { printf("line no %d column no %d expected ';' \n",lineno,column);yyerrok;}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 268 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 280 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 281 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 283 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 284 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 291 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 312 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok;}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 314 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 316 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 319 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 321 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 340 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 346 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 358 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 374 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 376 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 378 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 380 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 382 "yacc.y"
    {printf("line no %d column no %d expected ']' \n",lineno,column);yyerrok; }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 385 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 387 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 389 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno,column);yyerrok; }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 395 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 396 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 398 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed\n" , lineno,column); yyerrok;}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 399 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 405 "yacc.y"
    {printf("line no %d column no %d expected ',' or ';' \n" , lineno,column);yyerrok;}
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 426 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 427 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed\n" , lineno,column); yyerrok;}
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 429 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed  \n" , lineno,column); yyerrok;}
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 430 "yacc.y"
    {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 432 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 433 "yacc.y"
    {printf("line no %d column no %d expected '{' hehehe not closed \n" , lineno,column); yyerrok;}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 436 "yacc.y"
    {printf("line no %d column no %d expected '}' not closed \n" , lineno,column); yyerrok;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 452 "yacc.y"
    { printf("line no %d column no %d expected ';' \n" , lineno-1,column);	yyerrok;}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 453 "yacc.y"
    { printf("line no %d column no %d operator not understood or not correct \n" , lineno,column); yyerrok;}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 458 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 459 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 461 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 463 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 464 "yacc.y"
    {printf("line no %d column no %d expected ')' \n",lineno , column);yyerrok;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 465 "yacc.y"
    {printf("line no %d column no %d else without if statement \n",lineno-1 , column);yyerrok;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 470 "yacc.y"
    { printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 471 "yacc.y"
    { printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 473 "yacc.y"
    { printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 476 "yacc.y"
    {printf("line no %d column no %d not supported  \n" , lineno,column); yyerrok;}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 477 "yacc.y"
    { printf("line no %d column no %d expected ')' \n" , lineno,column); yyerrok;}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 478 "yacc.y"
    { printf("line no %d column no %d expected '(' \n" , lineno,column); yyerrok;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 485 "yacc.y"
    {printf("line no %d column no %d expected ';' after break statement\n",lineno-1,column); yyerrok;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 487 "yacc.y"
    {printf("line no %d column no %d expected ';' \n",lineno-1 ,column);yyerrok;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 489 "yacc.y"
    {printf("line no %d column no %d expected ';' \n",lineno-1 ,column);yyerrok;}
    break;



/* Line 1455 of yacc.c  */
#line 2793 "y.tab.c"
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
#line 513 "yacc.y"

/*
#if YYDEBUG
extern int yydebug;
#endif
*/
int main(int argc ,char* argv[]){
/*#if YYDEBUG
  if (argc > 1) yydebug = 1;
  else yydebug = 0;
#endif*/
if(argc< 2){
	printf("please give file name to check the error \n");
	printf("Usage is ./a.out temp.c \n");
	return 0;
	}
FILE *myfile = fopen(argv[1], "r");
        // make sure it's valid:
      if (!myfile) {
                printf( "I can't open file!\n"); //<< endl;
                return -1;
        }
        // set lex to read from it instead of defaulting to STDIN:
        yyin = myfile;

        // parse through the input until there is no more:
        
        do {
                yyparse();
        } while (!feof(yyin));


//	yyparse();
printf("\nTotal no of errors identified : %d \n" , total);
}
void yyerror(char *s){
	printf("Error ! ");
	total++;
	
}
//  |error                                                          {printf("line no %d column no %d expected '{' not closed \n" , lineno,column); yyerrok;}declaration_list '}'


