/*
  Name: sudanshu pratap singh
  Copyright: 
  Author: 
  Date: 18/02/13 23:32
  Description: 
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
int main()
{
	char ch,s[10000];
	int i=0,j,x1,x2;
	
	fstream f;
	f.open("input.txt",ios::in);
	while(!f.eof())
	{
		f.get(ch);
	if(ch=='/')
      {  f.get(ch);
          if(ch=='/')
            while(ch!='\n')
             {f.get(ch);
             }
          else if(ch=='*')
           {  f.get(ch);
             while((f.get(ch)))
             { if(ch=='*')
               {  f.get(ch);
                 if(ch=='/')
                 break;
              }
             }
          }
      }
      else {
        s[i++]=ch;
	    cout<<s[i-1];	
     }
	}
    cout<<endl;
	f.close();
	
	char c[100],d[100],e[100],r[100]; 
	int j1,k=0,m,flag=0,k1=0,k2=0,k3=0,l;
	for(j=0;j<i;j++)
	{
		if(s[j]=='{')
		{x1=j; break; }
	}
	for(j=0;j<i;j++){
	
		if(s[j]=='r'&&s[j+1]=='e'&&s[j+2]=='t'&&s[j+3]=='u')
		x2=j;
	}
	cout<<x1<<" "<<x2<<endl;
	for(j=0;j<x2;j++)
	{
		// int error ....
		if(s[j]=='m' && s[j+1]=='a' && s[j+2]=='i' && s[j+5]==')')
		{ flag=1; continue;
		}
		else if((flag==1 && s[j]=='i' && s[j+1]=='n' && s[j+2]=='t') && (s[j-2]=='{' || s[j-2]==';' || s[j-2]==' ' || s[j-2]=='\n')) 
		{m=j+4; 
			while(s[m]!=';')
			{	if(s[m]==',')
				{m++; continue;
				}
				else
				{c[k++]=s[m];     // c[]  is for variables declared under int datatype..
					m++;
					cout<<"int "<<c[k-1]<<endl;
				}
			}
		j=m+1;	
		}
		else if(s[j]=='f' && s[j+1]=='l' && s[j+2]=='o' && s[j+3]=='a' && s[j+4]=='t')
		{m=j+6;
			while(s[m]!=';')
			{if(s[m]==',')
				{	m++; continue;
				}
				else
				{d[k1++]=s[m];      //d[] is for variables delared under float datatype ...
					m++;
					cout<<"float "<<d[k1-1]<<endl;
				}
			}
			j=m+1;
			//cout<<s[j+2]<<" "<<j+2<<"aaaa "<<endl;
		}
		else if(s[j]=='c' && s[j+1]=='h' && s[j+2]=='a' && s[j+3]=='r')
		{m=j+5;
			while(s[m]!=';')
			{if(s[m]==',')
				{m++; continue;
				}
				else
				{e[k2++]=s[m];      //e[] is for variables delared under char datatype ...
					m++;
					cout<<"char "<<e[k2-1]<<endl;
				}
			}
			j=m+1;
		}
		else if(s[j]=='c'&&s[j+1]=='i'&&s[j+2]=='n')
		{m=j+3;
			while(s[m]!=';')
			{if(s[m]>='a' && s[m]<='z')
				{r[k3]=s[m]; k3++;               	
           	}m++;
			}
			j=m+1;
		}
		else if(s[j]=='c'&&s[j+1]=='o'&&s[j+2]=='u'&&s[j+3]=='t')
		{m=j+4;
			while(s[m]!=';')
			{	if(s[m]>='a' && s[m]<='z')
				{r[k3]=s[m]; k3++;
				}m++;
			}j=m+1;
		}
		else if(s[j]=='i'&&s[j+1]=='f')
		{m=j;
			while(s[m]!=')')
			{m++;}
			m=m+2;
			while(s[m]!='}')
			{  
				if(s[m]=='c'&&s[m+1]=='i'&&s[m+2]=='n')
				{j1=m+3;
					while(s[j1]!=';')
					{if(s[j1]>='a' && s[j1]<='z')
						{ 
						r[k3]=s[j1]; k3++;
					}j1++;
					}m=j1+1;
				}
				else if(s[m]=='c'&&s[m+1]=='o'&&s[m+2]=='u'&&s[m+3]=='t')
				{
					j1=m+4;
					while(s[j1]!=';')
					{  
						if(s[j1]>='a' && s[j1]<='z')
						{
							r[k3]=s[j1]; k3++;
					}j1++;
					}m=j1+1;
				}
				else
				{if(s[m]>='a' && s[m]<='z')
					{	r[k3]=s[m]; k3++;
				}m++;
				}
            }
			j=m+1;
		}
		else if(s[j]=='e'&&s[j+1]=='l'&&s[j+2]=='s'&&s[j+3]=='e')
		{m=j+4;
			m=m+2;
			while(s[m]!='}')
			{  	if(s[m]=='c'&&s[m+1]=='i'&&s[m+2]=='n')
				{	j1=m+3;
					while(s[j1]!=';')
					{	if(s[j1]>='a' && s[j1]<='z')
						{r[k3]=s[j1]; k3++;
					//	cout<<"random "<<r[k3-1]<<endl;
						}j1++;
					}m=j1+1;
				}
				else if(s[m]=='c'&&s[m+1]=='o'&&s[m+2]=='u'&&s[m+3]=='t')
				{	j1=m+4;
					while(s[j1]!=';')
					{ 	if(s[j1]>='a' && s[j1]<='z')
						{ r[k3]=s[j1]; k3++;
						}j1++;
					}m=j1+1;
				}
				else
				{if(s[m]>='a' && s[m]<='z')
					{r[k3]=s[m]; k3++;
					}
				m++;
            }
			}
			j=m+1;
		}	
		else if(j>x1 && j<x2)
		{	if(s[j]>='a' && s[j]<='z')
			{	r[k3]=s[j]; k3++;
			}
		}
	}
	int count1[125];
	memset(count1,0,sizeof(count1));
	for(j=0;j<k;j++)
	{for(l=0;l<k3;l++)
		{if(c[j]==r[l])
			{	if(count1[int(r[l])]==0)
				count1[int(r[l])]++;
			}}}
	for(j=0;j<k1;j++)
	{for(l=0;l<k3;l++)
		{	if(d[j]==r[l])
			{	if(count1[int(r[l])]==0)
				count1[int(r[l])]++;
			}
		}}
	for(j=0;j<k;j++)
	{for(l=0;l<k3;l++)
		{	if(e[j]==r[l])
			{	if(count1[int(r[l])]==0)
				count1[int(r[l])]++;
			}
		}}
	for(j=0;j<k3;j++)
	{if(count1[int(r[j])]==0)
		{	cout<<r[j]<<" is not declared in this scope\n";
		}}
	for(j=0;j<k;j++)
	{for(l=0;l<k1;l++)
		{	if(c[j]==d[l])
			{	cout<<d[l]<<" is previously declared here\n";
	   }}
		for(l=0;l<k2;l++)
			if(c[j]==e[l])
			cout<<e[l]<<" is previously declared here\n";
	}
	for(j=0;j<k1;j++)
	{	for(l=0;l<k2;l++)
			if(d[j]==e[l])
			cout<<e[l]<<" is previously declared here\n";
	}
	// if-else condition ...
	int y1=0,y2=0;
	for(j=x1+1;j<x2;j++)
	{	if(s[j]=='i'&&s[j+1]=='f')
		{m=j;
			while(s[m]!='}')
			m++;
			y1=m;
		j=m+1;
		}
	if(s[j]=='e'  && s[j+1]=='l' && s[j+2]=='s' && s[j+3]=='e')
		{	y2=j;
			m=j;
			while(s[m]!='}')
			m++;
		j=m+1;	
		}
		if(y2>y1)
		{	for(l=y1;l<=y2;l++)
			{	if(s[l]==';')
				{	cout<<"else without a previous if \n";
					y1=0; y2=0;
					break;
		}}}	
	}
	return 0;
}
