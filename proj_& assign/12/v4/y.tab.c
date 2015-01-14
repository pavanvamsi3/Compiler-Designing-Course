
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
	#include <string.h>
	#include <stdlib.h>
	void add_error(char *s);
	void yyerror(char *s);
	char errors[1000][1000];
	int ercnt = 0;
	extern int yylineno;
	

/* Line 189 of yacc.c  */
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
     REPEAT = 273,
     UNTIL = 274,
     TO = 275,
     ANY_STRING = 276,
     ASSIGN_OP = 277,
     END = 278,
     START = 279,
     EXECUTE = 280,
     TYPE_NAME = 281,
     CONST = 282,
     STATIC = 283,
     STRUCT = 284,
     UNION = 285,
     ELLIPSIS = 286,
     CASE = 287,
     DEFAULT = 288,
     IF = 289,
     ELSE = 290,
     SWITCH = 291,
     WHILE = 292,
     FOR = 293,
     GOTO = 294,
     CONTINUE = 295,
     BREAK = 296,
     RETURN = 297
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
#define ANY_STRING 276
#define ASSIGN_OP 277
#define END 278
#define START 279
#define EXECUTE 280
#define TYPE_NAME 281
#define CONST 282
#define STATIC 283
#define STRUCT 284
#define UNION 285
#define ELLIPSIS 286
#define CASE 287
#define DEFAULT 288
#define IF 289
#define ELSE 290
#define SWITCH 291
#define WHILE 292
#define FOR 293
#define GOTO 294
#define CONTINUE 295
#define BREAK 296
#define RETURN 297




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 211 "y.tab.c"

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
#define YYFINAL  92
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1330

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  65
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  61
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNRULES -- Number of states.  */
#define YYNSTATES  326

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   297

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,     2,     2,    53,    49,     2,
      43,    44,    51,    54,    48,    55,    47,    52,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    62,
      56,     2,    57,    60,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,    58,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    63,    59,    64,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42
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
     408,   410,   412,   416,   421,   425,   428,   432,   436,   441,
     444,   448,   452,   457,   459,   461,   464,   466,   469,   471,
     474,   476,   478,   480,   482,   485,   490,   494,   500,   504,
     510,   518,   524,   528,   534,   540,   547,   555,   561,   563,
     567,   570,   573,   576,   580,   582,   585,   587,   589,   594,
     598,   602,   605
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
     123,     0,    -1,     3,    -1,     4,    -1,     5,    -1,    43,
      85,    44,    -1,    66,    -1,    67,    45,    85,    46,    -1,
      67,    43,    44,    -1,    67,    43,    68,    44,    -1,    67,
      47,     3,    -1,    67,     7,     3,    -1,    67,     8,    -1,
      67,     9,    -1,    83,    -1,    68,    48,    83,    -1,    67,
      -1,     8,    69,    -1,     9,    69,    -1,    70,    69,    -1,
       6,    69,    -1,     6,    43,   106,    44,    -1,    49,    -1,
      50,    -1,    69,    -1,    43,   106,    44,    71,    -1,    71,
      -1,    72,    51,    71,    -1,    72,    52,    71,    -1,    72,
      53,    71,    -1,    72,    -1,    73,    54,    72,    -1,    73,
      55,    72,    -1,    73,    -1,    74,    10,    73,    -1,    74,
      11,    73,    -1,    74,    -1,    75,    56,    74,    -1,    75,
      57,    74,    -1,    75,    12,    74,    -1,    75,    13,    74,
      -1,    75,    -1,    76,    14,    75,    -1,    76,    15,    75,
      -1,    76,    -1,    77,    49,    76,    -1,    77,    -1,    78,
      58,    77,    -1,    78,    -1,    79,    59,    78,    -1,    79,
      -1,    80,    16,    79,    -1,    80,    -1,    81,    17,    80,
      -1,    81,    -1,    81,    60,    85,    61,    82,    -1,    82,
      -1,    69,    84,    83,    -1,    22,    -1,    83,    -1,    85,
      48,    83,    -1,    82,    -1,    88,    62,    -1,    88,    89,
      62,    -1,    91,    -1,    91,    88,    -1,    90,    -1,    89,
      48,    90,    -1,    99,    -1,    99,    22,   109,    -1,    92,
      -1,    93,     3,    63,    94,    64,    -1,    93,    63,    94,
      64,    -1,    93,     3,    -1,    29,    -1,    30,    -1,    95,
      -1,    94,    95,    -1,    96,    97,    62,    -1,    91,    96,
      -1,    91,    -1,    98,    -1,    97,    48,    98,    -1,    99,
      -1,    61,    86,    -1,    99,    61,    86,    -1,   101,   100,
      -1,   100,    -1,     3,    -1,    43,    99,    44,    -1,   100,
      45,    86,    46,    -1,   100,    45,    46,    -1,   100,    43,
     102,    44,    -1,   100,    43,   105,    44,    -1,   100,    43,
      44,    -1,    51,    -1,    51,   101,    -1,   103,    -1,   103,
      48,    31,    -1,   104,    -1,   103,    48,   104,    -1,    88,
      99,    -1,    88,   107,    -1,    88,    -1,     3,    -1,   105,
      48,     3,    -1,    96,    -1,    96,   107,    -1,   101,    -1,
     108,    -1,   101,   108,    -1,    43,   107,    44,    -1,    45,
      46,    -1,    45,    86,    46,    -1,   108,    45,    46,    -1,
     108,    45,    86,    46,    -1,    43,    44,    -1,    43,   102,
      44,    -1,   108,    43,    44,    -1,   108,    43,   102,    44,
      -1,    83,    -1,    63,   110,    64,    -1,    63,   110,    48,
      64,    -1,   109,    -1,   110,    48,   109,    -1,   112,    -1,
     113,    -1,   116,    -1,   120,    -1,   121,    -1,   122,    -1,
     119,    -1,     3,    61,   111,    -1,    32,    86,    61,   111,
      -1,    33,    61,   111,    -1,    24,    23,    -1,    24,   115,
      23,    -1,    24,   114,    23,    -1,    24,   114,   115,    23,
      -1,    63,    64,    -1,    63,   115,    64,    -1,    63,   114,
      64,    -1,    63,   114,   115,    64,    -1,     1,    -1,    87,
      -1,   114,    87,    -1,   111,    -1,   115,   111,    -1,    62,
      -1,    85,    62,    -1,    21,    -1,   111,    -1,    66,    -1,
     117,    -1,   118,   117,    -1,    25,    24,   118,    23,    -1,
      34,    85,   111,    -1,    34,    85,   111,    35,   111,    -1,
      36,    85,   111,    -1,    34,    43,    85,    44,   111,    -1,
      34,    43,    85,    44,   111,    35,   111,    -1,    36,    43,
      85,    44,   111,    -1,    37,    85,   111,    -1,    37,    43,
      85,    44,   111,    -1,    18,   111,    19,    85,    62,    -1,
      38,    43,   116,   116,    44,   111,    -1,    38,    43,   116,
     116,    85,    44,   111,    -1,    38,    83,    20,    66,   111,
      -1,     1,    -1,    39,     3,    62,    -1,    40,    62,    -1,
      41,    62,    -1,    42,    62,    -1,    42,    85,    62,    -1,
     124,    -1,   123,   124,    -1,   125,    -1,    87,    -1,    88,
      99,   114,   113,    -1,    88,    99,   113,    -1,    99,   114,
     113,    -1,    99,   113,    -1,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    25,    25,    26,    27,    28,    32,    33,    34,    35,
      36,    37,    38,    39,    43,    44,    48,    49,    50,    51,
      52,    53,    57,    58,    62,    63,    67,    68,    69,    70,
      74,    75,    76,    80,    81,    82,    86,    87,    88,    89,
      90,    94,    95,    96,   100,   101,   105,   106,   110,   111,
     115,   116,   120,   121,   125,   126,   130,   131,   135,   139,
     140,   144,   148,   149,   153,   154,   158,   159,   163,   164,
     168,   171,   172,   173,   177,   178,   182,   183,   187,   191,
     192,   196,   197,   201,   202,   203,   207,   208,   212,   213,
     214,   215,   216,   217,   218,   222,   223,   228,   229,   233,
     234,   238,   239,   240,   244,   245,   249,   250,   254,   255,
     256,   260,   261,   262,   263,   264,   265,   266,   267,   268,
     272,   273,   274,   278,   279,   283,   284,   285,   286,   287,
     288,   289,   293,   294,   295,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   311,   312,   316,   317,   321,   322,
     325,   326,   327,   330,   331,   334,   337,   338,   339,   340,
     341,   342,   346,   347,   348,   349,   350,   351,   352,   356,
     357,   358,   359,   360,   364,   365,   369,   370,   374,   375,
     376,   377,   378
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
  "REPEAT", "UNTIL", "TO", "ANY_STRING", "ASSIGN_OP", "END", "START",
  "EXECUTE", "TYPE_NAME", "CONST", "STATIC", "STRUCT", "UNION", "ELLIPSIS",
  "CASE", "DEFAULT", "IF", "ELSE", "SWITCH", "WHILE", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "'('", "')'", "'['", "']'", "'.'", "','",
  "'&'", "'!'", "'*'", "'/'", "'%'", "'+'", "'-'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "':'", "';'", "'{'", "'}'", "$accept",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "cast_expression",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "declaration_specifiers", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_or_union_specifier", "struct_or_union",
  "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "declarator", "direct_declarator", "pointer",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "abstract_declarator",
  "direct_abstract_declarator", "initializer", "initializer_list",
  "statement", "labeled_statement", "compound_statement",
  "declaration_list", "statement_list", "expression_statement",
  "simple_string", "simple_strings", "show_statement",
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
     295,   296,   297,    40,    41,    91,    93,    46,    44,    38,
      33,    42,    47,    37,    43,    45,    60,    62,    94,   124,
      63,    58,    59,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    65,    66,    66,    66,    66,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    69,    69,    69,    69,
      69,    69,    70,    70,    71,    71,    72,    72,    72,    72,
      73,    73,    73,    74,    74,    74,    75,    75,    75,    75,
      75,    76,    76,    76,    77,    77,    78,    78,    79,    79,
      80,    80,    81,    81,    82,    82,    83,    83,    84,    85,
      85,    86,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    92,    92,    92,    93,    93,    94,    94,    95,    96,
      96,    97,    97,    98,    98,    98,    99,    99,   100,   100,
     100,   100,   100,   100,   100,   101,   101,   102,   102,   103,
     103,   104,   104,   104,   105,   105,   106,   106,   107,   107,
     107,   108,   108,   108,   108,   108,   108,   108,   108,   108,
     109,   109,   109,   110,   110,   111,   111,   111,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   113,   113,   113,   114,   114,   115,   115,   116,   116,
     117,   117,   117,   118,   118,   119,   120,   120,   120,   120,
     120,   120,   121,   121,   121,   121,   121,   121,   121,   122,
     122,   122,   122,   122,   123,   123,   124,   124,   125,   125,
     125,   125,   125
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
       1,     1,     3,     4,     3,     2,     3,     3,     4,     2,
       3,     3,     4,     1,     1,     2,     1,     2,     1,     2,
       1,     1,     1,     1,     2,     4,     3,     5,     3,     5,
       7,     5,     3,     5,     5,     6,     7,     5,     1,     3,
       2,     2,     2,     3,     1,     2,     1,     1,     4,     3,
       3,     2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,   143,    88,     0,    74,    75,     0,    95,     0,   177,
       0,    64,    70,     0,     0,    87,     0,   182,     0,   174,
     176,   143,     2,     3,     4,     0,     0,     0,     0,   135,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    22,    23,   148,     6,    16,    24,     0,    26,
      30,    33,    36,    41,    44,    46,    48,    50,    52,    54,
      56,    59,     0,   144,     0,   146,   125,   126,     0,     0,
     127,   131,   128,   129,   130,     0,    96,   139,     0,     0,
      62,     0,    66,     0,    65,    73,     0,   181,     0,     0,
       0,    86,     1,   175,     0,     2,     0,    20,     0,    17,
      18,     0,     0,    24,    61,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   170,   171,   172,     0,
       0,    80,   106,     0,     0,    12,    13,     0,     0,     0,
      58,     0,    19,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   149,    68,   137,   145,     0,   136,   147,
      89,   141,     0,   140,     0,    63,     0,   179,     0,     0,
       0,    76,     0,   180,   104,    94,   103,     0,    97,    99,
       0,    91,     0,   132,     0,     0,   150,     6,   151,   153,
       0,     0,   134,     0,   156,     0,   158,     0,   162,     0,
       0,     0,   169,   173,     5,    79,     0,     0,   108,   107,
     109,     0,    11,     8,     0,    14,     0,    10,    57,    27,
      28,    29,    31,    32,    34,    35,    39,    40,    37,    38,
      42,    43,    45,    47,    49,    51,    53,     0,    60,   138,
     142,    67,     0,   120,    69,   178,     0,    72,    77,     0,
       0,    81,    83,     0,   101,   108,   102,    92,     0,    93,
       0,    90,    21,     0,   155,   154,   133,     0,     0,     0,
       0,     0,     0,   116,     0,     0,   112,     0,   110,     0,
       0,    25,     9,     0,     7,     0,   123,     0,    71,    84,
       0,    78,     0,    98,   100,   105,   164,   159,   157,   161,
     163,     0,     0,   167,   117,   111,   113,   118,     0,   114,
       0,    15,    55,     0,   121,    82,    85,     0,   165,     0,
     119,   115,   122,   124,   160,   166
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    45,    46,   214,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,   131,
      62,   105,    63,    64,    81,    82,    11,    12,    13,   170,
     171,   122,   250,   251,    14,    15,    16,   274,   178,   179,
     180,   123,   275,   210,   244,   287,    65,    66,    67,    68,
      69,    70,   189,   190,    71,    72,    73,    74,    18,    19,
      20
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -227
static const yytype_int16 yypact[] =
{
     200,  -227,  -227,   598,  -227,  -227,   115,   -14,   297,  -227,
      19,    98,  -227,    20,    47,   139,    26,  -227,   474,  -227,
    -227,  -227,   -18,  -227,  -227,  1196,  1216,  1216,   948,  -227,
      23,  1232,    -4,  1244,  1252,  1264,  1280,    58,     3,    40,
    1071,  1136,  -227,  -227,  -227,  -227,   419,    46,  1216,  -227,
     231,   253,   331,   256,   330,    30,    62,   113,   178,    13,
    -227,  -227,    60,  -227,    19,  -227,  -227,  -227,   648,   748,
    -227,  -227,  -227,  -227,  -227,   173,  -227,  -227,   347,   397,
    -227,    75,  -227,   248,  -227,   114,    98,  -227,    47,   158,
     515,   139,  -227,  -227,   948,  -227,  1136,  -227,  1232,  -227,
    -227,   228,   798,  -227,  -227,   177,   948,  1136,   848,  1136,
     848,  1136,   848,  1060,   234,   204,  -227,  -227,  -227,   112,
       5,    98,   216,   227,   273,  -227,  -227,  1120,  1232,   276,
    -227,  1232,  -227,  1232,  1232,  1232,  1232,  1232,  1232,  1232,
    1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,  1232,
    1232,  1232,  1232,  -227,   268,  -227,  -227,   898,  -227,  -227,
    -227,  -227,   447,  -227,   115,  -227,  1038,  -227,    47,    98,
     161,  -227,    24,  -227,  -227,  -227,    87,   251,   249,  -227,
       8,  -227,   258,  -227,   270,  1232,  -227,   998,  -227,  -227,
     698,   948,  -227,    16,   285,    91,  -227,   151,  -227,   149,
    1088,   121,  -227,  -227,  -227,  -227,   462,  1148,   219,  -227,
     243,  1232,  -227,  -227,   171,  -227,    69,  -227,  -227,  -227,
    -227,  -227,   231,   231,   253,   253,   331,   331,   331,   331,
     256,   256,   330,    30,    62,   113,   178,    -3,  -227,  -227,
    -227,  -227,  1038,  -227,  -227,  -227,   245,  -227,  -227,  1232,
     144,  -227,   267,   183,  -227,   133,  -227,  -227,   294,  -227,
     329,  -227,  -227,   159,  -227,  -227,  -227,   535,   948,   535,
     535,  1168,   948,  -227,   305,   310,  -227,   318,   243,     6,
    1184,  -227,  -227,  1232,  -227,  1232,  -227,   -24,  -227,  -227,
      24,  -227,  1232,  -227,  -227,  -227,  -227,   333,  -227,  -227,
    -227,   948,   188,  -227,  -227,  -227,  -227,  -227,   325,  -227,
     327,  -227,  -227,  1009,  -227,  -227,  -227,   948,  -227,   948,
    -227,  -227,  -227,  -227,  -227,  -227
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -227,   -87,  -227,  -227,     7,  -227,  -123,   221,   224,   176,
     222,   229,   235,   226,   242,   244,  -227,   -27,   -33,  -227,
      72,   -76,    21,     2,  -227,   214,   124,  -227,  -227,   223,
    -151,   -77,  -227,   103,    -5,    -9,    -1,   -81,  -227,   137,
    -227,   303,  -104,  -154,  -226,  -227,   -28,  -227,    28,    17,
      18,   -96,   217,  -227,  -227,  -227,  -227,  -227,  -227,   386,
    -227
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -153
static const yytype_int16 yytable[] =
{
     101,    75,    10,   114,   104,    83,    76,    91,   177,   172,
     219,   220,   221,    84,   182,   187,   286,   200,   209,   248,
      10,     9,     2,    85,   313,    78,    79,     2,    17,     2,
     150,    88,    97,    99,   100,     4,     5,     7,   103,     9,
     314,   159,    87,    94,   205,   152,    17,   102,     1,   204,
     307,   159,   259,   152,   278,   132,   260,   106,   285,   154,
     267,   115,     6,   104,   152,   116,   183,     6,   130,     6,
       7,     3,   256,   151,   188,     7,     4,     5,   192,   146,
     194,    80,   196,    86,   198,   249,   157,   323,   281,   156,
       2,   176,   172,   172,   215,   248,   162,   103,   218,   156,
     168,   278,   117,   187,   271,   108,   110,   112,   152,   156,
       8,   167,   119,   120,   272,   284,   173,   152,     2,   238,
     147,   208,   153,   164,    95,    23,    24,     4,     5,   159,
     253,   277,   207,   243,   159,   269,     2,   165,     7,   152,
     103,   103,   103,   103,   103,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   103,   103,     6,   154,
     152,   174,   188,   266,    98,   121,     7,   252,   120,   172,
     120,   254,   148,   289,   203,   255,   253,   169,   207,   193,
     104,   195,    89,   197,    90,   199,     2,     4,     5,   156,
       4,     5,   290,   204,   149,   270,   245,   152,   308,   152,
     216,     1,   175,     2,   310,   208,   291,   152,   176,   243,
     121,   153,     4,     5,   103,   282,   316,   160,   103,   283,
     121,   296,   104,   237,     3,   247,   253,   273,   207,     4,
       5,   121,   319,   121,     7,   121,   152,   121,   191,   297,
     298,   299,   300,     6,   303,   121,    91,   185,    75,     1,
     311,     7,   255,   104,   201,   176,   103,   263,   312,   206,
     176,   207,   206,     8,   207,   104,   202,     7,   140,   141,
     166,   211,     3,   318,     4,     5,   212,     4,     5,   217,
     243,   176,   133,   134,   135,   252,   279,   103,   280,   324,
     166,   325,   103,   121,   121,   257,   -68,   258,    21,   103,
      22,    23,    24,    25,   261,    26,    27,   136,   137,   288,
     -68,     8,   142,   143,   262,    28,   226,   227,   228,   229,
     268,     3,    30,     4,     5,   293,     4,     5,   292,    31,
      32,    33,   295,    34,    35,    36,    37,    38,    39,    40,
      41,   138,   139,   302,   144,   145,    42,    43,    21,   304,
      22,    23,    24,    25,   305,    26,    27,   222,   223,    44,
       8,    77,   224,   225,   306,    28,   230,   231,   317,   320,
     121,     3,    30,   321,   234,   232,     4,     5,   241,    31,
      32,    33,   233,    34,    35,    36,    37,    38,    39,    40,
      41,   235,   246,   315,   236,   294,    42,    43,    21,   184,
      22,    23,    24,    25,    93,    26,    27,   265,     0,    44,
       8,   161,     0,     0,     0,    28,     0,     0,     0,     0,
       0,     3,    30,     0,     0,     0,   124,   125,   126,    31,
      32,    33,     0,    34,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     0,     0,    42,    43,    21,     0,
      22,    23,    24,    25,     0,    26,    27,     0,     0,    44,
       8,   163,   127,     0,   128,    28,   129,     0,     0,     0,
       0,     3,    30,     0,    92,     1,     0,     2,     0,    31,
      32,    33,     0,    34,    35,    36,    37,    38,    39,    40,
      41,     4,     5,     0,     0,     0,    42,    43,     3,     0,
       0,     0,     0,     4,     5,   206,   273,   207,     0,    44,
       8,   240,     0,     7,     0,     0,     0,     6,    95,    23,
      24,    25,     0,    26,    27,     7,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    21,     8,    22,    23,
      24,    25,    -5,    26,    27,    -5,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    28,     0,     0,     0,    -5,    41,     3,
      30,   181,     0,     0,    42,    43,     0,    31,    32,    33,
       0,    34,    35,    36,    37,    38,    39,    40,    41,     0,
      -5,     0,    -5,    -5,    42,    43,    -5,    -5,    -5,    -5,
      -5,    -5,    -5,    -5,    -5,    -5,     0,    44,     8,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,    28,     0,     0,     0,
       0,    29,     3,    30,     0,     0,     0,     4,     5,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   155,     3,    30,     0,     0,     0,     4,     5,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,   186,
       0,   264,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   158,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,   186,
       0,     0,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,   152,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,     0,
       0,   239,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,    21,
       0,    22,    23,    24,    25,     0,    26,    27,     0,     0,
      44,     8,     0,     0,     0,     0,    28,     0,     0,     0,
       0,     0,     3,    30,     0,     0,     0,     0,     0,     0,
      31,    32,    33,     0,    34,    35,    36,    37,    38,    39,
      40,    41,     0,     0,     0,     0,     0,    42,    43,  -152,
       0,  -152,  -152,  -152,  -152,     0,     0,     0,     0,     0,
      44,     8,    95,    23,    24,    25,  -152,    26,    27,  -152,
       0,  -152,  -152,  -152,     0,     0,     0,     0,     0,     0,
    -152,  -152,  -152,     0,  -152,  -152,  -152,  -152,  -152,  -152,
    -152,    95,    23,    24,    25,     0,    26,    27,  -152,     0,
       0,     0,    41,     0,     0,     0,     0,     0,    42,    43,
       0,  -152,     0,    95,    23,    24,    25,     0,    26,    27,
       0,     0,   242,   322,    95,    23,    24,    25,     0,    26,
      27,    41,     0,     0,     0,     0,     0,    42,    43,     4,
       5,    95,    23,    24,    25,     0,    26,    27,     0,     0,
       0,   242,     0,    41,     0,     0,     0,     0,     0,    42,
      43,     0,     0,     0,    41,     0,     0,     0,     0,     0,
      42,    43,    44,    95,    23,    24,    25,     0,    26,    27,
       0,    41,     0,   118,     0,     0,     0,    42,    43,    95,
      23,    24,    25,     0,    26,    27,     0,     0,     0,     0,
      44,    95,    23,    24,    25,     0,    26,    27,     0,     0,
       0,     0,     0,    41,   213,     4,     5,     0,     0,    42,
      43,    95,    23,    24,    25,     0,    26,    27,     0,    41,
       0,     0,     0,     0,     0,    42,    43,    95,    23,    24,
      25,    41,    26,    27,   276,     0,     0,    42,    43,    95,
      23,    24,    25,     0,    26,    27,     0,     0,     0,     0,
       0,    41,   301,     0,     0,     0,     0,    42,    43,    95,
      23,    24,    25,     0,    26,    27,     0,    41,     0,     0,
     309,     0,     0,    42,    43,    95,    23,    24,    25,    96,
      26,    27,     0,     0,     0,    42,    43,    95,    23,    24,
      25,     0,    26,    27,     0,    95,    23,    24,    25,    98,
      26,    27,     0,     0,     0,    42,    43,    95,    23,    24,
      25,     0,    26,    27,     0,    41,     0,     0,     0,     0,
       0,    42,    43,    95,    23,    24,    25,   107,    26,    27,
       0,     0,     0,    42,    43,   109,     0,     0,     0,     0,
       0,    42,    43,     0,     0,     0,     0,   111,     0,     0,
       0,     0,     0,    42,    43,     0,     0,     0,     0,     0,
       0,     0,     0,   113,     0,     0,     0,     0,     0,    42,
      43
};

static const yytype_int16 yycheck[] =
{
      28,     6,     0,    36,    31,    10,     7,    16,    89,    86,
     133,   134,   135,    11,    90,   102,   242,   113,   122,   170,
      18,     0,     3,     3,    48,     8,     8,     3,     0,     3,
      17,    14,    25,    26,    27,    29,    30,    51,    31,    18,
      64,    69,    14,    61,   121,    48,    18,    24,     1,    44,
      44,    79,    44,    48,   208,    48,    48,    61,    61,    64,
      44,     3,    43,    90,    48,    62,    94,    43,    22,    43,
      51,    24,   176,    60,   102,    51,    29,    30,   106,    49,
     108,    62,   110,    63,   112,    61,    68,   313,   211,    68,
       3,    89,   169,   170,   127,   246,    78,    90,   131,    78,
      83,   255,    62,   190,   200,    33,    34,    35,    48,    88,
      63,    83,    40,    41,   201,    46,    88,    48,     3,   152,
      58,   122,    62,    48,     3,     4,     5,    29,    30,   157,
      43,   207,    45,   166,   162,    44,     3,    62,    51,    48,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    43,   164,
      48,     3,   190,   191,    43,    41,    51,   172,    96,   246,
      98,   176,    59,   249,    62,   176,    43,    63,    45,   107,
     207,   109,    43,   111,    45,   113,     3,    29,    30,   168,
      29,    30,    48,    44,    16,    44,   168,    48,   279,    48,
     128,     1,    44,     3,   280,   206,    62,    48,   206,   242,
      86,    62,    29,    30,   207,    44,   292,    44,   211,    48,
      96,    62,   249,   151,    24,    64,    43,    44,    45,    29,
      30,   107,    44,   109,    51,   111,    48,   113,    61,   267,
     268,   269,   270,    43,   272,   121,   255,    19,   253,     1,
     283,    51,   253,   280,    20,   253,   249,   185,   285,    43,
     258,    45,    43,    63,    45,   292,    62,    51,    12,    13,
      22,    44,    24,   301,    29,    30,     3,    29,    30,     3,
     313,   279,    51,    52,    53,   290,    43,   280,    45,   317,
      22,   319,   285,   169,   170,    44,    48,    48,     1,   292,
       3,     4,     5,     6,    46,     8,     9,    54,    55,    64,
      62,    63,    56,    57,    44,    18,   140,   141,   142,   143,
      35,    24,    25,    29,    30,    31,    29,    30,    61,    32,
      33,    34,     3,    36,    37,    38,    39,    40,    41,    42,
      43,    10,    11,   271,    14,    15,    49,    50,     1,    44,
       3,     4,     5,     6,    44,     8,     9,   136,   137,    62,
      63,    64,   138,   139,    46,    18,   144,   145,    35,    44,
     246,    24,    25,    46,   148,   146,    29,    30,   164,    32,
      33,    34,   147,    36,    37,    38,    39,    40,    41,    42,
      43,   149,   169,   290,   150,   258,    49,    50,     1,    96,
       3,     4,     5,     6,    18,     8,     9,   190,    -1,    62,
      63,    64,    -1,    -1,    -1,    18,    -1,    -1,    -1,    -1,
      -1,    24,    25,    -1,    -1,    -1,     7,     8,     9,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,    -1,
       3,     4,     5,     6,    -1,     8,     9,    -1,    -1,    62,
      63,    64,    43,    -1,    45,    18,    47,    -1,    -1,    -1,
      -1,    24,    25,    -1,     0,     1,    -1,     3,    -1,    32,
      33,    34,    -1,    36,    37,    38,    39,    40,    41,    42,
      43,    29,    30,    -1,    -1,    -1,    49,    50,    24,    -1,
      -1,    -1,    -1,    29,    30,    43,    44,    45,    -1,    62,
      63,    64,    -1,    51,    -1,    -1,    -1,    43,     3,     4,
       5,     6,    -1,     8,     9,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     1,    63,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    -1,    -1,    -1,    22,    43,    24,
      25,    46,    -1,    -1,    49,    50,    -1,    32,    33,    34,
      -1,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      45,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    30,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    29,    30,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    21,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      62,    63,    -1,    -1,    -1,    -1,    18,    -1,    -1,    -1,
      -1,    -1,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,     1,
      -1,     3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,
      62,    63,     3,     4,     5,     6,    18,     8,     9,    21,
      -1,    23,    24,    25,    -1,    -1,    -1,    -1,    -1,    -1,
      32,    33,    34,    -1,    36,    37,    38,    39,    40,    41,
      42,     3,     4,     5,     6,    -1,     8,     9,    50,    -1,
      -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    63,    -1,     3,     4,     5,     6,    -1,     8,     9,
      -1,    -1,    63,    64,     3,     4,     5,     6,    -1,     8,
       9,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    29,
      30,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    63,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    62,     3,     4,     5,     6,    -1,     8,     9,
      -1,    43,    -1,    62,    -1,    -1,    -1,    49,    50,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      62,     3,     4,     5,     6,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    43,    44,    29,    30,    -1,    -1,    49,
      50,     3,     4,     5,     6,    -1,     8,     9,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,     3,     4,     5,
       6,    43,     8,     9,    46,    -1,    -1,    49,    50,     3,
       4,     5,     6,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    43,    44,    -1,    -1,    -1,    -1,    49,    50,     3,
       4,     5,     6,    -1,     8,     9,    -1,    43,    -1,    -1,
      46,    -1,    -1,    49,    50,     3,     4,     5,     6,    43,
       8,     9,    -1,    -1,    -1,    49,    50,     3,     4,     5,
       6,    -1,     8,     9,    -1,     3,     4,     5,     6,    43,
       8,     9,    -1,    -1,    -1,    49,    50,     3,     4,     5,
       6,    -1,     8,     9,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,     3,     4,     5,     6,    43,     8,     9,
      -1,    -1,    -1,    49,    50,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    24,    29,    30,    43,    51,    63,    87,
      88,    91,    92,    93,    99,   100,   101,   113,   123,   124,
     125,     1,     3,     4,     5,     6,     8,     9,    18,    23,
      25,    32,    33,    34,    36,    37,    38,    39,    40,    41,
      42,    43,    49,    50,    62,    66,    67,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    85,    87,    88,   111,   112,   113,   114,   115,
     116,   119,   120,   121,   122,    99,   101,    64,   114,   115,
      62,    89,    90,    99,    88,     3,    63,   113,   114,    43,
      45,   100,     0,   124,    61,     3,    43,    69,    43,    69,
      69,   111,    24,    69,    82,    86,    61,    43,    85,    43,
      85,    43,    85,    43,    83,     3,    62,    62,    62,    85,
      85,    91,    96,   106,     7,     8,     9,    43,    45,    47,
      22,    84,    69,    51,    52,    53,    54,    55,    10,    11,
      12,    13,    56,    57,    14,    15,    49,    58,    59,    16,
      17,    60,    48,    62,    99,    23,    87,   115,    23,   111,
      44,    64,   115,    64,    48,    62,    22,   113,   114,    63,
      94,    95,    96,   113,     3,    44,    88,   102,   103,   104,
     105,    46,    86,   111,   106,    19,    21,    66,   111,   117,
     118,    61,   111,    85,   111,    85,   111,    85,   111,    85,
     116,    20,    62,    62,    44,    96,    43,    45,   101,   107,
     108,    44,     3,    44,    68,    83,    85,     3,    83,    71,
      71,    71,    72,    72,    73,    73,    74,    74,    74,    74,
      75,    75,    76,    77,    78,    79,    80,    85,    83,    23,
      64,    90,    63,    83,   109,   113,    94,    64,    95,    61,
      97,    98,    99,    43,    99,   101,   107,    44,    48,    44,
      48,    46,    44,    85,    23,   117,   111,    44,    35,    44,
      44,   116,    66,    44,   102,   107,    46,    86,   108,    43,
      45,    71,    44,    48,    46,    61,   109,   110,    64,    86,
      48,    62,    61,    31,   104,     3,    62,   111,   111,   111,
     111,    44,    85,   111,    44,    44,    46,    44,   102,    46,
      86,    83,    82,    48,    64,    98,    86,    35,   111,    44,
      44,    46,    64,   109,   111,   111
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
        case 143:

/* Line 1455 of yacc.c  */
#line 307 "yacc.y"
    {add_error("Error In Compound At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 352 "yacc.y"
    {add_error("Error In Compound At Line ");/*printf("Error At Line %d\n", yylineno)*/; yyclearin; yyerrok;}
    break;



/* Line 1455 of yacc.c  */
#line 1946 "y.tab.c"
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
#line 381 "yacc.y"

#include <stdio.h>

extern char yytext[];
extern int column;
extern int linecount;

int main(){

	printf("1\t");
	yyparse();
	printf("ERRORs:\n");
	int i;
	
	for(i = 0; i < ercnt; i++){
		printf("%d %s", i+1, errors[i] );
	}
}
void yyerror(char *s){
//	fflush(stdout);
//	printf("\n%*s\n%*s\n", column, "^", column, s);
}
void add_error( char *s ) {
	strcpy( errors[ercnt], s );
	char *str = malloc(100000);	
	sprintf(str, "%d", yylineno);
	
	strcat (errors[ercnt] , " At Line ");
	strcat (errors[ercnt] , str);
	strcat (errors[ercnt] , "\n");
	ercnt++;
}

