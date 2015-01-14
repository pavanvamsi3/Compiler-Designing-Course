/* A Bison parser, made by GNU Bison 2.5.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2011 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.5"

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

/* Line 268 of yacc.c  */
#line 1 "java.y"

	/* Java grammar alongwith a little error handling.
	 * Coded using help from http://home.comcast.net/~bronnikov/java.html
	 * Handles most of the java grammar and some errors.
	 * COD Mini project by Group 23, 2012.
	 */


/* Line 268 of yacc.c  */
#line 80 "y.tab.c"

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
     BOOLEAN = 259,
     BREAK = 260,
     BYTE = 261,
     BYVALUE = 262,
     CASE = 263,
     CAST = 264,
     CATCH = 265,
     CHAR = 266,
     CLASS = 267,
     CONST = 268,
     CONTINUE = 269,
     DEFAULT = 270,
     DO = 271,
     DOUBLE = 272,
     ELSE = 273,
     EXTENDS = 274,
     FINAL = 275,
     FINALLY = 276,
     FLOAT = 277,
     FOR = 278,
     FUTURE = 279,
     GENERIC = 280,
     GOTO = 281,
     IF = 282,
     IMPLEMENTS = 283,
     IMPORT = 284,
     INNER = 285,
     INSTANCEOF = 286,
     INT = 287,
     INTERFACE = 288,
     LONG = 289,
     NATIVE = 290,
     NEW = 291,
     JNULL = 292,
     OPERATOR = 293,
     OUTER = 294,
     PACKAGE = 295,
     PRIVATE = 296,
     PROTECTED = 297,
     PUBLIC = 298,
     REST = 299,
     RETURN = 300,
     SHORT = 301,
     STATIC = 302,
     SUPER = 303,
     SWITCH = 304,
     SYNCHRONIZED = 305,
     THIS = 306,
     THROW = 307,
     THROWS = 308,
     TRANSIENT = 309,
     TRY = 310,
     VAR = 311,
     VOID = 312,
     VOLATILE = 313,
     WHILE = 314,
     OP_INC = 315,
     OP_DEC = 316,
     OP_SHL = 317,
     OP_SHR = 318,
     OP_SHRR = 319,
     OP_GE = 320,
     OP_LE = 321,
     OP_EQ = 322,
     OP_NE = 323,
     OP_LAND = 324,
     OP_LOR = 325,
     OP_DIM = 326,
     ASS_MUL = 327,
     ASS_DIV = 328,
     ASS_MOD = 329,
     ASS_ADD = 330,
     ASS_SUB = 331,
     ASS_SHL = 332,
     ASS_SHR = 333,
     ASS_SHRR = 334,
     ASS_AND = 335,
     ASS_XOR = 336,
     ASS_OR = 337,
     IDENTIFIER = 338,
     LITERAL = 339,
     BOOLLIT = 340
   };
#endif
/* Tokens.  */
#define ABSTRACT 258
#define BOOLEAN 259
#define BREAK 260
#define BYTE 261
#define BYVALUE 262
#define CASE 263
#define CAST 264
#define CATCH 265
#define CHAR 266
#define CLASS 267
#define CONST 268
#define CONTINUE 269
#define DEFAULT 270
#define DO 271
#define DOUBLE 272
#define ELSE 273
#define EXTENDS 274
#define FINAL 275
#define FINALLY 276
#define FLOAT 277
#define FOR 278
#define FUTURE 279
#define GENERIC 280
#define GOTO 281
#define IF 282
#define IMPLEMENTS 283
#define IMPORT 284
#define INNER 285
#define INSTANCEOF 286
#define INT 287
#define INTERFACE 288
#define LONG 289
#define NATIVE 290
#define NEW 291
#define JNULL 292
#define OPERATOR 293
#define OUTER 294
#define PACKAGE 295
#define PRIVATE 296
#define PROTECTED 297
#define PUBLIC 298
#define REST 299
#define RETURN 300
#define SHORT 301
#define STATIC 302
#define SUPER 303
#define SWITCH 304
#define SYNCHRONIZED 305
#define THIS 306
#define THROW 307
#define THROWS 308
#define TRANSIENT 309
#define TRY 310
#define VAR 311
#define VOID 312
#define VOLATILE 313
#define WHILE 314
#define OP_INC 315
#define OP_DEC 316
#define OP_SHL 317
#define OP_SHR 318
#define OP_SHRR 319
#define OP_GE 320
#define OP_LE 321
#define OP_EQ 322
#define OP_NE 323
#define OP_LAND 324
#define OP_LOR 325
#define OP_DIM 326
#define ASS_MUL 327
#define ASS_DIV 328
#define ASS_MOD 329
#define ASS_ADD 330
#define ASS_SUB 331
#define ASS_SHL 332
#define ASS_SHR 333
#define ASS_SHRR 334
#define ASS_AND 335
#define ASS_XOR 336
#define ASS_OR 337
#define IDENTIFIER 338
#define LITERAL 339
#define BOOLLIT 340




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 292 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
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
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  32
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1987

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  110
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  101
/* YYNRULES -- Number of rules.  */
#define YYNRULES  285
/* YYNRULES -- Number of states.  */
#define YYNSTATES  462

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   340

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    99,     2,     2,     2,   103,   106,     2,
      93,    94,    89,   100,    86,   101,    88,   102,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    95,    87,
     104,    92,   105,   109,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    96,     2,    97,   107,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    90,   108,    91,    98,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    18,    20,
      22,    24,    26,    28,    30,    32,    34,    36,    38,    41,
      43,    47,    50,    53,    56,    58,    60,    62,    66,    69,
      71,    74,    76,    79,    82,    84,    87,    91,    97,   100,
     102,   106,   111,   115,   121,   126,   131,   136,   140,   144,
     148,   151,   153,   156,   158,   160,   162,   164,   166,   168,
     170,   172,   174,   176,   178,   180,   183,   185,   188,   190,
     193,   196,   199,   201,   203,   205,   207,   209,   213,   216,
     218,   222,   224,   228,   230,   233,   237,   239,   243,   246,
     252,   257,   262,   266,   271,   275,   278,   280,   284,   287,
     291,   293,   296,   299,   301,   303,   308,   312,   316,   319,
     324,   328,   331,   333,   336,   340,   344,   347,   349,   352,
     354,   356,   360,   365,   368,   370,   372,   375,   377,   379,
     381,   383,   385,   388,   390,   393,   397,   400,   402,   408,
     416,   422,   428,   436,   444,   451,   454,   456,   458,   461,
     463,   465,   467,   471,   475,   478,   482,   485,   489,   492,
     496,   502,   506,   510,   515,   517,   520,   523,   529,   534,
     537,   539,   541,   543,   545,   547,   551,   553,   555,   557,
     559,   561,   563,   568,   573,   577,   581,   585,   589,   593,
     598,   602,   604,   606,   608,   610,   612,   614,   616,   620,
     622,   626,   628,   630,   634,   638,   643,   648,   654,   659,
     664,   668,   672,   674,   677,   681,   683,   686,   688,   690,
     693,   696,   699,   702,   705,   707,   709,   712,   714,   716,
     718,   720,   722,   727,   732,   737,   739,   742,   745,   747,
     751,   755,   759,   761,   765,   769,   771,   775,   779,   783,
     785,   789,   793,   797,   801,   805,   807,   811,   815,   817,
     821,   823,   827,   829,   833,   835,   839,   841,   845,   847,
     853,   855,   859,   861,   863,   865,   867,   869,   871,   873,
     875,   877,   879,   881,   883,   885
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     116,     0,    -1,   112,    -1,   112,   186,    -1,   114,    -1,
     123,    -1,   123,    -1,   113,    86,   123,    -1,     4,    -1,
      11,    -1,     6,    -1,    46,    -1,    32,    -1,    34,    -1,
      22,    -1,    17,    -1,    57,    -1,    87,    -1,   115,    87,
      -1,   117,    -1,   118,   121,   119,    -1,   118,   121,    -1,
     118,   119,    -1,   121,   119,    -1,   118,    -1,   121,    -1,
     119,    -1,    40,   123,   115,    -1,     1,    87,    -1,   120,
      -1,   119,   120,    -1,   124,    -1,   124,   115,    -1,     1,
      87,    -1,   122,    -1,   121,   122,    -1,    29,   123,   115,
      -1,    29,   123,    88,    89,   115,    -1,     1,    87,    -1,
      83,    -1,   123,    88,    83,    -1,   125,    90,   130,    91,
      -1,   125,    90,    91,    -1,   126,   128,    83,   149,   129,
      -1,   126,   128,    83,   149,    -1,   126,   128,    83,   129,
      -1,   128,    83,   149,   129,    -1,   126,   128,    83,    -1,
     128,    83,   149,    -1,   128,    83,   129,    -1,   128,    83,
      -1,   127,    -1,   126,   127,    -1,     3,    -1,    20,    -1,
      43,    -1,    42,    -1,    41,    -1,    47,    -1,    54,    -1,
      58,    -1,    35,    -1,    50,    -1,    12,    -1,    33,    -1,
      28,   113,    -1,   131,    -1,   130,   131,    -1,   132,    -1,
     132,   115,    -1,     1,    87,    -1,   133,    87,    -1,   138,
      -1,   145,    -1,   147,    -1,   148,    -1,   124,    -1,   126,
     111,   134,    -1,   111,   134,    -1,   135,    -1,   134,    86,
     135,    -1,   142,    -1,   142,    92,   136,    -1,   209,    -1,
      90,    91,    -1,    90,   137,    91,    -1,   136,    -1,   137,
      86,   136,    -1,   137,    86,    -1,   126,   111,   139,   143,
     144,    -1,   126,   111,   139,   144,    -1,   111,   139,   143,
     144,    -1,   111,   139,   144,    -1,   142,    93,   140,    94,
      -1,   142,    93,    94,    -1,   139,    71,    -1,   141,    -1,
     140,    86,   141,    -1,   111,   142,    -1,    20,   111,   142,
      -1,    83,    -1,   142,    71,    -1,    53,   113,    -1,   150,
      -1,    87,    -1,   126,   146,   143,   150,    -1,   126,   146,
     150,    -1,   146,   143,   150,    -1,   146,   150,    -1,    83,
      93,   140,    94,    -1,    83,    93,    94,    -1,    47,   150,
      -1,   150,    -1,    19,   112,    -1,   149,    86,   112,    -1,
      90,   151,    91,    -1,    90,    91,    -1,   152,    -1,   151,
     152,    -1,   153,    -1,   154,    -1,   111,   134,    87,    -1,
      20,   111,   134,    87,    -1,     1,    87,    -1,   155,    -1,
     156,    -1,   157,    87,    -1,   158,    -1,   159,    -1,   164,
      -1,   165,    -1,   150,    -1,     1,    87,    -1,    87,    -1,
      83,    95,    -1,     8,   210,    95,    -1,    15,    95,    -1,
     209,    -1,    27,    93,   209,    94,   154,    -1,    27,    93,
     209,    94,   154,    18,   154,    -1,    49,    93,   209,    94,
     150,    -1,    59,    93,   209,    94,   154,    -1,    16,   154,
      59,    93,   209,    94,    87,    -1,    23,    93,   160,   161,
     162,    94,   154,    -1,    23,    93,   160,   161,    94,   154,
      -1,   163,    87,    -1,   153,    -1,    87,    -1,   209,    87,
      -1,    87,    -1,   163,    -1,   157,    -1,   163,    86,   157,
      -1,     5,    83,    87,    -1,     5,    87,    -1,    14,    83,
      87,    -1,    14,    87,    -1,    45,   209,    87,    -1,    45,
      87,    -1,    52,   209,    87,    -1,    50,    93,   209,    94,
     154,    -1,    55,   150,   169,    -1,    55,   150,   166,    -1,
      55,   150,   166,   169,    -1,   167,    -1,   166,   167,    -1,
     168,   150,    -1,    10,    93,   111,    83,    94,    -1,    10,
      93,   111,    94,    -1,    21,   150,    -1,   123,    -1,   171,
      -1,   178,    -1,   180,    -1,   172,    -1,    93,   209,    94,
      -1,   173,    -1,    84,    -1,    85,    -1,   174,    -1,   175,
      -1,   176,    -1,   123,    96,   209,    97,    -1,   172,    96,
     209,    97,    -1,   171,    88,    83,    -1,   188,    88,    83,
      -1,   123,    88,    51,    -1,   123,    88,    12,    -1,   114,
      88,    12,    -1,   177,    93,   179,    94,    -1,   177,    93,
      94,    -1,   173,    -1,   178,    -1,   123,    -1,    51,    -1,
      48,    -1,    37,    -1,   209,    -1,   179,    86,   209,    -1,
     181,    -1,   123,    88,   181,    -1,   183,    -1,   182,    -1,
     183,    90,    91,    -1,   182,    90,    91,    -1,   183,    90,
     137,    91,    -1,   182,    90,   130,    91,    -1,    36,   112,
      93,   179,    94,    -1,    36,   112,    93,    94,    -1,    36,
     112,   184,   186,    -1,    36,   112,   184,    -1,    36,   112,
     186,    -1,   185,    -1,   184,   185,    -1,    96,   209,    97,
      -1,    71,    -1,   186,    71,    -1,   170,    -1,   188,    -1,
     187,    60,    -1,   187,    61,    -1,    60,   189,    -1,    61,
     189,    -1,   192,   193,    -1,   190,    -1,   187,    -1,   191,
     189,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     189,    -1,    93,   194,    94,   193,    -1,    93,   195,    94,
     193,    -1,    93,   209,    94,   190,    -1,   114,    -1,   114,
     186,    -1,   123,   186,    -1,   193,    -1,   196,    89,   193,
      -1,   196,   102,   193,    -1,   196,   103,   193,    -1,   196,
      -1,   197,   100,   196,    -1,   197,   101,   196,    -1,   197,
      -1,   198,    62,   197,    -1,   198,    63,   197,    -1,   198,
      64,   197,    -1,   198,    -1,   199,   104,   198,    -1,   199,
     105,   198,    -1,   199,    66,   198,    -1,   199,    65,   198,
      -1,   199,    31,   111,    -1,   199,    -1,   200,    67,   199,
      -1,   200,    68,   199,    -1,   200,    -1,   201,   106,   200,
      -1,   201,    -1,   202,   107,   201,    -1,   202,    -1,   203,
     108,   202,    -1,   203,    -1,   204,    69,   203,    -1,   204,
      -1,   205,    70,   204,    -1,   205,    -1,   205,   109,   209,
      95,   206,    -1,   206,    -1,   189,   208,   207,    -1,    92,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,   207,    -1,   206,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    40,    40,    41,    45,    46,    50,    51,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    67,    68,    72,
      76,    77,    78,    79,    80,    81,    82,    86,    87,    91,
      92,    96,    97,    98,   102,   103,   107,   108,   109,   113,
     114,   118,   119,   123,   124,   125,   126,   127,   128,   129,
     130,   134,   135,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   152,   153,   157,   161,   162,   166,   167,
     168,   172,   173,   174,   175,   176,   177,   181,   182,   186,
     187,   191,   192,   196,   197,   198,   202,   203,   204,   208,
     209,   210,   211,   215,   216,   217,   221,   222,   226,   227,
     231,   232,   236,   240,   241,   245,   246,   247,   248,   252,
     253,   257,   261,   265,   266,   270,   271,   275,   276,   280,
     281,   285,   286,   287,   291,   292,   293,   294,   295,   296,
     297,   298,   299,   303,   307,   308,   309,   313,   317,   318,
     319,   323,   324,   325,   326,   330,   331,   332,   336,   337,
     341,   345,   346,   350,   351,   352,   353,   354,   355,   356,
     360,   361,   362,   363,   367,   368,   372,   376,   377,   381,
     385,   386,   390,   391,   392,   396,   397,   401,   402,   403,
     404,   405,   409,   410,   414,   415,   416,   417,   418,   422,
     423,   427,   428,   429,   433,   434,   435,   439,   440,   444,
     445,   449,   450,   451,   452,   453,   454,   458,   459,   463,
     464,   465,   469,   470,   474,   478,   479,   483,   484,   488,
     489,   493,   494,   495,   496,   500,   501,   505,   506,   510,
     511,   515,   516,   517,   518,   522,   523,   527,   531,   532,
     533,   534,   538,   539,   540,   544,   545,   546,   547,   551,
     552,   553,   554,   555,   556,   560,   561,   562,   566,   567,
     571,   572,   576,   577,   581,   582,   586,   587,   591,   592,
     596,   597,   601,   602,   603,   604,   605,   606,   607,   608,
     609,   610,   611,   612,   616,   620
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ABSTRACT", "BOOLEAN", "BREAK", "BYTE",
  "BYVALUE", "CASE", "CAST", "CATCH", "CHAR", "CLASS", "CONST", "CONTINUE",
  "DEFAULT", "DO", "DOUBLE", "ELSE", "EXTENDS", "FINAL", "FINALLY",
  "FLOAT", "FOR", "FUTURE", "GENERIC", "GOTO", "IF", "IMPLEMENTS",
  "IMPORT", "INNER", "INSTANCEOF", "INT", "INTERFACE", "LONG", "NATIVE",
  "NEW", "JNULL", "OPERATOR", "OUTER", "PACKAGE", "PRIVATE", "PROTECTED",
  "PUBLIC", "REST", "RETURN", "SHORT", "STATIC", "SUPER", "SWITCH",
  "SYNCHRONIZED", "THIS", "THROW", "THROWS", "TRANSIENT", "TRY", "VAR",
  "VOID", "VOLATILE", "WHILE", "OP_INC", "OP_DEC", "OP_SHL", "OP_SHR",
  "OP_SHRR", "OP_GE", "OP_LE", "OP_EQ", "OP_NE", "OP_LAND", "OP_LOR",
  "OP_DIM", "ASS_MUL", "ASS_DIV", "ASS_MOD", "ASS_ADD", "ASS_SUB",
  "ASS_SHL", "ASS_SHR", "ASS_SHRR", "ASS_AND", "ASS_XOR", "ASS_OR",
  "IDENTIFIER", "LITERAL", "BOOLLIT", "','", "';'", "'.'", "'*'", "'{'",
  "'}'", "'='", "'('", "')'", "':'", "'['", "']'", "'~'", "'!'", "'+'",
  "'-'", "'/'", "'%'", "'<'", "'>'", "'&'", "'^'", "'|'", "'?'", "$accept",
  "TypeSpecifier", "TypeName", "ClassNameList", "PrimitiveType",
  "SemiColons", "CompilationUnit", "ProgramFile", "PackageStatement",
  "TypeDeclarations", "TypeDeclarationOptSemi", "ImportStatements",
  "ImportStatement", "QualifiedName", "TypeDeclaration", "ClassHeader",
  "Modifiers", "Modifier", "ClassWord", "Interfaces", "FieldDeclarations",
  "FieldDeclarationOptSemi", "FieldDeclaration",
  "FieldVariableDeclaration", "VariableDeclarators", "VariableDeclarator",
  "VariableInitializer", "ArrayInitializers", "MethodDeclaration",
  "MethodDeclarator", "ParameterList", "Parameter", "DeclaratorName",
  "Throws", "MethodBody", "ConstructorDeclaration",
  "ConstructorDeclarator", "StaticInitializer", "NonStaticInitializer",
  "Extends", "Block", "LocalVariableDeclarationsAndStatements",
  "LocalVariableDeclarationOrStatement",
  "LocalVariableDeclarationStatement", "Statement", "EmptyStatement",
  "LabelStatement", "ExpressionStatement", "SelectionStatement",
  "IterationStatement", "ForInit", "ForExpr", "ForIncr",
  "ExpressionStatements", "JumpStatement", "GuardingStatement", "Catches",
  "Catch", "CatchHeader", "Finally", "PrimaryExpression", "NotJustName",
  "ComplexPrimary", "ComplexPrimaryNoParenthesis", "ArrayAccess",
  "FieldAccess", "MethodCall", "MethodAccess", "SpecialName",
  "ArgumentList", "NewAllocationExpression",
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
     335,   336,   337,   338,   339,   340,    44,    59,    46,    42,
     123,   125,    61,    40,    41,    58,    91,    93,   126,    33,
      43,    45,    47,    37,    60,    62,    38,    94,   124,    63
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   110,   111,   111,   112,   112,   113,   113,   114,   114,
     114,   114,   114,   114,   114,   114,   114,   115,   115,   116,
     117,   117,   117,   117,   117,   117,   117,   118,   118,   119,
     119,   120,   120,   120,   121,   121,   122,   122,   122,   123,
     123,   124,   124,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   128,   128,   129,   130,   130,   131,   131,
     131,   132,   132,   132,   132,   132,   132,   133,   133,   134,
     134,   135,   135,   136,   136,   136,   137,   137,   137,   138,
     138,   138,   138,   139,   139,   139,   140,   140,   141,   141,
     142,   142,   143,   144,   144,   145,   145,   145,   145,   146,
     146,   147,   148,   149,   149,   150,   150,   151,   151,   152,
     152,   153,   153,   153,   154,   154,   154,   154,   154,   154,
     154,   154,   154,   155,   156,   156,   156,   157,   158,   158,
     158,   159,   159,   159,   159,   160,   160,   160,   161,   161,
     162,   163,   163,   164,   164,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   166,   166,   167,   168,   168,   169,
     170,   170,   171,   171,   171,   172,   172,   173,   173,   173,
     173,   173,   174,   174,   175,   175,   175,   175,   175,   176,
     176,   177,   177,   177,   178,   178,   178,   179,   179,   180,
     180,   181,   181,   181,   181,   181,   181,   182,   182,   183,
     183,   183,   184,   184,   185,   186,   186,   187,   187,   188,
     188,   189,   189,   189,   189,   190,   190,   191,   191,   192,
     192,   193,   193,   193,   193,   194,   194,   195,   196,   196,
     196,   196,   197,   197,   197,   198,   198,   198,   198,   199,
     199,   199,   199,   199,   199,   200,   200,   200,   201,   201,
     202,   202,   203,   203,   204,   204,   205,   205,   206,   206,
     207,   207,   208,   208,   208,   208,   208,   208,   208,   208,
     208,   208,   208,   208,   209,   210
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       3,     2,     2,     2,     1,     1,     1,     3,     2,     1,
       2,     1,     2,     2,     1,     2,     3,     5,     2,     1,
       3,     4,     3,     5,     4,     4,     4,     3,     3,     3,
       2,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     2,     1,
       3,     1,     3,     1,     2,     3,     1,     3,     2,     5,
       4,     4,     3,     4,     3,     2,     1,     3,     2,     3,
       1,     2,     2,     1,     1,     4,     3,     3,     2,     4,
       3,     2,     1,     2,     3,     3,     2,     1,     2,     1,
       1,     3,     4,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     2,     3,     2,     1,     5,     7,
       5,     5,     7,     7,     6,     2,     1,     1,     2,     1,
       1,     1,     3,     3,     2,     3,     2,     3,     2,     3,
       5,     3,     3,     4,     1,     2,     2,     5,     4,     2,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     4,     4,     3,     3,     3,     3,     3,     4,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     3,     3,     4,     4,     5,     4,     4,
       3,     3,     1,     2,     3,     1,     2,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     2,     1,     1,     1,
       1,     1,     4,     4,     4,     1,     2,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       3,     3,     3,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       0,     0,    53,    63,    54,     0,    64,    61,     0,    57,
      56,    55,    58,    62,    59,    60,     0,    19,     0,     0,
      29,     0,    34,    31,     0,     0,    51,     0,    28,    39,
       0,     0,     1,     0,     0,     0,     0,    30,     0,    35,
      17,    32,     0,    52,     0,    50,     0,    36,     0,    27,
      33,     0,    33,    18,     0,     8,    10,     9,    15,    14,
      12,    13,    11,    58,    16,    39,     0,    42,     0,     2,
       4,     5,    76,     0,     0,    66,    68,     0,    72,    73,
       0,    74,    75,   112,    47,     0,     0,    49,    48,    40,
       0,    70,   111,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   196,     0,   195,     0,     0,   194,
       0,     0,     0,     0,     0,    39,   177,   178,   133,   116,
       0,   227,   228,   229,   230,     0,     4,   170,   131,     0,
     117,   119,   120,   124,   125,     0,   127,   128,   129,   130,
     217,   171,   174,   176,   179,   180,   181,     0,   172,   173,
     199,   202,   201,   225,   218,   231,   224,     0,     0,   238,
     242,   245,   249,   255,   258,   260,   262,   264,   266,   268,
     270,   284,   137,   100,    78,    79,     0,    81,   215,     3,
       0,     0,    41,    67,    69,    71,     0,     0,   108,    45,
      44,   113,    65,     6,     0,    46,    37,     0,   110,     0,
       0,    96,   123,     0,   154,     0,   170,   231,   285,     0,
       0,   156,   136,     0,     0,     0,     0,     0,     0,   158,
       0,     0,     0,     0,     0,     0,     0,   221,   222,   134,
     235,   170,     0,     0,     0,     0,    81,     0,     0,     0,
     115,   118,   126,     0,     0,     0,     0,     0,   219,   220,
       0,   273,   274,   275,   276,   277,   278,   279,   280,   281,
     282,   283,   272,     0,   226,   223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    95,   104,
       0,    92,   103,   101,     0,     0,   216,    77,     0,     0,
     106,   102,   107,    43,     0,   114,     0,    98,     0,   109,
     153,   135,   155,   132,     0,     0,     0,   147,   146,   151,
       0,     0,     0,     0,     0,   210,   212,   211,   157,     0,
       0,   159,     0,     0,   162,   164,     0,   161,     0,     0,
     236,   237,     0,     0,   175,   121,   188,   187,   186,   200,
       0,   184,     0,   190,     0,   197,   204,     0,     0,   203,
      86,     0,    83,   185,   271,   239,   240,   241,   243,   244,
     246,   247,   248,   254,   253,   252,   250,   251,   256,   257,
     259,   261,   263,   265,   267,     0,    80,    91,    82,    94,
       0,     0,    90,   105,     7,    99,    97,     0,   122,   123,
     149,     0,     0,     0,   145,     0,   208,     0,     0,   213,
     209,     0,     0,     0,   169,   165,   163,   166,     0,   175,
     232,   233,   234,   182,   183,     0,   189,   206,    84,     0,
      88,   205,     0,    93,    89,     0,     0,     0,   150,   148,
     152,   138,   207,   214,   140,   160,     0,   141,   198,    85,
      87,   269,     0,   144,     0,     0,     0,   168,   142,   143,
     139,   167
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    68,    69,   192,   205,    41,    16,    17,    18,    19,
      20,    21,    22,   206,    23,    24,    25,    26,    27,    87,
      74,    75,    76,    77,   174,   175,   360,   361,    78,   176,
     200,   201,   236,   187,   291,    79,    80,    81,    82,    88,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     320,   401,   437,   321,   138,   139,   334,   335,   336,   337,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   354,
     149,   150,   151,   152,   325,   326,   179,   153,   154,   155,
     156,   157,   158,   159,   232,   233,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   263,   172,
     209
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -282
static const yytype_int16 yypact[] =
{
    1929,   -56,  -282,  -282,  -282,    31,  -282,  -282,    31,  -282,
    -282,  -282,  -282,  -282,  -282,  -282,   133,  -282,  1748,  1833,
    -282,  1772,  -282,    48,    61,   244,  -282,   101,  -282,  -282,
      85,   151,  -282,    76,  1857,  1809,   113,  -282,  1881,  -282,
    -282,   116,  1440,  -282,   143,    80,   -10,   116,   163,   116,
     202,  1905,  -282,  -282,   129,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,   164,  -282,   172,   413,  -282,   185,   207,
    -282,   192,  -282,  1680,  1500,  -282,    48,   197,  -282,  -282,
     -23,  -282,  -282,  -282,    80,   409,    31,  -282,    -2,  -282,
      48,  -282,  -282,    72,   201,   118,  1255,   134,   200,   616,
     409,   204,   211,   409,  -282,   869,  -282,   215,   218,  -282,
    1255,   164,   219,  1313,  1313,   205,  -282,  -282,  -282,  -282,
    1255,  -282,  -282,  -282,  -282,   185,   225,    74,  -282,   515,
    -282,  -282,  -282,  -282,  -282,   228,  -282,  -282,  -282,  -282,
    -282,   230,   220,   229,  -282,  -282,  -282,   246,   249,  -282,
    -282,   231,   233,   182,   255,   254,  -282,  1313,  1255,  -282,
      96,   148,   171,    35,   184,   238,   240,   237,   268,   -24,
    -282,  -282,  -282,  -282,   262,  -282,     6,    39,  -282,   278,
     185,   -23,  -282,  -282,   116,  -282,    31,   164,  -282,  -282,
      -2,  -282,   264,   192,   409,  -282,   116,   409,  -282,   185,
      11,  -282,  -282,   266,  -282,   225,    87,  -282,  -282,   259,
     272,  -282,  -282,   273,   296,   185,   691,  1255,    16,  -282,
     274,  1255,  1255,   275,    23,  1255,  1255,  -282,  -282,  -282,
      15,    83,   269,   270,   271,   187,    42,   354,     7,  1255,
    -282,  -282,  -282,   284,  1255,   927,  1560,   749,  -282,  -282,
     286,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,
    -282,  -282,  -282,  1255,  -282,  -282,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,   409,  1255,  1255,  1255,  1255,  1255,
    1255,  1255,  1255,  1255,  1255,  1255,  1255,   185,  -282,  -282,
      38,  -282,  -282,  -282,   997,   198,  -282,   262,     6,   164,
    -282,   264,  -282,  -282,    31,  -282,   185,   299,  1725,  -282,
    -282,  -282,  -282,  -282,   279,   189,   287,  -282,  -282,  -282,
    1057,   196,   282,  1115,  1255,   -42,  -282,   278,  -282,   283,
     285,  -282,   295,   164,    23,  -282,   164,  -282,   306,   307,
     278,   278,  1255,  1255,  1371,  -282,  -282,  -282,  -282,  -282,
     281,  -282,   305,  -282,    58,  -282,  -282,  1620,   809,  -282,
    -282,    62,  -282,  -282,  -282,  -282,  -282,  -282,    96,    96,
     148,   148,   148,  -282,   171,   171,   171,   171,    35,    35,
     184,   238,   240,   237,   268,   308,  -282,  -282,  -282,  -282,
      64,    38,  -282,  -282,   192,   299,  -282,  1255,  -282,  -282,
    -282,  1185,   317,  1255,  -282,   616,  -282,   100,   309,  -282,
     278,   164,   616,   409,  -282,  -282,  -282,  -282,   616,  -282,
    -282,  -282,  -282,  -282,  -282,  1255,  -282,  -282,  -282,   121,
     997,  -282,  1255,  -282,  -282,   311,   616,   313,   323,  -282,
    -282,   392,  -282,  -282,  -282,  -282,   -34,  -282,  -282,  -282,
    -282,  -282,   324,  -282,   616,   616,   318,  -282,  -282,  -282,
    -282,  -282
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -282,   -55,   -71,   236,   -38,    26,  -282,  -282,  -282,   156,
      92,   398,    29,    -5,   -33,  -282,   -32,    -3,     2,   -63,
     177,   -68,  -282,  -282,  -108,   138,  -281,    79,  -282,   252,
     139,   130,   -61,  -161,  -274,  -282,   366,  -282,  -282,   358,
     -40,  -282,   315,   232,   -98,  -282,  -282,  -208,  -282,  -282,
    -282,  -282,  -282,    45,  -282,  -282,  -282,   117,  -282,   119,
    -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,  -282,   131,
    -282,   214,  -282,  -282,  -282,   135,  -179,  -282,  -282,   114,
     123,  -282,  -282,  -146,  -282,  -282,    36,   -11,   -53,    30,
     188,   193,   194,   195,   186,  -282,   -91,   213,  -282,   -57,
    -282
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -194
static const yytype_int16 yytable[] =
{
      30,   214,    83,    31,    70,   208,   183,   177,   319,    72,
      73,   125,   265,   388,   191,   290,   387,   235,   180,   347,
     299,   189,    43,    92,   392,   195,    86,    44,   126,   178,
     186,    28,   218,   332,    83,    70,    70,    71,   199,   327,
     188,    72,    73,   103,   333,   215,   285,    70,   220,   456,
      39,   340,   341,   223,   324,    70,    47,    49,   348,   186,
     457,   127,    70,   234,    39,    70,   274,    66,    71,    71,
      43,   224,   297,    89,   125,    44,    55,   288,    56,    90,
      71,   193,   230,    57,   194,   286,   178,   178,    71,    58,
      89,   126,   197,   289,    59,    71,    66,   308,    71,    85,
     275,   276,   184,   237,    60,   309,    61,   315,    86,   323,
     293,    37,   324,   293,    29,   231,   196,   434,    62,   177,
     365,   366,   367,   305,   127,   289,    37,   303,    66,    64,
      37,   294,   295,    32,   294,    40,   292,   391,   307,   277,
     278,   300,   306,    37,   425,    -5,   410,   302,   430,   450,
     308,    42,   426,   431,   178,    29,    70,    -5,   433,    70,
     322,   125,   238,    50,   329,   330,   198,  -193,   338,   339,
     239,   238,    40,    46,    34,   238,  -193,    38,   126,   239,
    -193,   193,   350,   239,    45,   266,   425,   352,   355,    71,
     362,    51,    71,   319,   442,   440,   420,   421,   267,   268,
      52,   203,    55,    53,    56,   204,    83,   430,    70,    57,
     207,   127,   449,    72,    73,    58,    91,   210,   197,   373,
      59,   211,   374,   375,   376,   377,    84,   227,   228,   385,
      60,   -38,    61,   271,   272,   273,    70,   362,    40,    48,
     199,    71,   248,   249,    62,   395,    89,     2,   269,   270,
     292,   279,   280,   199,    66,    64,     3,    70,   292,   393,
     370,   371,   372,   402,     4,    93,   355,   408,   173,    71,
      70,   264,   207,   287,   345,   287,   398,     6,   178,     7,
      48,    29,   403,   404,   185,     9,    10,    11,   202,   183,
      71,    12,   389,   414,    13,   212,   417,   216,    14,   394,
     229,   362,    15,    71,   217,   368,   369,   441,   221,   378,
     379,   222,   225,   237,   445,   242,   244,    83,   243,    70,
     447,   246,  -191,   247,    72,    73,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   261,   284,   453,   245,
     435,   451,  -192,   250,   281,   283,   262,   282,   287,   296,
     304,   292,    71,   310,   311,   314,   459,   460,   446,   312,
     313,   328,   331,   342,   343,   344,   346,   351,   448,   363,
     293,   444,   397,   362,   399,    70,   405,   411,   423,   412,
     207,   207,   207,   207,   207,   207,   207,   207,   413,   207,
     207,   207,   207,   207,   207,   207,   207,   207,   207,   207,
     418,   419,   424,   432,   439,   452,   443,   454,    71,   403,
     455,   458,   461,    55,    94,    56,    35,    55,    95,    56,
      57,    96,   301,   357,    57,   386,    58,    97,    98,    99,
      58,    59,   298,   100,   390,    59,   101,   429,   396,   181,
     102,    60,   190,    61,   241,    60,   438,    61,   318,   103,
     104,   415,   349,   416,   407,    62,   207,   207,   105,    62,
     409,   106,   107,   108,   109,   110,    64,   422,   111,   380,
      64,   384,   112,   113,   114,   381,   364,   382,     0,   383,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,   115,   116,   117,     0,
     118,     0,     0,    66,   119,     0,   120,     0,     0,     0,
       0,   121,   122,   123,   124,     0,    94,     0,     0,    55,
      95,    56,     0,    96,     0,     0,    57,     0,     0,    97,
      98,    99,    58,     0,     0,   100,     0,    59,   101,     0,
       0,     0,   102,     0,     0,     0,   207,    60,     0,    61,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
     105,    62,     0,   106,   107,   108,   109,   110,     0,     0,
     111,     0,    64,     0,   112,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   115,   116,
     117,     0,   118,     0,     0,    66,   240,     0,   120,     0,
       0,     0,     0,   121,   122,   123,   124,   213,     0,     0,
      55,    95,    56,     0,    96,     0,     0,    57,     0,     0,
      97,    98,    99,    58,     0,     0,     0,     0,    59,   101,
       0,     0,     0,   102,     0,     0,     0,     0,    60,     0,
      61,     0,   103,   104,     0,     0,     0,     0,     0,     0,
       0,   105,    62,     0,   106,   107,   108,   109,   110,     0,
       0,   111,     0,    64,     0,   112,   113,   114,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   316,     0,     0,    55,     0,    56,     0,   115,
     116,   117,    57,   118,     0,     0,    66,     0,    58,   120,
       0,   100,     0,    59,   121,   122,   123,   124,     0,     0,
       0,     0,     0,    60,     0,    61,     0,   103,   104,     0,
       0,     0,     0,     0,     0,     0,     0,    62,     0,   106,
       0,     0,   109,     0,     0,     0,     0,     0,    64,     0,
       0,   113,   114,    55,     0,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,    59,     0,     0,    29,   116,   117,     0,   317,     0,
       0,    60,     0,    61,   120,   103,   104,     0,     0,   121,
     122,   123,   124,     0,     0,    62,     0,   106,     0,     0,
     109,     0,     0,     0,     0,     0,    64,     0,     0,   113,
     114,     0,     0,    55,     0,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,    59,    29,   116,   117,     0,     0,     0,     0,   358,
     359,    60,   120,    61,     0,   103,   104,   121,   122,   123,
     124,     0,     0,     0,     0,    62,     0,   106,     0,     0,
     109,     0,     0,     0,     0,     0,    64,     0,     0,   113,
     114,     0,     0,    55,     0,    56,     0,     0,     0,     0,
      57,     0,     0,     0,     0,     0,    58,     0,     0,     0,
       0,    59,    29,   116,   117,     0,     0,     0,     0,   358,
     428,    60,   120,    61,     0,   103,   104,   121,   122,   123,
     124,     0,     0,     0,     0,    62,     0,   106,     0,     0,
     109,     0,     0,     0,     0,     0,    64,     0,     0,   113,
     114,    55,     0,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,    59,
       0,     0,    29,   116,   117,     0,   219,     0,     0,    60,
       0,    61,   120,   103,   104,     0,     0,   121,   122,   123,
     124,     0,     0,    62,     0,   106,     0,     0,   109,     0,
       0,     0,     0,     0,    64,     0,     0,   113,   114,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    55,     0,    56,     0,     0,     0,     0,    57,     0,
      29,   116,   117,     0,    58,     0,     0,     0,     0,    59,
     120,   353,     0,     0,     0,   121,   122,   123,   124,    60,
       0,    61,     0,   103,   104,     0,     0,     0,     0,     0,
       0,     0,     0,    62,     0,   106,     0,     0,   109,     0,
       0,     0,     0,     0,    64,     0,     0,   113,   114,     0,
       0,    55,     0,    56,     0,     0,     0,     0,    57,     0,
       0,     0,     0,     0,    58,     0,     0,     0,     0,    59,
      29,   116,   117,     0,     0,     0,     0,   358,     0,    60,
     120,    61,     0,   103,   104,   121,   122,   123,   124,     0,
       0,     0,     0,    62,     0,   106,     0,     0,   109,     0,
       0,     0,     0,     0,    64,     0,     0,   113,   114,    55,
       0,    56,     0,     0,     0,     0,    57,     0,     0,     0,
       0,     0,    58,     0,     0,     0,     0,    59,     0,     0,
      29,   116,   117,     0,   400,     0,     0,    60,     0,    61,
     120,   103,   104,     0,     0,   121,   122,   123,   124,     0,
       0,    62,     0,   106,     0,     0,   109,     0,     0,     0,
       0,     0,    64,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,     0,     0,     0,    57,     0,    29,   116,
     117,     0,    58,     0,     0,     0,     0,    59,   120,   406,
       0,     0,     0,   121,   122,   123,   124,    60,     0,    61,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,   106,     0,     0,   109,     0,     0,     0,
       0,     0,    64,     0,     0,   113,   114,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    55,
       0,    56,     0,     0,     0,     0,    57,     0,    29,   116,
     117,     0,    58,     0,     0,     0,     0,    59,   120,   436,
       0,     0,     0,   121,   122,   123,   124,    60,     0,    61,
       0,   103,   104,     0,     0,     0,     0,     0,     0,     0,
       0,    62,     0,   106,     0,     0,   109,     0,     0,     0,
       0,     0,    64,     0,     0,   113,   114,    55,     0,    56,
       0,     0,     0,     0,    57,     0,     0,     0,     0,     0,
      58,     0,     0,     0,     0,    59,     0,     0,    29,   116,
     117,     0,     0,     0,     0,    60,     0,    61,   120,   103,
     104,     0,     0,   121,   122,   123,   124,     0,     0,    62,
       0,   106,     0,     0,   109,     0,     0,     0,     0,     0,
      64,     0,     0,   113,   114,    55,     0,    56,     0,     0,
       0,     0,    57,     0,     0,     0,     0,     0,    58,     0,
       0,     0,     0,    59,     0,     0,    29,   116,   117,     0,
       0,     0,     0,    60,     0,    61,   226,   103,   104,     0,
       0,   121,   122,   123,   124,     0,     0,    62,     0,   106,
       0,     0,   109,     0,     0,     0,     0,     0,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    54,     0,     2,    55,     0,    56,     0,     0,     0,
       0,    57,     3,     0,    29,   116,   117,    58,     0,     0,
       4,     0,    59,     0,   226,     0,     0,     0,     0,   121,
     122,     0,    60,     6,    61,     7,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    62,    63,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    64,    15,     0,
       0,    54,     0,     2,    55,     0,    56,     0,     0,     0,
       0,    57,     3,     0,     0,     0,     0,    58,     0,     0,
       4,     0,    59,    65,     0,     0,     0,     0,     0,     0,
      66,    67,    60,     6,    61,     7,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    62,    63,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    64,    15,     0,
       0,    54,     0,     2,    55,     0,    56,     0,     0,     0,
       0,    57,     3,     0,     0,     0,     0,    58,     0,     0,
       4,     0,    59,    65,     0,     0,     0,     0,     0,     0,
      66,   182,    60,     6,    61,     7,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    62,    63,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    64,    15,     0,
       0,    54,     0,     2,    55,     0,    56,     0,     0,     0,
       0,    57,     3,     0,     0,     0,     0,    58,     0,     0,
       4,     0,    59,    65,     0,     0,     0,     0,     0,     0,
      66,   356,    60,     6,    61,     7,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    62,    63,     0,     0,
      13,     0,     0,     0,    14,     0,     0,    64,    15,     0,
       0,     0,     0,     2,    55,     0,    56,     0,     0,     0,
       0,    57,     3,     0,     0,     0,     0,    58,     0,     0,
       4,     0,    59,    65,     0,     0,     0,     0,     0,     0,
      66,   427,    60,     6,    61,     7,     0,     0,     0,     0,
       0,     9,    10,    11,     0,     0,    62,    12,     0,    55,
      13,    56,     0,     0,    14,     0,    57,    64,    15,     0,
       0,     0,    58,     0,     0,   197,     0,    59,   -24,    33,
       0,     2,     0,     0,     0,     0,     0,    60,     0,    61,
       3,     0,     0,    65,     0,     0,     0,     0,     4,     0,
       0,    62,   -25,    33,     0,     2,     0,     5,     0,     0,
       0,     6,    64,     7,     3,     0,     0,     0,     0,     9,
      10,    11,     4,     0,     0,    12,     0,     0,    13,     0,
       0,     5,    14,     0,     0,     6,    15,     7,    29,   -21,
      33,     0,     2,     9,    10,    11,     0,     0,     0,    12,
       0,     3,    13,     0,     0,     0,    14,     0,     0,     4,
      15,     0,     0,   -26,    36,     0,     2,     0,     5,     0,
       0,     0,     6,     0,     7,     3,     0,     0,     0,     0,
       9,    10,    11,     4,     0,     0,    12,   -22,    36,    13,
       2,     0,     0,    14,     0,     0,     6,    15,     7,     3,
       0,     0,     0,     0,     9,    10,    11,     4,     0,     0,
      12,   -23,    36,    13,     2,     0,     0,    14,     0,     0,
       6,    15,     7,     3,     0,     0,     0,     0,     9,    10,
      11,     4,     0,     0,    12,   -20,    36,    13,     2,     0,
       0,    14,     0,     0,     6,    15,     7,     3,     0,     0,
       0,     0,     9,    10,    11,     4,     0,     0,    12,     0,
       1,    13,     2,     0,     0,    14,     0,     0,     6,    15,
       7,     3,     0,     0,     0,     0,     9,    10,    11,     4,
       0,     0,    12,     0,     0,    13,     0,     0,     5,    14,
       0,     0,     6,    15,     7,     0,     0,     0,     0,     8,
       9,    10,    11,     0,     0,     0,    12,     0,     0,    13,
       0,     0,     0,    14,     0,     0,     0,    15
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-282))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,    99,    42,     8,    42,    96,    74,    68,   216,    42,
      42,    66,   158,   294,    85,   176,   290,   125,    73,    12,
     181,    84,    25,    63,   298,    88,    28,    25,    66,    71,
      53,    87,   103,    10,    74,    73,    74,    42,    93,   218,
      80,    74,    74,    36,    21,   100,    70,    85,   105,    83,
      21,   230,   231,   110,    96,    93,    30,    31,    51,    53,
      94,    66,   100,   120,    35,   103,    31,    90,    73,    74,
      73,   111,   180,    83,   129,    73,     4,    71,     6,    89,
      85,    86,   120,    11,    86,   109,    71,    71,    93,    17,
      83,   129,    20,    87,    22,   100,    90,    86,   103,    19,
      65,    66,    76,    88,    32,    94,    34,   215,    28,    93,
      71,    19,    96,    71,    83,   120,    90,   391,    46,   180,
     266,   267,   268,   194,   129,    87,    34,   190,    90,    57,
      38,    92,    93,     0,    92,    87,   176,   298,   199,   104,
     105,   181,   197,    51,    86,    71,   325,   187,    86,   430,
      86,    90,    94,    91,    71,    83,   194,    83,    94,   197,
     217,   216,    88,    87,   221,   222,    94,    93,   225,   226,
      96,    88,    87,    88,    18,    88,    93,    21,   216,    96,
      93,   186,   239,    96,    83,    89,    86,   244,   245,   194,
     247,    35,   197,   401,    94,   403,   342,   343,   102,   103,
      87,    83,     4,    87,     6,    87,   246,    86,   246,    11,
      96,   216,    91,   246,   246,    17,    87,    83,    20,   274,
      22,    87,   275,   276,   277,   278,    83,   113,   114,   286,
      32,    29,    34,    62,    63,    64,   274,   294,    87,    88,
     295,   246,    60,    61,    46,   306,    83,     3,   100,   101,
     290,    67,    68,   308,    90,    57,    12,   295,   298,   299,
     271,   272,   273,   320,    20,    93,   323,   324,    83,   274,
     308,   157,   158,    86,    87,    86,    87,    33,    71,    35,
      88,    83,    86,    87,    87,    41,    42,    43,    87,   357,
     295,    47,    94,   333,    50,    95,   336,    93,    54,   304,
      95,   358,    58,   308,    93,   269,   270,   405,    93,   279,
     280,    93,    93,    88,   412,    87,    96,   357,    88,   357,
     418,    90,    93,    90,   357,   357,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    69,   436,    93,
     397,   432,    93,    88,   106,   108,    92,   107,    86,    71,
      86,   391,   357,    87,    95,    59,   454,   455,   413,    87,
      87,    87,    87,    94,    94,    94,    12,    83,   425,    83,
      71,   411,    93,   430,    87,   413,    94,    94,    97,    94,
     266,   267,   268,   269,   270,   271,   272,   273,    93,   275,
     276,   277,   278,   279,   280,   281,   282,   283,   284,   285,
      94,    94,    97,    95,    87,    94,    97,    94,   413,    86,
      18,    87,    94,     4,     1,     6,    18,     4,     5,     6,
      11,     8,   186,   246,    11,   287,    17,    14,    15,    16,
      17,    22,   180,    20,   295,    22,    23,   358,   308,    73,
      27,    32,    84,    34,   129,    32,   401,    34,   216,    36,
      37,   334,   238,   334,   323,    46,   342,   343,    45,    46,
     325,    48,    49,    50,    51,    52,    57,   344,    55,   281,
      57,   285,    59,    60,    61,   282,   263,   283,    -1,   284,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    -1,    -1,    -1,    83,    84,    85,    -1,
      87,    -1,    -1,    90,    91,    -1,    93,    -1,    -1,    -1,
      -1,    98,    99,   100,   101,    -1,     1,    -1,    -1,     4,
       5,     6,    -1,     8,    -1,    -1,    11,    -1,    -1,    14,
      15,    16,    17,    -1,    -1,    20,    -1,    22,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,   432,    32,    -1,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      45,    46,    -1,    48,    49,    50,    51,    52,    -1,    -1,
      55,    -1,    57,    -1,    59,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    -1,    87,    -1,    -1,    90,    91,    -1,    93,    -1,
      -1,    -1,    -1,    98,    99,   100,   101,     1,    -1,    -1,
       4,     5,     6,    -1,     8,    -1,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    -1,    -1,    -1,    -1,    22,    23,
      -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    32,    -1,
      34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    46,    -1,    48,    49,    50,    51,    52,    -1,
      -1,    55,    -1,    57,    -1,    59,    60,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     1,    -1,    -1,     4,    -1,     6,    -1,    83,
      84,    85,    11,    87,    -1,    -1,    90,    -1,    17,    93,
      -1,    20,    -1,    22,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    32,    -1,    34,    -1,    36,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    60,    61,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    -1,    -1,    83,    84,    85,    -1,    87,    -1,
      -1,    32,    -1,    34,    93,    36,    37,    -1,    -1,    98,
      99,   100,   101,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    83,    84,    85,    -1,    -1,    -1,    -1,    90,
      91,    32,    93,    34,    -1,    36,    37,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,    -1,    -1,     4,    -1,     6,    -1,    -1,    -1,    -1,
      11,    -1,    -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,
      -1,    22,    83,    84,    85,    -1,    -1,    -1,    -1,    90,
      91,    32,    93,    34,    -1,    36,    37,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    46,    -1,    48,    -1,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    60,
      61,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      -1,    -1,    83,    84,    85,    -1,    87,    -1,    -1,    32,
      -1,    34,    93,    36,    37,    -1,    -1,    98,    99,   100,
     101,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      83,    84,    85,    -1,    17,    -1,    -1,    -1,    -1,    22,
      93,    94,    -1,    -1,    -1,    98,    99,   100,   101,    32,
      -1,    34,    -1,    36,    37,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,    -1,
      -1,     4,    -1,     6,    -1,    -1,    -1,    -1,    11,    -1,
      -1,    -1,    -1,    -1,    17,    -1,    -1,    -1,    -1,    22,
      83,    84,    85,    -1,    -1,    -1,    -1,    90,    -1,    32,
      93,    34,    -1,    36,    37,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    46,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    57,    -1,    -1,    60,    61,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,
      -1,    -1,    17,    -1,    -1,    -1,    -1,    22,    -1,    -1,
      83,    84,    85,    -1,    87,    -1,    -1,    32,    -1,    34,
      93,    36,    37,    -1,    -1,    98,    99,   100,   101,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    83,    84,
      85,    -1,    17,    -1,    -1,    -1,    -1,    22,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,    32,    -1,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     4,
      -1,     6,    -1,    -1,    -1,    -1,    11,    -1,    83,    84,
      85,    -1,    17,    -1,    -1,    -1,    -1,    22,    93,    94,
      -1,    -1,    -1,    98,    99,   100,   101,    32,    -1,    34,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    60,    61,     4,    -1,     6,
      -1,    -1,    -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,
      17,    -1,    -1,    -1,    -1,    22,    -1,    -1,    83,    84,
      85,    -1,    -1,    -1,    -1,    32,    -1,    34,    93,    36,
      37,    -1,    -1,    98,    99,   100,   101,    -1,    -1,    46,
      -1,    48,    -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    60,    61,     4,    -1,     6,    -1,    -1,
      -1,    -1,    11,    -1,    -1,    -1,    -1,    -1,    17,    -1,
      -1,    -1,    -1,    22,    -1,    -1,    83,    84,    85,    -1,
      -1,    -1,    -1,    32,    -1,    34,    93,    36,    37,    -1,
      -1,    98,    99,   100,   101,    -1,    -1,    46,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    12,    -1,    83,    84,    85,    17,    -1,    -1,
      20,    -1,    22,    -1,    93,    -1,    -1,    -1,    -1,    98,
      99,    -1,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,     1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,    -1,
      50,    -1,    -1,    -1,    54,    -1,    -1,    57,    58,    -1,
      -1,    -1,    -1,     3,     4,    -1,     6,    -1,    -1,    -1,
      -1,    11,    12,    -1,    -1,    -1,    -1,    17,    -1,    -1,
      20,    -1,    22,    83,    -1,    -1,    -1,    -1,    -1,    -1,
      90,    91,    32,    33,    34,    35,    -1,    -1,    -1,    -1,
      -1,    41,    42,    43,    -1,    -1,    46,    47,    -1,     4,
      50,     6,    -1,    -1,    54,    -1,    11,    57,    58,    -1,
      -1,    -1,    17,    -1,    -1,    20,    -1,    22,     0,     1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    32,    -1,    34,
      12,    -1,    -1,    83,    -1,    -1,    -1,    -1,    20,    -1,
      -1,    46,     0,     1,    -1,     3,    -1,    29,    -1,    -1,
      -1,    33,    57,    35,    12,    -1,    -1,    -1,    -1,    41,
      42,    43,    20,    -1,    -1,    47,    -1,    -1,    50,    -1,
      -1,    29,    54,    -1,    -1,    33,    58,    35,    83,     0,
       1,    -1,     3,    41,    42,    43,    -1,    -1,    -1,    47,
      -1,    12,    50,    -1,    -1,    -1,    54,    -1,    -1,    20,
      58,    -1,    -1,     0,     1,    -1,     3,    -1,    29,    -1,
      -1,    -1,    33,    -1,    35,    12,    -1,    -1,    -1,    -1,
      41,    42,    43,    20,    -1,    -1,    47,     0,     1,    50,
       3,    -1,    -1,    54,    -1,    -1,    33,    58,    35,    12,
      -1,    -1,    -1,    -1,    41,    42,    43,    20,    -1,    -1,
      47,     0,     1,    50,     3,    -1,    -1,    54,    -1,    -1,
      33,    58,    35,    12,    -1,    -1,    -1,    -1,    41,    42,
      43,    20,    -1,    -1,    47,     0,     1,    50,     3,    -1,
      -1,    54,    -1,    -1,    33,    58,    35,    12,    -1,    -1,
      -1,    -1,    41,    42,    43,    20,    -1,    -1,    47,    -1,
       1,    50,     3,    -1,    -1,    54,    -1,    -1,    33,    58,
      35,    12,    -1,    -1,    -1,    -1,    41,    42,    43,    20,
      -1,    -1,    47,    -1,    -1,    50,    -1,    -1,    29,    54,
      -1,    -1,    33,    58,    35,    -1,    -1,    -1,    -1,    40,
      41,    42,    43,    -1,    -1,    -1,    47,    -1,    -1,    50,
      -1,    -1,    -1,    54,    -1,    -1,    -1,    58
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    12,    20,    29,    33,    35,    40,    41,
      42,    43,    47,    50,    54,    58,   116,   117,   118,   119,
     120,   121,   122,   124,   125,   126,   127,   128,    87,    83,
     123,   123,     0,     1,   119,   121,     1,   120,   119,   122,
      87,   115,    90,   127,   128,    83,    88,   115,    88,   115,
      87,   119,    87,    87,     1,     4,     6,    11,    17,    22,
      32,    34,    46,    47,    57,    83,    90,    91,   111,   112,
     114,   123,   124,   126,   130,   131,   132,   133,   138,   145,
     146,   147,   148,   150,    83,    19,    28,   129,   149,    83,
      89,    87,   150,    93,     1,     5,     8,    14,    15,    16,
      20,    23,    27,    36,    37,    45,    48,    49,    50,    51,
      52,    55,    59,    60,    61,    83,    84,    85,    87,    91,
      93,    98,    99,   100,   101,   111,   114,   123,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   164,   165,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   180,
     181,   182,   183,   187,   188,   189,   190,   191,   192,   193,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   209,    83,   134,   135,   139,   142,    71,   186,
     111,   146,    91,   131,   115,    87,    53,   143,   150,   129,
     149,   112,   113,   123,    86,   129,   115,    20,    94,   111,
     140,   141,    87,    83,    87,   114,   123,   189,   206,   210,
      83,    87,    95,     1,   154,   111,    93,    93,   112,    87,
     209,    93,    93,   209,   150,    93,    93,   189,   189,    95,
     114,   123,   194,   195,   209,   134,   142,    88,    88,    96,
      91,   152,    87,    88,    96,    93,    90,    90,    60,    61,
      88,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    92,   208,   189,   193,    89,   102,   103,   100,
     101,    62,    63,    64,    31,    65,    66,   104,   105,    67,
      68,   106,   107,   108,    69,    70,   109,    86,    71,    87,
     143,   144,   150,    71,    92,    93,    71,   134,   139,   143,
     150,   113,   150,   129,    86,   112,   111,   142,    86,    94,
      87,    95,    87,    87,    59,   134,     1,    87,   153,   157,
     160,   163,   209,    93,    96,   184,   185,   186,    87,   209,
     209,    87,    10,    21,   166,   167,   168,   169,   209,   209,
     186,   186,    94,    94,    94,    87,    12,    12,    51,   181,
     209,    83,   209,    94,   179,   209,    91,   130,    90,    91,
     136,   137,   209,    83,   207,   193,   193,   193,   196,   196,
     197,   197,   197,   111,   198,   198,   198,   198,   199,   199,
     200,   201,   202,   203,   204,   209,   135,   144,   136,    94,
     140,   143,   144,   150,   123,   142,   141,    93,    87,    87,
      87,   161,   209,    86,    87,    94,    94,   179,   209,   185,
     186,    94,    94,    93,   150,   167,   169,   150,    94,    94,
     193,   193,   190,    97,    97,    86,    94,    91,    91,   137,
      86,    91,    95,    94,   144,   209,    94,   162,   163,    87,
     157,   154,    94,    97,   150,   154,   111,   154,   209,    91,
     136,   206,    94,   154,    94,    18,    83,    94,    87,   154,
     154,    94
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
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


/* This macro is provided for backward compatibility. */

#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  YYSIZE_T yysize1;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = 0;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                yysize1 = yysize + yytnamerr (0, yytname[yyx]);
                if (! (yysize <= yysize1
                       && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                  return 2;
                yysize = yysize1;
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  yysize1 = yysize + yystrlen (yyformat);
  if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
    return 2;
  yysize = yysize1;

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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


/*----------.
| yyparse.  |
`----------*/

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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
        case 28:

/* Line 1806 of yacc.c  */
#line 87 "java.y"
    { yyerrok; }
    break;

  case 33:

/* Line 1806 of yacc.c  */
#line 98 "java.y"
    { yyerrok; }
    break;

  case 38:

/* Line 1806 of yacc.c  */
#line 109 "java.y"
    { yyerrok; }
    break;

  case 70:

/* Line 1806 of yacc.c  */
#line 168 "java.y"
    { yyerrok; }
    break;

  case 123:

/* Line 1806 of yacc.c  */
#line 287 "java.y"
    { yyerrok; }
    break;

  case 132:

/* Line 1806 of yacc.c  */
#line 299 "java.y"
    { yyerrok; }
    break;



/* Line 1806 of yacc.c  */
#line 2361 "y.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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
      if (!yypact_value_is_default (yyn))
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
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



/* Line 2067 of yacc.c  */
#line 623 "java.y"

#include <stdio.h>
int main()
{
	yyparse();
	return 0;
}


