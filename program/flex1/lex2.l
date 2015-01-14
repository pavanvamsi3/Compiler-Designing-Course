%{
#include <stdio.h>
%}

%%
[0123456789]           printf("NUMBER\n");
[a-zA-Z]    printf("alphabate\n");
%%

int main(){
yyin=fopen("file1.l","r");
 
yyout=fopen("file2.l","w");
 
yylex();
fclose(yyin);
//fclose(yyout);
return 0;
}
