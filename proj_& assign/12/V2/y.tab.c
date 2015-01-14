
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
     ENDWHILE = 273,
     REPEAT = 274,
     UNTIL = 275,
     TO = 276,
     ASSIGN_OP = 277,
     END = 278,
     START = 279,
     TYPE_NAME = 280,
     CONST = 281,
     STATIC = 282,
     STRUCT = 283,
     UNION = 284,
     ELLIPSIS = 285,
     CASE = 286,
     DEFAULT = 287,
     IF = 288,
     ELSE = 289,
     SWITCH = 290,
     WHILE = 291,
     FOR = 292,
     GOTO = 293,
     CONTINUE = 294,
     BREAK = 295,
     RETURN = 296
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
#define END 278
#define START 279
#define TYPE_NAME 280
#define CONST 281
#define STATIC 282
#define STRUCT 283
#define UNION 284
#define ELLIPSIS 285
#define CASE 286
#define DEFAULT 287
#define IF 288
#define ELSE 289
#define SWITCH 290
#define WHILE 291
#define FOR 292
#define GOTO 293
#define CONTINUE 294
#define BREAK 295
#define RETURN 296




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 197 "y.tab.c"

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   996

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  64
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  59
/* YYNRULES -- Number of rules.  */
#define YYNRULES  174
/* YYNRULES -- Number of states.  */
#define YYNSTATES  312

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   296

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,     2,     2,    52,    48,     2,
      42,    43,    50,    53,    47,    54,    46,    51,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    61,
      55,     2,    56,    59,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,    57,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,    58,    63,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41
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
     189,   193,   195,   198,   202,   204,   207,   209,   212,   214,
     216,   220,   222,   226,   227,   229,   235,   240,   243,   245,
     247,   249,   252,   256,   259,   261,   263,   265,   269,   271,
     274,   278,   281,   283,   285,   289,   294,   298,   303,   308,
     312,   314,   317,   319,   323,   325,   329,   332,   335,   337,
     339,   343,   345,   348,   350,   352,   355,   359,   362,   366,
     370,   375,   378,   382,   386,   391,   393,   397,   402,   404,
     408,   410,   412,   414,   416,   418,   420,   424,   429,   433,
     436,   440,   444,   449,   452,   456,   460,   465,   467,   470,
     472,   475,   477,   480,   486,   494,   500,   505,   511,   519,
     526,   534,   540,   544,   547,   550,   553,   557,   559,   562,
     564,   566,   571,   575,   579
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     120,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    42,
      84,    43,    -1,    65,    -1,    66,    44,    84,    45,    -1,
      66,    42,    43,    -1,    66,    42,    67,    43,    -1,    66,
      46,     3,    -1,    66,     7,     3,    -1,    66,     8,    -1,
      66,     9,    -1,    82,    -1,    67,    47,    82,    -1,    66,
      -1,     8,    68,    -1,     9,    68,    -1,    69,    68,    -1,
       6,    68,    -1,     6,    42,   106,    43,    -1,    48,    -1,
      49,    -1,    68,    -1,    42,   106,    43,    70,    -1,    70,
      -1,    71,    50,    70,    -1,    71,    51,    70,    -1,    71,
      52,    70,    -1,    71,    -1,    72,    53,    71,    -1,    72,
      54,    71,    -1,    72,    -1,    73,    10,    72,    -1,    73,
      11,    72,    -1,    73,    -1,    74,    55,    73,    -1,    74,
      56,    73,    -1,    74,    12,    73,    -1,    74,    13,    73,
      -1,    74,    -1,    75,    14,    74,    -1,    75,    15,    74,
      -1,    75,    -1,    76,    48,    75,    -1,    76,    -1,    77,
      57,    76,    -1,    77,    -1,    78,    58,    77,    -1,    78,
      -1,    79,    16,    78,    -1,    79,    -1,    80,    17,    79,
      -1,    80,    -1,    80,    59,    84,    60,    81,    -1,    81,
      -1,    68,    83,    82,    -1,    22,    -1,    82,    -1,    84,
      47,    82,    -1,    81,    -1,    87,    61,    -1,    87,    88,
      61,    -1,    90,    -1,    90,    87,    -1,    91,    -1,    91,
      87,    -1,    87,    -1,    89,    -1,    88,    47,    89,    -1,
      99,    -1,    99,    22,   109,    -1,    -1,    92,    -1,    93,
       3,    62,    94,    63,    -1,    93,    62,    94,    63,    -1,
      93,     3,    -1,    28,    -1,    29,    -1,    95,    -1,    94,
      95,    -1,    96,    97,    61,    -1,    91,    96,    -1,    91,
      -1,    96,    -1,    98,    -1,    97,    47,    98,    -1,    99,
      -1,    60,    85,    -1,    99,    60,    85,    -1,   101,   100,
      -1,   100,    -1,     3,    -1,    42,    99,    43,    -1,   100,
      44,    85,    45,    -1,   100,    44,    45,    -1,   100,    42,
     102,    43,    -1,   100,    42,   105,    43,    -1,   100,    42,
      43,    -1,    50,    -1,    50,   101,    -1,   103,    -1,   103,
      47,    30,    -1,   104,    -1,   103,    47,   104,    -1,    87,
      99,    -1,    87,   107,    -1,    87,    -1,     3,    -1,   105,
      47,     3,    -1,    96,    -1,    96,   107,    -1,   101,    -1,
     108,    -1,   101,   108,    -1,    42,   107,    43,    -1,    44,
      45,    -1,    44,    85,    45,    -1,   108,    44,    45,    -1,
     108,    44,    85,    45,    -1,    42,    43,    -1,    42,   102,
      43,    -1,   108,    42,    43,    -1,   108,    42,   102,    43,
      -1,    82,    -1,    62,   110,    63,    -1,    62,   110,    47,
      63,    -1,   109,    -1,   110,    47,   109,    -1,   112,    -1,
     113,    -1,   116,    -1,   117,    -1,   118,    -1,   119,    -1,
       3,    60,   111,    -1,    31,    85,    60,   111,    -1,    32,
      60,   111,    -1,    24,    23,    -1,    24,   115,    23,    -1,
      24,   114,    23,    -1,    24,   114,   115,    23,    -1,    62,
      63,    -1,    62,   115,    63,    -1,    62,   114,    63,    -1,
      62,   114,   115,    63,    -1,    86,    -1,   114,    86,    -1,
     111,    -1,   115,   111,    -1,    61,    -1,    84,    61,    -1,
      33,    42,    84,    43,   111,    -1,    33,    42,    84,    43,
     111,    34,   111,    -1,    35,    42,    84,    43,   111,    -1,
      36,    84,   111,    18,    -1,    36,    42,    84,    43,   111,
      -1,    19,   111,    20,    42,    84,    43,    61,    -1,    37,
      42,   116,   116,    43,   111,    -1,    37,    42,   116,   116,
      84,    43,   111,    -1,    37,    82,    21,    65,   111,    -1,
      38,     3,    61,    -1,    39,    61,    -1,    40,    61,    -1,
      41,    61,    -1,    41,    84,    61,    -1,   121,    -1,   120,
     121,    -1,   122,    -1,    86,    -1,    87,    99,   114,   113,
      -1,    87,    99,   113,    -1,    99,   114,   113,    -1,    99,
     113,    -1
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
     130,   134,   138,   139,   143,   144,   145,   146,   147,   151,
     152,   156,   157,   160,   164,   167,   168,   169,   173,   174,
     178,   179,   183,   187,   188,   189,   193,   194,   198,   199,
     200,   204,   205,   209,   210,   211,   212,   213,   214,   215,
     219,   220,   225,   226,   230,   231,   235,   236,   237,   241,
     242,   246,   247,   251,   252,   253,   257,   258,   259,   260,
     261,   262,   263,   264,   265,   269,   270,   271,   275,   276,
     280,   281,   282,   283,   284,   285,   289,   290,   291,   295,
     296,   297,   298,   299,   300,   301,   302,   306,   307,   311,
     312,   316,   317,   321,   322,   323,   327,   328,   329,   330,
     331,   332,   336,   337,   338,   339,   340,   344,   345,   349,
     350,   354,   355,   356,   357
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
  "ENDWHILE", "REPEAT", "UNTIL", "TO", "ASSIGN_OP", "END", "START",
  "TYPE_NAME", "CONST", "STATIC", "STRUCT", "UNION", "ELLIPSIS", "CASE",
  "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "FOR", "GOTO", "CONTINUE",
  "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','", "'&'",
  "'!'", "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'^'", "'|'",
  "'?'", "':'", "';'", "'{'", "'}'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list", "unary_expression",
  "unary_operator", "cast_expression", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "expression",
  "constant_expression", "declaration", "declaration_specifiers",
  "init_declarator_list", "init_declarator", "storage_class_specifier",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
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
     295,   296,    40,    41,    91,    93,    46,    44,    38,    33,
      42,    47,    37,    43,    45,    60,    62,    94,   124,    63,
      58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    64,    65,    65,    65,    65,    66,    66,    66,    66,
      66,    66,    66,    66,    67,    67,    68,    68,    68,    68,
      68,    68,    69,    69,    70,    70,    71,    71,    71,    71,
      72,    72,    72,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    75,    76,    76,    77,    77,    78,    78,
      79,    79,    80,    80,    81,    81,    82,    82,    83,    84,
      84,    85,    86,    86,    87,    87,    87,    87,    87,    88,
      88,    89,    89,    90,    91,    92,    92,    92,    93,    93,
      94,    94,    95,    96,    96,    96,    97,    97,    98,    98,
      98,    99,    99,   100,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   104,   104,   104,   105,
     105,   106,   106,   107,   107,   107,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   109,   109,   109,   110,   110,
     111,   111,   111,   111,   111,   111,   112,   112,   112,   113,
     113,   113,   113,   113,   113,   113,   113,   114,   114,   115,
     115,   116,   116,   117,   117,   117,   118,   118,   118,   118,
     118,   118,   119,   119,   119,   119,   119,   120,   120,   121,
     121,   122,   122,   122,   122
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
       3,     1,     2,     3,     1,     2,     1,     2,     1,     1,
       3,     1,     3,     0,     1,     5,     4,     2,     1,     1,
       1,     2,     3,     2,     1,     1,     1,     3,     1,     2,
       3,     2,     1,     1,     3,     4,     3,     4,     4,     3,
       1,     2,     1,     3,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     2,     1,
       2,     1,     2,     5,     7,     5,     4,     5,     7,     6,
       7,     5,     3,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      73,    93,    78,    79,     0,   100,   170,     0,    64,    66,
      74,     0,    73,    92,     0,    73,   167,   169,     0,   101,
      62,     0,    69,    73,    65,    67,    77,     0,    73,    73,
     147,     0,   174,    73,    73,     0,    91,     1,   168,    94,
       0,    63,     0,   172,    73,     0,    84,     0,    80,     0,
       2,     3,     4,     0,     0,     0,     0,   139,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    22,
      23,   151,     6,    16,    24,     0,    26,    30,    33,    36,
      41,    44,    46,    48,    50,    52,    54,    56,    59,     0,
     149,   130,   131,    73,     0,   132,   133,   134,   135,   143,
      73,     0,    71,   148,   173,   109,    99,    68,     0,   102,
     104,     0,     2,    96,    24,    61,     0,    70,     0,   125,
      72,   171,     0,    83,    76,    81,     0,     0,    86,    88,
       0,     0,    20,     0,    17,    18,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   163,   164,   165,     0,
       0,    85,     0,     0,    12,    13,     0,     0,     0,    58,
       0,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   152,   141,     0,   140,   150,   145,     0,   144,
      73,     0,   106,   113,   107,   114,    97,    73,    98,     0,
      95,   128,     0,    75,    89,     0,    82,     0,   136,     0,
       0,     0,   138,     0,     0,     0,     0,     0,     0,     0,
     162,   166,     5,    73,   113,   112,     0,    11,     8,     0,
      14,     0,    10,    57,    27,    28,    29,    31,    32,    34,
      35,    39,    40,    37,    38,    42,    43,    45,    47,    49,
      51,    53,     0,    60,   142,   146,   121,     0,     0,   117,
       0,   115,    73,     0,   103,   105,   110,     0,   126,    87,
      90,    21,     0,   137,     0,     0,     5,   156,     0,     0,
      25,     9,     0,     7,     0,   122,   116,   118,   123,     0,
     119,     0,   127,   129,     0,   153,   155,   157,     0,     0,
     161,    15,    55,   124,   120,     0,     0,   159,     0,   158,
     154,   160
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    72,    73,   229,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,   160,
      89,   116,    30,    31,    21,    22,     8,     9,    10,    11,
      47,    48,    49,   127,   128,    12,    13,    14,   257,   109,
     110,   111,   152,   258,   195,   120,   202,    90,    91,    92,
      33,    94,    95,    96,    97,    98,    15,    16,    17
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -159
static const yytype_int16 yypact[] =
{
     159,  -159,  -159,  -159,    18,   -12,  -159,    15,   136,   136,
    -159,    11,   216,    88,    21,   189,  -159,  -159,    10,  -159,
    -159,    -2,  -159,   301,  -159,  -159,    17,   136,   461,   255,
    -159,    15,  -159,   216,   183,   821,    88,  -159,  -159,  -159,
      18,  -159,   713,  -159,   216,   136,   136,   213,  -159,    14,
      24,  -159,  -159,   900,   915,   915,   696,  -159,   923,    43,
      70,    81,   931,   947,   175,   132,   142,   760,   790,  -159,
    -159,  -159,  -159,   229,   186,   915,  -159,   345,   -21,   239,
     160,   332,   157,   153,   164,   211,    -5,  -159,  -159,     8,
    -159,  -159,  -159,   508,   555,  -159,  -159,  -159,  -159,  -159,
     303,   350,   212,  -159,  -159,  -159,  -159,    77,   209,   208,
    -159,   148,  -159,  -159,  -159,  -159,   232,  -159,   713,  -159,
    -159,  -159,   219,  -159,  -159,  -159,   923,    54,  -159,   197,
     696,   790,  -159,   923,  -159,  -159,   247,   210,   696,   923,
     923,   790,   602,   743,   259,   237,  -159,  -159,  -159,    64,
     222,    78,   270,   299,  -159,  -159,   837,   923,   307,  -159,
     923,  -159,   923,   923,   923,   923,   923,   923,   923,   923,
     923,   923,   923,   923,   923,   923,   923,   923,   923,   923,
     923,   923,  -159,  -159,   649,  -159,  -159,  -159,   397,  -159,
      49,   845,  -159,    28,  -159,   110,  -159,   396,  -159,   318,
    -159,  -159,    39,  -159,  -159,    14,  -159,   923,  -159,   283,
     326,   696,  -159,   225,   242,   281,   342,   185,   774,   171,
    -159,  -159,  -159,   365,   139,  -159,   923,  -159,  -159,   290,
    -159,   155,  -159,  -159,  -159,  -159,  -159,   345,   345,   -21,
     -21,   239,   239,   239,   239,   160,   160,   332,   157,   153,
     164,   211,    58,  -159,  -159,  -159,  -159,   327,   336,  -159,
     335,   110,   272,   853,  -159,  -159,  -159,   414,  -159,  -159,
    -159,  -159,   923,  -159,   696,   696,   696,  -159,   868,   696,
    -159,  -159,   923,  -159,   923,  -159,  -159,  -159,  -159,   341,
    -159,   359,  -159,  -159,   314,   376,  -159,  -159,   696,   324,
    -159,  -159,  -159,  -159,  -159,   353,   696,  -159,   696,  -159,
    -159,  -159
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -159,   223,  -159,  -159,   -28,  -159,  -120,   184,   205,   206,
     267,   252,   268,   254,   265,   269,  -159,   -30,    -1,  -159,
      27,   -38,     4,     0,  -159,   407,  -159,    63,  -159,  -159,
     404,   -41,   -17,  -159,   245,     9,   -11,     6,   -32,  -159,
     256,  -159,   320,   -84,  -158,   -96,  -159,   -55,  -159,    38,
     291,     7,  -133,  -159,  -159,  -159,  -159,   437,  -159
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -72
static const yytype_int16 yytable[] =
{
       7,   136,   108,    36,     6,   115,   125,   114,    24,    25,
     218,    19,   179,    18,    26,     7,    23,     1,     1,     6,
     137,     1,   201,   194,     1,   132,   134,   135,   115,   123,
     114,     1,   165,   166,   107,   261,   101,   103,     5,   186,
     102,   119,   234,   235,   236,    40,   186,   161,   103,   102,
      32,   151,     1,    39,   180,   181,     4,     4,   129,    41,
       4,    43,   144,     4,     5,     5,   261,   225,     5,   182,
     190,   104,   191,    27,   126,   208,    20,     2,     3,    45,
       1,   125,   121,   212,   130,   278,   267,   216,   204,   142,
      46,   190,   256,   191,   149,   150,   115,   103,   114,     5,
     184,   205,   268,   138,   103,   181,   280,   188,    46,    46,
      46,   181,   139,   193,   151,   206,   192,   119,   284,   190,
     223,   191,   191,   140,   151,   221,   151,     5,     5,   186,
      34,    46,    35,   186,   114,   114,   114,   114,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   114,   114,   114,
     114,   114,   262,   260,   263,   230,   273,   224,   150,   233,
     150,   115,     1,   114,     2,     3,   213,   214,   215,   270,
     217,   293,   169,   170,   112,    51,    52,   115,   145,   114,
     253,   223,    36,   191,   231,    46,   105,     2,     3,    37,
     107,   198,     1,   146,    46,   199,   193,   107,   114,    18,
     283,     4,   181,   147,    46,   175,    46,   252,   159,     5,
     176,     2,     3,   133,   129,   171,   172,     2,     3,   295,
     296,   297,   177,   107,   300,   291,   106,   178,   222,   224,
     289,     4,   181,   115,    42,   114,   153,   154,   155,     5,
      28,     2,     3,   307,     2,     3,   182,     2,     3,   167,
     168,   310,   196,   311,   302,   197,   114,   207,    50,    51,
      52,    53,   107,    54,    55,   222,   119,   210,   274,   181,
     211,   156,   181,   157,    56,   158,   124,   200,    29,    28,
     219,   301,   203,     2,     3,   275,    58,    59,    60,   181,
      61,    62,    63,    64,    65,    66,    67,    68,   220,   294,
       2,     3,   227,    69,    70,   299,    50,    51,    52,    53,
     232,    54,    55,   226,    44,   288,    71,    29,    99,    93,
     100,   266,    56,    42,   276,    28,   271,    28,   181,     2,
       3,     2,     3,   281,    58,    59,    60,   282,    61,    62,
      63,    64,    65,    66,    67,    68,   173,   174,   -71,   237,
     238,    69,    70,    50,    51,    52,    53,   305,    54,    55,
     277,   181,   -71,    29,    71,    29,   187,   308,   272,    56,
     285,   181,   239,   240,    28,   241,   242,   243,   244,   286,
     287,    58,    59,    60,   303,    61,    62,    63,    64,    65,
      66,    67,    68,     2,     3,   162,   163,   164,    69,    70,
      50,    51,    52,    53,   304,    54,    55,   223,   256,   191,
     306,    71,    29,   189,   309,     5,    56,   112,    51,    52,
      53,    28,    54,    55,     2,     3,   264,   247,    58,    59,
      60,   249,    61,    62,    63,    64,    65,    66,    67,    68,
     245,   246,   279,   250,   248,    69,    70,   117,   251,   122,
     269,   209,    38,   265,     0,     0,    68,     0,    71,    29,
     255,     0,    69,    70,    50,    51,    52,    53,     0,    54,
      55,     0,     0,     0,     0,     0,   118,   292,     0,     0,
      56,     0,     0,     0,    57,    28,     0,     0,     0,     2,
       3,     0,    58,    59,    60,     0,    61,    62,    63,    64,
      65,    66,    67,    68,     0,     0,     0,     0,     0,    69,
      70,    50,    51,    52,    53,     0,    54,    55,     0,     0,
       0,     0,    71,    29,     0,     0,     0,    56,     0,     0,
       0,   183,    28,     0,     0,     0,     2,     3,     0,    58,
      59,    60,     0,    61,    62,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,    69,    70,    50,    51,
      52,    53,     0,    54,    55,     0,     0,     0,     0,    71,
      29,     0,     0,     0,    56,     0,     0,     0,   185,    28,
       0,     0,     0,     0,     0,     0,    58,    59,    60,     0,
      61,    62,    63,    64,    65,    66,    67,    68,     0,     0,
       0,     0,     0,    69,    70,    50,    51,    52,    53,     0,
      54,    55,     0,     0,     0,     0,    71,    29,     0,     0,
       0,    56,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     0,    58,    59,    60,     0,    61,    62,    63,
      64,    65,    66,    67,    68,     0,     0,     0,     0,   181,
      69,    70,    50,    51,    52,    53,     0,    54,    55,     0,
       0,     0,     0,    71,    29,     0,     0,     0,    56,     0,
       0,     0,   254,    28,     0,     0,     0,     0,     0,     0,
      58,    59,    60,     0,    61,    62,    63,    64,    65,    66,
      67,    68,     0,     0,     0,     0,     0,    69,    70,    50,
      51,    52,    53,     0,    54,    55,     0,     0,     0,     0,
      71,    29,     0,     0,     0,    56,   112,    51,    52,    53,
      28,    54,    55,     0,     0,     0,     0,    58,    59,    60,
       0,    61,    62,    63,    64,    65,    66,    67,    68,     0,
       0,     0,     0,     0,    69,    70,   112,    51,    52,    53,
       0,    54,    55,     0,     0,    68,     0,    71,    29,     0,
       0,    69,    70,   112,    51,    52,    53,     0,    54,    55,
       0,     2,     3,     0,     0,   118,     0,   112,    51,    52,
      53,     0,    54,    55,     0,    68,     0,     0,     0,     0,
       0,    69,    70,   112,    51,    52,    53,     0,    54,    55,
       0,     0,    68,     0,    71,     0,     0,     0,    69,    70,
       0,     0,     0,     0,     0,     0,    68,     0,     2,     3,
       0,   148,    69,    70,   112,    51,    52,    53,     0,    54,
      55,     0,    68,     0,     0,    71,     0,     0,    69,    70,
     112,    51,    52,    53,     0,    54,    55,     0,   112,    51,
      52,    53,     0,    54,    55,     0,   112,    51,    52,    53,
       0,    54,    55,    68,     0,     0,   113,     0,     0,    69,
      70,   112,    51,    52,    53,     0,    54,    55,     0,    68,
     228,     0,     0,     0,     0,    69,    70,    68,     0,     0,
     259,     0,     0,    69,    70,    68,     0,     0,   290,     0,
       0,    69,    70,   112,    51,    52,    53,     0,    54,    55,
      68,   298,     0,     0,     0,     0,    69,    70,   112,    51,
      52,    53,     0,    54,    55,     0,   112,    51,    52,    53,
       0,    54,    55,     0,   112,    51,    52,    53,     0,    54,
      55,     0,   131,     0,     0,     0,     0,     0,    69,    70,
     112,    51,    52,    53,     0,    54,    55,   133,     0,     0,
       0,     0,     0,    69,    70,    68,     0,     0,     0,     0,
       0,    69,    70,   141,     0,     0,     0,     0,     0,    69,
      70,     0,     0,     0,     0,     0,     0,     0,     0,   143,
       0,     0,     0,     0,     0,    69,    70
};

static const yytype_int16 yycheck[] =
{
       0,    56,    34,    14,     0,    35,    47,    35,     8,     9,
     143,     5,    17,     4,     3,    15,     7,     3,     3,    15,
      58,     3,   118,   107,     3,    53,    54,    55,    58,    46,
      58,     3,    53,    54,    34,   193,    29,    33,    50,    94,
      31,    42,   162,   163,   164,    47,   101,    75,    44,    40,
      12,    68,     3,    43,    59,    47,    42,    42,    49,    61,
      42,    23,    63,    42,    50,    50,   224,   151,    50,    61,
      42,    33,    44,    62,    60,   130,    61,    28,    29,    62,
       3,   122,    44,   138,    60,   218,    47,   142,   126,    62,
      27,    42,    43,    44,    67,    68,   126,    93,   126,    50,
      93,    47,    63,    60,   100,    47,   226,   100,    45,    46,
      47,    47,    42,   107,   131,    61,   107,   118,    60,    42,
      42,    44,    44,    42,   141,    61,   143,    50,    50,   184,
      42,    68,    44,   188,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,    42,   191,    44,   156,   211,   151,   131,   160,
     133,   191,     3,   191,    28,    29,   139,   140,   141,   207,
     143,   267,    12,    13,     3,     4,     5,   207,     3,   207,
     181,    42,   193,    44,   157,   122,     3,    28,    29,     0,
     190,    43,     3,    61,   131,    47,   190,   197,   226,   190,
      45,    42,    47,    61,   141,    48,   143,   180,    22,    50,
      57,    28,    29,    42,   205,    55,    56,    28,    29,   274,
     275,   276,    58,   223,   279,   263,    43,    16,    43,   223,
     262,    42,    47,   263,    22,   263,     7,     8,     9,    50,
      24,    28,    29,   298,    28,    29,    61,    28,    29,    10,
      11,   306,    43,   308,   284,    47,   284,    60,     3,     4,
       5,     6,   262,     8,     9,    43,   267,    20,    43,    47,
      60,    42,    47,    44,    19,    46,    63,    45,    62,    24,
      21,   282,    63,    28,    29,    43,    31,    32,    33,    47,
      35,    36,    37,    38,    39,    40,    41,    42,    61,   272,
      28,    29,     3,    48,    49,   278,     3,     4,     5,     6,
       3,     8,     9,    43,    23,    43,    61,    62,    63,    28,
      29,     3,    19,    22,    43,    24,    43,    24,    47,    28,
      29,    28,    29,    43,    31,    32,    33,    47,    35,    36,
      37,    38,    39,    40,    41,    42,    14,    15,    47,   165,
     166,    48,    49,     3,     4,     5,     6,    43,     8,     9,
      18,    47,    61,    62,    61,    62,    63,    43,    42,    19,
      43,    47,   167,   168,    24,   169,   170,   171,   172,    43,
      45,    31,    32,    33,    43,    35,    36,    37,    38,    39,
      40,    41,    42,    28,    29,    50,    51,    52,    48,    49,
       3,     4,     5,     6,    45,     8,     9,    42,    43,    44,
      34,    61,    62,    63,    61,    50,    19,     3,     4,     5,
       6,    24,     8,     9,    28,    29,    30,   175,    31,    32,
      33,   177,    35,    36,    37,    38,    39,    40,    41,    42,
     173,   174,   219,   178,   176,    48,    49,    40,   179,    45,
     205,   131,    15,   197,    -1,    -1,    42,    -1,    61,    62,
      63,    -1,    48,    49,     3,     4,     5,     6,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    62,    63,    -1,    -1,
      19,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,    28,
      29,    -1,    31,    32,    33,    -1,    35,    36,    37,    38,
      39,    40,    41,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    -1,    19,    -1,    -1,
      -1,    23,    24,    -1,    -1,    -1,    28,    29,    -1,    31,
      32,    33,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    -1,    -1,    -1,    -1,    -1,    48,    49,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    -1,    19,    -1,    -1,    -1,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    -1,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    19,    -1,    -1,    -1,    -1,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    33,    -1,    35,    36,    37,
      38,    39,    40,    41,    42,    -1,    -1,    -1,    -1,    47,
      48,    49,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    19,    -1,
      -1,    -1,    23,    24,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    -1,    19,     3,     4,     5,     6,
      24,     8,     9,    -1,    -1,    -1,    -1,    31,    32,    33,
      -1,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    42,    -1,    61,    62,    -1,
      -1,    48,    49,     3,     4,     5,     6,    -1,     8,     9,
      -1,    28,    29,    -1,    -1,    62,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    42,    -1,    61,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    -1,    28,    29,
      -1,    61,    48,    49,     3,     4,     5,     6,    -1,     8,
       9,    -1,    42,    -1,    -1,    61,    -1,    -1,    48,    49,
       3,     4,     5,     6,    -1,     8,     9,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,     4,     5,     6,
      -1,     8,     9,    42,    -1,    -1,    45,    -1,    -1,    48,
      49,     3,     4,     5,     6,    -1,     8,     9,    -1,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    42,    -1,    -1,
      45,    -1,    -1,    48,    49,    42,    -1,    -1,    45,    -1,
      -1,    48,    49,     3,     4,     5,     6,    -1,     8,     9,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,     3,     4,     5,     6,    -1,     8,
       9,    -1,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,
       3,     4,     5,     6,    -1,     8,     9,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    42,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    48,    49
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    28,    29,    42,    50,    86,    87,    90,    91,
      92,    93,    99,   100,   101,   120,   121,   122,    99,   101,
      61,    88,    89,    99,    87,    87,     3,    62,    24,    62,
      86,    87,   113,   114,    42,    44,   100,     0,   121,    43,
      47,    61,    22,   113,   114,    62,    91,    94,    95,    96,
       3,     4,     5,     6,     8,     9,    19,    23,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    41,    42,    48,
      49,    61,    65,    66,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    84,
     111,   112,   113,   114,   115,   116,   117,   118,   119,    63,
     114,   115,    99,    86,   113,     3,    43,    87,   102,   103,
     104,   105,     3,    45,    68,    81,    85,    89,    62,    82,
     109,   113,    94,    96,    63,    95,    60,    97,    98,    99,
      60,    42,    68,    42,    68,    68,   111,    85,    60,    42,
      42,    42,    84,    42,    82,     3,    61,    61,    61,    84,
      84,    96,   106,     7,     8,     9,    42,    44,    46,    22,
      83,    68,    50,    51,    52,    53,    54,    10,    11,    12,
      13,    55,    56,    14,    15,    48,    57,    58,    16,    17,
      59,    47,    61,    23,   115,    23,   111,    63,   115,    63,
      42,    44,    99,   101,   107,   108,    43,    47,    43,    47,
      45,   109,   110,    63,    85,    47,    61,    60,   111,   106,
      20,    60,   111,    84,    84,    84,   111,    84,   116,    21,
      61,    61,    43,    42,   101,   107,    43,     3,    43,    67,
      82,    84,     3,    82,    70,    70,    70,    71,    71,    72,
      72,    73,    73,    73,    73,    74,    74,    75,    76,    77,
      78,    79,    84,    82,    23,    63,    43,   102,   107,    45,
      85,   108,    42,    44,    30,   104,     3,    47,    63,    98,
      85,    43,    42,   111,    43,    43,    43,    18,   116,    65,
      70,    43,    47,    45,    60,    43,    43,    45,    43,   102,
      45,    85,    63,   109,    84,   111,   111,   111,    43,    84,
     111,    82,    81,    43,    45,    43,    34,   111,    43,    61,
     111,   111
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
#line 1838 "y.tab.c"
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
#line 360 "yacc.y"

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


