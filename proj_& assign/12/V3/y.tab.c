
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
#line 73 "y.tab.c"

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
     REPEAT = 273,
     UNTIL = 274,
     TO = 275,
     ASSIGN_OP = 276,
     END = 277,
     START = 278,
     TYPE_NAME = 279,
     CONST = 280,
     STATIC = 281,
     STRUCT = 282,
     UNION = 283,
     ELLIPSIS = 284,
     CASE = 285,
     DEFAULT = 286,
     IF = 287,
     ELSE = 288,
     SWITCH = 289,
     WHILE = 290,
     FOR = 291,
     GOTO = 292,
     CONTINUE = 293,
     BREAK = 294,
     RETURN = 295
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
#define REPEAT 273
#define UNTIL 274
#define TO 275
#define ASSIGN_OP 276
#define END 277
#define START 278
#define TYPE_NAME 279
#define CONST 280
#define STATIC 281
#define STRUCT 282
#define UNION 283
#define ELLIPSIS 284
#define CASE 285
#define DEFAULT 286
#define IF 287
#define ELSE 288
#define SWITCH 289
#define WHILE 290
#define FOR 291
#define GOTO 292
#define CONTINUE 293
#define BREAK 294
#define RETURN 295




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 195 "y.tab.c"

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
#define YYFINAL  88
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1055

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  63
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  58
/* YYNRULES -- Number of rules.  */
#define YYNRULES  173
/* YYNRULES -- Number of states.  */
#define YYNSTATES  314

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   295

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,     2,     2,    51,    47,     2,
      41,    42,    49,    52,    46,    53,    45,    50,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    59,    60,
      54,     2,    55,    58,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    43,     2,    44,    56,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    61,    57,    62,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    79,    81,    85,    89,
      93,    95,    99,   103,   105,   109,   113,   115,   119,   123,
     127,   131,   133,   137,   141,   143,   147,   149,   153,   155,
     159,   161,   165,   167,   171,   173,   179,   181,   185,   187,
     189,   193,   195,   198,   202,   204,   207,   209,   213,   215,
     219,   221,   227,   232,   235,   237,   239,   241,   244,   248,
     251,   253,   255,   259,   261,   264,   268,   271,   273,   275,
     279,   284,   288,   293,   298,   302,   304,   307,   309,   313,
     315,   319,   322,   325,   327,   329,   333,   335,   338,   340,
     342,   345,   349,   352,   356,   360,   365,   368,   372,   376,
     381,   383,   387,   392,   394,   398,   400,   402,   404,   406,
     408,   410,   414,   419,   423,   426,   430,   434,   439,   442,
     446,   450,   455,   457,   460,   462,   465,   467,   470,   474,
     480,   484,   490,   498,   504,   508,   514,   520,   527,   535,
     541,   545,   548,   551,   554,   558,   560,   563,   565,   567,
     572,   576,   580,   583
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     118,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    41,
      83,    42,    -1,    64,    -1,    65,    43,    83,    44,    -1,
      65,    41,    42,    -1,    65,    41,    66,    42,    -1,    65,
      45,     3,    -1,    65,     7,     3,    -1,    65,     8,    -1,
      65,     9,    -1,    81,    -1,    66,    46,    81,    -1,    65,
      -1,     8,    67,    -1,     9,    67,    -1,    68,    67,    -1,
       6,    67,    -1,     6,    41,   104,    42,    -1,    47,    -1,
      48,    -1,    67,    -1,    41,   104,    42,    69,    -1,    69,
      -1,    70,    49,    69,    -1,    70,    50,    69,    -1,    70,
      51,    69,    -1,    70,    -1,    71,    52,    70,    -1,    71,
      53,    70,    -1,    71,    -1,    72,    10,    71,    -1,    72,
      11,    71,    -1,    72,    -1,    73,    54,    72,    -1,    73,
      55,    72,    -1,    73,    12,    72,    -1,    73,    13,    72,
      -1,    73,    -1,    74,    14,    73,    -1,    74,    15,    73,
      -1,    74,    -1,    75,    47,    74,    -1,    75,    -1,    76,
      56,    75,    -1,    76,    -1,    77,    57,    76,    -1,    77,
      -1,    78,    16,    77,    -1,    78,    -1,    79,    17,    78,
      -1,    79,    -1,    79,    58,    83,    59,    80,    -1,    80,
      -1,    67,    82,    81,    -1,    21,    -1,    81,    -1,    83,
      46,    81,    -1,    80,    -1,    86,    60,    -1,    86,    87,
      60,    -1,    89,    -1,    89,    86,    -1,    88,    -1,    87,
      46,    88,    -1,    97,    -1,    97,    21,   107,    -1,    90,
      -1,    91,     3,    61,    92,    62,    -1,    91,    61,    92,
      62,    -1,    91,     3,    -1,    27,    -1,    28,    -1,    93,
      -1,    92,    93,    -1,    94,    95,    60,    -1,    89,    94,
      -1,    89,    -1,    96,    -1,    95,    46,    96,    -1,    97,
      -1,    59,    84,    -1,    97,    59,    84,    -1,    99,    98,
      -1,    98,    -1,     3,    -1,    41,    97,    42,    -1,    98,
      43,    84,    44,    -1,    98,    43,    44,    -1,    98,    41,
     100,    42,    -1,    98,    41,   103,    42,    -1,    98,    41,
      42,    -1,    49,    -1,    49,    99,    -1,   101,    -1,   101,
      46,    29,    -1,   102,    -1,   101,    46,   102,    -1,    86,
      97,    -1,    86,   105,    -1,    86,    -1,     3,    -1,   103,
      46,     3,    -1,    94,    -1,    94,   105,    -1,    99,    -1,
     106,    -1,    99,   106,    -1,    41,   105,    42,    -1,    43,
      44,    -1,    43,    84,    44,    -1,   106,    43,    44,    -1,
     106,    43,    84,    44,    -1,    41,    42,    -1,    41,   100,
      42,    -1,   106,    41,    42,    -1,   106,    41,   100,    42,
      -1,    81,    -1,    61,   108,    62,    -1,    61,   108,    46,
      62,    -1,   107,    -1,   108,    46,   107,    -1,   110,    -1,
     111,    -1,   114,    -1,   115,    -1,   116,    -1,   117,    -1,
       3,    59,   109,    -1,    30,    84,    59,   109,    -1,    31,
      59,   109,    -1,    23,    22,    -1,    23,   113,    22,    -1,
      23,   112,    22,    -1,    23,   112,   113,    22,    -1,    61,
      62,    -1,    61,   113,    62,    -1,    61,   112,    62,    -1,
      61,   112,   113,    62,    -1,    85,    -1,   112,    85,    -1,
     109,    -1,   113,   109,    -1,    60,    -1,    83,    60,    -1,
      32,    83,   109,    -1,    32,    83,   109,    33,   109,    -1,
      34,    83,   109,    -1,    32,    41,    83,    42,   109,    -1,
      32,    41,    83,    42,   109,    33,   109,    -1,    34,    41,
      83,    42,   109,    -1,    35,    83,   109,    -1,    35,    41,
      83,    42,   109,    -1,    18,   109,    19,    83,    60,    -1,
      36,    41,   114,   114,    42,   109,    -1,    36,    41,   114,
     114,    83,    42,   109,    -1,    36,    81,    20,    64,   109,
      -1,    37,     3,    60,    -1,    38,    60,    -1,    39,    60,
      -1,    40,    60,    -1,    40,    83,    60,    -1,   119,    -1,
     118,   119,    -1,   120,    -1,    85,    -1,    86,    97,   112,
     111,    -1,    86,    97,   111,    -1,    97,   112,   111,    -1,
      97,   111,    -1,   111,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    15,    15,    16,    17,    18,    22,    23,    24,    25,
      26,    27,    28,    29,    33,    34,    38,    39,    40,    41,
      42,    43,    47,    48,    52,    53,    57,    58,    59,    60,
      64,    65,    66,    70,    71,    72,    76,    77,    78,    79,
      80,    84,    85,    86,    90,    91,    95,    96,   100,   101,
     105,   106,   110,   111,   115,   116,   120,   121,   125,   129,
     130,   134,   138,   139,   143,   144,   148,   149,   153,   154,
     158,   161,   162,   163,   167,   168,   172,   173,   177,   181,
     182,   186,   187,   191,   192,   193,   197,   198,   202,   203,
     204,   205,   206,   207,   208,   212,   213,   218,   219,   223,
     224,   228,   229,   230,   234,   235,   239,   240,   244,   245,
     246,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     262,   263,   264,   268,   269,   273,   274,   275,   276,   277,
     278,   282,   283,   284,   288,   289,   290,   291,   292,   293,
     294,   295,   299,   300,   304,   305,   309,   310,   314,   315,
     316,   317,   318,   319,   323,   324,   325,   326,   327,   328,
     332,   333,   334,   335,   336,   340,   341,   345,   346,   350,
     351,   352,   353,   354
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP",
  "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP",
  "REPEAT", "UNTIL", "TO", "ASSIGN_OP", "END", "START", "TYPE_NAME",
  "CONST", "STATIC", "STRUCT", "UNION", "ELLIPSIS", "CASE", "DEFAULT",
  "IF", "ELSE", "SWITCH", "WHILE", "FOR", "GOTO", "CONTINUE", "BREAK",
  "RETURN", "'('", "')'", "'['", "']'", "'.'", "','", "'&'", "'!'", "'*'",
  "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'",
  "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "type_specifier",
  "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "declarator", "direct_declarator", "pointer",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition", 0
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
     295,    40,    41,    91,    93,    46,    44,    38,    33,    42,
      47,    37,    43,    45,    60,    62,    94,   124,    63,    58,
      59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    63,    64,    64,    64,    64,    65,    65,    65,    65,
      65,    65,    65,    65,    66,    66,    67,    67,    67,    67,
      67,    67,    68,    68,    69,    69,    70,    70,    70,    70,
      71,    71,    71,    72,    72,    72,    73,    73,    73,    73,
      73,    74,    74,    74,    75,    75,    76,    76,    77,    77,
      78,    78,    79,    79,    80,    80,    81,    81,    82,    83,
      83,    84,    85,    85,    86,    86,    87,    87,    88,    88,
      89,    90,    90,    90,    91,    91,    92,    92,    93,    94,
      94,    95,    95,    96,    96,    96,    97,    97,    98,    98,
      98,    98,    98,    98,    98,    99,    99,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   105,   105,
     105,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   109,   109,   109,
     109,   110,   110,   110,   111,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   113,   113,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     117,   117,   117,   117,   117,   118,   118,   119,   119,   120,
     120,   120,   120,   120
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     4,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     5,     1,     3,     1,     1,
       3,     1,     2,     3,     1,     2,     1,     3,     1,     3,
       1,     5,     4,     2,     1,     1,     1,     2,     3,     2,
       1,     1,     3,     1,     2,     3,     2,     1,     1,     3,
       4,     3,     4,     4,     3,     1,     2,     1,     3,     1,
       3,     2,     2,     1,     1,     3,     1,     2,     1,     1,
       2,     3,     2,     3,     3,     4,     2,     3,     3,     4,
       1,     3,     4,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     3,     2,     3,     3,     4,     2,     3,
       3,     4,     1,     2,     1,     2,     1,     2,     3,     5,
       3,     5,     7,     5,     3,     5,     5,     6,     7,     5,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    88,     0,    74,    75,     0,    95,     0,   168,     0,
      64,    70,     0,     0,    87,     0,   173,     0,   165,   167,
       2,     3,     4,     0,     0,     0,     0,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,   146,     6,    16,    24,     0,    26,    30,    33,    36,
      41,    44,    46,    48,    50,    52,    54,    56,    59,     0,
     142,     0,   144,   125,   126,     0,     0,   127,   128,   129,
     130,     0,    96,   138,     0,     0,    62,     0,    66,    68,
      65,    73,     0,   172,     0,     0,     0,    86,     1,   166,
       0,     2,     0,    20,     0,    17,    18,     0,    24,    61,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   161,   162,   163,     0,     0,    80,   106,     0,     0,
      12,    13,     0,     0,     0,    58,     0,    19,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   147,    68,
     136,   143,     0,   135,   145,    89,   140,     0,   139,     0,
      63,     0,   170,     0,     0,     0,    76,     0,   171,   104,
      94,   103,     0,    97,    99,     0,    91,     0,   131,     0,
       0,     0,   133,     0,   148,     0,   150,     0,   154,     0,
       0,     0,   160,   164,     5,    79,     0,     0,   108,   107,
     109,     0,    11,     8,     0,    14,     0,    10,    57,    27,
      28,    29,    31,    32,    34,    35,    39,    40,    37,    38,
      42,    43,    45,    47,    49,    51,    53,     0,    60,   137,
     141,    67,     0,   120,    69,   169,     0,    72,    77,     0,
       0,    81,    83,     0,   101,   108,   102,    92,     0,    93,
       0,    90,    21,     0,   132,     5,     0,     5,     5,     0,
       0,   116,     0,     0,   112,     0,   110,     0,     0,    25,
       9,     0,     7,     0,   123,     0,    71,    84,     0,    78,
       0,    98,   100,   105,   156,   151,   149,   153,   155,     0,
       0,   159,   117,   111,   113,   118,     0,   114,     0,    15,
      55,     0,   121,    82,    85,     0,   157,     0,   119,   115,
     122,   124,   152,   158
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    42,    43,   204,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,   126,
      59,   100,    60,    61,    77,    78,    10,    11,    12,   165,
     166,   117,   240,   241,    13,    14,    15,   262,   173,   174,
     175,   118,   263,   200,   234,   275,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    17,    18,    19
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -207
static const yytype_int16 yypact[] =
{
     215,  -207,   483,  -207,  -207,    20,   -22,   283,  -207,    70,
     268,  -207,     7,   156,     4,   113,  -207,   192,  -207,  -207,
      -2,  -207,  -207,   915,   927,   927,   713,  -207,   935,    41,
     943,   961,   989,  1007,    48,    52,    62,   775,   805,  -207,
    -207,  -207,  -207,   169,   104,   927,  -207,   249,   275,   330,
      30,   335,   141,   140,   103,   210,     2,  -207,  -207,    72,
    -207,    70,  -207,  -207,  -207,   529,   575,  -207,  -207,  -207,
    -207,   194,  -207,  -207,   329,   375,  -207,   202,  -207,    25,
    -207,   188,   268,  -207,   156,    79,   835,     4,  -207,  -207,
     713,  -207,   805,  -207,   935,  -207,  -207,   246,  -207,  -207,
     196,   713,   805,   621,   805,   621,   805,   621,   759,   257,
     208,  -207,  -207,  -207,   206,   121,   268,   218,   229,   309,
    -207,  -207,   851,   935,   313,  -207,   935,  -207,   935,   935,
     935,   935,   935,   935,   935,   935,   935,   935,   935,   935,
     935,   935,   935,   935,   935,   935,   935,   935,  -207,   304,
    -207,  -207,   667,  -207,  -207,  -207,  -207,   421,  -207,    20,
    -207,   729,  -207,   156,   268,    39,  -207,    68,  -207,  -207,
    -207,    29,   287,   290,  -207,   151,  -207,   295,  -207,   300,
     935,   713,  -207,   152,   318,   163,  -207,   182,  -207,   162,
     789,   148,  -207,  -207,  -207,  -207,   422,   859,    13,  -207,
     129,   935,  -207,  -207,   248,  -207,   236,  -207,  -207,  -207,
    -207,  -207,   249,   249,   275,   275,   330,   330,   330,   330,
      30,    30,   335,   141,   140,   103,   210,   -25,  -207,  -207,
    -207,  -207,   729,  -207,  -207,  -207,    96,  -207,  -207,   935,
     212,  -207,   299,   345,  -207,    33,  -207,  -207,   280,  -207,
     343,  -207,  -207,   214,  -207,   713,   713,   713,   713,   869,
     713,  -207,   320,   340,  -207,   327,   129,   138,   881,  -207,
    -207,   935,  -207,   935,  -207,    -7,  -207,  -207,    68,  -207,
     935,  -207,  -207,  -207,  -207,   352,  -207,  -207,  -207,   713,
     251,  -207,  -207,  -207,  -207,  -207,   350,  -207,   353,  -207,
    -207,   437,  -207,  -207,  -207,   713,  -207,   713,  -207,  -207,
    -207,  -207,  -207,  -207
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -207,   209,  -207,  -207,     5,  -207,  -114,   222,   241,   167,
     256,   258,   259,   260,   264,   272,  -207,   -23,   -32,  -207,
      67,   -77,    18,     3,  -207,   243,   119,  -207,  -207,   240,
    -140,   -51,  -207,   142,    -3,    -8,    11,   -81,  -207,   170,
    -207,   336,  -109,  -186,  -206,  -207,   -26,  -207,    24,    31,
      15,   -97,  -207,  -207,  -207,  -207,   402,  -207
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      97,   109,    71,     9,   172,    99,    79,    87,   199,   177,
      81,   190,   266,    80,   209,   210,   211,    72,     8,   145,
       9,   147,    75,     1,    16,   238,   274,     6,    93,    95,
      96,   167,     1,    98,   273,     8,     1,    83,    74,   301,
     154,    16,   135,   136,    84,    85,   161,    86,     2,   154,
     127,   110,     3,     4,   196,   302,   197,    90,   149,   266,
     146,     5,   246,    99,   178,   195,     3,     4,    82,     6,
     243,     1,   197,     1,   243,   182,   197,   184,     6,   186,
     152,   188,   169,   151,   137,   138,     7,   269,   171,   157,
     205,    98,   151,   259,   208,   311,   238,   103,   105,   107,
     101,   237,   151,   162,   114,   115,     3,     4,   168,     5,
     163,     5,   111,   167,   167,   228,     1,     6,   147,     6,
     265,   170,   112,     3,     4,   125,   154,   239,   198,   233,
      76,   154,   148,    98,    98,    98,    98,    98,    98,    98,
      98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,    91,    21,    22,     5,   254,   149,   116,   276,   115,
     143,   115,   277,   194,   242,     3,     4,   147,   244,   183,
     267,   185,   268,   187,    99,   189,   119,   120,   121,     2,
     295,   151,   245,     3,     4,   167,   296,   235,   141,    94,
     206,   298,    88,   249,   255,     1,   142,   250,   147,   171,
     233,   116,    98,   304,   194,   257,    98,   198,   147,   147,
     122,   116,   123,   227,   124,     2,    99,     7,     1,     3,
       4,   116,   148,   116,   258,   116,   144,   116,   147,   285,
     286,   287,   288,     5,   291,   116,   155,    87,     2,   299,
      71,     6,     3,     4,    98,    99,   171,   253,   159,   164,
     300,   171,   147,     7,   245,   181,     5,    99,   278,   196,
     147,   197,   160,   306,     6,   180,   193,     6,   192,   233,
     171,   201,   279,    98,   284,   242,     7,   191,    98,   312,
     272,   313,   147,   116,   116,    98,    20,    21,    22,    23,
     270,    24,    25,   307,   271,     3,     4,   147,   128,   129,
     130,    26,   216,   217,   218,   219,     2,     3,     4,   281,
       3,     4,   202,    28,    29,    30,   207,    31,    32,    33,
      34,    35,    36,    37,    38,   161,   290,   131,   132,   247,
      39,    40,    20,    21,    22,    23,   248,    24,    25,   251,
     133,   134,   252,    41,     7,    73,   283,    26,     1,   139,
     140,   256,     2,   212,   213,   116,     3,     4,   280,    28,
      29,    30,   292,    31,    32,    33,    34,    35,    36,    37,
      38,   294,     3,     4,   214,   215,    39,    40,    20,    21,
      22,    23,   293,    24,    25,   305,   243,   261,   197,    41,
       7,   156,   308,    26,     6,   220,   221,   309,     2,   222,
     260,   223,   231,   224,   236,    28,    29,    30,   225,    31,
      32,    33,    34,    35,    36,    37,    38,   226,   282,    89,
     303,     0,    39,    40,    20,    21,    22,    23,   179,    24,
      25,     0,     0,     0,     0,    41,     7,   158,     0,    26,
      91,    21,    22,    23,     2,    24,    25,     0,     0,     3,
       4,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,   196,   261,   197,     0,     0,    39,    40,
       0,     6,     0,     0,     0,     0,     0,     0,    38,     0,
       0,    41,     7,   230,    39,    40,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,     0,   232,   310,
       0,    26,     0,     0,     0,    27,     2,     0,     0,     0,
       3,     4,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
      39,    40,    20,    21,    22,    23,     0,    24,    25,     0,
       0,     0,     0,    41,     7,     0,     0,    26,     0,     0,
       0,   150,     2,     0,     0,     0,     3,     4,     0,    28,
      29,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,     0,     0,     0,     0,     0,    39,    40,    20,    21,
      22,    23,     0,    24,    25,     0,     0,     0,     0,    41,
       7,     0,     0,    26,     0,     0,     0,   153,     2,     0,
       0,     0,     0,     0,     0,    28,    29,    30,     0,    31,
      32,    33,    34,    35,    36,    37,    38,     0,     0,     0,
       0,     0,    39,    40,    20,    21,    22,    23,     0,    24,
      25,     0,     0,     0,     0,    41,     7,     0,     0,    26,
       0,     0,     0,     0,     2,     0,     0,     0,     0,     0,
       0,    28,    29,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,   147,    39,    40,
      20,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,    41,     7,     0,     0,    26,     0,     0,     0,   229,
       2,     0,     0,     0,     0,     0,     0,    28,    29,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,     0,
       0,     0,     0,     0,    39,    40,    20,    21,    22,    23,
       0,    24,    25,     0,     0,     0,     0,    41,     7,     0,
       0,    26,    91,    21,    22,    23,     2,    24,    25,     0,
       0,     0,     0,    28,    29,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,     0,     0,     0,     0,     0,
      39,    40,    91,    21,    22,    23,     0,    24,    25,     0,
      38,     0,     0,    41,     7,     0,    39,    40,    91,    21,
      22,    23,     0,    24,    25,     0,     3,     4,     0,     0,
     232,     0,    91,    21,    22,    23,     0,    24,    25,     0,
      38,     0,     0,     0,     0,     0,    39,    40,    91,    21,
      22,    23,     0,    24,    25,     0,    38,     0,     0,    41,
       0,     0,    39,    40,     0,     0,     0,     0,     0,     0,
      38,     0,     3,     4,     0,   113,    39,    40,    91,    21,
      22,    23,     0,    24,    25,     0,    38,     0,     0,    41,
       0,     0,    39,    40,    91,    21,    22,    23,     0,    24,
      25,     0,    91,    21,    22,    23,     0,    24,    25,     0,
       0,     0,    91,    21,    22,    23,    38,    24,    25,   176,
       0,     0,    39,    40,    91,    21,    22,    23,     0,    24,
      25,     0,    38,   203,     0,     0,     0,     0,    39,    40,
      38,     0,     0,   264,     0,     0,    39,    40,     0,     0,
      38,   289,     0,     0,     0,     0,    39,    40,    91,    21,
      22,    23,    38,    24,    25,   297,     0,     0,    39,    40,
      91,    21,    22,    23,     0,    24,    25,     0,    91,    21,
      22,    23,     0,    24,    25,     0,    91,    21,    22,    23,
       0,    24,    25,     0,     0,     0,    92,     0,     0,     0,
       0,     0,    39,    40,    91,    21,    22,    23,    94,    24,
      25,     0,     0,     0,    39,    40,    38,     0,     0,     0,
       0,     0,    39,    40,   102,     0,     0,     0,     0,     0,
      39,    40,    91,    21,    22,    23,     0,    24,    25,     0,
       0,     0,   104,     0,     0,     0,     0,     0,    39,    40,
      91,    21,    22,    23,     0,    24,    25,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     106,     0,     0,     0,     0,     0,    39,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   108,     0,
       0,     0,     0,     0,    39,    40
};

static const yytype_int16 yycheck[] =
{
      26,    33,     5,     0,    85,    28,     9,    15,   117,    86,
       3,   108,   198,    10,   128,   129,   130,     6,     0,    17,
      17,    46,     7,     3,     0,   165,   232,    49,    23,    24,
      25,    82,     3,    28,    59,    17,     3,    13,     7,    46,
      66,    17,    12,    13,    13,    41,    21,    43,    23,    75,
      45,     3,    27,    28,    41,    62,    43,    59,    61,   245,
      58,    41,   171,    86,    90,   116,    27,    28,    61,    49,
      41,     3,    43,     3,    41,   101,    43,   103,    49,   105,
      65,   107,     3,    65,    54,    55,    61,   201,    85,    74,
     122,    86,    74,   190,   126,   301,   236,    30,    31,    32,
      59,    62,    84,    79,    37,    38,    27,    28,    84,    41,
      79,    41,    60,   164,   165,   147,     3,    49,    46,    49,
     197,    42,    60,    27,    28,    21,   152,    59,   117,   161,
      60,   157,    60,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     3,     4,     5,    41,   181,   159,    38,    62,    92,
      57,    94,   239,    42,   167,    27,    28,    46,   171,   102,
      41,   104,    43,   106,   197,   108,     7,     8,     9,    23,
      42,   163,   171,    27,    28,   236,   267,   163,    47,    41,
     123,   268,     0,    42,    42,     3,    56,    46,    46,   196,
     232,    82,   197,   280,    42,    42,   201,   196,    46,    46,
      41,    92,    43,   146,    45,    23,   239,    61,     3,    27,
      28,   102,    60,   104,    42,   106,    16,   108,    46,   255,
     256,   257,   258,    41,   260,   116,    42,   245,    23,   271,
     243,    49,    27,    28,   239,   268,   243,   180,    46,    61,
     273,   248,    46,    61,   243,    59,    41,   280,    46,    41,
      46,    43,    60,   289,    49,    19,    60,    49,    60,   301,
     267,    42,    60,   268,    60,   278,    61,    20,   273,   305,
      44,   307,    46,   164,   165,   280,     3,     4,     5,     6,
      42,     8,     9,    42,    46,    27,    28,    46,    49,    50,
      51,    18,   135,   136,   137,   138,    23,    27,    28,    29,
      27,    28,     3,    30,    31,    32,     3,    34,    35,    36,
      37,    38,    39,    40,    41,    21,   259,    52,    53,    42,
      47,    48,     3,     4,     5,     6,    46,     8,     9,    44,
      10,    11,    42,    60,    61,    62,     3,    18,     3,    14,
      15,    33,    23,   131,   132,   236,    27,    28,    59,    30,
      31,    32,    42,    34,    35,    36,    37,    38,    39,    40,
      41,    44,    27,    28,   133,   134,    47,    48,     3,     4,
       5,     6,    42,     8,     9,    33,    41,    42,    43,    60,
      61,    62,    42,    18,    49,   139,   140,    44,    23,   141,
     191,   142,   159,   143,   164,    30,    31,    32,   144,    34,
      35,    36,    37,    38,    39,    40,    41,   145,   248,    17,
     278,    -1,    47,    48,     3,     4,     5,     6,    92,     8,
       9,    -1,    -1,    -1,    -1,    60,    61,    62,    -1,    18,
       3,     4,     5,     6,    23,     8,     9,    -1,    -1,    27,
      28,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    41,    42,    43,    -1,    -1,    47,    48,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    60,    61,    62,    47,    48,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    61,    62,
      -1,    18,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      27,    28,    -1,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    60,    61,    -1,    -1,    18,    -1,    -1,
      -1,    22,    23,    -1,    -1,    -1,    27,    28,    -1,    30,
      31,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    60,
      61,    -1,    -1,    18,    -1,    -1,    -1,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    30,    31,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    47,    48,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    60,    61,    -1,    -1,    18,
      -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    30,    31,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    46,    47,    48,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    60,    61,    -1,    -1,    18,    -1,    -1,    -1,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    30,    31,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    60,    61,    -1,
      -1,    18,     3,     4,     5,     6,    23,     8,     9,    -1,
      -1,    -1,    -1,    30,    31,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,     3,     4,     5,     6,    -1,     8,     9,    -1,
      41,    -1,    -1,    60,    61,    -1,    47,    48,     3,     4,
       5,     6,    -1,     8,     9,    -1,    27,    28,    -1,    -1,
      61,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,     3,     4,
       5,     6,    -1,     8,     9,    -1,    41,    -1,    -1,    60,
      -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    27,    28,    -1,    60,    47,    48,     3,     4,
       5,     6,    -1,     8,     9,    -1,    41,    -1,    -1,    60,
      -1,    -1,    47,    48,     3,     4,     5,     6,    -1,     8,
       9,    -1,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,     3,     4,     5,     6,    41,     8,     9,    44,
      -1,    -1,    47,    48,     3,     4,     5,     6,    -1,     8,
       9,    -1,    41,    42,    -1,    -1,    -1,    -1,    47,    48,
      41,    -1,    -1,    44,    -1,    -1,    47,    48,    -1,    -1,
      41,    42,    -1,    -1,    -1,    -1,    47,    48,     3,     4,
       5,     6,    41,     8,     9,    44,    -1,    -1,    47,    48,
       3,     4,     5,     6,    -1,     8,     9,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    47,    48,     3,     4,     5,     6,    41,     8,
       9,    -1,    -1,    -1,    47,    48,    41,    -1,    -1,    -1,
      -1,    -1,    47,    48,    41,    -1,    -1,    -1,    -1,    -1,
      47,    48,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    -1,    -1,    47,    48,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    -1,    -1,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    27,    28,    41,    49,    61,    85,    86,
      89,    90,    91,    97,    98,    99,   111,   118,   119,   120,
       3,     4,     5,     6,     8,     9,    18,    22,    30,    31,
      32,    34,    35,    36,    37,    38,    39,    40,    41,    47,
      48,    60,    64,    65,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    83,
      85,    86,   109,   110,   111,   112,   113,   114,   115,   116,
     117,    97,    99,    62,   112,   113,    60,    87,    88,    97,
      86,     3,    61,   111,   112,    41,    43,    98,     0,   119,
      59,     3,    41,    67,    41,    67,    67,   109,    67,    80,
      84,    59,    41,    83,    41,    83,    41,    83,    41,    81,
       3,    60,    60,    60,    83,    83,    89,    94,   104,     7,
       8,     9,    41,    43,    45,    21,    82,    67,    49,    50,
      51,    52,    53,    10,    11,    12,    13,    54,    55,    14,
      15,    47,    56,    57,    16,    17,    58,    46,    60,    97,
      22,    85,   113,    22,   109,    42,    62,   113,    62,    46,
      60,    21,   111,   112,    61,    92,    93,    94,   111,     3,
      42,    86,   100,   101,   102,   103,    44,    84,   109,   104,
      19,    59,   109,    83,   109,    83,   109,    83,   109,    83,
     114,    20,    60,    60,    42,    94,    41,    43,    99,   105,
     106,    42,     3,    42,    66,    81,    83,     3,    81,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      73,    73,    74,    75,    76,    77,    78,    83,    81,    22,
      62,    88,    61,    81,   107,   111,    92,    62,    93,    59,
      95,    96,    97,    41,    97,    99,   105,    42,    46,    42,
      46,    44,    42,    83,   109,    42,    33,    42,    42,   114,
      64,    42,   100,   105,    44,    84,   106,    41,    43,    69,
      42,    46,    44,    59,   107,   108,    62,    84,    46,    60,
      59,    29,   102,     3,    60,   109,   109,   109,   109,    42,
      83,   109,    42,    42,    44,    42,   100,    44,    84,    81,
      80,    46,    62,    96,    84,    33,   109,    42,    42,    44,
      62,   107,   109,   109
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
      

/* Line 1455 of yacc.c  */
#line 1848 "y.tab.c"
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
#line 357 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern int column;

int main(){
	yyparse();
}
void yyerror(char *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


