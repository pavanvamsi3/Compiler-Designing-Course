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
#line 16 "yacc.y"

	#include <string.h>
	#include <stdlib.h>
	char errors[1000][1000];
	char funs[1000][1000];
	char id[10000];
	int cfuns = 0;
	char ufuns[1000][1000];
	int cufuns = 0;
	int ercnt = 0;
	void add_error(char *s);


/* Line 268 of yacc.c  */
#line 85 "y.tab.c"

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
     MUL_ASSIGN = 273,
     DIV_ASSIGN = 274,
     MOD_ASSIGN = 275,
     ADD_ASSIGN = 276,
     SUB_ASSIGN = 277,
     LEFT_ASSIGN = 278,
     RIGHT_ASSIGN = 279,
     AND_ASSIGN = 280,
     XOR_ASSIGN = 281,
     OR_ASSIGN = 282,
     TYPE_NAME = 283,
     CLASS = 284,
     TYPEDEF = 285,
     EXTERN = 286,
     STATIC = 287,
     AUTO = 288,
     REGISTER = 289,
     CHAR = 290,
     SHORT = 291,
     INT = 292,
     LONG = 293,
     SIGNED = 294,
     UNSIGNED = 295,
     FLOAT = 296,
     DOUBLE = 297,
     CONST = 298,
     VOLATILE = 299,
     VOID = 300,
     STRUCT = 301,
     UNION = 302,
     ENUM = 303,
     ELLIPSIS = 304,
     CASE = 305,
     DEFAULT = 306,
     IF = 307,
     ELSE = 308,
     SWITCH = 309,
     WHILE = 310,
     DO = 311,
     FOR = 312,
     GOTO = 313,
     CONTINUE = 314,
     BREAK = 315,
     RETURN = 316,
     NEW = 317,
     PRIVATE = 318,
     PUBLIC = 319,
     IMPORT = 320,
     USING = 321
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
#define MUL_ASSIGN 273
#define DIV_ASSIGN 274
#define MOD_ASSIGN 275
#define ADD_ASSIGN 276
#define SUB_ASSIGN 277
#define LEFT_ASSIGN 278
#define RIGHT_ASSIGN 279
#define AND_ASSIGN 280
#define XOR_ASSIGN 281
#define OR_ASSIGN 282
#define TYPE_NAME 283
#define CLASS 284
#define TYPEDEF 285
#define EXTERN 286
#define STATIC 287
#define AUTO 288
#define REGISTER 289
#define CHAR 290
#define SHORT 291
#define INT 292
#define LONG 293
#define SIGNED 294
#define UNSIGNED 295
#define FLOAT 296
#define DOUBLE 297
#define CONST 298
#define VOLATILE 299
#define VOID 300
#define STRUCT 301
#define UNION 302
#define ENUM 303
#define ELLIPSIS 304
#define CASE 305
#define DEFAULT 306
#define IF 307
#define ELSE 308
#define SWITCH 309
#define WHILE 310
#define DO 311
#define FOR 312
#define GOTO 313
#define CONTINUE 314
#define BREAK 315
#define RETURN 316
#define NEW 317
#define PRIVATE 318
#define PUBLIC 319
#define IMPORT 320
#define USING 321




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 343 of yacc.c  */
#line 259 "y.tab.c"

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  91
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  73
/* YYNRULES -- Number of rules.  */
#define YYNRULES  236
/* YYNRULES -- Number of states.  */
#define YYNSTATES  371

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
       2,     2,     2,    74,     2,     2,     2,    76,    69,     2,
      86,    87,    70,    71,    68,    72,    67,    75,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    82,    90,
      77,    83,    78,    81,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    88,     2,    89,    79,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    84,    80,    85,    73,     2,     2,     2,
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
       0,     0,     3,     5,     7,     9,    13,    15,    20,    24,
      29,    33,    37,    40,    43,    45,    49,    51,    54,    57,
      60,    63,    68,    69,    71,    73,    75,    77,    79,    81,
      83,    88,    90,    94,    98,   102,   104,   108,   112,   114,
     118,   122,   124,   128,   132,   136,   140,   142,   146,   150,
     152,   156,   158,   162,   164,   168,   170,   174,   176,   180,
     182,   188,   190,   194,   195,   197,   199,   201,   203,   205,
     207,   209,   211,   213,   215,   217,   219,   223,   225,   228,
     232,   234,   237,   239,   242,   244,   247,   249,   253,   255,
     259,   261,   263,   265,   267,   269,   271,   273,   275,   277,
     279,   281,   283,   285,   287,   289,   291,   293,   299,   304,
     307,   309,   311,   313,   316,   320,   323,   325,   328,   330,
     332,   336,   338,   341,   345,   350,   356,   359,   361,   365,
     367,   371,   373,   375,   378,   380,   382,   384,   386,   388,
     390,   394,   399,   403,   408,   413,   417,   419,   422,   425,
     429,   431,   434,   436,   440,   442,   446,   449,   452,   454,
     456,   460,   462,   465,   467,   469,   472,   476,   479,   483,
     487,   492,   495,   499,   503,   508,   510,   514,   519,   521,
     525,   527,   529,   531,   533,   535,   537,   541,   546,   550,
     553,   557,   561,   566,   568,   571,   573,   576,   578,   581,
     587,   595,   601,   607,   615,   622,   630,   634,   637,   640,
     643,   647,   649,   652,   653,   655,   660,   664,   668,   671,
     672,   674,   675,   677,   678,   680,   681,   683,   684,   686,
     687,   689,   690,   692,   698,   700,   702
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     152,     0,    -1,     3,    -1,     4,    -1,     5,    -1,   157,
     111,   158,    -1,    92,    -1,    93,   159,   111,   160,    -1,
      93,   157,   158,    -1,    93,   157,    94,   158,    -1,    93,
      67,     3,    -1,    93,     7,     3,    -1,    93,     8,    -1,
      93,     9,    -1,   109,    -1,    94,    68,   109,    -1,    93,
      -1,     8,    95,    -1,     9,    95,    -1,    96,    97,    -1,
       6,    95,    -1,     6,   157,   138,   158,    -1,    -1,    69,
      -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,    74,
      -1,    95,    -1,   157,   138,   158,    97,    -1,    97,    -1,
      98,    70,    97,    -1,    98,    75,    97,    -1,    98,    76,
      97,    -1,    98,    -1,    99,    71,    98,    -1,    99,    72,
      98,    -1,    99,    -1,   100,    10,    99,    -1,   100,    11,
      99,    -1,   100,    -1,   101,    77,   100,    -1,   101,    78,
     100,    -1,   101,    12,   100,    -1,   101,    13,   100,    -1,
     101,    -1,   102,    14,   101,    -1,   102,    15,   101,    -1,
     102,    -1,   103,    69,   102,    -1,   103,    -1,   104,    79,
     103,    -1,   104,    -1,   105,    80,   104,    -1,   105,    -1,
     106,    16,   105,    -1,   106,    -1,   107,    17,   106,    -1,
     107,    -1,   107,    81,   111,    82,   108,    -1,   108,    -1,
      95,   110,   109,    -1,    -1,    83,    -1,    18,    -1,    19,
      -1,    20,    -1,    21,    -1,    22,    -1,    23,    -1,    24,
      -1,    25,    -1,    26,    -1,    27,    -1,   109,    -1,   111,
      68,   109,    -1,   108,    -1,   114,   161,    -1,   114,   115,
     161,    -1,   117,    -1,   117,   114,    -1,   118,    -1,   118,
     114,    -1,   129,    -1,   129,   114,    -1,   116,    -1,   115,
      68,   116,    -1,   130,    -1,   130,    83,   141,    -1,    30,
      -1,    31,    -1,    32,    -1,    33,    -1,    34,    -1,    45,
      -1,    35,    -1,    36,    -1,    37,    -1,    38,    -1,    41,
      -1,    42,    -1,    39,    -1,    40,    -1,   119,    -1,   126,
      -1,    28,    -1,   120,     3,   155,   121,   156,    -1,   120,
     155,   121,   156,    -1,   120,     3,    -1,    46,    -1,    47,
      -1,   122,    -1,   121,   122,    -1,   123,   124,   161,    -1,
     118,   123,    -1,   118,    -1,   129,   123,    -1,   129,    -1,
     125,    -1,   124,    68,   125,    -1,   130,    -1,    82,   112,
      -1,   130,    82,   112,    -1,    48,   155,   127,   156,    -1,
      48,     3,   155,   127,   156,    -1,    48,     3,    -1,   128,
      -1,   127,    68,   128,    -1,     3,    -1,     3,    83,   112,
      -1,    43,    -1,    44,    -1,   132,   131,    -1,   131,    -1,
      64,    -1,    63,    -1,    65,    -1,    66,    -1,     3,    -1,
     157,   130,   158,    -1,   131,   159,   112,   160,    -1,   131,
     159,   160,    -1,   131,   157,   134,   158,    -1,   131,   157,
     137,   158,    -1,   131,   157,   158,    -1,    70,    -1,    70,
     133,    -1,    70,   132,    -1,    70,   133,   132,    -1,   129,
      -1,   133,   129,    -1,   135,    -1,   135,    68,    49,    -1,
     136,    -1,   135,    68,   136,    -1,   114,   130,    -1,   114,
     139,    -1,   114,    -1,     3,    -1,   137,    68,     3,    -1,
     123,    -1,   123,   139,    -1,   132,    -1,   140,    -1,   132,
     140,    -1,   157,   139,   158,    -1,   159,   160,    -1,   159,
     112,   160,    -1,   140,   159,   160,    -1,   140,   159,   112,
     160,    -1,   157,   158,    -1,   157,   134,   158,    -1,   140,
     157,   158,    -1,   140,   157,   134,   158,    -1,   109,    -1,
     155,   142,   156,    -1,   155,   142,    68,   156,    -1,   141,
      -1,   142,    68,   141,    -1,   144,    -1,   145,    -1,   148,
      -1,   149,    -1,   150,    -1,   151,    -1,     3,    82,   143,
      -1,    50,   112,    82,   143,    -1,    51,    82,   143,    -1,
     155,   156,    -1,   155,   147,   156,    -1,   155,   146,   156,
      -1,   155,   146,   147,   156,    -1,   113,    -1,   146,   113,
      -1,   143,    -1,   147,   143,    -1,   161,    -1,   111,   161,
      -1,    52,   157,   111,   158,   143,    -1,    52,   157,   111,
     158,   143,    53,   143,    -1,    54,   157,   111,   158,   143,
      -1,    55,   157,   111,   158,   143,    -1,    56,   143,    55,
     157,   111,   158,   161,    -1,    57,   157,   148,   148,   158,
     143,    -1,    57,   157,   148,   148,   111,   158,   143,    -1,
      58,     3,   161,    -1,    59,   161,    -1,    60,   161,    -1,
      61,   161,    -1,    61,   111,   161,    -1,   153,    -1,   152,
     153,    -1,    -1,   162,    -1,   114,   130,   146,   145,    -1,
     114,   130,   145,    -1,   130,   146,   145,    -1,   130,   145,
      -1,    -1,    84,    -1,    -1,    85,    -1,    -1,    86,    -1,
      -1,    87,    -1,    -1,    88,    -1,    -1,    89,    -1,    -1,
      90,    -1,    29,     3,   155,   163,   156,    -1,   148,    -1,
     154,    -1,   154,   154,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    33,    34,    35,    39,    40,    41,    42,
      43,    44,    45,    46,    50,    51,    55,    56,    57,    58,
      59,    60,    64,    65,    66,    67,    68,    69,    70,    74,
      75,    79,    80,    81,    82,    86,    87,    88,    92,    93,
      94,    98,    99,   100,   101,   102,   106,   107,   108,   112,
     113,   117,   118,   122,   123,   127,   128,   132,   133,   137,
     138,   142,   143,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   162,   163,   167,   171,   172,
     176,   177,   178,   179,   180,   181,   185,   186,   190,   191,
     195,   196,   197,   198,   199,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   218,   219,   220,
     224,   225,   229,   230,   234,   238,   239,   240,   241,   245,
     246,   250,   251,   252,   256,   257,   258,   262,   263,   267,
     268,   272,   273,   277,   278,   279,   280,   281,   282,   286,
     287,   288,   289,   290,   291,   292,   296,   297,   298,   299,
     303,   304,   309,   310,   314,   315,   319,   320,   321,   325,
     326,   330,   331,   335,   336,   337,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   353,   354,   355,   359,   360,
     364,   365,   366,   367,   368,   369,   373,   374,   375,   379,
     380,   381,   382,   386,   387,   391,   392,   396,   397,   401,
     402,   403,   407,   408,   409,   410,   414,   415,   416,   417,
     418,   422,   423,   426,   428,   432,   433,   434,   435,   438,
     439,   442,   443,   446,   447,   450,   451,   454,   455,   458,
     459,   461,   462,   466,   469,   470,   471
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
  "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN",
  "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN",
  "TYPE_NAME", "CLASS", "TYPEDEF", "EXTERN", "STATIC", "AUTO", "REGISTER",
  "CHAR", "SHORT", "INT", "LONG", "SIGNED", "UNSIGNED", "FLOAT", "DOUBLE",
  "CONST", "VOLATILE", "VOID", "STRUCT", "UNION", "ENUM", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "NEW", "PRIVATE", "PUBLIC", "IMPORT",
  "USING", "'.'", "','", "'&'", "'*'", "'+'", "'-'", "'~'", "'!'", "'/'",
  "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "':'", "'='", "'{'", "'}'",
  "'('", "')'", "'['", "']'", "';'", "$accept", "primary_expression",
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
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "type_qualifier", "declarator", "direct_declarator", "pointer",
  "type_qualifier_list", "parameter_type_list", "parameter_list",
  "parameter_declaration", "identifier_list", "type_name",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statement",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "jump_statement", "translation_unit", "external_declaration",
  "function_definition", "curly_open", "curly_close", "round_open",
  "round_close", "square_open", "square_close", "semi_colon",
  "CLASS_START", "CLASS_DEFINITION", 0
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
     315,   316,   317,   318,   319,   320,   321,    46,    44,    38,
      42,    43,    45,   126,    33,    47,    37,    60,    62,    94,
     124,    63,    58,    61,   123,   125,    40,    41,    91,    93,
      59
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    91,    92,    92,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    95,    95,
      95,    95,    96,    96,    96,    96,    96,    96,    96,    97,
      97,    98,    98,    98,    98,    99,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   102,   102,   103,
     103,   104,   104,   105,   105,   106,   106,   107,   107,   108,
     108,   109,   109,   110,   110,   110,   110,   110,   110,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   113,   113,
     114,   114,   114,   114,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   117,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   119,   119,   119,
     120,   120,   121,   121,   122,   123,   123,   123,   123,   124,
     124,   125,   125,   125,   126,   126,   126,   127,   127,   128,
     128,   129,   129,   130,   130,   130,   130,   130,   130,   131,
     131,   131,   131,   131,   131,   131,   132,   132,   132,   132,
     133,   133,   134,   134,   135,   135,   136,   136,   136,   137,
     137,   138,   138,   139,   139,   139,   140,   140,   140,   140,
     140,   140,   140,   140,   140,   141,   141,   141,   142,   142,
     143,   143,   143,   143,   143,   143,   144,   144,   144,   145,
     145,   145,   145,   146,   146,   147,   147,   148,   148,   149,
     149,   149,   150,   150,   150,   150,   151,   151,   151,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   154,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   160,
     160,   161,   161,   162,   163,   163,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     3,     1,     4,     3,     4,
       3,     3,     2,     2,     1,     3,     1,     2,     2,     2,
       2,     4,     0,     1,     1,     1,     1,     1,     1,     1,
       4,     1,     3,     3,     3,     1,     3,     3,     1,     3,
       3,     1,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     0,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     1,     2,     3,
       1,     2,     1,     2,     1,     2,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     5,     4,     2,
       1,     1,     1,     2,     3,     2,     1,     2,     1,     1,
       3,     1,     2,     3,     4,     5,     2,     1,     3,     1,
       3,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       3,     4,     3,     4,     4,     3,     1,     2,     2,     3,
       1,     2,     1,     3,     1,     3,     2,     2,     1,     1,
       3,     1,     2,     1,     1,     2,     3,     2,     3,     3,
       4,     2,     3,     3,     4,     1,     3,     4,     1,     3,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     2,
       3,     3,     4,     1,     2,     1,     2,     1,     2,     5,
       7,     5,     5,     7,     6,     7,     3,     2,     2,     2,
       3,     1,     2,     0,     1,     4,     3,     3,     2,     0,
       1,     0,     1,     0,     1,     0,     1,     0,     1,     0,
       1,     0,     1,     5,     1,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
     213,     0,     0,   211,   214,   219,     1,   212,   220,   231,
       2,     3,     4,    22,    22,    22,   106,    90,    91,    92,
      93,    94,    96,    97,    98,    99,   102,   103,   100,   101,
     131,   132,    95,   110,   111,     0,   136,   135,   137,   138,
      23,    24,    25,    26,    27,    28,   224,   232,     6,    16,
      29,    22,    31,    35,    38,    41,    46,    49,    51,    53,
      55,    57,    59,    61,    75,   231,     0,    80,    82,   104,
     219,   105,    84,   219,   134,   223,   234,   235,     0,   197,
     221,     2,    24,    20,     0,    17,    22,    18,   126,     0,
     146,   150,   148,   147,     0,    12,    13,     0,   228,   225,
      22,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    64,    22,    29,    19,     0,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,    22,    22,    22,    22,
      22,    22,    22,    22,    22,    22,   198,   139,   219,     0,
      81,    83,   109,     0,    85,   193,   231,   218,   219,   219,
     225,   229,   133,   236,   225,   116,   161,   118,   225,   225,
     222,   233,   225,     0,   129,   221,   127,   151,   149,    11,
      10,   226,   225,    14,     8,   229,    62,    32,    33,    34,
      36,    37,    39,    40,    44,    45,    42,    43,    47,    48,
      50,    52,    54,    56,    58,     0,    76,   216,   219,     0,
     221,   112,     0,   231,    86,    88,    78,   194,   217,     2,
      22,     0,   223,   223,   223,    22,   223,     0,   231,   231,
     231,   195,   180,   181,   219,    22,   182,   183,   184,   185,
     189,   159,   158,   225,   152,   154,   225,   145,   230,    77,
     229,   142,     5,   115,   163,   162,   164,   223,   229,   117,
     140,    22,    21,   221,    22,     0,   124,    22,     9,     7,
      22,   215,   221,   113,   108,    22,   231,   119,   121,     0,
      79,    22,    22,     0,    22,    22,    22,    22,     0,   231,
     231,   207,   208,   231,   209,    22,   191,   196,   190,   156,
     163,   157,   223,   143,     0,     0,   144,   141,   165,   225,
     229,   225,   225,   171,   229,   167,    30,   125,   130,   128,
      15,    60,   107,   122,     0,   114,    22,    87,   175,    89,
      22,   186,    22,   188,   225,   225,   225,   223,   231,   206,
     210,   192,   153,   155,   160,   225,   173,   229,   169,   172,
     166,   168,   120,   123,   178,   221,   187,    22,    22,    22,
      22,   225,   174,   170,   221,   176,   199,   201,   202,   225,
     225,    22,   179,   177,    22,   231,    22,   204,   200,   203,
     205
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    48,    49,   172,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   112,
      65,   240,   145,   146,   203,   204,    67,    68,    69,    70,
     200,   201,   202,   266,   267,    71,   165,   166,    72,   158,
      74,    75,    93,   301,   234,   235,   236,   159,   302,   246,
     319,   345,   221,   222,   223,   148,   225,   226,   227,   228,
     229,     2,     3,    77,   149,   161,   115,   303,   248,   241,
      79,     4,    80
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -275
static const yytype_int16 yypact[] =
{
       6,   140,    49,  -275,  -275,    93,  -275,  -275,  -275,   639,
    1300,  -275,  -275,   692,   692,   692,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,    14,  -275,  -275,  -275,  -275,
    -275,   314,  -275,  -275,  -275,  -275,  -275,  -275,  -275,   358,
     775,   692,  -275,   -37,    10,   104,    32,   165,    76,   102,
     103,   169,    15,  -275,  -275,   -14,   356,  1415,  1415,  -275,
      20,  -275,  1415,  1360,    -9,     9,  -275,  1202,  1041,  -275,
     114,  -275,  -275,  -275,  1145,  -275,   692,  -275,    93,   184,
      68,  -275,  -275,    68,   202,  -275,  -275,   210,  -275,   928,
     692,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,   692,  -275,  -275,  1145,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,   692,   692,   692,   692,
     692,   692,   692,   692,   692,   692,  -275,  -275,  1360,   356,
    -275,  -275,    93,  1020,  -275,  -275,   265,  -275,  1360,   567,
     988,   800,    -9,  -275,    48,  1020,   128,  1020,   134,   134,
    -275,  -275,   134,   184,   147,   108,  -275,  -275,  -275,  -275,
    -275,  -275,    61,  -275,  -275,    38,  -275,  -275,  -275,  -275,
     -37,   -37,    10,    10,   104,   104,   104,   104,    32,    32,
     165,    76,   102,   103,   169,   -42,  -275,  -275,  1360,  1020,
    1334,  -275,   278,    52,  -275,   153,  -275,  -275,  -275,   162,
     692,   164,   166,   166,   166,   685,   166,   247,   158,   158,
     744,  -275,  -275,  -275,   567,   407,  -275,  -275,  -275,  -275,
    -275,  -275,   230,   134,   188,  -275,    62,  -275,  -275,  -275,
     171,  -275,  -275,  -275,    -9,  -275,    -9,  1259,   800,  -275,
    -275,   692,  -275,   108,   692,   184,  -275,   692,  -275,  -275,
     692,  -275,  1334,  -275,  -275,   692,    54,  -275,   182,   356,
    -275,   446,   495,   187,   495,   692,   692,   692,   215,   744,
     158,  -275,  -275,   -14,  -275,   407,  -275,  -275,  -275,  -275,
      17,  -275,   860,  -275,  1390,   272,  -275,  -275,    -9,  1280,
     800,   134,   134,  -275,   171,  -275,  -275,  -275,  -275,  -275,
    -275,  -275,  -275,  -275,   278,  -275,   692,  -275,  -275,  -275,
     446,  -275,   495,  -275,    48,    48,    48,   166,   744,  -275,
    -275,  -275,  -275,  -275,  -275,   134,  -275,   171,  -275,  -275,
    -275,  -275,  -275,  -275,  -275,   124,  -275,   495,   495,   495,
     692,   928,  -275,  -275,  1093,  -275,   226,  -275,  -275,    48,
      48,   495,  -275,  -275,   495,   158,   495,  -275,  -275,  -275,
    -275
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -275,  -275,  -275,  -275,    37,  -275,   -32,    98,   121,   245,
     131,   151,   152,   156,   157,   168,  -275,   -26,   -71,  -275,
     -73,  -192,  -124,    25,  -275,    30,  -275,   -68,  -275,  -275,
     105,  -163,   -21,  -275,   -11,  -275,   142,    55,   183,    -7,
     -61,   -35,  -275,  -128,  -275,    19,  -275,   227,  -131,  -223,
    -274,  -275,    40,  -275,   -25,     3,    99,    -8,  -275,  -275,
    -275,  -275,   320,   250,    -5,  -134,    -6,    73,   -45,  -122,
     -29,  -275,  -275
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -220
static const yytype_int16 yytable[] =
{
       9,    76,    73,    78,   100,   154,    92,    84,    86,    86,
     155,   154,   137,   154,   152,   230,   155,    88,   273,   114,
     137,   298,   233,   142,   207,   245,   135,   175,   173,   151,
      89,   256,   133,   116,    66,     1,   136,   263,   117,   118,
     260,   176,   154,    99,   123,   124,   344,   155,   147,     6,
      83,    85,    87,   259,   135,    92,   304,   156,   168,   138,
     139,   195,   308,   156,   196,   143,   264,   298,   150,   139,
      73,   139,    78,   313,   207,   155,    47,    46,     1,    98,
     362,   119,   120,   163,   177,   178,   179,   155,   113,   155,
     286,   288,   140,   141,   156,    46,   134,   144,     8,   263,
     207,   291,    66,    46,     8,    98,   135,   151,   337,   125,
     126,    30,    31,   197,   121,   122,   135,   206,   297,   307,
     269,   244,   314,   208,   343,   239,   305,   238,   312,   257,
     295,   155,   155,   139,   243,   171,   249,   199,    90,   205,
     139,   198,    47,     5,    47,   129,   150,   283,   171,   171,
     247,   331,   224,   113,   113,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   113,   113,   113,   113,   113,   113,
     113,   335,   174,   261,   270,   232,   255,     8,   338,   127,
     128,   130,   341,   131,   239,   132,   310,   164,   113,   281,
     282,   284,   354,   160,   155,   268,   139,   290,    90,   160,
     318,   300,   324,   325,   326,   169,   275,   276,   277,   160,
     279,   355,   244,   170,    46,   353,    98,   180,   181,   306,
     363,   171,   239,   237,    91,   289,   292,   242,   239,   152,
     254,   250,   251,   137,   311,   252,   271,   315,   247,   239,
     299,   247,   182,   183,   272,   258,   274,   113,    47,   318,
     280,   329,    46,   300,   330,   278,   294,   290,   188,   189,
     238,   157,   205,   139,   316,   287,   320,   157,   137,   322,
     327,   328,   232,    91,   239,   334,   167,   359,   360,   364,
     190,   137,   191,   318,   292,   113,   292,   192,   113,   193,
     239,   113,   299,    36,    37,    38,    39,   113,   157,   317,
      90,   194,   113,   342,   262,   253,   293,   268,   139,   296,
     309,   162,   321,   333,   323,   320,    46,   232,    98,   232,
     351,   350,     7,   285,   232,   287,   157,   153,    36,    37,
      38,    39,     0,     0,     0,    90,   369,   113,   157,     0,
     157,    36,    37,    38,    39,     0,     0,     0,    90,   320,
       0,    46,     0,   113,     0,    47,     0,    30,    31,   137,
     265,     0,   346,     0,    46,    94,    95,    96,   184,   185,
     186,   187,   336,     0,   339,   340,     0,  -146,  -146,  -146,
    -146,     0,   157,   157,    90,     0,     0,   356,   357,   358,
       0,     0,     0,     0,     0,     0,     0,   347,   348,   349,
       0,   367,     0,     0,   368,     0,   370,  -219,   352,     0,
     209,    11,    12,    13,     0,    14,    15,     0,     0,    36,
      37,    38,    39,     0,   361,    97,    90,     0,     0,     0,
       0,     0,   365,   366,     0,     0,  -219,  -219,  -219,  -219,
    -219,  -219,    46,     0,    46,   157,    98,     0,     0,    81,
      11,    12,    13,     0,    14,    15,     0,   210,   211,   212,
    -219,   213,   214,   215,   216,   217,   218,   219,   220,     0,
    -219,  -219,  -219,  -219,     0,     0,    40,    82,    42,    43,
      44,    45,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     8,   160,    46,     0,  -219,     0,    47,   209,    11,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    82,    42,    43,    44,
      45,     0,     0,     0,  -219,  -219,  -219,  -219,  -219,  -219,
       8,     0,    46,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   210,   211,   212,  -219,   213,
     214,   215,   216,   217,   218,   219,   220,     0,  -219,  -219,
    -219,  -219,     0,     0,    40,    82,    42,    43,    44,    45,
     209,    11,    12,    13,     0,    14,    15,     0,     0,     8,
    -219,    46,     0,     0,     0,    47,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    16,     0,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,     0,   210,   211,   212,
       0,   213,   214,   215,   216,   217,   218,   219,   220,     0,
       0,     0,     0,     0,     0,     0,    40,    82,    42,    43,
      44,    45,    10,    11,    12,    13,     0,    14,    15,     0,
       0,     8,   160,    46,     0,     0,     0,    47,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,     0,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,   209,    11,
      12,    13,     0,    14,    15,    81,    11,    12,    13,     0,
      14,    15,    36,    37,    38,    39,     0,     0,    40,    41,
      42,    43,    44,    45,     0,  -219,  -219,  -219,  -219,  -219,
       0,     0,     0,     0,     0,    46,     0,     0,     0,    47,
       0,     0,     0,     0,     0,   210,   211,   212,     0,   213,
     214,   215,   216,   217,   218,   219,   220,    81,    11,    12,
      13,     0,    14,    15,    40,    82,    42,    43,    44,    45,
       0,    40,    82,    42,    43,    44,    45,     0,     0,     8,
    -219,    46,   -22,     0,     0,    47,     0,     0,    46,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,    81,    11,    12,    13,     0,    14,    15,
       0,     0,     0,    40,    82,    42,    43,    44,    45,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   -22,     0,
      46,     0,     0,     0,    47,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   111,     0,
       0,     0,     0,   137,     0,     0,     0,     0,     0,    40,
      82,    42,    43,    44,    45,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    46,     0,    16,   238,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    36,    37,    38,    39,     0,     0,     0,
      90,    81,    11,    12,    13,     0,    14,    15,     0,     0,
       0,     0,     0,     0,     0,     0,    46,   171,    98,     0,
       0,     0,     0,     0,     0,     0,   -22,     0,     0,     0,
       0,     0,     0,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   231,     0,     0,     0,     0,     0,    40,    82,    42,
      43,    44,    45,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    46,   171,    16,     0,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,    10,    11,    12,    13,    16,    14,
      15,     0,     0,     0,     0,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    16,
       0,     0,     0,     0,     0,   171,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
       0,     0,     0,     0,     0,     0,    81,    11,    12,    13,
       0,    14,    15,     0,    36,    37,    38,    39,     0,     0,
      40,    41,    42,    43,    44,    45,     0,     0,     0,     0,
       0,   -22,     0,     0,     0,     0,     0,    46,   -22,   -22,
     -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,   -22,
     -22,   -22,     0,     0,     0,     0,     0,     0,    81,    11,
      12,    13,     0,    14,    15,     0,     0,     0,     0,     0,
       0,     0,    40,    82,    42,    43,    44,    45,     0,     0,
       0,     0,     0,    16,     0,     0,     0,     8,   160,    46,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   137,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    82,    42,    43,    44,    45,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,    46,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    36,    37,    38,    39,     0,
       0,     0,    90,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    16,    46,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    16,     0,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    90,
    -139,  -139,  -139,  -139,  -139,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    46,   171,    98,     0,     0,
    -139,  -139,  -139,     0,  -139,  -139,  -139,  -139,  -139,  -139,
    -139,  -139,    16,  -139,  -139,  -139,  -139,   171,     0,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,  -139,     0,     0,     0,    16,  -139,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    16,   160,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,   332,
       0,     0,     0,    16,     8,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35
};

#define yypact_value_is_default(yystate) \
  ((yystate) == (-275))

#define yytable_value_is_error(yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       5,     9,     9,     9,    49,    78,    41,    13,    14,    15,
      78,    84,     3,    86,    75,   149,    84,     3,   210,    51,
       3,   244,   150,     3,   148,   156,    68,   100,    99,    74,
      35,   165,    17,    70,     9,    29,    65,   200,    75,    76,
      82,   112,   115,    49,    12,    13,   320,   115,    73,     0,
      13,    14,    15,   175,    68,    90,   248,    78,    93,    66,
      66,   134,   254,    84,   135,    70,   200,   290,    74,    75,
      77,    77,    78,   265,   198,   143,    90,    86,    29,    88,
     354,    71,    72,    88,   116,   117,   118,   155,    51,   157,
     224,   225,    67,    68,   115,    86,    81,    72,    84,   262,
     224,   232,    77,    86,    84,    88,    68,   152,   300,    77,
      78,    43,    44,   138,    10,    11,    68,   146,   240,   253,
      68,   156,    68,   148,   316,   151,   248,    89,   262,    68,
      68,   199,   200,   139,   155,    87,   157,   142,    70,   146,
     146,   138,    90,     3,    90,    69,   152,   220,    87,    87,
     156,   285,   149,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   299,    99,   198,   203,   150,    68,    84,   300,    14,
      15,    79,   304,    80,   210,    16,   257,     3,   151,   218,
     219,   220,    68,    85,   262,   202,   202,   232,    70,    85,
     271,   246,   275,   276,   277,     3,   212,   213,   214,    85,
     216,   345,   247,     3,    86,   337,    88,   119,   120,   251,
     354,    87,   248,   150,    41,   232,   232,   154,   254,   290,
      83,   158,   159,     3,   260,   162,    83,   266,   244,   265,
     246,   247,   121,   122,    82,   172,    82,   210,    90,   320,
       3,   280,    86,   298,   283,   215,    68,   292,   127,   128,
      89,    78,   269,   269,    82,   225,   271,    84,     3,    82,
      55,   279,   247,    90,   300,     3,    93,   350,   351,    53,
     129,     3,   130,   354,   290,   248,   292,   131,   251,   132,
     316,   254,   298,    63,    64,    65,    66,   260,   115,   269,
      70,   133,   265,   314,   199,   163,   233,   314,   314,   236,
     255,    84,   272,   294,   274,   320,    86,   292,    88,   294,
     328,   327,     2,   224,   299,   285,   143,    77,    63,    64,
      65,    66,    -1,    -1,    -1,    70,   365,   300,   155,    -1,
     157,    63,    64,    65,    66,    -1,    -1,    -1,    70,   354,
      -1,    86,    -1,   316,    -1,    90,    -1,    43,    44,     3,
      82,    -1,   322,    -1,    86,     7,     8,     9,   123,   124,
     125,   126,   299,    -1,   301,   302,    -1,    63,    64,    65,
      66,    -1,   199,   200,    70,    -1,    -1,   347,   348,   349,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   324,   325,   326,
      -1,   361,    -1,    -1,   364,    -1,   366,     0,   335,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    63,
      64,    65,    66,    -1,   351,    67,    70,    -1,    -1,    -1,
      -1,    -1,   359,   360,    -1,    -1,    29,    30,    31,    32,
      33,    34,    86,    -1,    86,   262,    88,    -1,    -1,     3,
       4,     5,     6,    -1,     8,     9,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      63,    64,    65,    66,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    85,    86,    -1,     0,    -1,    90,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    -1,    -1,    -1,    29,    30,    31,    32,    33,    34,
      84,    -1,    86,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    -1,    63,    64,
      65,    66,    -1,    -1,    69,    70,    71,    72,    73,    74,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    84,
      85,    86,    -1,    -1,    -1,    90,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    28,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    51,    52,
      -1,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,     3,     4,     5,     6,    -1,     8,     9,    -1,
      -1,    84,    85,    86,    -1,    -1,    -1,    90,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,     3,     4,
       5,     6,    -1,     8,     9,     3,     4,     5,     6,    -1,
       8,     9,    63,    64,    65,    66,    -1,    -1,    69,    70,
      71,    72,    73,    74,    -1,    30,    31,    32,    33,    34,
      -1,    -1,    -1,    -1,    -1,    86,    -1,    -1,    -1,    90,
      -1,    -1,    -1,    -1,    -1,    50,    51,    52,    -1,    54,
      55,    56,    57,    58,    59,    60,    61,     3,     4,     5,
       6,    -1,     8,     9,    69,    70,    71,    72,    73,    74,
      -1,    69,    70,    71,    72,    73,    74,    -1,    -1,    84,
      85,    86,    28,    -1,    -1,    90,    -1,    -1,    86,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,
      86,    -1,    -1,    -1,    90,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    -1,
      -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    -1,    28,    89,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    63,    64,    65,    66,    -1,    -1,    -1,
      70,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    28,    -1,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,    28,     8,
       9,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    28,
      -1,    -1,    -1,    -1,    -1,    87,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
      -1,     8,     9,    -1,    63,    64,    65,    66,    -1,    -1,
      69,    70,    71,    72,    73,    74,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    -1,    -1,    86,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    69,    70,    71,    72,    73,    74,    -1,    -1,
      -1,    -1,    -1,    28,    -1,    -1,    -1,    84,    85,    86,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      28,    86,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    63,    64,    65,    66,    -1,
      -1,    -1,    70,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    86,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    28,    -1,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    70,
      30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    -1,    -1,
      50,    51,    52,    -1,    54,    55,    56,    57,    58,    59,
      60,    61,    28,    63,    64,    65,    66,    87,    -1,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    84,    -1,    -1,    -1,    28,    89,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    28,    85,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    28,    84,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,   152,   153,   162,     3,     0,   153,    84,   155,
       3,     4,     5,     6,     8,     9,    28,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    63,    64,    65,    66,
      69,    70,    71,    72,    73,    74,    86,    90,    92,    93,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   111,   114,   117,   118,   119,
     120,   126,   129,   130,   131,   132,   148,   154,   157,   161,
     163,     3,    70,    95,   157,    95,   157,    95,     3,   155,
      70,   129,   132,   133,     7,     8,     9,    67,    88,   157,
     159,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    83,   110,    95,    97,   157,    70,    75,    76,    71,
      72,    10,    11,    12,    13,    77,    78,    14,    15,    69,
      79,    80,    16,    17,    81,    68,   161,     3,   130,   157,
     114,   114,     3,   155,   114,   113,   114,   145,   146,   155,
     157,   159,   131,   154,   111,   118,   123,   129,   130,   138,
      85,   156,   138,   155,     3,   127,   128,   129,   132,     3,
       3,    87,    94,   109,   158,   111,   109,    97,    97,    97,
      98,    98,    99,    99,   100,   100,   100,   100,   101,   101,
     102,   103,   104,   105,   106,   111,   109,   145,   146,   155,
     121,   122,   123,   115,   116,   130,   161,   113,   145,     3,
      50,    51,    52,    54,    55,    56,    57,    58,    59,    60,
      61,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     156,     3,   114,   134,   135,   136,   137,   158,    89,   108,
     112,   160,   158,   123,   132,   139,   140,   157,   159,   123,
     158,   158,   158,   127,    83,    68,   156,    68,   158,   160,
      82,   145,   121,   122,   156,    82,   124,   125,   130,    68,
     161,    83,    82,   112,    82,   157,   157,   157,   143,   157,
       3,   161,   161,   111,   161,   147,   156,   143,   156,   130,
     132,   139,   157,   158,    68,    68,   158,   160,   140,   157,
     159,   134,   139,   158,   112,   160,    97,   156,   112,   128,
     109,   108,   156,   112,    68,   161,    82,   116,   109,   141,
     155,   143,    82,   143,   111,   111,   111,    55,   148,   161,
     161,   156,    49,   136,     3,   134,   158,   112,   160,   158,
     158,   160,   125,   112,   141,   142,   143,   158,   158,   158,
     157,   148,   158,   160,    68,   156,   143,   143,   143,   111,
     111,   158,   141,   156,    53,   158,   158,   143,   143,   161,
     143
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
        case 22:

/* Line 1806 of yacc.c  */
#line 64 "yacc.y"
    { add_error("Operator missing");}
    break;

  case 63:

/* Line 1806 of yacc.c  */
#line 147 "yacc.y"
    { add_error("= missing");}
    break;

  case 219:

/* Line 1806 of yacc.c  */
#line 438 "yacc.y"
    { add_error("{ missing");}
    break;

  case 221:

/* Line 1806 of yacc.c  */
#line 442 "yacc.y"
    { add_error("} missing");}
    break;

  case 223:

/* Line 1806 of yacc.c  */
#line 446 "yacc.y"
    { add_error("( missing");}
    break;

  case 225:

/* Line 1806 of yacc.c  */
#line 450 "yacc.y"
    { add_error(") missing");}
    break;

  case 227:

/* Line 1806 of yacc.c  */
#line 454 "yacc.y"
    { add_error("[ missing");}
    break;

  case 229:

/* Line 1806 of yacc.c  */
#line 458 "yacc.y"
    { add_error("] missing");}
    break;

  case 231:

/* Line 1806 of yacc.c  */
#line 461 "yacc.y"
    { add_error("; missing");}
    break;



/* Line 1806 of yacc.c  */
#line 2161 "y.tab.c"
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
#line 474 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern int column;
extern int line;
int main(){
	yyparse();

	printf("ERRORs:\n");

	int i;
	for(i = 0; i < ercnt; i++){
		printf("%d %s", i+1, errors[i] );
	}
}

void add_error( char *s ) {
	strcpy( errors[ercnt], s );
	char *str = malloc(100000);	
	sprintf(str, "%d", line);
	
	strcat (errors[ercnt] , " At Line ");
	strcat (errors[ercnt] , str);
	strcat (errors[ercnt] , "\n");
	ercnt++;
}
void yyerror(char *s){
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


