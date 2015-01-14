%{

#include<stdio.h>

int iserror = 0;

%}

%token NOUN PRONOUN VERB ADVERB ADJECTIVE PREPOSITION CONJUNCTION ARTICLE FS

%%

SENTENCE_LIST : SENTENCE 
	      | SENTENCE_LIST SENTENCE 
;

SENTENCE : SIMPLE_SENTENCE FS
	 | COMPOUND_SENTENCE FS
	 | error FS {
			yyclearin;
			yyerrok;
		}
;

SIMPLE_SENTENCE : SUBJECT T_VERB
		| T_VERB OBJECT
		| SUBJECT T_VERB OBJECT
		| SUBJECT T_VERB OBJECT PREP_PHRASE
;

COMPOUND_SENTENCE : SIMPLE_SENTENCE T_CONJUNCTION SIMPLE_SENTENCE
		  | COMPOUND_SENTENCE T_CONJUNCTION SIMPLE_SENTENCE
;

SUBJECT : T_NOUN
	| T_PRONOUN
	| T_ADJECTIVE SECONDARY_SUBJECT
	| T_ARTICLE T_NOUN
;

SECONDARY_SUBJECT : T_NOUN
		  : T_ADJECTIVE SECONDARY_SUBJECT
;

OBJECT : 
       | T_NOUN
       | T_PRONOUN
       | T_ADJECTIVE SECONDARY_OBJECT
       | T_ARTICLE T_NOUN
       | T_ARTICLE T_ADJECTIVE SECONDARY_OBJECT
;

SECONDARY_OBJECT : T_NOUN
		 | T_PRONOUN
		 | T_ADJECTIVE SECONDARY_OBJECT
;

PREP_PHRASE : T_PREPOSITION T_NOUN
	    ;

T_VERB : VERB
       | T_ADVERB VERB
       | T_VERB VERB
;

T_NOUN : NOUN
       ;

T_PRONOUN : PRONOUN
	  ;

T_ADVERB : ADVERB
	 ;

T_ADJECTIVE : ADJECTIVE
	    ;

T_PREPOSITION : PREPOSITION
	      ;

T_CONJUNCTION : CONJUNCTION
	      ;

T_ARTICLE : ARTICLE
	  ;
%%

extern int yylex();
extern int yyparse();
extern FILE *yyin;
extern int line_num;
extern int para_num;
extern char* yytext;

void preprocess(char *filename)
{
	FILE *in,*out;
	in = fopen(filename,"r");
	out = fopen("temp","w");
	if(!in){
		fprintf(stderr,"could not open %s\n",filename);
		exit(1);
	}
	int c;
	while((c = fgetc(in)) != EOF)
	{
		if(c >= 65 && c <= 90)
		{
			c = c + 32;
		}
		fputc(c,out);
	}
	fclose(in);
	fclose(out);
}

main(int argc, char *argv[])
{
if(argc<2){
printf("Usage: %s filename\n",argv[0]);
exit(1);
}
else{
preprocess(argv[1]);
FILE *processed;
processed = fopen("temp","r");
if(!processed){
fprintf(stderr,"could not open %s\n",argv[1]);
exit(1);
}
yyin = processed;
do {
yyparse();
} while (!feof(yyin));
}
if(iserror ==0)
printf("No gramatical error is found in %s\n",argv[1]);
else{
printf("There is gramatical error in %s\n",argv[1]);
}
}

void yyerror(char *s)
{
if(YYRECOVERING())
return;	
printf("Paragraph %d:\t Sentence %d:\t Unexpected %s\t Error: %s\n",para_num,line_num,yytext,s);
iserror = 1;
}
