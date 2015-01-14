
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


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 223 "y.tab.c"

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
#define YYFINAL  57
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1275

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  77
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  192
/* YYNRULES -- Number of states.  */
#define YYNSTATES  329

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    62,     2,     2,     2,    65,    61,     2,
      55,    56,    63,    66,    60,    67,    59,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    73,    74,
      68,     2,    69,    72,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    57,     2,    58,    70,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    75,    71,    76,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
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
     217,   219,   223,   225,   229,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,   251,   253,   255,   257,   259,
     261,   267,   272,   275,   277,   279,   281,   284,   288,   291,
     293,   296,   298,   300,   304,   306,   309,   313,   315,   317,
     320,   322,   324,   328,   333,   337,   342,   347,   351,   353,
     356,   359,   363,   365,   368,   370,   374,   376,   380,   383,
     386,   388,   390,   394,   396,   399,   401,   403,   406,   410,
     413,   417,   421,   426,   429,   433,   437,   442,   444,   448,
     453,   455,   459,   461,   463,   465,   467,   469,   471,   475,
     480,   484,   487,   491,   495,   500,   502,   505,   507,   510,
     512,   515,   521,   529,   535,   540,   546,   554,   561,   569,
     575,   579,   582,   585,   588,   592,   594,   597,   599,   601,
     606,   610,   614
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     135,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    55,
      97,    56,    -1,    78,    -1,    79,    57,    97,    58,    -1,
      79,    55,    56,    -1,    79,    55,    80,    56,    -1,    79,
      59,     3,    -1,    79,     7,     3,    -1,    79,     8,    -1,
      79,     9,    -1,    95,    -1,    80,    60,    95,    -1,    79,
      -1,     8,    81,    -1,     9,    81,    -1,    82,    81,    -1,
       6,    81,    -1,     6,    55,   121,    56,    -1,    61,    -1,
      62,    -1,    81,    -1,    55,   121,    56,    83,    -1,    83,
      -1,    84,    63,    83,    -1,    84,    64,    83,    -1,    84,
      65,    83,    -1,    84,    -1,    85,    66,    84,    -1,    85,
      67,    84,    -1,    85,    -1,    86,    10,    85,    -1,    86,
      11,    85,    -1,    86,    -1,    87,    68,    86,    -1,    87,
      69,    86,    -1,    87,    12,    86,    -1,    87,    13,    86,
      -1,    87,    -1,    88,    14,    87,    -1,    88,    15,    87,
      -1,    88,    -1,    89,    61,    88,    -1,    89,    -1,    90,
      70,    89,    -1,    90,    -1,    91,    71,    90,    -1,    91,
      -1,    92,    16,    91,    -1,    92,    -1,    93,    17,    92,
      -1,    93,    -1,    93,    72,    97,    73,    94,    -1,    94,
      -1,    81,    96,    95,    -1,    22,    -1,    95,    -1,    97,
      60,    95,    -1,    94,    -1,   100,    74,    -1,   100,   101,
      74,    -1,   103,    -1,   103,   100,    -1,   104,    -1,   104,
     100,    -1,   112,    -1,   112,   100,    -1,   102,    -1,   101,
      60,   102,    -1,   113,    -1,   113,    22,   124,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,    28,    -1,    39,
      -1,    29,    -1,    30,    -1,    31,    -1,    32,    -1,    35,
      -1,    36,    -1,    33,    -1,    34,    -1,   105,    -1,    23,
      -1,   106,     3,    75,   107,    76,    -1,   106,    75,   107,
      76,    -1,   106,     3,    -1,    40,    -1,    41,    -1,   108,
      -1,   107,   108,    -1,   109,   110,    74,    -1,   104,   109,
      -1,   104,    -1,   112,   109,    -1,   112,    -1,   111,    -1,
     110,    60,   111,    -1,   113,    -1,    73,    98,    -1,   113,
      73,    98,    -1,    37,    -1,    38,    -1,   115,   114,    -1,
     114,    -1,     3,    -1,    55,   113,    56,    -1,   114,    57,
      98,    58,    -1,   114,    57,    58,    -1,   114,    55,   117,
      56,    -1,   114,    55,   120,    56,    -1,   114,    55,    56,
      -1,    63,    -1,    63,   116,    -1,    63,   115,    -1,    63,
     116,   115,    -1,   112,    -1,   116,   112,    -1,   118,    -1,
     118,    60,    43,    -1,   119,    -1,   118,    60,   119,    -1,
     100,   113,    -1,   100,   122,    -1,   100,    -1,     3,    -1,
     120,    60,     3,    -1,   109,    -1,   109,   122,    -1,   115,
      -1,   123,    -1,   115,   123,    -1,    55,   122,    56,    -1,
      57,    58,    -1,    57,    98,    58,    -1,   123,    57,    58,
      -1,   123,    57,    98,    58,    -1,    55,    56,    -1,    55,
     117,    56,    -1,   123,    55,    56,    -1,   123,    55,   117,
      56,    -1,    95,    -1,    75,   125,    76,    -1,    75,   125,
      60,    76,    -1,   124,    -1,   125,    60,   124,    -1,   127,
      -1,   128,    -1,   131,    -1,   132,    -1,   133,    -1,   134,
      -1,     3,    73,   126,    -1,    44,    98,    73,   126,    -1,
      45,    73,   126,    -1,    75,    76,    -1,    75,   130,    76,
      -1,    75,   129,    76,    -1,    75,   129,   130,    76,    -1,
      99,    -1,   129,    99,    -1,   126,    -1,   130,   126,    -1,
      74,    -1,    97,    74,    -1,    46,    55,    97,    56,   126,
      -1,    46,    55,    97,    56,   126,    47,   126,    -1,    48,
      55,    97,    56,   126,    -1,    49,    97,   126,    18,    -1,
      49,    55,    97,    56,   126,    -1,    19,   126,    20,    55,
      97,    56,    74,    -1,    50,    55,   131,   131,    56,   126,
      -1,    50,    55,   131,   131,    97,    56,   126,    -1,    50,
      95,    21,    78,   126,    -1,    51,     3,    74,    -1,    52,
      74,    -1,    53,    74,    -1,    54,    74,    -1,    54,    97,
      74,    -1,   136,    -1,   135,   136,    -1,   137,    -1,    99,
      -1,   100,   113,   129,   128,    -1,   100,   113,   128,    -1,
     113,   129,   128,    -1,   113,   128,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    17,    17,    18,    19,    20,    24,    25,    26,    27,
      28,    29,    30,    31,    35,    36,    40,    41,    42,    43,
      44,    45,    49,    50,    54,    55,    59,    60,    61,    62,
      66,    67,    68,    72,    73,    74,    78,    79,    80,    81,
      82,    86,    87,    88,    92,    93,    97,    98,   102,   103,
     107,   108,   112,   113,   117,   118,   122,   123,   127,   131,
     132,   136,   140,   141,   145,   146,   147,   148,   149,   150,
     154,   155,   159,   160,   164,   165,   166,   167,   168,   172,
     173,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     186,   187,   188,   192,   193,   197,   198,   202,   206,   207,
     208,   209,   213,   214,   218,   219,   220,   224,   225,   229,
     230,   234,   235,   236,   237,   238,   239,   240,   244,   245,
     246,   247,   251,   252,   257,   258,   262,   263,   267,   268,
     269,   273,   274,   278,   279,   283,   284,   285,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   301,   302,   303,
     307,   308,   312,   313,   314,   315,   316,   317,   321,   322,
     323,   327,   328,   329,   330,   334,   335,   339,   340,   344,
     345,   349,   350,   351,   355,   356,   357,   358,   359,   360,
     364,   365,   366,   367,   368,   372,   373,   377,   378,   382,
     383,   384,   385
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
  "ENDWHILE", "REPEAT", "UNTIL", "TO", "ASSIGN_OP", "TYPE_NAME", "TYPEDEF",
  "EXTERN", "STATIC", "AUTO", "REGISTER", "CHAR", "SHORT", "INT", "LONG",
  "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE", "CONST", "VOLATILE", "VOID",
  "STRUCT", "UNION", "ENUM", "ELLIPSIS", "CASE", "DEFAULT", "IF", "ELSE",
  "SWITCH", "WHILE", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN", "'('",
  "')'", "'['", "']'", "'.'", "','", "'&'", "'!'", "'*'", "'/'", "'%'",
  "'+'", "'-'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "';'", "'{'",
  "'}'", "$accept", "primary_expression", "postfix_expression",
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
  "struct_declarator", "type_qualifier", "declarator", "direct_declarator",
  "pointer", "type_qualifier_list", "parameter_type_list",
  "parameter_list", "parameter_declaration", "identifier_list",
  "type_name", "abstract_declarator", "direct_abstract_declarator",
  "initializer", "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", 0
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
     305,   306,   307,   308,   309,    40,    41,    91,    93,    46,
      44,    38,    33,    42,    47,    37,    43,    45,    60,    62,
      94,   124,    63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    77,    78,    78,    78,    78,    79,    79,    79,    79,
      79,    79,    79,    79,    80,    80,    81,    81,    81,    81,
      81,    81,    82,    82,    83,    83,    84,    84,    84,    84,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    87,
      87,    88,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    94,    94,    95,    95,    96,    97,
      97,    98,    99,    99,   100,   100,   100,   100,   100,   100,
     101,   101,   102,   102,   103,   103,   103,   103,   103,   104,
     104,   104,   104,   104,   104,   104,   104,   104,   104,   104,
     105,   105,   105,   106,   106,   107,   107,   108,   109,   109,
     109,   109,   110,   110,   111,   111,   111,   112,   112,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     115,   115,   116,   116,   117,   117,   118,   118,   119,   119,
     119,   120,   120,   121,   121,   122,   122,   122,   123,   123,
     123,   123,   123,   123,   123,   123,   123,   124,   124,   124,
     125,   125,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   128,   128,   128,   128,   129,   129,   130,   130,   131,
     131,   132,   132,   132,   133,   133,   133,   133,   133,   133,
     134,   134,   134,   134,   134,   135,   135,   136,   136,   137,
     137,   137,   137
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
       3,     1,     2,     3,     1,     2,     1,     2,     1,     2,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     2,     1,
       2,     1,     1,     3,     1,     2,     3,     1,     1,     2,
       1,     1,     3,     4,     3,     4,     4,     3,     1,     2,
       2,     3,     1,     2,     1,     3,     1,     3,     2,     2,
       1,     1,     3,     1,     2,     1,     1,     2,     3,     2,
       3,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     4,
       3,     2,     3,     3,     4,     1,     2,     1,     2,     1,
       2,     5,     7,     5,     4,     5,     7,     6,     7,     5,
       3,     2,     2,     2,     3,     1,     2,     1,     1,     4,
       3,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   111,    89,    74,    75,    76,    77,    78,    80,    81,
      82,    83,    86,    87,    84,    85,   107,   108,    79,    93,
      94,     0,   118,   188,     0,    64,    66,    88,     0,    68,
       0,   110,     0,     0,   185,   187,     0,   122,   120,   119,
      62,     0,    70,    72,    65,    67,    92,     0,    69,     0,
     165,     0,   192,     0,     0,     0,   109,     1,   186,   112,
     123,   121,     0,    63,     0,   190,     0,     0,    99,     0,
      95,     0,   101,     2,     3,     4,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    22,    23,   169,   161,     6,    16,    24,     0,    26,
      30,    33,    36,    41,    44,    46,    48,    50,    52,    54,
      56,    59,     0,   167,   152,   153,     0,     0,   154,   155,
     156,   157,    72,   166,   191,   131,   117,   130,     0,   124,
     126,     0,     2,   114,    24,    61,     0,    71,     0,   147,
      73,   189,     0,    98,    91,    96,     0,     0,   102,   104,
     100,     0,     0,    20,     0,    17,    18,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,   183,
       0,     0,   133,     0,     0,    12,    13,     0,     0,     0,
      58,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   170,   163,     0,   162,   168,     0,     0,
     128,   135,   129,   136,   115,     0,   116,     0,   113,   150,
       0,    90,   105,     0,    97,     0,   158,     0,     0,     0,
     160,     0,     0,     0,     0,     0,     0,     0,   180,   184,
       5,     0,   135,   134,     0,    11,     8,     0,    14,     0,
      10,    57,    27,    28,    29,    31,    32,    34,    35,    39,
      40,    37,    38,    42,    43,    45,    47,    49,    51,    53,
       0,    60,   164,   143,     0,     0,   139,     0,   137,     0,
       0,   125,   127,   132,     0,   148,   103,   106,    21,     0,
     159,     0,     0,     5,   174,     0,     0,    25,     9,     0,
       7,     0,   144,   138,   140,   145,     0,   141,     0,   149,
     151,     0,   171,   173,   175,     0,     0,   179,    15,    55,
     146,   142,     0,     0,   177,     0,   176,   172,   178
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    95,    96,   247,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   181,
     112,   136,    50,    51,    41,    42,    25,    26,    27,    28,
      69,    70,    71,   147,   148,    29,    30,    31,    32,    39,
     274,   129,   130,   131,   173,   275,   213,   140,   220,   113,
     114,   115,    53,   117,   118,   119,   120,   121,    33,    34,
      35
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -190
static const yytype_int16 yypact[] =
{
     787,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,  -190,
    -190,    38,    43,  -190,    21,  1234,  1234,  -190,     8,  1234,
    1085,   170,    37,   265,  -190,  -190,   -18,  -190,  -190,    43,
    -190,   -10,  -190,   984,  -190,  -190,   -24,   947,  -190,   333,
    -190,    21,  -190,  1085,  1037,   602,   170,  -190,  -190,  -190,
    -190,  -190,    38,  -190,   475,  -190,  1085,   947,   947,  1012,
    -190,    16,   947,    30,  -190,  -190,   895,   903,   903,   633,
     913,    56,    79,   106,   934,   943,    74,    98,   104,   486,
     826,  -190,  -190,  -190,  -190,  -190,   262,   103,   903,  -190,
     168,    52,   206,    53,   207,   142,   141,   172,   232,    -3,
    -190,  -190,    57,  -190,  -190,  -190,   393,   453,  -190,  -190,
    -190,  -190,   239,  -190,  -190,  -190,  -190,    42,   198,   212,
    -190,   110,  -190,  -190,  -190,  -190,   218,  -190,   475,  -190,
    -190,  -190,  1066,  -190,  -190,  -190,   913,   102,  -190,   205,
    -190,   633,   826,  -190,   913,  -190,  -190,   260,   209,   633,
     913,   913,   826,   573,   693,   264,   213,  -190,  -190,  -190,
     114,   111,    73,   227,   304,  -190,  -190,   733,   913,   305,
    -190,   913,  -190,   913,   913,   913,   913,   913,   913,   913,
     913,   913,   913,   913,   913,   913,   913,   913,   913,   913,
     913,   913,   913,  -190,  -190,   513,  -190,  -190,   746,   835,
    -190,    69,  -190,   180,  -190,  1213,  -190,   306,  -190,  -190,
      22,  -190,  -190,    16,  -190,   913,  -190,   254,   256,   633,
    -190,   137,   139,   144,   295,   108,   594,    55,  -190,  -190,
    -190,  1138,   196,  -190,   913,  -190,  -190,   146,  -190,   215,
    -190,  -190,  -190,  -190,  -190,   168,   168,    52,    52,   206,
     206,   206,   206,    53,    53,   207,   142,   141,   172,   232,
      36,  -190,  -190,  -190,   258,   259,  -190,   266,   180,  1179,
     865,  -190,  -190,  -190,    12,  -190,  -190,  -190,  -190,   913,
    -190,   633,   633,   633,  -190,   874,   633,  -190,  -190,   913,
    -190,   913,  -190,  -190,  -190,  -190,   267,  -190,   268,  -190,
    -190,   149,   269,  -190,  -190,   633,   154,  -190,  -190,  -190,
    -190,  -190,   248,   633,  -190,   633,  -190,  -190,  -190
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -190,    88,  -190,  -190,   -46,  -190,  -136,    70,    51,    54,
      72,   131,   132,   133,   135,   130,  -190,   -52,   -22,  -190,
      23,   -44,     4,     0,  -190,   270,  -190,   122,  -190,  -190,
     273,   -67,   -29,  -190,   112,   191,   -16,   -25,   -12,  -190,
     -53,  -190,   129,  -190,   193,  -104,  -189,  -126,  -190,   -73,
    -190,    61,    13,   230,  -151,  -190,  -190,  -190,  -190,   314,
    -190
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      24,   128,   145,   135,    23,    36,   157,    56,    43,   134,
      38,    46,   219,   236,   200,   132,    74,    75,    76,     1,
      77,    78,   278,   212,     1,    44,    45,    61,   135,    48,
     153,   155,   156,    24,   134,   122,   158,    23,    59,   143,
       1,     1,   139,   150,   207,     1,   122,   252,   253,   254,
      62,    67,   182,   278,   127,   149,    66,   123,   132,    74,
      75,   172,   116,   165,    63,   190,   191,    90,   243,   201,
     123,    21,     1,    91,    92,   145,    21,   166,   226,    22,
      16,    17,   284,    47,    22,   295,   230,   138,   309,   146,
     234,    52,    21,    21,   135,    40,   202,   208,   285,   209,
     134,    22,   222,   151,    65,    22,    22,   163,   297,   301,
     154,   210,   170,   171,   124,   211,   139,   202,   186,   187,
     123,   192,   193,   172,   208,   180,   209,   141,   241,   159,
     209,   203,   207,   172,   160,   172,    22,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   248,   290,   135,   310,   251,
     242,   161,   223,   134,   240,   277,   216,   240,   202,    68,
     217,   202,   167,   135,   202,   171,   224,   171,   168,   134,
     271,   287,   203,   231,   232,   233,    56,   235,   239,    68,
      68,    68,    36,   291,    68,   292,   211,   202,   134,   202,
     293,   249,   298,   196,   202,   322,   299,   149,   127,   202,
     325,   197,    68,    37,   202,   127,   188,   189,   312,   313,
     314,   194,   195,   317,   270,    54,   306,    55,   135,   242,
      60,   183,   184,   185,   134,   279,   308,   280,    72,   257,
     258,   127,   324,   198,   259,   260,   261,   262,   199,   319,
     327,   241,   328,   209,   214,   134,   255,   256,    72,    72,
      72,    64,   139,    72,    68,    57,   263,   264,     1,   174,
     175,   176,   215,   300,    68,   202,   218,   318,   225,   127,
     228,    72,   229,   244,    68,   237,    68,   238,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   245,   250,   283,
     288,   289,   311,   294,   302,   303,   323,   177,   316,   178,
      21,   179,   326,   320,   304,   296,   321,   265,    22,   266,
     269,   267,   137,    72,   268,   286,    73,    74,    75,    76,
     142,    77,    78,    72,   282,   227,   205,    58,     0,     0,
       0,     0,    79,    72,     0,    72,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,    94,
       0,     0,    79,     0,     0,     0,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,   204,
       0,     0,    79,     0,     0,     0,     0,     0,   132,    74,
      75,    76,     0,    77,    78,     0,     0,     0,     0,   132,
      74,    75,    76,     0,    77,    78,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,   206,
      90,     0,    79,     0,     0,     0,    91,    92,     0,     0,
       0,    90,     0,     0,     0,     0,     0,    91,    92,     0,
     138,     0,     0,     0,     0,     0,     0,    80,    81,    82,
     169,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    91,    92,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,   272,
       0,     0,    79,     0,     0,     0,     0,   132,    74,    75,
      76,     0,    77,    78,     0,   132,    74,    75,    76,     0,
      77,    78,     0,     0,     0,     0,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,   202,    91,    92,    73,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,    90,
       0,     0,    79,     0,     0,    91,    92,    90,     0,     0,
     133,     0,     0,    91,    92,     0,     0,     0,    93,     0,
       0,     0,     0,     0,     0,     0,     0,    80,    81,    82,
       0,    83,    84,    85,    86,    87,    88,    89,    90,     0,
       0,     0,     0,     0,    91,    92,   132,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,    93,    49,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,   132,    74,    75,    76,
       0,    77,    78,     0,     0,     0,     0,     0,    90,     1,
       0,     0,     0,     0,    91,    92,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    93,     0,     2,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    90,   246,
       1,     0,     0,     0,    91,    92,     0,     0,     0,     0,
       0,   208,   273,   209,     0,     0,     0,     0,     0,    22,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   132,
      74,    75,    76,     0,    77,    78,     0,     0,   132,    74,
      75,    76,    21,    77,    78,     0,     0,     0,     0,     2,
      22,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   132,    74,
      75,    76,     0,    77,    78,     0,     0,   132,    74,    75,
      76,    90,    77,    78,     0,     0,     0,    91,    92,     0,
      90,     0,     0,   276,     0,     0,    91,    92,   132,    74,
      75,    76,     0,    77,    78,     0,   132,    74,    75,    76,
       0,    77,    78,     0,     0,     0,   132,    74,    75,    76,
      90,    77,    78,   307,     0,     0,    91,    92,     0,    90,
     315,     0,     0,     0,     0,    91,    92,   132,    74,    75,
      76,     0,    77,    78,     0,     0,   132,    74,    75,    76,
     152,    77,    78,     0,     0,     0,    91,    92,   154,     0,
       0,     0,     0,     0,    91,    92,     0,     0,    90,     0,
       2,     0,     0,     0,    91,    92,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   162,
       0,     0,     0,     0,     0,    91,    92,     0,   164,     0,
       0,     0,     0,     0,    91,    92,    64,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     2,     0,     0,     0,     0,
     125,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,     0,     0,    49,
       2,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   144,     2,
       0,     0,     0,   126,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,     2,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   221,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     2,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   241,   273,   209,     0,     0,     0,     0,
       0,    22,     2,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   305,     2,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,     0,   281,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20
};

static const yytype_int16 yycheck[] =
{
       0,    54,    69,    55,     0,    21,    79,    32,    24,    55,
      22,     3,   138,   164,    17,     3,     4,     5,     6,     3,
       8,     9,   211,   127,     3,    25,    26,    39,    80,    29,
      76,    77,    78,    33,    80,    51,    80,    33,    56,    68,
       3,     3,    64,    72,   117,     3,    62,   183,   184,   185,
      60,    75,    98,   242,    54,    71,    43,    53,     3,     4,
       5,    90,    49,    85,    74,    12,    13,    55,   172,    72,
      66,    55,     3,    61,    62,   142,    55,     3,   151,    63,
      37,    38,    60,    75,    63,   236,   159,    75,    76,    73,
     163,    30,    55,    55,   146,    74,    60,    55,    76,    57,
     146,    63,   146,    73,    43,    63,    63,    84,   244,    73,
      55,   127,    89,    90,    53,   127,   138,    60,    66,    67,
     116,    68,    69,   152,    55,    22,    57,    66,    55,    73,
      57,    74,   205,   162,    55,   164,    63,   183,   184,   185,
     186,   187,   188,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   177,   229,   209,   284,   181,
     172,    55,    60,   209,    56,   209,    56,    56,    60,    47,
      60,    60,    74,   225,    60,   152,    74,   154,    74,   225,
     202,   225,    74,   160,   161,   162,   211,   164,    74,    67,
      68,    69,   208,    56,    72,    56,   208,    60,   244,    60,
      56,   178,    56,    61,    60,    56,    60,   223,   208,    60,
      56,    70,    90,    22,    60,   215,    10,    11,   291,   292,
     293,    14,    15,   296,   201,    55,   279,    57,   280,   241,
      39,    63,    64,    65,   280,    55,   280,    57,    47,   188,
     189,   241,   315,    71,   190,   191,   192,   193,    16,   301,
     323,    55,   325,    57,    56,   301,   186,   187,    67,    68,
      69,    22,   284,    72,   142,     0,   194,   195,     3,     7,
       8,     9,    60,    58,   152,    60,    58,   299,    73,   279,
      20,    90,    73,    56,   162,    21,   164,    74,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,     3,     3,     3,
      56,    55,   289,    18,    56,    56,    47,    55,   295,    57,
      55,    59,    74,    56,    58,   237,    58,   196,    63,   197,
     200,   198,    62,   142,   199,   223,     3,     4,     5,     6,
      67,     8,     9,   152,   215,   152,   116,    33,    -1,    -1,
      -1,    -1,    19,   162,    -1,   164,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    19,    -1,    -1,    -1,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    19,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    76,
      55,    -1,    19,    -1,    -1,    -1,    61,    62,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      75,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      74,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    76,
      -1,    -1,    19,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,    -1,     8,     9,    -1,     3,     4,     5,     6,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    60,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    55,
      -1,    -1,    19,    -1,    -1,    61,    62,    55,    -1,    -1,
      58,    -1,    -1,    61,    62,    -1,    -1,    -1,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    74,    75,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    55,     3,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    -1,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    55,    56,
       3,    -1,    -1,    -1,    61,    62,    -1,    -1,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    -1,    -1,    63,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,     3,     4,
       5,     6,    55,     8,     9,    -1,    -1,    -1,    -1,    23,
      63,    -1,    -1,    -1,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,     3,     4,     5,
       6,    55,     8,     9,    -1,    -1,    -1,    61,    62,    -1,
      55,    -1,    -1,    58,    -1,    -1,    61,    62,     3,     4,
       5,     6,    -1,     8,     9,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    -1,    -1,     3,     4,     5,     6,
      55,     8,     9,    58,    -1,    -1,    61,    62,    -1,    55,
      56,    -1,    -1,    -1,    -1,    61,    62,     3,     4,     5,
       6,    -1,     8,     9,    -1,    -1,     3,     4,     5,     6,
      55,     8,     9,    -1,    -1,    -1,    61,    62,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    55,    -1,
      23,    -1,    -1,    -1,    61,    62,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    55,
      -1,    -1,    -1,    -1,    -1,    61,    62,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    61,    62,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    23,    -1,    -1,    -1,    -1,
       3,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    75,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    23,
      -1,    -1,    -1,    56,    -1,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    76,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      75,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    -1,
      -1,    63,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    56,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    55,    63,    99,   100,   103,   104,   105,   106,   112,
     113,   114,   115,   135,   136,   137,   113,   112,   115,   116,
      74,   101,   102,   113,   100,   100,     3,    75,   100,    75,
      99,   100,   128,   129,    55,    57,   114,     0,   136,    56,
     112,   115,    60,    74,    22,   128,   129,    75,   104,   107,
     108,   109,   112,     3,     4,     5,     6,     8,     9,    19,
      44,    45,    46,    48,    49,    50,    51,    52,    53,    54,
      55,    61,    62,    74,    76,    78,    79,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    97,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   113,    99,   128,     3,    56,   100,   117,   118,
     119,   120,     3,    58,    81,    94,    98,   102,    75,    95,
     124,   128,   107,   109,    76,   108,    73,   110,   111,   113,
     109,    73,    55,    81,    55,    81,    81,   126,    98,    73,
      55,    55,    55,    97,    55,    95,     3,    74,    74,    74,
      97,    97,   109,   121,     7,     8,     9,    55,    57,    59,
      22,    96,    81,    63,    64,    65,    66,    67,    10,    11,
      12,    13,    68,    69,    14,    15,    61,    70,    71,    16,
      17,    72,    60,    74,    76,   130,    76,   126,    55,    57,
     113,   115,   122,   123,    56,    60,    56,    60,    58,   124,
     125,    76,    98,    60,    74,    73,   126,   121,    20,    73,
     126,    97,    97,    97,   126,    97,   131,    21,    74,    74,
      56,    55,   115,   122,    56,     3,    56,    80,    95,    97,
       3,    95,    83,    83,    83,    84,    84,    85,    85,    86,
      86,    86,    86,    87,    87,    88,    89,    90,    91,    92,
      97,    95,    76,    56,   117,   122,    58,    98,   123,    55,
      57,    43,   119,     3,    60,    76,   111,    98,    56,    55,
     126,    56,    56,    56,    18,   131,    78,    83,    56,    60,
      58,    73,    56,    56,    58,    56,   117,    58,    98,    76,
     124,    97,   126,   126,   126,    56,    97,   126,    95,    94,
      56,    58,    56,    47,   126,    56,    74,   126,   126
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
#line 1940 "y.tab.c"
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
#line 388 "yacc.y"

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


