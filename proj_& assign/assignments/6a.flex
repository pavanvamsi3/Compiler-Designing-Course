#include <stdio.h>
FILE *fpt;
int main()
{
 int c1=0,c2=0,c3=0,c4=0,c5=0;
 char c,name[20],z;
 printf("Enter the name of file to be checked :-  ");
 gets(name);
 fpt=fopen(name,"r");
 if (fpt==NULL)
  printf("ERROR - can/'t open file %s",name);
 else
 {
  while ((c=getc(fpt))!=EOF)
  {
   if (c=='(')
    c1=c1+1;
   if (c==')')
    c1=c1-1;
   if (c=='[')
	c2=c2+1;
   if (c==']')
	c2=c2-1;
   if (c==' ')
   {
	if (c1!=0)
	 printf("ERROR - Unbalanced parenthesis ()");
	if (c2!=0)
	 printf("ERROR - Unbalanced brackets []");
   }
   if (c=='{')
	c3=c3+1;
   if (c=='}')
	c3=c3-1;
   if ((int)c==39)
   {
	if (c1!=0)
	{
	 if (c4==0)
	  c4=c4+1;
	 else
	  c4=c4-1;
	}
	else
	 printf("ERROR - Unbalanced ' ");
   }
   if ((int)c==34)
   {
	if (c1!=0)
	{
	 if (c5==0)
	  c5=c5+1;
	 else
	  c5=c5-1;
	}
	else
	{
	 z=(char)34;
	 printf("ERROR - Unbalanced %c ",z);
	}
   }
  }
 }

   if (c1!=0)
	printf("ERROR - Unbalanced parenthesis ()");
   if (c2!=0)
	printf("ERROR - Unbalanced brackets []");
   if (c3!=0)
	printf("ERROR - Unbalanced braces {}");
   if (c4!=0)
	printf("ERROR - Unbalanced '  ");
   if (c5!=0)
    printf("ERROR - Unbalanced  ");

   if (c1==0 && c2==0 && c3==0 && c4==0 && c5==0)
    printf("Program is up to date. WELL DONE!");
 fclose(fpt);
 return 0;
}