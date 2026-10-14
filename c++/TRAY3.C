#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j;
    clrscr();

    for(i=10; i>=7; i--)
    {
      for(j=10; j>=i; j--)
      {
	printf("%d",i);
      }
      printf("\n");
    }

  getch();
}