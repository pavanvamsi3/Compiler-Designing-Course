
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
#line 1 "cj.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define YYERROR_VERBOSE_0

char err[100];


/* Line 189 of yacc.c  */
#line 83 "cj.tab.c"

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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 171 "cj.tab.c"

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1978

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  217
/* YYNRULES -- Number of states.  */
#define YYNSTATES  611

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   302

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    54,    66,     2,     2,    63,    62,     2,
      60,    61,    52,    50,    57,    51,    55,    53,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
      49,    67,    48,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    58,     2,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    64,     2,    65,     2,     2,     2,     2,
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
      45,    46,    47
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     8,    12,    15,    18,    20,    24,
      26,    30,    32,    35,    37,    40,    47,    51,    57,    61,
      65,    67,    69,    71,    73,    75,    77,    79,    81,    83,
      85,    87,    91,    96,    99,   107,   114,   119,   120,   125,
     128,   136,   143,   148,   154,   158,   159,   161,   166,   170,
     173,   177,   179,   180,   185,   189,   192,   194,   203,   211,
     219,   227,   234,   241,   248,   254,   256,   259,   261,   264,
     265,   267,   269,   271,   273,   276,   279,   289,   291,   301,
     311,   321,   331,   341,   352,   354,   365,   376,   387,   398,
     408,   409,   425,   439,   453,   467,   478,   494,   502,   507,
     513,   517,   522,   530,   538,   546,   554,   562,   570,   578,
     586,   594,   598,   602,   606,   610,   613,   615,   627,   638,
     650,   661,   668,   674,   683,   691,   693,   697,   702,   708,
     713,   716,   721,   734,   742,   746,   750,   754,   758,   760,
     764,   767,   774,   783,   791,   797,   804,   810,   817,   822,
     827,   831,   834,   838,   841,   843,   844,   848,   850,   853,
     856,   858,   859,   862,   864,   865,   870,   875,   880,   885,
     890,   895,   900,   905,   910,   915,   920,   925,   930,   932,
     936,   940,   944,   948,   952,   956,   960,   964,   968,   972,
     976,   980,   984,   988,   992,   994,   999,  1001,  1002,  1007,
    1012,  1017,  1022,  1027,  1032,  1037,  1042,  1048,  1054,  1060,
    1066,  1072,  1078,  1084,  1090,  1092,  1094,  1098
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,    73,    91,    -1,    91,    -1,    71,    72,
      85,    -1,    71,    85,    -1,    72,    85,    -1,    85,    -1,
      70,    55,    44,    -1,    44,    -1,     3,    70,    56,    -1,
      75,    -1,    75,    75,    -1,    74,    -1,    74,    74,    -1,
      11,    49,    44,    55,    44,    48,    -1,    12,    70,    56,
      -1,    12,    70,    55,    52,    56,    -1,    12,    70,     1,
      -1,    12,     1,    56,    -1,    20,    -1,    21,    -1,    18,
      -1,    22,    -1,    17,    -1,    23,    -1,    25,    -1,    24,
      -1,    76,    -1,    70,    -1,    70,    -1,    78,    57,    70,
      -1,    76,    44,    57,    79,    -1,    76,    44,    -1,    76,
      44,    58,    45,    59,    57,    79,    -1,    76,    44,    58,
      59,    57,    79,    -1,    76,    44,    58,    59,    -1,    -1,
      76,    44,    57,    80,    -1,    76,    44,    -1,    76,    44,
      58,    45,    59,    57,    80,    -1,    76,    44,    58,    59,
      57,    80,    -1,    76,    44,    58,    59,    -1,    76,    52,
      44,    57,    80,    -1,    76,    52,    44,    -1,    -1,   102,
      -1,   103,    60,   102,    61,    -1,    81,    56,    82,    -1,
      81,    56,    -1,   106,    57,    83,    -1,   106,    -1,    -1,
      62,   106,    57,    84,    -1,   106,    57,    84,    -1,    62,
     106,    -1,   106,    -1,    86,     4,    44,    89,    90,    64,
      92,    65,    -1,    86,     4,    44,    89,    64,    92,    65,
      -1,    86,     4,    44,    90,    64,    92,    65,    -1,     4,
      44,    89,    90,    64,    92,    65,    -1,    86,     4,    44,
      64,    92,    65,    -1,     4,    44,    89,    64,    92,    65,
      -1,     4,    44,    90,    64,    92,    65,    -1,     4,    44,
      64,    92,    65,    -1,    88,    -1,    86,    88,    -1,    88,
      -1,    87,    88,    -1,    -1,    27,    -1,    29,    -1,    28,
      -1,    32,    -1,     8,    77,    -1,     9,    78,    -1,    76,
      44,    60,    80,    61,    64,    95,    65,    91,    -1,    94,
      -1,    76,    44,    60,     1,    61,    64,    95,    65,    91,
      -1,    76,     1,    60,    80,    61,    64,    95,    65,    91,
      -1,     1,    44,    60,    80,    61,    64,    95,    65,    91,
      -1,    76,     1,    60,     1,    61,    64,    95,    65,    91,
      -1,     1,    44,    60,     1,    61,    64,    95,    65,    91,
      -1,    87,    76,    44,    60,    79,    61,    64,    96,    65,
      92,    -1,    93,    -1,    87,    76,    44,    60,     1,    61,
      64,    96,    65,    92,    -1,    87,    76,     1,    60,    79,
      61,    64,    96,    65,    92,    -1,    87,     1,    44,    60,
      79,    61,    64,    96,    65,    92,    -1,    87,    76,     1,
      60,     1,    61,    64,    96,    65,    92,    -1,     1,    44,
      60,     1,    61,    64,    96,    65,    92,    -1,    -1,    27,
      32,    24,    10,    60,    19,    44,    58,    59,    61,     7,
      44,    64,    96,    65,    -1,    27,    32,    24,    10,    60,
      19,    44,    58,    59,    61,    64,    96,    65,    -1,    27,
       1,    24,    10,    60,    19,    44,    58,    59,    61,    64,
      96,    65,    -1,    27,    32,    24,     1,    60,    19,    44,
      58,    59,    61,    64,    96,    65,    -1,    27,    32,    24,
      10,    60,     1,    61,    64,    96,    65,    -1,    20,    10,
      60,    20,    44,    57,    22,    52,    44,    58,    59,    61,
      64,    95,    65,    -1,    20,    10,    60,    61,    64,    95,
      65,    -1,    76,    44,    56,    95,    -1,    76,    52,    44,
      56,    95,    -1,    76,    44,    56,    -1,    76,    52,    44,
      56,    -1,    76,    44,    58,   106,    59,    56,    95,    -1,
      34,    60,   101,   104,   103,    61,    97,    -1,    34,    60,
       1,   104,   103,    61,    97,    -1,    34,    60,   101,     1,
     103,    61,    97,    -1,    34,    60,   101,   104,     1,    61,
      97,    -1,    34,    60,     1,     1,   103,    61,    97,    -1,
      34,    60,     1,   104,     1,    61,    97,    -1,    34,    60,
     101,     1,     1,    61,    97,    -1,    34,    60,     1,     1,
       1,    61,    97,    -1,    35,   105,    97,    -1,    35,   107,
      97,    -1,    36,   105,    97,    -1,    36,   107,    97,    -1,
      82,    95,    -1,    82,    -1,    44,    60,    66,    63,    44,
      66,    57,    84,    61,    56,    95,    -1,    44,    60,    66,
      63,    44,    66,    57,    84,    61,    56,    -1,    44,    60,
      66,    63,    44,    66,    57,    83,    61,    56,    95,    -1,
      44,    60,    66,    63,    44,    66,    57,    83,    61,    56,
      -1,    44,    60,    83,    61,    56,    95,    -1,    44,    60,
      83,    61,    56,    -1,    44,    60,    66,    44,    66,    61,
      56,    95,    -1,    44,    60,    66,    44,    66,    61,    56,
      -1,   108,    -1,    35,     1,    97,    -1,    76,     1,    56,
      95,    -1,    76,    52,     1,    56,    95,    -1,    76,    44,
       1,    95,    -1,     1,    95,    -1,    76,    44,    56,    96,
      -1,    76,    44,    58,    59,    67,    15,    76,    58,   106,
      59,    56,    96,    -1,    34,    60,   101,   104,   103,    61,
      98,    -1,    35,   105,    98,    -1,    35,   107,    98,    -1,
      36,   105,    98,    -1,    36,   107,    98,    -1,   108,    -1,
     102,    56,    96,    -1,   102,    56,    -1,    70,    60,    44,
      61,    56,    96,    -1,    70,    60,    66,    44,    66,    61,
      56,    96,    -1,    70,    60,    66,    44,    66,    61,    56,
      -1,    70,    60,    44,    61,    56,    -1,    44,    60,    83,
      61,    56,    96,    -1,    44,    60,    83,    61,    56,    -1,
      76,    44,    58,    59,     1,    96,    -1,    76,     1,    56,
      96,    -1,    76,    44,     1,    96,    -1,     1,    56,    96,
      -1,     1,    98,    -1,    64,    99,    65,    -1,   102,    56,
      -1,    95,    -1,    -1,    64,   100,    65,    -1,    96,    -1,
      99,    99,    -1,   102,    56,    -1,    95,    -1,    -1,   100,
     100,    -1,    96,    -1,    -1,    44,    67,   101,    56,    -1,
     101,    50,   101,    56,    -1,   101,    51,   101,    56,    -1,
     101,    52,   101,    56,    -1,   101,    53,   101,    56,    -1,
     101,    49,   101,    56,    -1,   101,    48,   101,    56,    -1,
     101,    38,   101,    56,    -1,   101,    39,   101,    56,    -1,
     101,    40,   101,    56,    -1,   101,    41,   101,    56,    -1,
     101,    42,   101,    56,    -1,   101,    43,   101,    56,    -1,
     106,    -1,    44,    67,   102,    -1,   102,    50,   102,    -1,
     102,    51,   102,    -1,   102,    52,   102,    -1,   102,    53,
     102,    -1,   102,    49,   102,    -1,   102,    48,   102,    -1,
     102,    38,   102,    -1,   102,    39,   102,    -1,   102,    40,
     102,    -1,   102,    41,   102,    -1,   102,    42,   102,    -1,
     102,    43,   102,    -1,   102,    50,    50,    -1,   102,    51,
      51,    -1,   106,    -1,    44,    60,    83,    61,    -1,   102,
      -1,    -1,   102,    49,   102,    56,    -1,   102,    48,   102,
      56,    -1,   102,    38,   102,    56,    -1,   102,    39,   102,
      56,    -1,   102,    40,   102,    56,    -1,   102,    41,   102,
      56,    -1,   102,    42,   102,    56,    -1,   102,    43,   102,
      56,    -1,    60,   102,    49,   102,    61,    -1,    60,   102,
      48,   102,    61,    -1,    60,   102,    38,   102,    61,    -1,
      60,   102,    39,   102,    61,    -1,    60,   102,    40,   102,
      61,    -1,    60,   102,    41,   102,    61,    -1,    60,   102,
      42,   102,    61,    -1,    60,   102,    43,   102,    61,    -1,
      44,    -1,    45,    -1,    60,   106,    61,    -1,    13,   103,
      56,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    27,    27,    28,    29,    30,    31,    32,    35,    36,
      39,    42,    43,    46,    47,    50,    53,    54,    55,    56,
      59,    60,    61,    62,    63,    64,    65,    66,    69,    70,
      74,    75,    79,    80,    81,    82,    83,    84,    87,    88,
      89,    90,    91,    92,    93,    94,    97,    98,   101,   102,
     105,   106,   107,   110,   111,   112,   113,   122,   123,   124,
     125,   126,   127,   128,   129,   132,   133,   136,   137,   138,
     141,   142,   143,   144,   147,   150,   153,   154,   155,   156,
     157,   158,   159,   162,   163,   164,   165,   166,   167,   168,
     169,   172,   173,   174,   175,   176,   179,   180,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   241,   242,   243,   244,   247,   248,   251,   252,
     253,   254,   257,   258,   259,   262,   263,   264,   265,   266,
     267,   268,   269,   270,   271,   272,   273,   274,   275,   278,
     279,   280,   281,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,   292,   293,   294,   297,   298,   301,   302,
     303,   304,   305,   306,   307,   308,   311,   312,   313,   314,
     315,   316,   317,   318,   321,   322,   325,   328
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "PACKAGE", "CLASS", "THROW", "INTERFACE",
  "THROWS", "EXTENDS", "IMPLEMENTS", "MAIN", "HEADERC", "HEADERJ",
  "RETURN", "BREAK", "NEW", "JNULL", "LONG", "DOUBLE", "STRING", "INT",
  "FLOAT", "CHAR", "SHORT", "VOID", "BOOLEAN", "BOOLLIT", "PUBLIC",
  "PRIVATE", "PROTECTED", "TRY", "CATCH", "STATIC", "THIS", "FOR", "WHILE",
  "IF", "ELSE", "LE", "GE", "EQ", "NE", "OR", "AND", "ID", "NUM", "DOT",
  "\"=\"", "'>'", "'<'", "'+'", "'-'", "'*'", "'/'", "'!'", "'.'", "';'",
  "','", "'['", "']'", "'('", "')'", "'&'", "'%'", "'{'", "'}'", "'\"'",
  "'='", "$accept", "S", "CLASS_HIERARCHY", "PACKAGES", "IMPORTS",
  "HEADERS", "LIB_C", "LIB_J", "DTYPE", "CLASSNAME", "CNAMELIST", "PARAM",
  "PARAM_C", "EXP", "VAR", "ARG", "REA", "CLASSHEADER", "MODIFIERS",
  "MODIFIER1", "MODIFIER", "EXTEND", "INTERFACES", "FUNC_C", "FUNC_J",
  "MAIN_J", "MAIN_C", "COND_C", "COND_J", "DEF_C", "DEF_J", "BODY_C",
  "BODY_J", "INIT1", "INIT2", "INIT3", "EXP2", "COND1", "ID_NUM", "COND2",
  "RET", 0
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
     295,   296,   297,   298,   299,   300,   301,   302,    62,    60,
      43,    45,    42,    47,    33,    46,    59,    44,    91,    93,
      40,    41,    38,    37,   123,   125,    34,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    69,    69,    69,    69,    69,    70,    70,
      71,    72,    72,    73,    73,    74,    75,    75,    75,    75,
      76,    76,    76,    76,    76,    76,    76,    76,    77,    77,
      78,    78,    79,    79,    79,    79,    79,    79,    80,    80,
      80,    80,    80,    80,    80,    80,    81,    81,    82,    82,
      83,    83,    83,    84,    84,    84,    84,    85,    85,    85,
      85,    85,    85,    85,    85,    86,    86,    87,    87,    87,
      88,    88,    88,    88,    89,    90,    91,    91,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    93,    93,    93,    93,    93,    94,    94,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    95,    95,    95,    95,    95,    95,    95,    95,    95,
      95,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    96,    96,    96,    96,    96,    96,    96,    96,
      96,    96,    97,    97,    97,    97,    98,    98,    99,    99,
      99,    99,   100,   100,   100,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   102,
     102,   102,   102,   102,   102,   102,   102,   102,   102,   102,
     102,   102,   102,   102,   102,   102,   103,   103,   104,   104,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   105,
     105,   105,   105,   105,   106,   106,   107,   108
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     3,     2,     2,     1,     3,     1,
       3,     1,     2,     1,     2,     6,     3,     5,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     4,     2,     7,     6,     4,     0,     4,     2,
       7,     6,     4,     5,     3,     0,     1,     4,     3,     2,
       3,     1,     0,     4,     3,     2,     1,     8,     7,     7,
       7,     6,     6,     6,     5,     1,     2,     1,     2,     0,
       1,     1,     1,     1,     2,     2,     9,     1,     9,     9,
       9,     9,     9,    10,     1,    10,    10,    10,    10,     9,
       0,    15,    13,    13,    13,    10,    15,     7,     4,     5,
       3,     4,     7,     7,     7,     7,     7,     7,     7,     7,
       7,     3,     3,     3,     3,     2,     1,    11,    10,    11,
      10,     6,     5,     8,     7,     1,     3,     4,     5,     4,
       2,     4,    12,     7,     3,     3,     3,     3,     1,     3,
       2,     6,     8,     7,     5,     6,     5,     6,     4,     4,
       3,     2,     3,     2,     1,     0,     3,     1,     2,     2,
       1,     0,     2,     1,     0,     4,     4,     4,     4,     4,
       4,     4,     4,     4,     4,     4,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     1,     4,     1,     0,     4,     4,
       4,     4,     4,     4,     4,     4,     5,     5,     5,     5,
       5,     5,     5,     5,     1,     1,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     0,     0,    24,    22,    20,    21,
      23,    25,    27,    26,    70,    72,    71,    73,     0,     0,
       0,     0,    13,    11,     0,     7,     0,    65,     3,    77,
       0,     9,     0,     0,     0,     0,     0,     0,     1,     0,
       5,     6,     2,    14,    12,     0,     0,     0,    66,     0,
       0,    10,     0,     0,     0,     0,     0,     0,    19,    18,
       0,    16,     0,     4,     0,     0,     0,     0,    20,     0,
       0,     8,    29,    28,    74,    30,    75,     0,     0,     0,
      67,     0,    84,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,     0,
       0,     0,     0,     0,     0,     0,     0,    68,    64,     0,
       0,     0,     0,    17,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,    44,     0,    31,
       0,     0,     0,     0,     0,     0,    62,     0,    63,    15,
       0,     0,   197,     0,     0,     0,   214,   215,     0,     0,
       0,     0,    46,     0,   194,   125,     0,     0,     0,     0,
      61,     0,     0,     0,     0,    38,     0,    42,    45,     0,
       0,     0,     0,     0,    37,     0,     0,    60,     0,   130,
     214,   196,     0,     0,     0,     0,     0,     0,     0,     0,
      52,     0,     0,     0,     0,    49,   115,    97,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    58,     0,    59,     0,     0,
      45,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    52,   217,     0,   214,     0,   178,
       0,   154,   126,   196,     0,   194,   111,   112,   113,   114,
     214,     0,     0,    51,   179,     0,     0,     0,     0,     0,
       0,    48,   186,   187,   188,   189,   190,   191,   185,   184,
     192,   180,   193,   181,   182,   183,     0,     0,     0,     0,
       0,    57,    82,    45,    41,    80,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   160,     0,   196,
     153,     0,     0,     0,     0,     0,     0,     0,     0,   216,
       0,     0,   195,    52,   127,   129,    98,     0,     0,     0,
      47,    81,    79,    78,    76,    40,     0,     0,     0,     0,
     214,     0,     0,     0,     0,   138,     0,     0,     0,     0,
      37,     0,     0,     0,     0,     0,     0,     0,   195,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   152,     0,
     159,   186,   187,   188,   189,   190,   191,   185,   184,     0,
       0,     0,    50,     0,   128,    99,     0,     0,   157,   151,
       0,     0,     0,     0,     0,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    32,     0,    36,     0,     0,
       0,     0,     0,     0,     0,     0,   186,   187,   188,   189,
     190,   191,   185,   184,     0,     0,   165,     0,     0,   172,
     173,   174,   175,   176,   177,   171,   170,   166,   167,   168,
     169,     0,     0,   208,   209,   210,   211,   212,   213,   207,
     206,     0,     0,   121,     0,   150,   163,     0,     0,   134,
     135,   136,   137,     0,     0,     0,     0,     0,     0,     0,
      89,   139,     0,     0,     0,     0,     0,    37,     0,     0,
       0,     0,     0,     0,   110,   107,   200,   201,   202,   203,
     204,   205,   199,   198,   108,   104,   109,   105,   106,   103,
       0,    52,   102,   156,     0,   197,   195,     0,     0,   148,
     149,   131,     0,     0,     0,    95,     0,    37,    35,    87,
      88,    86,    85,    83,     0,   123,     0,     0,     0,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,    55,     0,     0,    52,     0,   145,   141,     0,
     147,     0,     0,     0,     0,     0,    96,     0,     0,     0,
      54,   133,     0,     0,    93,    94,     0,    92,    53,    56,
     119,   117,   142,     0,     0,     0,     0,    91,     0,     0,
     132
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,   351,    19,    20,    21,    22,    23,   148,    74,
      76,   228,    70,   149,   150,   412,   590,    25,    26,    79,
      80,    55,    56,    28,    81,    82,    29,   241,   418,   242,
     419,   399,   534,   238,   354,   153,   301,   186,   154,   187,
     155
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -474
static const yytype_int16 yypact[] =
{
    1629,    25,   109,   114,    60,    31,  -474,  -474,   169,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,   214,   287,
     329,   520,   208,   217,   141,  -474,   340,  -474,  -474,  -474,
     166,  -474,    52,    22,   187,   180,   160,   200,  -474,   329,
    -474,  -474,  -474,  -474,  -474,   207,   253,   199,  -474,   330,
     273,  -474,   834,   109,   172,   146,   262,   274,  -474,  -474,
     219,  -474,     2,  -474,   624,   670,   143,   282,  -474,   266,
     288,  -474,   322,  -474,  -474,   322,   333,   349,  1642,  1667,
    -474,   336,  -474,   172,   345,   172,   350,   339,   367,   348,
     352,   353,   357,   359,   172,   148,   361,   362,   231,   384,
     368,   109,   371,   411,   413,   392,   183,  -474,  -474,   386,
     172,   388,   407,  -474,   400,  1542,   395,   396,   403,   410,
     414,   172,   422,   172,  1542,   926,   100,   418,  1542,   322,
     475,   467,   286,   433,   435,   439,  -474,   436,  -474,  -474,
     478,  1542,   248,   443,    11,   444,    87,  -474,   126,   449,
     688,   452,   976,   448,  -474,  -474,  1542,  1542,  1542,  1542,
    -474,   453,   172,   459,   461,  -474,   450,   468,   926,   466,
     471,   473,   500,   503,   926,   718,   743,  -474,   483,  -474,
      89,  1887,   509,   197,   594,   248,   594,   594,   594,   594,
      -9,   248,   512,    65,   224,   248,  -474,  -474,   248,   248,
     248,   248,   248,   248,   248,   248,   291,   283,   248,   248,
     248,   505,   506,   514,   515,  -474,   532,  -474,   520,   530,
     926,  -474,   520,   534,   580,   581,   247,   557,   544,   545,
     547,   549,   552,   583,   295,  -474,   237,   564,  1555,  -474,
     800,  -474,  -474,  1023,  1903,   563,  -474,  -474,  -474,  -474,
    -474,    -7,   571,   576,  1887,  1542,  1542,   849,   295,   578,
     579,  -474,   354,   354,   354,   354,  1925,  1925,   354,   354,
    -474,   318,  -474,   318,  -474,  -474,   884,   520,   520,   520,
     520,  -474,  -474,   926,  -474,  -474,  1600,   599,   607,   591,
     611,   316,   592,   593,   596,   597,   598,   605,   604,    33,
    1919,    67,   335,   179,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   201,  -474,   895,  1069,
    -474,   248,   248,   248,   248,   248,   248,   248,   248,  -474,
     600,   630,   620,   295,  -474,  -474,  -474,   618,  1542,   941,
    -474,  -474,  -474,  -474,  -474,  -474,  1469,   619,   444,   444,
     -22,   -16,   232,   613,  1115,  -474,   622,   623,   632,   625,
     926,   176,  1600,  1600,  1600,  1600,  1600,   627,  -474,   636,
     638,   248,   248,   248,   248,   248,   248,   248,   248,   639,
     642,  1161,   643,   653,  1207,  1496,  1662,  1681,  1700,  1719,
    1738,  1757,  1776,  1795,  1814,  1833,   659,   660,  -474,   987,
    -474,   271,   347,   393,   397,   850,   930,   412,   431,   664,
     661,  1033,  -474,   628,  -474,  -474,  1600,  1217,  -474,  -474,
     335,  1506,  1506,  1506,  1506,   295,   -19,   672,    90,   172,
    1253,   667,   671,  1600,   675,  -474,   678,   689,   680,   682,
     684,   685,   686,   668,   594,   594,   331,   438,   460,   522,
     758,  1852,   538,   570,   594,   594,  -474,   594,   594,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,   594,   594,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,   696,   698,  -474,  1542,  -474,  -474,  1289,  1871,  -474,
    -474,  -474,  -474,   695,   697,   713,  1600,  1600,  1600,   700,
    -474,  -474,   701,   708,   705,   710,   715,   926,   172,   172,
     172,   172,   172,   709,  -474,  -474,  -474,  -474,  -474,  -474,
    -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,  -474,
    1079,    -2,  -474,  -474,  1325,   248,   720,   721,   712,  -474,
    -474,  -474,     7,   716,   719,  -474,    16,   926,  -474,  -474,
    -474,  -474,  -474,  -474,  1542,  -474,   295,   724,   727,   717,
     729,  1361,  1397,   730,  1600,   777,  1600,  1600,   749,  1600,
    -474,   737,   738,   747,   759,    -2,  1506,  -474,  -474,   770,
    -474,   926,   740,   762,   764,   765,  -474,    -2,  1125,  1171,
    -474,  -474,  1433,   736,  -474,  -474,  1600,  -474,  -474,   775,
    -474,  -474,  -474,   295,   768,    -2,   778,  -474,   782,  1600,
    -474
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -474,  -474,     9,  -474,   820,  -474,   818,   819,     0,  -474,
    -474,  -169,   -55,  -474,   646,  -186,  -473,   281,  -474,  -474,
     124,   780,   195,    -5,   -70,  -474,  -474,   -74,   220,  -160,
    -404,   603,   446,  -209,   -69,  -139,  -237,  -143,   244,  -140,
     106
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -198
static const yytype_int16 yytable[] =
{
      24,   316,   188,   182,   252,   189,   230,   232,   564,    91,
      93,    32,   184,   109,    36,   111,    42,   489,   490,   491,
     492,    24,    88,   568,   120,   494,   246,   247,   248,   249,
      52,    53,    35,    -9,   369,   250,   147,   330,   425,    50,
     137,   151,   250,   147,   426,   191,   152,   495,   298,    69,
     164,   161,    73,   163,   169,   152,   331,   251,   558,   152,
     556,    72,    75,    89,    69,    69,   256,   179,   379,    30,
     165,   185,   152,   181,   565,    31,   196,   180,   147,   106,
     569,   152,   211,   212,   213,   214,    54,   152,   152,   152,
     152,   497,   216,   381,  -197,   384,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,   395,    50,    51,    34,
     129,   180,   147,   221,   598,   243,   244,   243,   243,   243,
     243,   257,   254,   258,    27,    69,   152,   192,  -197,   262,
     263,   264,   265,   266,   267,   268,   269,   271,   273,   274,
     275,   276,    45,    27,    27,   166,   498,   190,   499,   234,
      48,    52,    53,    31,   191,    53,   191,    53,    33,   167,
     370,    59,   380,    27,   383,   284,   317,   300,    69,   300,
     193,   319,   591,    77,   227,   227,   227,   397,   194,    37,
     382,   334,   335,   336,   134,    46,   152,   152,   152,   -69,
     -69,   435,   -69,   -69,   -69,   -69,   -69,   -69,   236,    78,
      15,    16,   396,   107,    17,   421,   423,    94,   422,   424,
      83,   488,   121,   282,    38,    60,    61,   285,    24,     4,
      69,   436,    24,   180,   147,   259,    49,   135,   345,     5,
     181,    57,   181,   427,   181,   437,    58,   -90,   299,   493,
    -197,   237,   147,    66,   317,   180,   147,   181,   289,   319,
      84,   535,   401,   402,   403,   404,   405,   406,   407,   408,
      62,    96,  -197,    71,   414,   415,   290,    64,   260,   152,
     152,    87,   341,   342,   343,   344,   428,    24,    24,    24,
      24,   180,   147,    69,   514,   515,   352,   172,   125,   126,
     122,     3,   180,   147,   524,   525,   173,   526,   527,     5,
      40,    41,   446,   447,   448,   449,   450,   451,   452,   453,
      98,   528,   529,    65,    14,    15,    16,    71,    99,    17,
      63,   206,   207,   208,   209,   317,    85,   180,   147,    86,
     319,    67,   473,     3,   272,   180,   147,   483,   548,   250,
     147,   270,   152,    97,    47,   557,   352,     6,     7,   100,
      68,     9,    10,    11,    12,    13,    14,    15,    16,   500,
     227,    17,   352,   352,   352,   352,   352,    14,    15,    16,
     208,   209,    17,   360,   361,   243,   243,    50,   570,   237,
     147,   206,   207,   208,   209,   243,   243,   516,   243,   243,
     101,   -45,   355,   102,   112,   113,   560,   206,   207,   208,
     209,   108,   243,   243,   206,   207,   208,   209,   474,   110,
     532,   114,   115,   116,   117,   152,   352,   352,   118,   300,
     119,   352,   352,   352,   352,   123,   124,   239,   127,   245,
     352,   130,   128,   352,   253,   131,   133,   132,   549,   550,
     551,   552,   553,   206,   207,   208,   209,   206,   207,   208,
     209,   136,   355,   138,   475,   139,   555,   140,   476,   156,
     157,   152,   206,   207,   208,   209,   181,   158,   355,   355,
     355,   355,   355,   479,   159,   168,   170,   171,   253,   160,
     571,   206,   207,   208,   209,   152,   162,   352,   206,   207,
     208,   209,   480,   174,   517,   175,   352,   352,   352,   176,
     178,   177,   337,   183,   185,   195,   353,   227,   210,   219,
     206,   207,   208,   209,   600,   601,   518,   197,   215,   152,
     152,     1,   355,   355,   217,   220,   218,   355,   355,   355,
     355,   222,   223,   224,   352,   233,   355,     6,     7,   355,
       8,     9,    10,    11,    12,    13,   239,   227,   239,   239,
     239,   239,   239,   239,   239,   239,   239,   239,   239,   239,
     225,   352,   352,   226,   352,   235,   352,   352,   255,   352,
     277,   278,   206,   207,   208,   209,   352,   253,   519,   279,
     280,   593,   438,   439,   440,   441,   442,   283,   206,   207,
     208,   209,   352,   355,   522,   141,   352,   281,   286,   287,
     288,   291,   355,   355,   355,   292,   293,   142,   294,   352,
     295,     6,     7,   296,    68,     9,    10,    11,    12,    13,
     206,   207,   208,   209,   329,    90,   523,   297,   143,   144,
     145,   302,   332,   333,   338,   339,   485,   486,   146,   147,
     355,     6,     7,   356,    68,     9,    10,    11,    12,    13,
     501,   357,   358,   504,  -155,   359,   362,   363,   240,  -155,
     364,   365,   366,   367,   239,   368,   409,   355,   355,   253,
     355,    92,   355,   355,   410,   355,   411,   413,   429,   420,
     431,   432,   355,   434,   484,   -45,   443,     6,     7,   141,
      68,     9,    10,    11,    12,    13,   433,   444,   355,   445,
     454,   142,   355,   455,   457,     6,     7,   486,    68,     9,
      10,    11,    12,    13,   458,   355,   539,   540,   541,   229,
     471,   472,   143,   144,   145,   481,   502,   482,   496,   513,
     503,   -45,   146,   147,   505,     6,     7,   506,    68,     9,
      10,    11,    12,    13,   231,   508,   507,   509,  -116,   510,
     511,   512,   530,  -116,   486,   531,   536,   538,   537,   542,
       6,     7,   543,    68,     9,    10,    11,    12,    13,   544,
     545,   546,   547,   554,   575,   559,   561,   562,   563,   -37,
     566,   577,   578,   567,   580,   573,   582,   583,   574,   585,
     576,   579,   581,   584,   603,   587,   198,   199,   200,   201,
     572,   141,   586,   588,   -37,   594,   204,   205,   206,   207,
     208,   209,   602,   142,   520,   589,   604,     6,     7,   559,
      68,     9,    10,    11,    12,    13,   592,   595,   596,   610,
     597,   599,   605,   607,   143,   144,   145,   608,   609,    39,
      43,   261,    44,   318,   146,   147,    95,   606,     0,   599,
     141,     6,     7,     0,    68,     9,    10,    11,    12,    13,
    -161,     0,   142,   487,     0,  -161,     6,     7,     0,    68,
       9,    10,    11,    12,    13,     0,     0,     0,    31,     0,
       0,     0,     0,   143,   144,   145,     0,     0,   198,   199,
     200,   201,     0,   146,   147,     0,   141,     0,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,   142,  -100,
       0,   477,     6,     7,  -100,    68,     9,    10,    11,    12,
      13,     0,   198,   199,   200,   201,   202,   203,     0,   143,
     144,   145,   204,   205,   206,   207,   208,   209,     0,   146,
     147,     0,   141,     6,     7,   340,    68,     9,    10,    11,
      12,    13,     0,     0,   142,  -161,     0,     0,     6,     7,
     398,    68,     9,    10,    11,    12,    13,     0,   198,   199,
     200,   201,     0,     0,     0,   143,   144,   145,   204,   205,
     206,   207,   208,   209,     0,   146,   147,     0,   141,     0,
       0,   478,     0,     0,     0,     0,     0,     0,     0,     0,
     142,  -101,     0,     0,     6,     7,  -101,    68,     9,    10,
      11,    12,    13,     0,   198,   199,   200,   201,   202,   203,
       0,   143,   144,   145,   204,   205,   206,   207,   208,   209,
       0,   146,   147,     0,   141,     0,  -196,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   142,  -158,     0,     0,
       6,     7,  -158,    68,     9,    10,    11,    12,    13,     0,
       0,   198,   199,   200,   201,   202,   203,   143,   144,   145,
       0,   204,   205,   206,   207,   208,   209,   146,   147,   320,
     141,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   142,  -122,     0,     0,     6,     7,  -122,    68,
       9,    10,    11,    12,    13,     0,     0,   198,   199,   200,
     201,   202,   203,   143,   144,   145,     0,   204,   205,   206,
     207,   208,   209,   146,   147,   400,   141,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   142,  -124,
       0,     0,     6,     7,  -124,    68,     9,    10,    11,    12,
      13,     0,     0,   198,   199,   200,   201,   202,   203,   143,
     144,   145,     0,   204,   205,   206,   207,   208,   209,   146,
     147,   430,   141,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   142,  -120,     0,     0,     6,     7,
    -120,    68,     9,    10,    11,    12,    13,     0,     0,   304,
     305,   306,   307,   308,   309,   143,   144,   145,     0,   310,
     311,   312,   313,   314,   315,   146,   147,   456,   346,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     142,  -118,     0,     0,     6,     7,  -118,    68,     9,    10,
      11,    12,    13,     0,     0,   304,   305,   306,   307,   308,
     309,   347,   348,   349,   346,   310,   311,   312,   313,   314,
     315,   350,   147,   459,     0,     0,   142,     0,     0,     0,
       6,     7,     0,    68,     9,    10,    11,    12,    13,     0,
       0,     0,  -164,     0,     0,     0,     0,   347,   348,   349,
     346,     0,     0,     0,     0,     0,     0,   350,   147,     0,
       0,     0,   142,     0,     0,     0,     6,     7,     0,    68,
       9,    10,    11,    12,    13,     0,     0,     0,  -140,     0,
       0,     0,     0,   347,   348,   349,   346,     0,     0,     0,
       0,     0,     0,   350,   147,     0,     0,     0,   142,     0,
       0,     0,     6,     7,     0,    68,     9,    10,    11,    12,
      13,     0,     0,     0,   533,     0,     0,     0,     0,   347,
     348,   349,   346,     0,     0,     0,     0,     0,     0,   350,
     147,     0,     0,     0,   142,     0,     0,     0,     6,     7,
       0,    68,     9,    10,    11,    12,    13,     0,     0,     0,
    -162,     0,     0,     0,     0,   347,   348,   349,   346,     0,
       0,     0,     0,     0,     0,   350,   147,     0,     0,     0,
     142,     0,     0,     0,     6,     7,     0,    68,     9,    10,
      11,    12,    13,     0,     0,     0,  -146,     0,     0,     0,
       0,   347,   348,   349,   346,     0,     0,     0,     0,     0,
       0,   350,   147,     0,     0,     0,   142,     0,     0,     0,
       6,     7,     0,    68,     9,    10,    11,    12,    13,     0,
       0,     0,  -144,     0,     0,     0,     0,   347,   348,   349,
     346,     0,     0,     0,     0,     0,     0,   350,   147,     0,
       0,     0,   142,     0,     0,     0,     6,     7,     0,    68,
       9,    10,    11,    12,    13,     0,     0,     0,  -143,     0,
       0,     0,     0,   347,   348,   349,     0,   346,     0,     0,
       0,     0,     0,   350,   147,     0,     0,     0,     0,   142,
       0,     0,     0,     6,     7,   416,    68,     9,    10,    11,
      12,    13,     0,   417,   304,   305,   306,   307,   308,   309,
     347,   348,   349,   141,   310,   311,   312,   313,   314,   315,
     350,   147,   460,     0,     0,   142,   303,     0,     0,     6,
       7,     0,    68,     9,    10,    11,    12,    13,     0,     0,
     417,     0,     0,     0,     0,     0,   143,   144,   145,     0,
       0,     0,     0,     0,     0,     0,   146,   147,     0,     0,
       0,     0,     0,   304,   305,   306,   307,   308,   309,   180,
     147,   346,  -197,   310,   311,   312,   313,   314,   315,     0,
       0,     0,     0,   142,     0,     0,     0,     6,     7,     0,
      68,     9,    10,    11,    12,    13,     0,     0,     0,     0,
       1,     0,     2,     3,   347,   348,   349,     0,     0,     0,
       4,     5,     0,   103,   350,   147,     6,     7,     0,     8,
       9,    10,    11,    12,    13,     0,    14,    15,    16,   -70,
     -70,    17,   -70,   -70,   -70,   -70,   -70,   -70,   105,   -70,
     -70,   -70,     0,     0,   104,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,     7,     0,    68,     9,    10,
      11,    12,    13,     0,    14,    15,    16,     0,     0,    17,
     304,   305,   306,   307,   308,   309,     0,     0,     0,     0,
     310,   311,   312,   313,   314,   315,     0,     0,   461,   304,
     305,   306,   307,   308,   309,     0,     0,     0,     0,   310,
     311,   312,   313,   314,   315,     0,     0,   462,   304,   305,
     306,   307,   308,   309,     0,     0,     0,     0,   310,   311,
     312,   313,   314,   315,     0,     0,   463,   304,   305,   306,
     307,   308,   309,     0,     0,     0,     0,   310,   311,   312,
     313,   314,   315,     0,     0,   464,   304,   305,   306,   307,
     308,   309,     0,     0,     0,     0,   310,   311,   312,   313,
     314,   315,     0,     0,   465,   304,   305,   306,   307,   308,
     309,     0,     0,     0,     0,   310,   311,   312,   313,   314,
     315,     0,     0,   466,   304,   305,   306,   307,   308,   309,
       0,     0,     0,     0,   310,   311,   312,   313,   314,   315,
       0,     0,   467,   304,   305,   306,   307,   308,   309,     0,
       0,     0,     0,   310,   311,   312,   313,   314,   315,     0,
       0,   468,   304,   305,   306,   307,   308,   309,     0,     0,
       0,     0,   310,   311,   312,   313,   314,   315,     0,     0,
     469,   304,   305,   306,   307,   308,   309,     0,     0,     0,
       0,   310,   311,   312,   313,   314,   315,     0,     0,   470,
     198,   199,   200,   201,     0,     0,     0,     0,     0,     0,
     204,   205,   206,   207,   208,   209,     0,     0,   521,   304,
     305,   306,   307,   308,   309,   180,   147,     0,     0,   310,
     311,   312,   313,   314,   315,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,   204,   205,   206,   207,   208,
     209,   321,   322,   323,   324,   325,   326,     0,     0,     0,
       0,   327,   328,   206,   207,   208,   209,   371,   372,   373,
     374,   375,   376,   198,   199,   200,   201,   377,   378,   206,
     207,   208,   209,   204,   205,   206,   207,   208,   209
};

static const yytype_int16 yycheck[] =
{
       0,   238,   145,   142,   190,   145,   175,   176,     1,    64,
      65,     2,     1,    83,     5,    85,    21,   421,   422,   423,
     424,    21,    20,     7,    94,    44,   186,   187,   188,   189,
       8,     9,     1,    55,     1,    44,    45,    44,    60,    55,
     110,   115,    44,    45,    60,    67,   115,    66,   234,    49,
     124,   121,    52,   123,   128,   124,    63,    66,   531,   128,
      62,    52,    53,    61,    64,    65,     1,   141,     1,    44,
     125,    60,   141,   142,    67,    44,   150,    44,    45,    79,
      64,   150,   156,   157,   158,   159,    64,   156,   157,   158,
     159,     1,   162,   302,    61,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,    55,    56,    49,
     101,    44,    45,   168,   587,   184,   185,   186,   187,   188,
     189,    56,   191,    58,     0,   125,   195,     1,    61,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,     1,    19,    20,    45,    56,    60,    58,    60,
      26,     8,     9,    44,    67,     9,    67,     9,    44,    59,
     299,     1,   301,    39,   303,   220,   240,   236,   168,   238,
      44,   240,   576,     1,   174,   175,   176,   316,    52,    10,
       1,   255,   256,   257,     1,    44,   255,   256,   257,    17,
      18,   360,    20,    21,    22,    23,    24,    25,     1,    27,
      28,    29,     1,    79,    32,   348,   349,    64,   348,   349,
      64,   420,    64,   218,     0,    55,    56,   222,   218,    11,
     220,    45,   222,    44,    45,     1,    60,    44,   283,    12,
     299,    44,   301,     1,   303,    59,    56,    65,     1,   425,
      61,    44,    45,    44,   318,    44,    45,   316,     1,   318,
      55,   488,   321,   322,   323,   324,   325,   326,   327,   328,
      60,    66,    61,    44,   338,   339,    19,    60,    44,   338,
     339,    52,   277,   278,   279,   280,    44,   277,   278,   279,
     280,    44,    45,   283,   444,   445,   286,     1,    57,    58,
      95,     4,    44,    45,   454,   455,    10,   457,   458,    12,
      19,    20,   371,   372,   373,   374,   375,   376,   377,   378,
      44,   471,   472,    60,    27,    28,    29,    44,    52,    32,
      39,    50,    51,    52,    53,   399,    64,    44,    45,    55,
     399,     1,    61,     4,    51,    44,    45,   411,   507,    44,
      45,    50,   411,    61,     4,   531,   346,    17,    18,    61,
      20,    21,    22,    23,    24,    25,    27,    28,    29,   429,
     360,    32,   362,   363,   364,   365,   366,    27,    28,    29,
      52,    53,    32,    57,    58,   444,   445,    55,   547,    44,
      45,    50,    51,    52,    53,   454,   455,    56,   457,   458,
      57,    61,   286,    44,    44,    56,   535,    50,    51,    52,
      53,    65,   471,   472,    50,    51,    52,    53,    61,    64,
     484,    44,    64,    61,    61,   484,   416,   417,    61,   488,
      61,   421,   422,   423,   424,    64,    64,   183,    44,   185,
     430,    60,    64,   433,   190,    24,    44,    24,   508,   509,
     510,   511,   512,    50,    51,    52,    53,    50,    51,    52,
      53,    65,   346,    65,    61,    48,   530,    57,    61,    64,
      64,   530,    50,    51,    52,    53,   535,    64,   362,   363,
     364,   365,   366,    61,    64,    57,     1,    10,   234,    65,
     554,    50,    51,    52,    53,   554,    64,   487,    50,    51,
      52,    53,    61,    60,    56,    60,   496,   497,   498,    60,
      22,    65,   258,    60,    60,    56,   286,   507,    60,    59,
      50,    51,    52,    53,   588,   589,    56,    65,    65,   588,
     589,     1,   416,   417,    65,    57,    65,   421,   422,   423,
     424,    65,    61,    60,   534,    52,   430,    17,    18,   433,
      20,    21,    22,    23,    24,    25,   302,   547,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
      60,   561,   562,    60,   564,    56,   566,   567,    56,   569,
      65,    65,    50,    51,    52,    53,   576,   333,    56,    65,
      65,   581,   362,   363,   364,   365,   366,    57,    50,    51,
      52,    53,   592,   487,    56,     1,   596,    65,    64,    19,
      19,    44,   496,   497,   498,    61,    61,    13,    61,   609,
      61,    17,    18,    61,    20,    21,    22,    23,    24,    25,
      50,    51,    52,    53,    61,     1,    56,    44,    34,    35,
      36,    67,    61,    57,    56,    56,   416,   417,    44,    45,
     534,    17,    18,    44,    20,    21,    22,    23,    24,    25,
     430,    44,    61,   433,    60,    44,    64,    64,    64,    65,
      64,    64,    64,    58,   420,    61,    66,   561,   562,   425,
     564,     1,   566,   567,    44,   569,    56,    59,    65,    60,
      58,    58,   576,    58,    56,    61,    59,    17,    18,     1,
      20,    21,    22,    23,    24,    25,    64,    61,   592,    61,
      61,    13,   596,    61,    61,    17,    18,   487,    20,    21,
      22,    23,    24,    25,    61,   609,   496,   497,   498,     1,
      61,    61,    34,    35,    36,    61,    59,    66,    56,    61,
      59,    61,    44,    45,    59,    17,    18,    59,    20,    21,
      22,    23,    24,    25,     1,    65,    57,    65,    60,    65,
      65,    65,    56,    65,   534,    57,    61,    44,    61,    59,
      17,    18,    61,    20,    21,    22,    23,    24,    25,    61,
      65,    61,    57,    64,    57,   531,    56,    56,    66,    61,
      64,   561,   562,    64,   564,    61,   566,   567,    61,   569,
      61,    61,    15,    44,    58,    57,    38,    39,    40,    41,
     556,     1,    65,    56,    61,    65,    48,    49,    50,    51,
      52,    53,   592,    13,    56,    56,   596,    17,    18,   575,
      20,    21,    22,    23,    24,    25,    56,    65,    64,   609,
      65,   587,    57,    65,    34,    35,    36,    59,    56,    19,
      22,   195,    23,   240,    44,    45,    66,   603,    -1,   605,
       1,    17,    18,    -1,    20,    21,    22,    23,    24,    25,
      60,    -1,    13,   417,    -1,    65,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    -1,    34,    35,    36,    -1,    -1,    38,    39,
      40,    41,    -1,    44,    45,    -1,     1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    13,    60,
      -1,    61,    17,    18,    65,    20,    21,    22,    23,    24,
      25,    -1,    38,    39,    40,    41,    42,    43,    -1,    34,
      35,    36,    48,    49,    50,    51,    52,    53,    -1,    44,
      45,    -1,     1,    17,    18,    61,    20,    21,    22,    23,
      24,    25,    -1,    -1,    13,    60,    -1,    -1,    17,    18,
      65,    20,    21,    22,    23,    24,    25,    -1,    38,    39,
      40,    41,    -1,    -1,    -1,    34,    35,    36,    48,    49,
      50,    51,    52,    53,    -1,    44,    45,    -1,     1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    60,    -1,    -1,    17,    18,    65,    20,    21,    22,
      23,    24,    25,    -1,    38,    39,    40,    41,    42,    43,
      -1,    34,    35,    36,    48,    49,    50,    51,    52,    53,
      -1,    44,    45,    -1,     1,    -1,    60,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    13,    60,    -1,    -1,
      17,    18,    65,    20,    21,    22,    23,    24,    25,    -1,
      -1,    38,    39,    40,    41,    42,    43,    34,    35,    36,
      -1,    48,    49,    50,    51,    52,    53,    44,    45,    56,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    13,    60,    -1,    -1,    17,    18,    65,    20,
      21,    22,    23,    24,    25,    -1,    -1,    38,    39,    40,
      41,    42,    43,    34,    35,    36,    -1,    48,    49,    50,
      51,    52,    53,    44,    45,    56,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    13,    60,
      -1,    -1,    17,    18,    65,    20,    21,    22,    23,    24,
      25,    -1,    -1,    38,    39,    40,    41,    42,    43,    34,
      35,    36,    -1,    48,    49,    50,    51,    52,    53,    44,
      45,    56,     1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    13,    60,    -1,    -1,    17,    18,
      65,    20,    21,    22,    23,    24,    25,    -1,    -1,    38,
      39,    40,    41,    42,    43,    34,    35,    36,    -1,    48,
      49,    50,    51,    52,    53,    44,    45,    56,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      13,    60,    -1,    -1,    17,    18,    65,    20,    21,    22,
      23,    24,    25,    -1,    -1,    38,    39,    40,    41,    42,
      43,    34,    35,    36,     1,    48,    49,    50,    51,    52,
      53,    44,    45,    56,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    34,    35,    36,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    34,    35,    36,     1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    13,    -1,
      -1,    -1,    17,    18,    -1,    20,    21,    22,    23,    24,
      25,    -1,    -1,    -1,    65,    -1,    -1,    -1,    -1,    34,
      35,    36,     1,    -1,    -1,    -1,    -1,    -1,    -1,    44,
      45,    -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,
      -1,    20,    21,    22,    23,    24,    25,    -1,    -1,    -1,
      65,    -1,    -1,    -1,    -1,    34,    35,    36,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,    -1,
      13,    -1,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    -1,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    34,    35,    36,     1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    13,    -1,    -1,    -1,
      17,    18,    -1,    20,    21,    22,    23,    24,    25,    -1,
      -1,    -1,    65,    -1,    -1,    -1,    -1,    34,    35,    36,
       1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,
      -1,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    -1,    -1,    -1,    65,    -1,
      -1,    -1,    -1,    34,    35,    36,    -1,     1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    13,
      -1,    -1,    -1,    17,    18,    56,    20,    21,    22,    23,
      24,    25,    -1,    64,    38,    39,    40,    41,    42,    43,
      34,    35,    36,     1,    48,    49,    50,    51,    52,    53,
      44,    45,    56,    -1,    -1,    13,     1,    -1,    -1,    17,
      18,    -1,    20,    21,    22,    23,    24,    25,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    -1,    -1,
      -1,    -1,    -1,    38,    39,    40,    41,    42,    43,    44,
      45,     1,    60,    48,    49,    50,    51,    52,    53,    -1,
      -1,    -1,    -1,    13,    -1,    -1,    -1,    17,    18,    -1,
      20,    21,    22,    23,    24,    25,    -1,    -1,    -1,    -1,
       1,    -1,     3,     4,    34,    35,    36,    -1,    -1,    -1,
      11,    12,    -1,     1,    44,    45,    17,    18,    -1,    20,
      21,    22,    23,    24,    25,    -1,    27,    28,    29,    17,
      18,    32,    20,    21,    22,    23,    24,    25,     1,    27,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    -1,    20,    21,    22,
      23,    24,    25,    -1,    27,    28,    29,    -1,    -1,    32,
      38,    39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    38,
      39,    40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    50,    51,    52,    53,    -1,    -1,    56,    38,    39,
      40,    41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,
      50,    51,    52,    53,    -1,    -1,    56,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    -1,    -1,    56,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    -1,    -1,    56,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    -1,    -1,    56,    38,    39,    40,    41,    42,    43,
      -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,    53,
      -1,    -1,    56,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    51,    52,    53,    -1,
      -1,    56,    38,    39,    40,    41,    42,    43,    -1,    -1,
      -1,    -1,    48,    49,    50,    51,    52,    53,    -1,    -1,
      56,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    -1,    -1,    56,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    -1,    -1,    56,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    38,    39,    40,    41,    42,    43,    -1,    -1,    -1,
      -1,    48,    49,    50,    51,    52,    53,    38,    39,    40,
      41,    42,    43,    38,    39,    40,    41,    48,    49,    50,
      51,    52,    53,    48,    49,    50,    51,    52,    53
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,     4,    11,    12,    17,    18,    20,    21,
      22,    23,    24,    25,    27,    28,    29,    32,    69,    71,
      72,    73,    74,    75,    76,    85,    86,    88,    91,    94,
      44,    44,    70,    44,    49,     1,    70,    10,     0,    72,
      85,    85,    91,    74,    75,     1,    44,     4,    88,    60,
      55,    56,     8,     9,    64,    89,    90,    44,    56,     1,
      55,    56,    60,    85,    60,    60,    44,     1,    20,    76,
      80,    44,    70,    76,    77,    70,    78,     1,    27,    87,
      88,    92,    93,    64,    90,    64,    55,    52,    20,    61,
       1,    80,     1,    80,    64,    89,    90,    61,    44,    52,
      61,    57,    44,     1,    32,     1,    76,    88,    65,    92,
      64,    92,    44,    56,    44,    64,    61,    61,    61,    61,
      92,    64,    90,    64,    64,    57,    58,    44,    64,    70,
      60,    24,    24,    44,     1,    44,    65,    92,    65,    48,
      57,     1,    13,    34,    35,    36,    44,    45,    76,    81,
      82,    95,   102,   103,   106,   108,    64,    64,    64,    64,
      65,    92,    64,    92,    95,    80,    45,    59,    57,    95,
       1,    10,     1,    10,    60,    60,    60,    65,    22,    95,
      44,   102,   103,    60,     1,    60,   105,   107,   105,   107,
      60,    67,     1,    44,    52,    56,    95,    65,    38,    39,
      40,    41,    42,    43,    48,    49,    50,    51,    52,    53,
      60,    95,    95,    95,    95,    65,    92,    65,    65,    59,
      57,    80,    65,    61,    60,    60,    60,    76,    79,     1,
      79,     1,    79,    52,    60,    56,     1,    44,   101,   106,
      64,    95,    97,   102,   102,   106,    97,    97,    97,    97,
      44,    66,    83,   106,   102,    56,     1,    56,    58,     1,
      44,    82,   102,   102,   102,   102,   102,   102,   102,   102,
      50,   102,    51,   102,   102,   102,   102,    65,    65,    65,
      65,    65,    91,    57,    80,    91,    64,    19,    19,     1,
      19,    44,    61,    61,    61,    61,    61,    44,    83,     1,
     102,   104,    67,     1,    38,    39,    40,    41,    42,    43,
      48,    49,    50,    51,    52,    53,   104,    95,    99,   102,
      56,    38,    39,    40,    41,    42,    43,    48,    49,    61,
      44,    63,    61,    57,    95,    95,    95,   106,    56,    56,
      61,    91,    91,    91,    91,    80,     1,    34,    35,    36,
      44,    70,    76,    96,   102,   108,    44,    44,    61,    44,
      57,    58,    64,    64,    64,    64,    64,    58,    61,     1,
     103,    38,    39,    40,    41,    42,    43,    48,    49,     1,
     103,   101,     1,   103,   101,   101,   101,   101,   101,   101,
     101,   101,   101,   101,   101,   101,     1,   103,    65,    99,
      56,   102,   102,   102,   102,   102,   102,   102,   102,    66,
      44,    56,    83,    59,    95,    95,    56,    64,    96,    98,
      60,   105,   107,   105,   107,    60,    60,     1,    44,    65,
      56,    58,    58,    64,    58,    79,    45,    59,    96,    96,
      96,    96,    96,    59,    61,    61,   102,   102,   102,   102,
     102,   102,   102,   102,    61,    61,    56,    61,    61,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      56,    61,    61,    61,    61,    61,    61,    61,    61,    61,
      61,    61,    66,    95,    56,    96,    96,   100,   101,    98,
      98,    98,    98,    83,    44,    66,    56,     1,    56,    58,
      92,    96,    59,    59,    96,    59,    59,    57,    65,    65,
      65,    65,    65,    61,    97,    97,    56,    56,    56,    56,
      56,    56,    56,    56,    97,    97,    97,    97,    97,    97,
      56,    57,    95,    65,   100,   104,    61,    61,    44,    96,
      96,    96,    59,    61,    61,    65,    61,    57,    79,    92,
      92,    92,    92,    92,    64,    95,    62,    83,    84,   106,
     103,    56,    56,    66,     1,    67,    64,    64,     7,    64,
      79,    95,   106,    61,    61,    57,    61,    96,    96,    61,
      96,    15,    96,    96,    44,    96,    65,    57,    56,    56,
      84,    98,    56,    76,    65,    65,    64,    65,    84,   106,
      95,    95,    96,    58,    96,    57,   106,    65,    59,    56,
      96
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
        case 2:

/* Line 1455 of yacc.c  */
#line 27 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 28 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 29 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 30 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 31 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 32 "cj.y"
    { printf("\nNo. of Errors %d\nDebugging done \n", yynerrs); exit(0); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 55 "cj.y"
    { strcpy( err,"Package import error."); yyclearin; err_func(); yyerrok;;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 56 "cj.y"
    { strcpy( err,"Package import error."); yyclearin; err_func(); yyerrok;;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 155 "cj.y"
    { strcpy( err,"Improper function parameter declaration.");  yyclearin; yyerrok; ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 156 "cj.y"
    { strcpy( err,"Invalid identifier.");  yyclearin; yyerrok; ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 157 "cj.y"
    { strcpy( err,"Return type not defined."); yyclearin; yyerrok; ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 158 "cj.y"
    { strcpy( err,"Improper identifier and parameter declaration.");  yyclearin; yyerrok; ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 159 "cj.y"
    { strcpy( err,"Return type and parameter declaration error."); yyclearin; yyerrok; ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 164 "cj.y"
    { strcpy( err,"Improper function parameter declaration."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 165 "cj.y"
    { strcpy( err,"Invalid identifier."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 166 "cj.y"
    { strcpy( err,"Return type not defined."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 167 "cj.y"
    { strcpy( err,"Improper identifier and parameter declaration."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 168 "cj.y"
    { strcpy( err,"Return type and parameter declaration error."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 174 "cj.y"
    { strcpy( err,"Static Declaration error"); yyclearin; err_func(); yyerrok; ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 175 "cj.y"
    { strcpy( err,"No main found."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 176 "cj.y"
    { strcpy( err,"Main function parameter."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 189 "cj.y"
    { strcpy( err,"Wrong \"for\" loop initialization, expected numeral,literal,+,-,/,*,<,>,;."); yyclearin; yyerrok; ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 190 "cj.y"
    { strcpy( err,"Wrong \"for\" loop test expression ."); yyclearin; yyerrok; ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 191 "cj.y"
    { strcpy( err,"Wrong \"for\" loop update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 192 "cj.y"
    { strcpy( err,"Wrong \"for\" loop initialization/test expression, expected numeral,literal");  yyclearin; yyerrok; ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 193 "cj.y"
    { strcpy( err,"Wrong \"for\" loop initialization/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; ;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 194 "cj.y"
    { strcpy( err,"Wrong \"for\" loop test/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; ;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 195 "cj.y"
    { strcpy( err,"Wrong \"for\" loop initialization/test/update, expected numeral,literal,+,-,/,*,<,>."); yyclearin; yyerrok; ;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 211 "cj.y"
    { strcpy( err,"Wrong \"while\" loop test expression."); yyclearin; yyerrok; ;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 212 "cj.y"
    { strcpy( err,"Identifier not defined."); yyclearin; yyerrok; ;}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 213 "cj.y"
    { strcpy( err,"Identifier not defined."); yyclearin; yyerrok; ;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 214 "cj.y"
    { strcpy( err,"Expected ';' after expression."); yyclearin; yyerrok; ;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 215 "cj.y"
    { strcpy( err,"Conditional error."); yyclearin; yyerrok; ;}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 234 "cj.y"
    { strcpy( err,"Expected ';' after expression.");yyclearin; err_func(); yyerrok; ;}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 235 "cj.y"
    { strcpy( err,"Identifier not defined."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 236 "cj.y"
    { strcpy( err,"Expected ';' after expression."); yyclearin; err_func(); yyerrok; ;}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 237 "cj.y"
    { strcpy( err, "Identifier missing, expected '+','=','-','*','/','<','>','++','--' numeral, literal" ); yyclearin; err_func(); yyerrok; ;}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 238 "cj.y"
    { strcpy( err,"Loop/Conditional error _/_ Missing Operator _* // Braces error."); yyclearin; err_func(); yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 2417 "cj.tab.c"
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
#line 330 "cj.y"


#include <string.h>
#include <stdio.h>
#include "lex.yy.c"

char str[100];

void err_func() {
	printf( "\t\tExplicit Error \t: %s\n", err );
	memset( err, '\0', 100 );
}

void yyerror(char *s){
	printf( "File : %s\tLine : %d \t: %s before \" %s \"\n", str, yylineno, s, yytext);
	memset( err, '\0', 100 );
}

int main(int argc, char* argv[]) 
{
	int i;
	char* ext;
	
	strcpy( str, argv[1] );

	ext = strchr( str, '.' );
	i = (int)( ext - str );

	printf( "\n----+----+----+----+----+----+----\n" );
	if( str[i+1] == 'c' ) {
		printf( "\nRecognized file-type: C \n" );
		file_type = 0;
	} else if( str[i+1] == 'j' && str[i+2] == 'a' && str[i+3] == 'v' && str[i+4] == 'a' ){
		printf( "\nRecognized file-type: JAVA \n" );
		file_type = 1;		
	} else {
		printf("\n\".c\" or \".java\" type file not found cannot parse\n");
		return 0;
	}
	
	if( yyin = fopen( argv[1], "r" ) ) {
		;
	} else {
		printf( "File does not exist\n" );
		return 0;
	}
	printf( "\n----+----+----+----+----+----+----\n" );
	
	printf( "\nSyntax errors \n" );
	printf( "--------------\n" );

	yyparse();
	
	printf( "\nInput File\n" );
	printf( "--------------\n" );

	return 0;
}

