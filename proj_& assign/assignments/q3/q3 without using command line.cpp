#include<cstring>
#include<fstream>
#include<iostream>
#include<cctype>
#include<cstring>
#include<cstdio>
#include<map>
#include<cmath>
#include <sstream> 
#include<vector>
#include<algorithm>
using namespace std;

void keyword(string str,int i)
{  if(str.compare("for")==0 ||str.compare("while")==0||str.compare("do")==0||
     str.compare("int")==0||str.compare("float")==0||str.compare("char")==0||
     str.compare("double")==0||str.compare("static")==0||str.compare("switch")==0||
     str.compare("case")==0||str.compare("long")==0||str.compare("include")==0||
     str.compare("main")==0||str.compare("cout")==0||str.compare("cin")==0||
     str.compare("using namespace std")==0)
     cout<<i<<"  "<<str<<"  keyword\n";
else
   cout<<i<<"   "<<str<<"  identifire\n";
}
int main()
{  
    FILE *f1,*f2,*f3;
    char c,str[10],st1[10];
    int num[100],lineno=0,tokenvalue=0,i=0,j=0,k=0;
    f1=fopen("input.cpp","r");
    while((c=getc(f1))!=EOF)
    {   i++; 
    if(isdigit(c))
    {
       cout<<"\n"<<i<<"  "<<c<<"  Number\n";
    } 
    else if(c=='/')
      {  c=getc(f1);
          if(c=='/')
            while(c!='\n')
             {c=getc(f1);
             }
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
    else if(isalpha(c))
    {    cout<<"\n"<<i<<"  "<<c<<"  alphabet\n";
    } 
    else if(c=='\n')
         lineno++;
    
    else if(c!=' ')
        cout<<i<<"  "<<c<<"  special charecter\n";
    }
   
    fclose(f1);
    i=0;
return 0;
}

