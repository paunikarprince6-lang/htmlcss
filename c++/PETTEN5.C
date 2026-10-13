#include<stdio.h>
#include<conio.h>
void main()
{
   int i,j;
   clrscr();

   for(i=11; i<=15; i++)
   {
     for(j=11; j<=15; j++)
     {
	printf("%d",j);
     }
     printf("\n");
   }

  getch();
}