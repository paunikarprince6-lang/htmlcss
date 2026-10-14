#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   clrscr();

   for(i=11; i<=13; i++)
   {
      for(j=11; j<=i; j++)
      {
	printf("%d",j);
      }
      printf("\n");
   }


  getch();
}