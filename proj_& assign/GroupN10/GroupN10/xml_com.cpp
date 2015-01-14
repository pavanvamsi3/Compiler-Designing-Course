#include<iostream>
#include<string.h>
#include<conio.h>
#include<fstream>
using namespace std;

int xml_check(char *c);

int main()
{
    int i,index;
    char ch,c[22];
    cout<<"Xml elements r :-\n";
    fstream fin;
    fin.open("xml.xml");
    while(fin)
    {
        fin>>ch;
        //cout<<"== "<<ch;
        if(ch=='<')
        {
           i=0;
           while(ch!='>')
           {
             fin>>ch;//cout<<ch;
             c[i]=ch;
             i++;
             if(i>21)
             { cout<<"error in code "; return 0 ; }       
           }i--;c[i]='\0';
           //cout<<c<<endl;
           index=xml_check(c);for(int j=0;j<20;j++)c[i]='\0';
           if(index==0)
           cout<<"==> <"<<c<<"> is not mentioned in our list so its an error\n";
           else
           cout<<"<"<<c<<">"<<endl;
        }
        //cout<<endl;
    }
    fin.close();
    getch();
    return 0;
}

int xml_check(char *c)
{
    if(strcmp(c,"catalog")==0 || strcmp(c,"/catalog")==0 || strcmp(c,"author")==0 || strcmp(c,"/author")==0 || strcmp(c,"title")==0 
     || strcmp(c,"/title")==0 || strcmp(c,"genre")==0 || strcmp(c,"/genre")==0 || strcmp(c,"price")==0 || strcmp(c,"/price")==0
      || strcmp(c,"publish_date")==0 || strcmp(c,"/publish_date")==0 || strcmp(c,"description")==0 || strcmp(c,"/description")==0
       || strcmp(c,"book")==0 || strcmp(c,"/book")==0 || strcmp(c,"note")==0 || strcmp(c,"/note")==0 || strcmp(c,"to")==0
        || strcmp(c,"/to")==0 || strcmp(c,"from")==0 || strcmp(c,"/from")==0 || strcmp(c,"heading")==0 || strcmp(c,"/heading")==0
         || strcmp(c,"body")==0 || strcmp(c,"/body")==0 || strcmp(c,"text")==0 || strcmp(c,"/text")==0 || strcmp(c,"letter")==0
          || strcmp(c,"/letter")==0 || strcmp(c,"signature")==0 || strcmp(c,"/signature")==0 || strcmp(c,"address")==0 || strcmp(c,"/address")==0
           || strcmp(c,"weblink")==0 || strcmp(c,"/weblink")==0 || strcmp(c,"slide")==0 || strcmp(c,"/slide")==0 || strcmp(c,"slideshow")==0
            || strcmp(c,"/slideshow")==0 || strcmp(c,"?xmlversion='1.0'?")==0)
    return 1;
    else
    return 0;
}
