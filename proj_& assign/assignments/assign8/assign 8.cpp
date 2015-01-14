#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string>
#include<iostream>
using namespace std;
int main()
{
     FILE *fp = fopen("testfile2.txt","r");
    char str[10000];
    int fl=1;
    while(fgets(str,10000,fp))
    {

    char str1[10000],str2[10000],var[10000];
    int i=0,l,l1,j=0,k=0,n,d=0,len;
    static int m=0;

    while(str[i]!='\0')
    {
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
            cout<<str[i];
            i++;
        }
    }
    }
getch();
}
