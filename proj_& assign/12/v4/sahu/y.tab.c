#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20090221

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
#ifdef YYPARSE_PARAM_TYPE
#define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
#else
#define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
#endif
#else
#define YYPARSE_DECL() yyparse(void)
#endif /* YYPARSE_PARAM */

extern int YYPARSE_DECL();

static int yygrowstack(void);
#define YYPREFIX "yy"
#line 2 "test.y"
#include <stdio.h>
#include <stdlib.h>
extern int yylineno;
extern int count;
void       yyerror(  char *msg );
int        yylex();

/*S         : ST {printf("Input accepted\n"); exit(0);}*/

#line 44 "y.tab.c"
#define ID 257
#define NUM 258
#define FOR 259
#define LE 260
#define GE 261
#define EQ 262
#define NE 263
#define OR 264
#define AND 265
#define INT 266
#define UMINUS 267
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    1,    0,    0,    2,    6,    2,    2,    7,
    2,    2,    5,    5,    5,    5,    5,    8,    8,    8,
    8,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    3,    3,    4,    4,
    4,    4,    4,    4,    4,    4,
};
static const short yylen[] = {                            2,
    2,    3,    0,    5,    1,    9,    0,   10,    3,    0,
    5,    3,    3,    2,    1,    1,    3,    2,    2,    1,
    0,    3,    3,    3,    3,    3,    3,    3,    3,    3,
    3,    3,    3,    3,    3,    3,    1,    1,    3,    3,
    3,    3,    3,    3,    3,    3,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    5,    0,    0,    0,   38,    0,    0,
    9,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   35,    0,   36,    0,
   25,   26,    0,    0,    4,    0,   11,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    7,    0,    0,
   16,    0,    0,   15,    0,    6,    8,    0,   20,    0,
    0,   14,    0,   19,   13,    0,
};
static const short yydgoto[] = {                          3,
   26,   79,   80,   44,   76,   70,   27,   86,
};
static const short yysindex[] = {                      -228,
  -30, -241,    0,    0, -209,  -53,  -41,    0,   80,    0,
    0, -209, -209, -209, -209, -209, -209, -209, -209, -209,
  -43,  -37, -209, -209, -209, -228, -220,  113,   40,   40,
   40,   40,  135,  135,   40,   40,    0,   11,    0,   11,
    0,    0,  129,  -33,    0, -239,    0, -209, -209, -209,
 -209, -209, -209, -209, -209, -209,  -48,   40,   40,   40,
   40,  135,  135,   40,   40,  -28,    0,    0,  173, -220,
    0, -229, -202,    0,   86,    0,    0,  -47,    0,  107,
  -96,    0,    0,    0,    0, -202,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,   30,  -38,    0,    0,    2,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    6,    9,   19,
   29,   39,   61,   71,   49,   59,    0,  -18,    0,   -8,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,  139,  145,  151,
  157,  -14,   13,  204,  269,    0,    1,    0,    0,    0,
    0,    0,  -85,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    1,    0,    0,  -82,
};
static const short yygindex[] = {                        33,
    0,   36,  428,    0,    0,    0,    0,  -12,
};
#define YYTABLESIZE 534
static const short yytable[] = {                         37,
   12,    2,   37,   37,   37,   11,   37,   39,   37,    5,
   11,   11,   69,   23,   21,    6,   22,   57,   24,   12,
   37,   37,   23,   37,   23,   56,   23,   78,   85,    1,
    1,   20,   24,   19,   24,    4,   24,    2,    1,   21,
   23,   23,   18,   23,   45,   46,   22,    7,    8,   29,
   24,   24,   23,   24,    7,    8,    1,   24,   45,   30,
   81,    4,   47,   46,   22,    0,    0,   29,   29,   31,
   29,   46,    0,    0,    0,    0,    0,   30,   30,   32,
   30,   23,   21,    0,   22,    0,   24,   31,   31,   28,
   31,    0,    0,    0,    0,    0,    0,   32,   32,   27,
   32,   33,    0,    0,   74,   77,    0,   28,   28,    0,
   28,   34,    0,    0,    0,    0,    0,   27,   27,   33,
   27,   23,   21,    0,   22,   12,   24,   23,   21,   34,
   22,    0,   24,    0,    0,    0,    0,    0,   25,   20,
    0,   19,    0,    0,   82,   20,    0,   19,   23,   21,
    0,   22,    0,   24,   23,   21,    0,   22,    0,   24,
    7,    8,    1,    0,    0,   84,   20,    0,   19,   46,
   23,   21,   20,   22,   19,   24,   23,   21,    0,   22,
    0,   24,    0,    0,    0,    0,    0,    0,   55,    0,
   54,    0,    0,    0,   20,    0,   19,   41,   29,    0,
   29,    0,   10,   42,   30,    0,   30,   67,   83,   43,
   31,    0,   31,    7,    8,   44,   32,   37,   32,    7,
    8,   37,   37,   37,   37,   37,   37,   68,    0,    0,
    0,   13,   14,   15,   16,   17,   18,   23,    0,    0,
    0,   23,   23,   23,   23,   23,   23,   24,    0,   33,
   33,   24,   24,   24,   24,   24,   24,   12,   12,   10,
    3,   22,   40,   28,   29,   28,   10,    3,   29,   29,
   29,   29,   29,   29,   30,    0,   34,   34,   30,   30,
   30,   30,   30,   30,   31,    0,    0,    0,   31,   31,
   31,   31,   31,   31,   32,   73,    0,    0,   32,   32,
   32,   32,   32,   32,   28,    0,    0,    0,   28,   28,
   28,   28,   28,   28,   27,    0,   33,    0,   27,   27,
   27,   27,   27,   27,   33,   33,   34,   39,   27,    0,
   27,    0,    0,    0,   34,   34,    0,    0,    0,   13,
   14,   15,   16,   17,   18,   13,   14,   15,   16,   17,
   18,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   13,   14,   15,   16,
   17,   18,   13,   14,   15,   16,   17,   18,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   48,   49,
   50,   51,   52,   53,   13,   14,   15,   16,   29,   29,
   29,   29,   29,   29,   30,   30,   30,   30,   30,   30,
   31,   31,   31,   31,   31,   31,   32,   32,   32,   32,
   32,   32,    0,    0,    0,    0,    0,    0,   71,    7,
    8,    1,    9,    0,    0,    0,    0,    0,   72,   28,
   29,   30,   31,   32,   33,   34,   35,   36,   38,   40,
   41,   42,   43,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   28,   28,   28,   28,   28,   28,    0,
    0,    0,    0,    0,    0,   58,   59,   60,   61,   62,
   63,   64,   65,   66,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   75,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   27,   27,
   27,   27,   27,   27,
};
static const short yycheck[] = {                         43,
    0,    0,   41,   42,   43,   59,   45,   45,   47,   40,
   59,   59,   41,   42,   43,  257,   45,  257,   47,   61,
   59,   60,   41,   62,   43,   59,   45,  257,  125,    0,
  259,   60,   41,   62,   43,    0,   45,  266,  259,  125,
   59,   60,  125,   62,   59,  266,   41,  257,  258,   41,
   59,   60,   42,   62,  257,  258,  259,   47,   26,   41,
   73,   26,   27,  266,   59,   -1,   -1,   59,   60,   41,
   62,   59,   -1,   -1,   -1,   -1,   -1,   59,   60,   41,
   62,   42,   43,   -1,   45,   -1,   47,   59,   60,   41,
   62,   -1,   -1,   -1,   -1,   -1,   -1,   59,   60,   41,
   62,   41,   -1,   -1,   69,   70,   -1,   59,   60,   -1,
   62,   41,   -1,   -1,   -1,   -1,   -1,   59,   60,   59,
   62,   42,   43,   -1,   45,  125,   47,   42,   43,   59,
   45,   -1,   47,   -1,   -1,   -1,   -1,   -1,   59,   60,
   -1,   62,   -1,   -1,   59,   60,   -1,   62,   42,   43,
   -1,   45,   -1,   47,   42,   43,   -1,   45,   -1,   47,
  257,  258,  259,   -1,   -1,   59,   60,   -1,   62,  266,
   42,   43,   60,   45,   62,   47,   42,   43,   -1,   45,
   -1,   47,   -1,   -1,   -1,   -1,   -1,   -1,   60,   -1,
   62,   -1,   -1,   -1,   60,   -1,   62,   59,   60,   -1,
   62,   -1,  256,   59,   60,   -1,   62,  256,  256,   59,
   60,   -1,   62,  257,  258,   59,   60,  256,   62,  257,
  258,  260,  261,  262,  263,  264,  265,  256,   -1,   -1,
   -1,  260,  261,  262,  263,  264,  265,  256,   -1,   -1,
   -1,  260,  261,  262,  263,  264,  265,  256,   -1,  264,
  265,  260,  261,  262,  263,  264,  265,  257,  258,  259,
  259,  256,   59,   60,  256,   62,  266,  266,  260,  261,
  262,  263,  264,  265,  256,   -1,  264,  265,  260,  261,
  262,  263,  264,  265,  256,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,  256,  123,   -1,   -1,  260,  261,
  262,  263,  264,  265,  256,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,  256,   -1,  256,   -1,  260,  261,
  262,  263,  264,  265,  264,  265,  256,   59,   60,   -1,
   62,   -1,   -1,   -1,  264,  265,   -1,   -1,   -1,  260,
  261,  262,  263,  264,  265,  260,  261,  262,  263,  264,
  265,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,  262,  263,
  264,  265,  260,  261,  262,  263,  264,  265,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  260,  261,
  262,  263,  264,  265,  260,  261,  262,  263,  264,  265,
  260,  261,  262,  263,  264,  265,  260,  261,  262,  263,
  264,  265,   -1,   -1,   -1,   -1,   -1,   -1,  256,  257,
  258,  259,    5,   -1,   -1,   -1,   -1,   -1,  266,   12,
   13,   14,   15,   16,   17,   18,   19,   20,   21,   22,
   23,   24,   25,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  260,  261,  262,  263,  264,  265,   -1,
   -1,   -1,   -1,   -1,   -1,   48,   49,   50,   51,   52,
   53,   54,   55,   56,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   69,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,  260,  261,
  262,  263,  264,  265,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 267
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"'!'",0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,"ID","NUM","FOR","LE","GE","EQ","NE","OR","AND","INT",
"UMINUS",
};
static const char *yyrule[] = {
"$accept : ST",
"ST : INT ID",
"ST : INT ID error",
"$$1 :",
"ST : INT ID error $$1 ST",
"ST : S",
"S : FOR '(' E ';' E2 ';' E ')' DEF",
"$$2 :",
"S : FOR '(' E ';' E2 ';' E error $$2 S",
"S : INT ID ';'",
"$$3 :",
"S : INT ID error $$3 S",
"S : INT ID error",
"DEF : '{' BODY '}'",
"DEF : E ';'",
"DEF : S",
"DEF : error",
"DEF : INT ID error",
"BODY : BODY BODY",
"BODY : E ';'",
"BODY : S",
"BODY :",
"E : ID '=' E",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : E '<' E",
"E : E '>' E",
"E : E LE E",
"E : E GE E",
"E : E EQ E",
"E : E NE E",
"E : E OR E",
"E : E AND E",
"E : E '+' '+'",
"E : E '-' '-'",
"E : ID",
"E : NUM",
"E2 : E '<' E",
"E2 : E '>' E",
"E2 : E LE E",
"E2 : E GE E",
"E2 : E EQ E",
"E2 : E NE E",
"E2 : E OR E",
"E2 : E AND E",

};
#endif
#ifndef YYSTYPE
typedef int YYSTYPE;
#endif
#if YYDEBUG
#include <stdio.h>
#endif

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 500
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

int      yydebug;
int      yynerrs;
int      yyerrflag;
int      yychar;
short   *yyssp;
YYSTYPE *yyvsp;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static short   *yyss;
static short   *yysslim;
static YYSTYPE *yyvs;
static unsigned yystacksize;
#line 112 "test.y"

#include "lex.yy.c"
#if YYDEBUG
extern int yydebug;
#endif




int main() {
#if YYDEBUG
  if (argc > 1) yydebug = 1;
  else yydebug = 0;
#endif



FILE *myfile = fopen("sahu.c", "r");
	// make sure it's valid:
/*	if (!myfile) {
		printf( "I can't open file!\n"); //<< endl;
		return -1;
	}
	// set lex to read from it instead of defaulting to STDIN:
	yyin = myfile;

	// parse through the input until there is no more:
	
	do {
	yyparse();
	} while (!feof(yyin));
	
*/

yyparse();
}

void yyerror(char *s){
		}




 //   printf("Enter the expression:\n");
    //yyparse();
//}

#line 376 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(void)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = yystacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = yyssp - yyss;
    newss = (yyss != 0)
          ? (short *)realloc(yyss, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    yyss  = newss;
    yyssp = newss + i;
    newvs = (yyvs != 0)
          ? (YYSTYPE *)realloc(yyvs, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    yyvs = newvs;
    yyvsp = newvs + i;
    yystacksize = newsize;
    yysslim = yyss + newsize - 1;
    return 0;
}

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

    if (yyss == NULL && yygrowstack()) goto yyoverflow;
    yyssp = yyss;
    yyvsp = yyvs;
    yystate = 0;
    *yyssp = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yyssp >= yysslim && yygrowstack())
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yyssp = yytable[yyn];
        *++yyvsp = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yyssp]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yyssp, yytable[yyn]);
#endif
                if (yyssp >= yysslim && yygrowstack())
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yyssp = yytable[yyn];
                *++yyvsp = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yyssp);
#endif
                if (yyssp <= yyss) goto yyabort;
                --yyssp;
                --yyvsp;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yyvsp[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 2:
#line 24 "test.y"
	{printf("there is a syntex error in %d \n" ,count);
			yyerrok;}
break;
case 3:
#line 26 "test.y"
	{printf("there is a error in %d \n" ,count);yyerrok; }
break;
case 7:
#line 31 "test.y"
	{
          /* this error is due to a missing 'e' */
          printf("Error in Line %d: Expected ')' \n", yylineno);
               yyclearin;
                  yyerrok; 
         }
break;
case 10:
#line 41 "test.y"
	{
	printf(" missing semicolon %d \n",yylineno);
		yyclearin;
		yyerrok;
	}
break;
case 12:
#line 47 "test.y"
	{
	printf(" missing semicolon %d \n",yylineno);
		yyclearin;
		yyerrok;
	}
break;
case 16:
#line 65 "test.y"
	{	   printf("Error in Line %d: Expected crrct input \n", yylineno);
    /*            yyclearin;*/
      /*            yyerrok; */
        }
break;
case 17:
#line 70 "test.y"
	{   printf("Error in Line %d: Expected ';' \n", count);
  /*              yyclearin;*/
                  yyerrok; 
        }
break;
#line 609 "y.tab.c"
    }
    yyssp -= yym;
    yystate = *yyssp;
    yyvsp -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yyssp = YYFINAL;
        *++yyvsp = yyval;
        if (yychar < 0)
        {
            if ((yychar = yylex()) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yyssp, yystate);
#endif
    if (yyssp >= yysslim && yygrowstack())
    {
        goto yyoverflow;
    }
    *++yyssp = (short) yystate;
    *++yyvsp = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    return (1);

yyaccept:
    return (0);
}
