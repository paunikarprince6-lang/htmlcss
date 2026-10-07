#include<stdio.h>
#include<conio.h>
void main()
{
   int i=1,n,rem,rev;
   clrscr();

   while(i<=1000)
   {
     n=i;
     rev=0;
     while(n>0)
      {
	rem = n%10;
	rev = rev*10+rem;
	n = n/10;
      }
      if(rev == i)
      {
	printf("\n%d",i);
      }
      i++;
    }
   getch();
}