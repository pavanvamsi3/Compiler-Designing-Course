#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
int main()
{
     FILE *fp = fopen("token.txt","r");
    char str[10000];

    char key[100][100]={"int","float","char","double","if","else","for","while","do","auto","break","case","const","switch","continue","enum","extern","goto","short","register","return","sizeof",
    "static","struct","typedef","union","void","volatile","while","signed","unsigned","default","include","stdio","conio","string"};
       printf("\n  Symbol    \t\tType ");
    int fl=1;
    while(fgets(str,10000,fp))
    { //printf("\n\n\n\n");

    char str1[10000],str2[10000],var[10000];
    int i=0,l,l1,j=0,k=0,n,d=0,len;
    static int m=0;

    while(str[i]!='\0')
    {

        while(isspace(str[i]))
            i++;
            if(str[i]=='#')
            break;
        if(str[i]=='/' && str[i+1]=='/')
        {
           break;
        }
        if(str[i]=='/' && str[i+1]=='*')
            fl=0;
        if(fl==0 && str[i]=='*' && str[i+1]=='/')
            {
                fl=1;
                i=i+2;
            }
        if(fl==0)
            i++;

        if(fl==1)
        {


        switch(str[i])
        {
        case ';':
        case ',':
        case '"':
        case ':':
        case '.':
             printf("\n   %c    \t\tPunctual symbol\t\t",str[i]);
             i++;
             break;

        case '#':
        case '$':
        case '`':
        case '@':
            printf("\n   %c    \t\tTropical symbol\t\t",str[i]);
            i++;
            break;


        case '~':
                printf("\n      ~     \t\tBitwise not Operater");
                break;
           case '?':

                if(str[(i+1)]==':')
                {
                    printf("\n   ?:    \t\tconditional Operator ");
                    i=i+2;
                }

                else
                {    printf("\n   %c    \t\tpunctuation symbol",str[i]);
                    i++;

                }
                break;
        case '!':

                if(str[(i+1)]=='=')
                {
                    printf("\n   !=    \t\tNot Equal to Operator");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tnot Operator",str[i]);
                    i++;

                }
                break;

        case '+':

                if(str[(i+1)]=='+')
                {
                    printf("\n   ++    \t\tincrement Operator");
                    i=i+2;
                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   +=    \t\tOperator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tOperator ",str[i]);
                    i++;

                }
                   break;


        case '-':
                if(str[(i+1)]=='-')
                {
                    printf("\n  --    \t\tdecrement Operator ");
                    i=i+2;
                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   -=    \t\tDecrement assigment Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tOperator ",str[i]);
                    i++;

                }
                break;

        case '*':

                if(str[(i+1)]=='=')
                {
                    printf("\n   *=    \t\tMultiplication assignment Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tMultiplication Operator ",str[i]);
                    i++;

                }
                break;
        case '&':
                if(str[(i+1)]=='&')
                {
                    printf("\n   &&    \t\tAND Operator ");
                    i=i+2;
                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   &=    \t\tbitwise AND assignment Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tBitwise And Operator ",str[i]);
                    i++;

                }

                break;
        case '|':
                if(str[(i+1)]=='|')
                {
                    printf("\n   ||    \t\tbitwise Or Operator ");
                    i=i+2;
                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   |=    \t\tOperator ");
                    i=i+2;
                }

                else
                {    printf("\n   %c    \t\tOR Operator ",str[i]);
                    i++;

                }  break;
        case '/':

                if(str[(i+1)]=='=')
                {
                    printf("\n   /=    \t\tDivision assignment Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tDivision Operator ",str[i]);
                    i++;

                }   break;
          case '%':

                if(str[(i+1)]=='=')
                {
                    printf("\n   %=    \t\tModulo Assignment Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tModulo Operator ",str[i]);
                    i++;

                }
                break;
        case '^':

                if(str[(i+1)]=='=')
                {
                    printf("\n   ^=    \t\tBitwise XOR assignment Operator ");
                    i=i+2;
                }
                else
                {
                    printf("\n   %c    \t\tBitwise exclusive OR Operator ",str[i]);
                    i++;

                }
                break;


        case '<':

                if(str[(i+1)]=='<')
                {        printf("\n   <<   \t\tleft shift Operator ");
                        i=i+2;


                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   <=    \t\tless than or equal to Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tOperator ",str[i]);
                    i++;
                }
                break;
        case '>':

                if(str[(i+1)]=='>')
                {        printf("\n   >>    \t\tOshift right perator ");
                        i=i+2;

                }
                else if(str[(i+1)]=='=')
                {
                    printf("\n   >=    \t\tgreater han or equal to Operator ");
                    i=i+2;
                }
                else
                {    printf("\n   %c    \t\tOperator ",str[i]);
                    i++;
                }
                break;
        case '=':
                if(str[(i+1)]=='=')
                {
                    printf("\n   ==    \t\tAssignment  Operator ");
                    i=i+2;
                }
                else
                {
                    printf("\n   %c    \t\tEqual Operator ",str[i]);
                    i++;
                }
                break;
        case '(':
        case '{':
        case '[':

             printf("\n   %c    \t\tOpening bracket ",str[i]);
             i++;
             break;
        case '}':
        case ']':
        case ')':

             printf("\n   %c    \t\tClosing bracket ",str[i]);
             i++;
             break;


     default:         if(isalpha(str[i]))
             {
                k=0;

                while(isalnum(str[i]))
                {
                    str1[k]=str[i];
                    i++;
                    k++;
                }

                str1[k]='\0';
                l=0;

                while(j<100)
                {
                    if (strcmp(str1,key[j])==0)
                    {
                        l=1;
                        break;

                    }
                    j++;
                }

                if(l==1)
                {

                    printf("\n   %s    \t\tKeyword ",str1);
                }
                else
                {


                    printf("\n   %s    \t\tVariable ",str1);
                    l=0;
                    while(str1[l]!='\0')
                    {
                        var[m++]=str1[l];
                        l++;
                    }

                }



             }
             else if (isdigit(str[i]))
             {
                k=0;
                while(isalnum(str[i]) || str[i]=='.')
                {
                    if(str[i]=='.')
                        d++;
                    str2[k]=str[i];
                    i++;
                    k++;
                }
                str2[k]='\0';
                //n=5;
                printf("\n   %s    \t\tDigit ",str2);

                break;

             }

             else
             {
                  //    printf("\nError");
                i++;
                break;
             }
        }

    }
    var[m]='\0';
    }
    for(int kk=0;kk<1000;kk++)
        str[kk]='\0';


  }
   // printf("\n%s",var);
getch();
}
