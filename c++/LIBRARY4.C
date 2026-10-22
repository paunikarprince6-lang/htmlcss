#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
   int i;
   clrscr();

   srand(time(NULL));
   for(i=1; i<=10; i++)
   {
      printf(" %d\n",rand());
   }

  getch();
}