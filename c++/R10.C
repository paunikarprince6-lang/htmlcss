#include<stdio.h>
#include<conio.h>
void main()
{
   int i=50;
   clrscr();

   start:
   if(i<=60)
   {
     printf("\nhello %d",i);
     i+=1;
     goto start;
   }

  getch();
}