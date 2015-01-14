#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#include <stdlib.h>
#include <string.h>

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20100216

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

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

#line 2 "yaccfile.y"
#include <string.h>
#include <stdio.h>
#include <iostream>
using namespace std;
extern FILE *yyin;
void yyerror(char *msg);
int yylex();
#line 10 "yaccfile.y"
typedef union {char *s;} YYSTYPE;
#line 44 "y.tab.c"
#define VERSION 257
#define ATTDEF 258
#define ENDDEF 259
#define EQ 260
#define SLASH 261
#define CLOSE 262
#define END 263
#define ENCODING 264
#define NAME 265
#define VALUE 266
#define DATA 267
#define COMMENT 268
#define START 269
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    2,    5,    6,    6,    4,    4,    7,    7,   10,
    8,   11,    3,   12,   14,   12,   13,   13,   13,   13,
    1,    1,    9,    9,   15,   15,
};
static const short yylen[] = {                            2,
    3,    3,    1,    1,    0,    2,    0,    1,    1,    0,
    5,    0,    4,    2,    0,    6,    2,    2,    2,    0,
    1,    0,    2,    0,    1,    3,
};
static const short yydefred[] = {                         0,
    3,    0,    0,    0,   12,    7,    4,    7,   24,    0,
    0,    0,    0,    8,    6,    9,    0,   15,    0,   13,
   23,   10,   14,   20,    0,   24,    0,   26,    0,    0,
   17,   19,   18,   11,   21,    0,   16,
};
static const short yydgoto[] = {                          2,
   36,    3,    6,   10,    4,    8,   15,   16,   12,   26,
    9,   20,   27,   24,   21,
};
static const short yysindex[] = {                      -251,
    0,    0, -268, -261,    0,    0,    0,    0,    0, -254,
 -254, -242, -257,    0,    0,    0, -255,    0, -236,    0,
    0,    0,    0,    0, -241,    0, -258,    0, -243, -239,
    0,    0,    0,    0,    0, -235,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0, -256,    0,    0,    0,    0,    0,   28,
 -240,    0,    0,    0,    0,    0,    0,    0, -244,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -232,
    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    4,   24,    0,    0,    6,    0,    8,    0,
    0,    0,    0,    0,    0,
};
#define YYTABLESIZE 34
static const short yytable[] = {                         13,
    5,    5,    7,   13,   30,    1,   23,   22,   31,   14,
    5,    5,    5,   14,   25,   34,   25,   25,   17,   18,
   25,   19,   19,   25,   28,   35,   37,    1,    2,   22,
   32,   11,   33,   29,
};
static const short yycheck[] = {                        258,
  269,  258,  264,  258,  263,  257,  262,  265,  267,  268,
  269,  268,  269,  268,  259,  259,  261,  262,  261,  262,
  265,  265,  265,  260,  266,  265,  262,    0,  269,  262,
   27,    8,   27,   26,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 269
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"VERSION","ATTDEF","ENDDEF","EQ",
"SLASH","CLOSE","END","ENCODING","NAME","VALUE","DATA","COMMENT","START",
};
static const char *yyrule[] = {
"$accept : document",
"document : prolog element misc_seq_opt",
"prolog : version_opt encoding_opt misc_seq_opt",
"version_opt : VERSION",
"encoding_opt : ENCODING",
"encoding_opt :",
"misc_seq_opt : misc_seq_opt misc",
"misc_seq_opt :",
"misc : COMMENT",
"misc : attribute_decl",
"$$1 :",
"attribute_decl : ATTDEF NAME $$1 attribute_seq_opt ENDDEF",
"$$2 :",
"element : START $$2 attribute_seq_opt empty_or_content",
"empty_or_content : SLASH CLOSE",
"$$3 :",
"empty_or_content : CLOSE $$3 content END name_opt CLOSE",
"content : content DATA",
"content : content misc",
"content : content element",
"content :",
"name_opt : NAME",
"name_opt :",
"attribute_seq_opt : attribute_seq_opt attribute",
"attribute_seq_opt :",
"attribute : NAME",
"attribute : NAME EQ VALUE",

};
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

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;

#define YYPURE 0

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 73 "yaccfile.y"

#include ".cod_old.cpp"
#include ".comment_old.cpp"

int yywrap(void)
{
  return 1;
}

void yyerror(char *msg)
{
  fprintf(stderr, "%s\n", msg);
}

int main(int argc, char *argv[])
{
	char *s;
	int no_errors = 0, no_error2 = 0, no_errors3 = 0;
	if (argc > 1) {
		 s = argv[1];
		 yyin = fopen(s, "r");
		 yyparse(); 
	}
	
	//int x = yyparse();
	//cout << "total number of errors is " << x << endl;
	cout << "\n**************ERROR AFTER PARSING***************************\n";
	lexerr(s);
	cout << "\n************************************************************\n";
	yaccers(s);	
	return 0;
}
#line 229 "y.tab.c"
/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = data->s_mark - data->s_base;
    newss = (data->s_base != 0)
          ? (short *)realloc(data->s_base, newsize * sizeof(*newss))
          : (short *)malloc(newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base  = newss;
    data->s_mark = newss + i;

    newvs = (data->l_base != 0)
          ? (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs))
          : (YYSTYPE *)malloc(newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

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

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

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
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
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
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
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
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 3:
#line 24 "yaccfile.y"
	{printf("<?XML-VERSION 1.0?>\n");}
break;
case 4:
#line 28 "yaccfile.y"
	{printf("<?XML-ENCODING %s?>\n",yystack.l_mark[0].s); free(yystack.l_mark[0].s);}
break;
case 8:
#line 36 "yaccfile.y"
	{printf("%s", yystack.l_mark[0].s);}
break;
case 10:
#line 40 "yaccfile.y"
	{printf("\n<?XML-ATT %s", yystack.l_mark[0].s);}
break;
case 11:
#line 41 "yaccfile.y"
	{printf("?>\n");}
break;
case 12:
#line 44 "yaccfile.y"
	{printf("\n<%s", yystack.l_mark[0].s); free(yystack.l_mark[0].s);}
break;
case 14:
#line 50 "yaccfile.y"
	{printf("/>\n");}
break;
case 15:
#line 51 "yaccfile.y"
	{printf(">\n");}
break;
case 16:
#line 52 "yaccfile.y"
	{printf("\n</%s>\n", yystack.l_mark[-1].s);}
break;
case 17:
#line 55 "yaccfile.y"
	{printf("%s", yystack.l_mark[0].s); free(yystack.l_mark[0].s);}
break;
case 21:
#line 61 "yaccfile.y"
	{yyval.s = yystack.l_mark[0].s;}
break;
case 22:
#line 62 "yaccfile.y"
	{yyval.s = strdup("");}
break;
case 25:
#line 69 "yaccfile.y"
	{printf(" %s", yystack.l_mark[0].s); free(yystack.l_mark[0].s);}
break;
case 26:
#line 70 "yaccfile.y"
	{printf(" %s=%s", yystack.l_mark[-2].s, yystack.l_mark[0].s); free(yystack.l_mark[-2].s); free(yystack.l_mark[0].s);}
break;
#line 487 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
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
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
