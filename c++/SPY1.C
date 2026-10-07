#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,rem,rev,multi;
   clrscr();

   while(i<=1000)
   {
     n=i;
     rev=0;
     multi=1;
     while(n>0)
     {
       rem = n%10;
       rev = rev+rem;
       multi = multi*rem;
       n = n/10;
     }
     if(rev == multi)
     {
       printf("\n%d",i);
     }
     i++;
   }

  getch();
}