#include<cstring>
#include<fstream>
#include<iostream>
#include<cctype>
#include<cstdio>

void keyword(char str[10],int i)
{ if(strcmp("for",str)==0||strcmp("while",str)==0||strcmp("do",str)==0||
     strcmp("int",str)==0||strcmp("float",str)==0||strcmp("char",str)==0||
     strcmp("double",str)==0||strcmp("static",str)==0||strcmp("switch",str)==0||
     strcmp("case",str)==0||strcmp("long",str)==0||strcmp("include",str)==0||
     strcmp("main",str)==0||strcmp("cout",str)==0||strcmp("cin",str)==0||
     strcmp("using namespace std",str)==0)
     printf("\n%d  %s = keyword",i,str);
else
    printf("\n%d  %s = identifier",i,str);
}
int main()
{
    FILE *f1,*f2,*f3;
    char c,str[10],st1[10];
    int num[100],lineno=0,tokenvalue=0,i=0,j=0,k=0;
    f1=fopen("input1.cpp","r");
    f2=fopen("identifier.txt","w");
    f3=fopen("specialchar.txt","w");
    while((c=getc(f1))!=EOF)
    {
    if(isdigit(c))
    {
        tokenvalue=c-'0';
        c=getc(f1);
        while(isdigit(c))
        {
        tokenvalue*=10+c-'0';
        c=getc(f1);
        }
        num[i++]=tokenvalue;
        ungetc(c,f1);
    } 
    else if(isalpha(c))
    {
        putc(c,f2);
        c=getc(f1);
        while(isdigit(c)||isalpha(c)||c=='_'||c=='$')
        {
        putc(c,f2);
        c=getc(f1);
        }
        putc(' ',f2);
        ungetc(c,f1);
    } 
    else if(c==' '||c=='\t')
         printf(" ");
    else if(c=='\n')
         lineno++;
    else if(c=='/')
      {  c=getc(f1);
          if(c=='/')
            while(c==';'||c=='\n')
            c=getc(f1);
          else if(c=='*')
          {  c=getc(f1);
             while((c=getc(f1))!=EOF)
             { if(c=='*')
               { c=getc(f1);
                 if(c=='/')
                 break;
                 else
                 ungetc(c,f1);
               }
             }
          }
      }
    else
        putc(c,f3);
    }
    fclose(f2);
    fclose(f3);
    fclose(f1);
    printf("\nThe no's in the program are");
    for(j=0;j<i;j++)
         printf("%d  %d\n",j+1,num[j]);
    printf("\n");
    f2=fopen("identifier.txt","r");
       k=0;
    printf("The keywords and identifiersare:");
    i=0;
    while((c=getc(f2))!=EOF)
    {
        if(c!=' ')
        str[k++]=c;
        else
        {
        str[k]='\0';
        keyword(str,++i);
        k=0;
        }
    }
    fclose(f2);
    f3=fopen("specialchar.txt","r");
    printf("\nSpecial characters are");
    while((c=getc(f3))!=EOF)
         printf("%c",c);
    printf("\n");
    fclose(f3);
    printf("Total no. of lines are:%d",lineno);
system("pause");
}

