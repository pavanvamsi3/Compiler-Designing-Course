
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
#line 1 "c.y"



/* Line 189 of yacc.c  */
#line 77 "c.tab.c"

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
     HASH = 258,
     INCLUDE = 259,
     DEFINE = 260,
     IDENTIFIER = 261,
     CONSTANT = 262,
     STRING_LITERAL = 263,
     SIZEOF = 264,
     PTR_OP = 265,
     INC_OP = 266,
     DEC_OP = 267,
     LEFT_OP = 268,
     RIGHT_OP = 269,
     LE_OP = 270,
     GE_OP = 271,
     EQ_OP = 272,
     NE_OP = 273,
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
     TYPEDEF = 287,
     EXTERN = 288,
     STATIC = 289,
     AUTO = 290,
     REGISTER = 291,
     CHAR = 292,
     SHORT = 293,
     INT = 294,
     LONG = 295,
     SIGNED = 296,
     UNSIGNED = 297,
     FLOAT = 298,
     DOUBLE = 299,
     CONST = 300,
     VOLATILE = 301,
     VOID = 302,
     STRUCT = 303,
     UNION = 304,
     ENUM = 305,
     ELLIPSIS = 306,
     CASE = 307,
     DEFAULT = 308,
     IF = 309,
     ELSE = 310,
     SWITCH = 311,
     WHILE = 312,
     DO = 313,
     FOR = 314,
     GOTO = 315,
     CONTINUE = 316,
     BREAK = 317,
     RETURN = 318
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
#line 182 "c.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1366

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  89
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  69
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNRULES -- Number of states.  */
#define YYNSTATES  382

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   318

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    88,     2,     2,    77,    70,     2,
      64,    65,    71,    72,    69,    73,    68,    76,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    83,    85,
      78,    84,    79,    82,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    66,     2,    67,    80,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    86,    81,    87,    74,     2,     2,     2,
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
      55,    56,    57,    58,    59,    60,    61,    62,    63
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    70,    72,    74,    76,    78,    80,    82,
      87,    89,    93,    97,   101,   103,   107,   111,   113,   117,
     121,   123,   127,   131,   135,   139,   141,   145,   149,   151,
     155,   157,   161,   163,   167,   169,   173,   175,   179,   181,
     187,   189,   193,   195,   197,   199,   201,   203,   205,   207,
     209,   211,   213,   215,   217,   221,   223,   226,   230,   233,
     235,   238,   240,   243,   245,   248,   250,   254,   256,   260,
     262,   264,   266,   268,   270,   272,   274,   276,   278,   280,
     282,   284,   286,   288,   290,   292,   294,   300,   305,   308,
     310,   312,   314,   317,   321,   324,   327,   329,   332,   334,
     336,   340,   342,   345,   349,   354,   360,   363,   365,   369,
     371,   375,   377,   379,   382,   384,   386,   390,   395,   399,
     404,   409,   413,   415,   418,   421,   425,   427,   430,   432,
     436,   438,   442,   445,   448,   450,   452,   456,   458,   461,
     463,   465,   468,   472,   475,   479,   483,   488,   491,   495,
     499,   504,   506,   510,   515,   517,   521,   523,   525,   527,
     529,   531,   533,   537,   542,   546,   549,   553,   557,   562,
     564,   567,   569,   572,   574,   577,   580,   586,   594,   600,
     606,   614,   621,   629,   633,   636,   639,   642,   646,   649,
     652,   660,   666,   674,   680,   684,   685,   687,   689,   691,
     693,   696,   698,   700,   705,   709,   713
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     150,     0,    -1,     6,    -1,     7,    -1,     8,    -1,    64,
     109,    65,    -1,    90,    -1,    91,    66,   109,    67,    -1,
      91,    64,    65,    -1,    91,    64,    92,    65,    -1,    91,
      68,     6,    -1,    91,    10,     6,    -1,    91,    11,    -1,
      91,    12,    -1,   107,    -1,    92,    69,   107,    -1,    91,
      -1,    11,    93,    -1,    12,    93,    -1,    94,    95,    -1,
       9,    93,    -1,     9,    64,   136,    65,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,
      93,    -1,    64,   136,    65,    95,    -1,    95,    -1,    96,
      71,    95,    -1,    96,    76,    95,    -1,    96,    77,    95,
      -1,    96,    -1,    97,    72,    96,    -1,    97,    73,    96,
      -1,    97,    -1,    98,    13,    97,    -1,    98,    14,    97,
      -1,    98,    -1,    99,    78,    98,    -1,    99,    79,    98,
      -1,    99,    15,    98,    -1,    99,    16,    98,    -1,    99,
      -1,   100,    17,    99,    -1,   100,    18,    99,    -1,   100,
      -1,   101,    70,   100,    -1,   101,    -1,   102,    80,   101,
      -1,   102,    -1,   103,    81,   102,    -1,   103,    -1,   104,
      19,   103,    -1,   104,    -1,   105,    20,   104,    -1,   105,
      -1,   105,    82,   109,    83,   106,    -1,   106,    -1,    93,
     108,   107,    -1,    84,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    30,    -1,   107,    -1,   109,    69,   107,
      -1,   106,    -1,   112,    85,    -1,   112,   113,    85,    -1,
       1,    85,    -1,   115,    -1,   115,   112,    -1,   116,    -1,
     116,   112,    -1,   127,    -1,   127,   112,    -1,   114,    -1,
     113,    69,   114,    -1,   128,    -1,   128,    84,   139,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      47,    -1,    37,    -1,    38,    -1,    39,    -1,    40,    -1,
      43,    -1,    44,    -1,    41,    -1,    42,    -1,   117,    -1,
     124,    -1,    31,    -1,   118,     6,    86,   119,    87,    -1,
     118,    86,   119,    87,    -1,   118,     6,    -1,    48,    -1,
      49,    -1,   120,    -1,   119,   120,    -1,   121,   122,    85,
      -1,     1,    85,    -1,   116,   121,    -1,   116,    -1,   127,
     121,    -1,   127,    -1,   123,    -1,   122,    69,   123,    -1,
     128,    -1,    83,   110,    -1,   128,    83,   110,    -1,    50,
      86,   125,    87,    -1,    50,     6,    86,   125,    87,    -1,
      50,     6,    -1,   126,    -1,   125,    69,   126,    -1,     6,
      -1,     6,    84,   110,    -1,    45,    -1,    46,    -1,   130,
     129,    -1,   129,    -1,     6,    -1,    64,   128,    65,    -1,
     129,    66,   110,    67,    -1,   129,    66,    67,    -1,   129,
      64,   132,    65,    -1,   129,    64,   135,    65,    -1,   129,
      64,    65,    -1,    71,    -1,    71,   131,    -1,    71,   130,
      -1,    71,   131,   130,    -1,   127,    -1,   131,   127,    -1,
     133,    -1,   133,    69,    51,    -1,   134,    -1,   133,    69,
     134,    -1,   112,   128,    -1,   112,   137,    -1,   112,    -1,
       6,    -1,   135,    69,     6,    -1,   121,    -1,   121,   137,
      -1,   130,    -1,   138,    -1,   130,   138,    -1,    64,   137,
      65,    -1,    66,    67,    -1,    66,   110,    67,    -1,   138,
      66,    67,    -1,   138,    66,   110,    67,    -1,    64,    65,
      -1,    64,   132,    65,    -1,   138,    64,    65,    -1,   138,
      64,   132,    65,    -1,   107,    -1,    86,   140,    87,    -1,
      86,   140,    69,    87,    -1,   139,    -1,   140,    69,   139,
      -1,   142,    -1,   143,    -1,   146,    -1,   147,    -1,   148,
      -1,   149,    -1,     6,    83,   141,    -1,    52,   110,    83,
     141,    -1,    53,    83,   141,    -1,    86,    87,    -1,    86,
     145,    87,    -1,    86,   144,    87,    -1,    86,   144,   145,
      87,    -1,   111,    -1,   144,   111,    -1,   141,    -1,   145,
     141,    -1,    85,    -1,   109,    85,    -1,     1,    85,    -1,
      54,    64,   109,    65,   141,    -1,    54,    64,   109,    65,
     141,    55,   141,    -1,    56,    64,   109,    65,   141,    -1,
      57,    64,   109,    65,   141,    -1,    58,   141,    57,    64,
     109,    65,    85,    -1,    59,    64,   146,   146,    65,   141,
      -1,    59,    64,   146,   146,   109,    65,   141,    -1,    60,
       6,    85,    -1,    61,    85,    -1,    62,    85,    -1,    63,
      85,    -1,    63,   109,    85,    -1,   151,   155,    -1,   152,
     153,    -1,     3,     4,    78,     6,    68,     6,    79,    -1,
       3,     4,    78,     6,    79,    -1,     3,     4,    88,     6,
      68,     6,    79,    -1,     3,     4,    88,     6,    88,    -1,
       3,     5,   154,    -1,    -1,     6,    -1,     7,    -1,     8,
      -1,   156,    -1,   155,   156,    -1,   157,    -1,   111,    -1,
     112,   128,   144,   143,    -1,   112,   128,   143,    -1,   128,
     144,   143,    -1,   128,   143,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    20,    20,    21,    22,    23,    27,    28,    29,    30,
      31,    32,    33,    34,    38,    39,    43,    44,    45,    46,
      47,    48,    52,    53,    54,    55,    56,    57,    61,    62,
      66,    67,    68,    69,    73,    74,    75,    79,    80,    81,
      85,    86,    87,    88,    89,    93,    94,    95,    99,   100,
     104,   105,   109,   110,   114,   115,   119,   120,   124,   125,
     129,   130,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   148,   149,   153,   157,   158,   159,   163,
     164,   165,   166,   167,   168,   172,   173,   177,   178,   182,
     183,   184,   185,   186,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   205,   206,   207,   211,
     212,   216,   217,   221,   222,   226,   227,   228,   229,   233,
     234,   238,   239,   240,   244,   245,   246,   250,   251,   255,
     256,   260,   261,   265,   266,   270,   271,   272,   273,   274,
     275,   276,   280,   281,   282,   283,   287,   288,   293,   294,
     298,   299,   303,   304,   305,   309,   310,   314,   315,   319,
     320,   321,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   337,   338,   339,   343,   344,   348,   349,   350,   351,
     352,   353,   357,   358,   359,   363,   364,   365,   366,   370,
     371,   375,   376,   380,   381,   382,   386,   387,   388,   392,
     393,   394,   395,   399,   400,   401,   402,   403,   407,   410,
     413,   414,   415,   416,   420,   421,   425,   426,   427,   431,
     432,   436,   437,   441,   442,   443,   444
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "HASH", "INCLUDE", "DEFINE",
  "IDENTIFIER", "CONSTANT", "STRING_LITERAL", "SIZEOF", "PTR_OP", "INC_OP",
  "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP", "NE_OP",
  "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "TYPEDEF", "EXTERN", "STATIC",
  "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED",
  "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID", "STRUCT", "UNION",
  "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE",
  "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['",
  "']'", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "';'", "'{'",
  "'}'", "'\"'", "$accept", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "and_expression", "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "struct_or_union_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "begin", "preprocessor_directive",
  "include_statements", "define_statements", "define_value",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    40,    41,    91,    93,    46,    44,
      38,    42,    43,    45,   126,    33,    47,    37,    60,    62,
      94,   124,    63,    58,    61,    59,   123,   125,    34
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      91,    91,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    94,    94,    94,    94,    94,    94,    95,    95,
      96,    96,    96,    96,    97,    97,    97,    98,    98,    98,
      99,    99,    99,    99,    99,   100,   100,   100,   101,   101,
     102,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   107,   108,   108,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   109,   109,   110,   111,   111,   111,   112,
     112,   112,   112,   112,   112,   113,   113,   114,   114,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   116,   116,   116,   116,   116,   117,   117,   117,   118,
     118,   119,   119,   120,   120,   121,   121,   121,   121,   122,
     122,   123,   123,   123,   124,   124,   124,   125,   125,   126,
     126,   127,   127,   128,   128,   129,   129,   129,   129,   129,
     129,   129,   130,   130,   130,   130,   131,   131,   132,   132,
     133,   133,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   139,   139,   139,   140,   140,   141,   141,   141,   141,
     141,   141,   142,   142,   142,   143,   143,   143,   143,   144,
     144,   145,   145,   146,   146,   146,   147,   147,   147,   148,
     148,   148,   148,   149,   149,   149,   149,   149,   150,   151,
     152,   152,   152,   152,   153,   153,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   157,   157
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     1,     1,     1,     1,     1,     1,     1,     4,
       1,     3,     3,     3,     1,     3,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     2,     3,     2,     1,
       2,     1,     2,     1,     2,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     5,     4,     2,     1,
       1,     1,     2,     3,     2,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     3,     4,     3,     4,
       4,     3,     1,     2,     2,     3,     1,     2,     1,     3,
       1,     3,     2,     2,     1,     1,     3,     1,     2,     1,
       1,     2,     3,     2,     3,     3,     4,     2,     3,     3,
       4,     1,     3,     4,     1,     3,     1,     1,     1,     1,
       1,     1,     3,     4,     3,     2,     3,     3,     4,     1,
       2,     1,     2,     1,     2,     2,     5,     7,     5,     5,
       7,     6,     7,     3,     2,     2,     2,     3,     2,     2,
       7,     5,     7,     5,     3,     0,     1,     1,     1,     1,
       2,     1,     1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,   215,     0,     1,     0,   135,   105,
      89,    90,    91,    92,    93,    95,    96,    97,    98,   101,
     102,    99,   100,   131,   132,    94,   109,   110,     0,     0,
     142,   222,     0,    79,    81,   103,     0,   104,    83,     0,
     134,     0,     0,   219,   221,     0,   209,     0,     0,    78,
     126,     0,     0,   146,   144,   143,    76,     0,    85,     0,
      80,    82,   108,     0,    84,     0,   189,     0,   226,     0,
       0,     0,   133,   220,     0,     0,     0,     0,   129,     0,
     127,   136,   147,   145,     0,    77,     0,   224,     0,     0,
       0,   116,     0,   111,     0,   118,     0,     2,     3,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,   193,   185,     6,    16,    28,     0,    30,    34,    37,
      40,    45,    48,    50,    52,    54,    56,    58,    60,    73,
       0,   191,   176,   177,     0,     0,   178,   179,   180,   181,
      87,   190,   225,   155,   141,   154,     0,   148,   150,     0,
       2,   138,    28,    75,     0,   216,   217,   218,   214,     0,
     211,     0,   213,     0,     0,     0,   124,    86,     0,   171,
      88,   223,     0,   114,   115,   107,   112,     0,     0,   119,
     121,   117,    78,     0,     0,    20,     0,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   204,   205,
     206,     0,     0,   157,     0,     0,    12,    13,     0,     0,
       0,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    62,     0,    19,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,   187,     0,   186,   192,     0,
       0,   152,   159,   153,   160,   139,     0,   140,     0,   137,
       0,     0,   125,   130,   128,   174,     0,   106,   122,     0,
     113,     0,   182,     0,     0,   184,     0,     0,     0,   195,
       0,     0,   203,   207,     5,     0,   159,   158,     0,    11,
       8,     0,    14,     0,    10,    61,    31,    32,    33,    35,
      36,    38,    39,    43,    44,    41,    42,    46,    47,    49,
      51,    53,    55,    57,     0,    74,   188,   167,     0,     0,
     163,     0,   161,     0,     0,   149,   151,   156,   210,   212,
       0,   172,   120,   123,    21,   183,     0,     0,     0,     0,
       0,    29,     9,     0,     7,     0,   168,   162,   164,   169,
       0,   165,     0,   173,   175,   196,   198,   199,     0,     0,
       0,    15,    59,   170,   166,     0,     0,   201,     0,   197,
     200,   202
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,   123,   124,   301,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   232,
     140,   164,    66,    67,    57,    58,    33,    34,    35,    36,
      92,    93,    94,   188,   189,    37,    79,    80,    38,    39,
      40,    41,    55,   328,   157,   158,   159,   214,   329,   264,
     180,   276,   141,   142,   143,    69,   145,   146,   147,   148,
     149,     2,     3,     4,    46,   168,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -248
static const yytype_int16 yypact[] =
{
      23,    51,   110,   894,   151,    -2,  -248,    72,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,    -1,    31,
       0,  -248,     6,  1316,  1316,  -248,     2,  -248,  1316,   702,
      99,    58,   844,  -248,  -248,   199,  -248,   220,   256,  -248,
      78,   260,   207,  -248,  -248,     0,  -248,    36,  -248,   646,
    -248,  -248,   187,  1199,  -248,   300,  -248,     6,  -248,   702,
    1170,   652,    99,  -248,   129,    64,   -35,   260,   191,    -9,
    -248,  -248,  -248,  -248,    31,  -248,   768,  -248,   702,  1199,
     192,   279,   446,  -248,    18,   279,   194,   193,  -248,  -248,
    1054,  1066,  1066,  1079,   198,   218,   219,   221,   582,   223,
     278,   208,   209,   785,   939,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  -248,  -248,   139,   206,  1079,  -248,    85,   176,
     158,    47,   128,   226,   211,   216,   280,    12,  -248,  -248,
      70,  -248,  -248,  -248,   382,   464,  -248,  -248,  -248,  -248,
     214,  -248,  -248,  -248,  -248,    52,   235,   233,  -248,   101,
    -248,  -248,  -248,  -248,   236,  -248,  -248,  -248,  -248,   298,
    -248,   299,  -248,    -4,  1079,   260,  -248,  -248,   768,  -248,
    -248,  -248,   564,  -248,  -248,  -248,  -248,  1079,    73,  -248,
     230,  -248,  -248,   582,   939,  -248,  1079,  -248,  -248,   231,
     582,  1079,  1079,  1079,   266,   258,   698,   270,  -248,  -248,
    -248,    75,   132,   -37,   301,   359,  -248,  -248,   955,  1079,
     361,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,  -248,
    -248,  -248,  1079,  -248,  1079,  1079,  1079,  1079,  1079,  1079,
    1079,  1079,  1079,  1079,  1079,  1079,  1079,  1079,  1079,  1079,
    1079,  1079,  1079,  1079,  -248,  -248,   500,  -248,  -248,  1125,
     984,  -248,    53,  -248,   159,  -248,  1295,  -248,   362,  -248,
     290,   297,  -248,  -248,  -248,  -248,    65,  -248,  -248,    18,
    -248,  1079,  -248,   312,   582,  -248,   133,   141,   143,  -248,
     314,   698,  -248,  -248,  -248,  1219,   173,  -248,  1079,  -248,
    -248,   144,  -248,   174,  -248,  -248,  -248,  -248,  -248,    85,
      85,   176,   176,   158,   158,   158,   158,    47,    47,   128,
     226,   211,   216,   280,    -8,  -248,  -248,  -248,   315,   316,
    -248,   317,   159,  1260,  1025,  -248,  -248,  -248,  -248,  -248,
     747,  -248,  -248,  -248,  -248,  -248,   582,   582,   582,  1079,
    1038,  -248,  -248,  1079,  -248,  1079,  -248,  -248,  -248,  -248,
     327,  -248,   328,  -248,  -248,   324,  -248,  -248,   150,   582,
     153,  -248,  -248,  -248,  -248,   582,   311,  -248,   582,  -248,
    -248,  -248
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -248,  -248,  -248,  -248,   -60,  -248,  -106,   -21,    21,    10,
      25,   135,   149,   152,   148,   154,  -248,   -67,   -85,  -248,
    -104,   -87,    15,    -3,  -248,   318,  -248,   -41,  -248,  -248,
     310,   -86,   -70,  -248,   121,  -248,   326,   229,    17,   -15,
     -38,   -17,  -248,   -68,  -248,   140,  -248,   213,  -132,  -247,
    -171,  -248,   -89,  -248,   181,     9,   264,  -178,  -248,  -248,
    -248,  -248,  -248,  -248,  -248,  -248,  -248,   367,  -248
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -209
static const yytype_int16 yytable[] =
{
      32,   179,   156,    72,   163,    50,   186,   275,    62,   211,
     212,   162,     8,    54,    52,   332,   199,    59,    31,   205,
     233,   184,    91,   263,     8,   191,     1,   295,   291,   260,
      60,    61,   251,   171,    30,    64,   163,     8,    83,    32,
     195,   197,   198,   162,   213,    23,    24,    53,    91,   332,
      91,    91,   150,   172,    91,     5,   258,    31,     8,     8,
     175,   253,   241,   242,     8,   175,   162,   155,    88,   150,
      29,    30,    82,    91,   144,   355,    47,    30,   176,   190,
      95,   297,    29,   272,   151,    51,    48,   273,    63,    30,
     212,    56,   212,   179,   252,    29,   186,   286,   287,   288,
     278,   187,    30,   151,   282,    84,    95,   163,    95,    95,
       6,   285,    95,   350,   162,   303,   259,   259,   260,   260,
     163,    85,    29,    30,   213,   243,   244,   162,   306,   307,
     308,    95,   169,   302,   340,   165,   166,   167,   262,   253,
     261,    91,   279,   170,   253,   245,   246,   305,   324,   215,
     216,   217,   341,    91,    45,   254,   234,    49,   280,   151,
     293,   235,   236,    70,    77,    71,   267,   258,   325,   364,
     268,   239,   240,   331,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   351,   163,   343,   345,   296,   294,   346,    95,
     162,   253,   253,   218,    74,   219,   347,   220,   348,   352,
     253,    95,   253,   353,   163,   376,   309,   310,   378,   253,
      68,   162,   253,   333,    72,   334,    75,   221,   222,   223,
     224,   225,   226,   227,   228,   229,   230,   295,   162,   260,
      87,   354,   262,   253,    52,   368,   370,   362,   237,   238,
     152,   313,   314,   315,   316,   179,   155,   365,   366,   367,
     311,   312,    76,   155,   190,   360,    78,   163,   371,   181,
     317,   318,    81,    89,   162,   174,   193,   183,   296,   192,
     377,   200,   201,   202,   207,   203,   379,   206,   372,   381,
     231,   248,   155,   208,   209,   162,   247,   249,    86,   250,
     265,    96,   266,   269,   270,   271,    97,    98,    99,   100,
       9,   101,   102,   281,   284,   290,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     155,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,   289,   103,   104,   105,   292,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   299,   298,   304,   337,   338,
     115,   116,   117,   118,   119,   120,   339,   344,   349,   375,
     356,   357,   319,    96,   358,   121,    65,   122,    97,    98,
      99,   100,   373,   101,   102,   374,   380,   320,   322,   182,
     342,   321,   177,   173,   274,   323,   336,   283,   256,    73,
       0,     0,     0,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,     0,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,    90,     0,     0,
       0,     0,   115,   116,   117,   118,   119,   120,     0,     0,
       0,     0,     0,     0,     0,   204,     0,   121,    65,   255,
      97,    98,    99,   100,     0,   101,   102,     9,     0,     0,
       0,     0,     0,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,     0,
       0,   204,     0,     0,     0,     0,    97,    98,    99,   100,
       0,   101,   102,     0,     0,     0,   103,   104,   105,     0,
     106,   107,   108,   109,   110,   111,   112,   113,   114,     0,
       0,     0,     0,   185,   115,   116,   117,   118,   119,   120,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
      65,   257,   103,   104,   105,     0,   106,   107,   108,   109,
     110,   111,   112,   113,   114,    90,     0,     0,     0,     0,
     115,   116,   117,   118,   119,   120,     0,     0,     0,     0,
       0,     0,     0,   204,     0,   121,    65,   326,    97,    98,
      99,   100,     0,   101,   102,     9,     0,     0,     0,     0,
       0,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   103,   104,   105,     0,   106,   107,
     108,   109,   110,   111,   112,   113,   114,     7,     0,     0,
       0,   277,   115,   116,   117,   118,   119,   120,   160,    98,
      99,   100,     0,   101,   102,     0,     0,   121,    65,     0,
       0,     0,     0,     0,     0,     0,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,     0,     0,   204,
       0,     0,     0,     7,   160,    98,    99,   100,     0,   101,
     102,     0,     0,     0,     0,   -87,   114,     0,     0,   161,
       0,     0,   115,   116,   117,   118,   119,   120,     0,     0,
      86,   -87,    65,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,   160,    98,    99,   100,     0,   101,   102,
       0,     0,   114,     0,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,   160,    98,    99,   100,     0,   101,
     102,     0,     0,   121,     0,     0,     0,     0,    65,     0,
       0,   160,    98,    99,   100,     0,   101,   102,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   114,     0,     0,     0,     0,     0,   115,   116,   117,
     118,   119,   120,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   114,   178,   363,     0,     0,     0,   115,   116,
     117,   118,   119,   120,  -208,     7,     0,     0,     0,   114,
       8,     0,     0,     0,   178,   115,   116,   117,   118,   119,
     120,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     210,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,     7,     0,     0,     0,     0,
       8,     0,     0,     0,     0,     0,     0,     0,    29,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   160,    98,    99,   100,     0,
     101,   102,     0,     0,     0,     0,     0,     0,    29,     0,
       0,   160,    98,    99,   100,    30,   101,   102,     0,     0,
       9,     0,     0,     0,     0,     0,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
     160,    98,    99,   100,     0,   101,   102,     0,     0,     0,
       0,     0,     0,   114,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,   120,     0,     0,     0,     0,   114,
     300,     0,     0,     0,     0,   115,   116,   117,   118,   119,
     120,   160,    98,    99,   100,     0,   101,   102,     0,     0,
       0,     0,     0,     0,   160,    98,    99,   100,   114,   101,
     102,   330,     0,     0,   115,   116,   117,   118,   119,   120,
     160,    98,    99,   100,     0,   101,   102,     0,     0,     0,
       0,     0,   160,    98,    99,   100,     0,   101,   102,     0,
       0,     0,     0,     0,     0,   160,    98,    99,   100,   114,
     101,   102,   361,     0,     0,   115,   116,   117,   118,   119,
     120,     0,   114,   369,     0,     0,     0,     0,   115,   116,
     117,   118,   119,   120,     0,     0,     0,     0,   194,     0,
       0,     0,     0,     0,   115,   116,   117,   118,   119,   120,
     196,     8,     0,     0,     0,     0,   115,   116,   117,   118,
     119,   120,     0,   114,     0,     0,     0,     0,     0,   115,
     116,   117,   118,   119,   120,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   259,
     327,   260,     0,     0,     0,     0,    30,     0,     0,     0,
      90,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       9,     0,     0,     0,     0,   154,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   295,   327,   260,     0,     0,     0,     0,
      30,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   359,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,   335,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28
};

static const yytype_int16 yycheck[] =
{
       3,    86,    70,    41,    71,     6,    92,   178,     6,   113,
     114,    71,     6,    30,    29,   262,   103,    32,     3,   108,
     126,    91,    63,   155,     6,    95,     3,    64,   206,    66,
      33,    34,    20,    68,    71,    38,   103,     6,    55,    42,
     100,   101,   102,   103,   114,    45,    46,    30,    89,   296,
      91,    92,    67,    88,    95,     4,   145,    42,     6,     6,
      69,    69,    15,    16,     6,    69,   126,    70,    59,    84,
      64,    71,    55,   114,    65,    83,    78,    71,    87,    94,
      63,   213,    64,    87,    69,    86,    88,   174,    86,    71,
     194,    85,   196,   178,    82,    64,   182,   201,   202,   203,
     187,    83,    71,    88,   193,    69,    89,   174,    91,    92,
       0,   200,    95,   291,   174,   219,    64,    64,    66,    66,
     187,    85,    64,    71,   194,    78,    79,   187,   234,   235,
     236,   114,    68,   218,    69,     6,     7,     8,   155,    69,
     155,   182,    69,    79,    69,    17,    18,   232,   252,    10,
      11,    12,    87,   194,     3,    85,    71,    85,    85,   144,
      85,    76,    77,    64,    86,    66,    65,   256,   253,   340,
      69,    13,    14,   260,   234,   235,   236,   237,   238,   239,
     240,   241,   242,   243,   244,   245,   246,   247,   248,   249,
     250,   251,   298,   260,   281,   284,   213,    65,    65,   182,
     260,    69,    69,    64,     5,    66,    65,    68,    65,    65,
      69,   194,    69,    69,   281,    65,   237,   238,    65,    69,
      39,   281,    69,    64,   262,    66,     6,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    64,   298,    66,
      59,    67,   259,    69,   259,   349,   350,   334,    72,    73,
      69,   241,   242,   243,   244,   340,   259,   346,   347,   348,
     239,   240,     6,   266,   279,   333,     6,   334,   353,    88,
     245,   246,    65,    86,   334,    84,    83,    85,   295,    85,
     369,    83,    64,    64,     6,    64,   375,    64,   355,   378,
      84,    80,   295,    85,    85,   355,    70,    81,    84,    19,
      65,     1,    69,    67,     6,     6,     6,     7,     8,     9,
      31,    11,    12,    83,    83,    57,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     333,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    85,    52,    53,    54,    85,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     6,    65,     6,     6,    79,
      70,    71,    72,    73,    74,    75,    79,    65,    64,    55,
      65,    65,   247,     1,    67,    85,    86,    87,     6,     7,
       8,     9,    65,    11,    12,    67,    85,   248,   250,    89,
     279,   249,    84,    77,   175,   251,   266,   194,   144,    42,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,    -1,    -1,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     1,    -1,    85,    86,    87,
       6,     7,     8,     9,    -1,    11,    12,    31,    -1,    -1,
      -1,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,    -1,
      -1,     1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,
      -1,    11,    12,    -1,    -1,    -1,    52,    53,    54,    -1,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    -1,
      -1,    -1,    -1,    87,    70,    71,    72,    73,    74,    75,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    52,    53,    54,    -1,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     1,    -1,    -1,    -1,    -1,
      70,    71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     1,    -1,    85,    86,    87,     6,     7,
       8,     9,    -1,    11,    12,    31,    -1,    -1,    -1,    -1,
      -1,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    52,    53,    54,    -1,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     1,    -1,    -1,
      -1,    87,    70,    71,    72,    73,    74,    75,     6,     7,
       8,     9,    -1,    11,    12,    -1,    -1,    85,    86,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    -1,     1,
      -1,    -1,    -1,     1,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    -1,    -1,    69,    64,    -1,    -1,    67,
      -1,    -1,    70,    71,    72,    73,    74,    75,    -1,    -1,
      84,    85,    86,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,     6,     7,     8,     9,    -1,    11,    12,
      -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,     6,     7,     8,     9,    -1,    11,
      12,    -1,    -1,    85,    -1,    -1,    -1,    -1,    86,    -1,
      -1,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      73,    74,    75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    64,    86,    87,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,     0,     1,    -1,    -1,    -1,    64,
       6,    -1,    -1,    -1,    86,    70,    71,    72,    73,    74,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     1,    -1,    -1,    -1,    -1,
       6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     6,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    64,    -1,
      -1,     6,     7,     8,     9,    71,    11,    12,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    -1,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,    -1,    -1,    -1,    64,
      65,    -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,
      75,     6,     7,     8,     9,    -1,    11,    12,    -1,    -1,
      -1,    -1,    -1,    -1,     6,     7,     8,     9,    64,    11,
      12,    67,    -1,    -1,    70,    71,    72,    73,    74,    75,
       6,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    -1,     6,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,     6,     7,     8,     9,    64,
      11,    12,    67,    -1,    -1,    70,    71,    72,    73,    74,
      75,    -1,    64,    65,    -1,    -1,    -1,    -1,    70,    71,
      72,    73,    74,    75,    -1,    -1,    -1,    -1,    64,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    73,    74,    75,
      64,     6,    -1,    -1,    -1,    -1,    70,    71,    72,    73,
      74,    75,    -1,    64,    -1,    -1,    -1,    -1,    -1,    70,
      71,    72,    73,    74,    75,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    64,
      65,    66,    -1,    -1,    -1,    -1,    71,    -1,    -1,    -1,
       1,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    -1,    -1,    65,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    64,    65,    66,    -1,    -1,    -1,    -1,
      71,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    65,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,   150,   151,   152,     4,     0,     1,     6,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    64,
      71,   111,   112,   115,   116,   117,   118,   124,   127,   128,
     129,   130,   155,   156,   157,     3,   153,    78,    88,    85,
       6,    86,   128,   127,   130,   131,    85,   113,   114,   128,
     112,   112,     6,    86,   112,    86,   111,   112,   143,   144,
      64,    66,   129,   156,     5,     6,     6,    86,     6,   125,
     126,    65,   127,   130,    69,    85,    84,   143,   144,    86,
       1,   116,   119,   120,   121,   127,     1,     6,     7,     8,
       9,    11,    12,    52,    53,    54,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    70,    71,    72,    73,    74,
      75,    85,    87,    90,    91,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     109,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     128,   111,   143,     6,    65,   112,   132,   133,   134,   135,
       6,    67,    93,   106,   110,     6,     7,     8,   154,    68,
      79,    68,    88,   125,    84,    69,    87,   114,    86,   107,
     139,   143,   119,    85,   121,    87,   120,    83,   122,   123,
     128,   121,    85,    83,    64,    93,    64,    93,    93,   110,
      83,    64,    64,    64,     1,   141,    64,     6,    85,    85,
      85,   109,   109,   121,   136,    10,    11,    12,    64,    66,
      68,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    84,   108,    95,    71,    76,    77,    72,    73,    13,
      14,    15,    16,    78,    79,    17,    18,    70,    80,    81,
      19,    20,    82,    69,    85,    87,   145,    87,   141,    64,
      66,   128,   130,   137,   138,    65,    69,    65,    69,    67,
       6,     6,    87,   110,   126,   139,   140,    87,   110,    69,
      85,    83,   141,   136,    83,   141,   109,   109,   109,    85,
      57,   146,    85,    85,    65,    64,   130,   137,    65,     6,
      65,    92,   107,   109,     6,   107,    95,    95,    95,    96,
      96,    97,    97,    98,    98,    98,    98,    99,    99,   100,
     101,   102,   103,   104,   109,   107,    87,    65,   132,   137,
      67,   110,   138,    64,    66,    51,   134,     6,    79,    79,
      69,    87,   123,   110,    65,   141,    65,    65,    65,    64,
     146,    95,    65,    69,    67,    83,    65,    65,    67,    65,
     132,    67,   110,    87,   139,   141,   141,   141,   109,    65,
     109,   107,   106,    65,    67,    55,    65,   141,    65,   141,
      85,   141
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
        case 78:

/* Line 1455 of yacc.c  */
#line 159 "c.y"
    { yyerrok; ;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 222 "c.y"
    { yyerrok; ;}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 382 "c.y"
    { yyerrok; ;}
    break;



/* Line 1455 of yacc.c  */
#line 1984 "c.tab.c"
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
#line 447 "c.y"

#include <stdio.h>

int main()
{
	yyparse();
	return 0;
}

