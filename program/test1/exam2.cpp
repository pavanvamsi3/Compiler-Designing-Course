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
    f2=fopen("identifiers.txt","w");
    while((c=getc(f1))!=EOF)
    {  
  if(isdigit(c))
    {   putc(c,f2);
        tokenvalue=c-'0';
        c=getc(f1);
        while(isdigit(c))
        { putc(c,f2);
        tokenvalue*=10+c-'0';
        c=getc(f1);
        }
        string Result;    
        stringstream convert;  
        convert <<tokenvalue;     
        Result = convert.str(); 
        cout<<i++<<"  "<<Result<<"  Number\n";
        //cout<<"\n"<<i<<"  "<<Result<<"  NON keyword\n";
        ungetc(c,f1);
    } 
    else if(c=='/')
      {  putc(c,f2);
          c=getc(f1);
          if(c=='/')
            { putc(c,f2);
             while(c!='\n')
             { c=toupper(c);
                c=getc(f1);
              if(c!=' ')
              { c=toupper(c);
                putc(c,f2);
              }
              }
            }
          else if(c=='*')
           {  putc(c,f2);
              c=getc(f1);
             while((c=getc(f1))!=EOF)
             { if(c!=' ')
                { c=toupper(c);
                  putc(c,f2);
                }
                if(c=='*')
               { putc(c,f2);
                 c=getc(f1);
                 if(c=='/')
                 { putc(c,f2);
                   break;
                  }
                 else
                 ungetc(c,f1);
               }
             }
          }
      }
    else if(isalpha(c))
    {   putc(c,f2);
        string str;
        str+=c;
        c=getc(f1);
        while(isdigit(c)||isalpha(c)||c=='_'||c=='$')
        {
        putc(c,f2);
        str+=c;
        c=getc(f1);
        }
        keyword(str,i);
      // cout<<i<<"  "<<str<<" keyword\n"; 
       ungetc(c,f1);
    }
    else if(c=='\n')
       {putc(c,f2); 
        lineno++;
       }
    else if(c!=' ')
      { cout<<i++<<"  "<<c<<"  special charecter\n";
        //cout<<i<<"  "<<c<<"  non keyword\n";
        putc(c,f2); 
      }    
}
    fclose(f1);
   fclose(f2);
    i=0;
  system("pause");
return 0;
}

