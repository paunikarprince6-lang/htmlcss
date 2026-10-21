#include<stdio.h>
#include<conio.h>
void main()
{
    char i,j,k;
    clrscr();

    for(i=69; i<=71; i++)
    {
       for(k=71; k>=i; k--)
       {
	  printf(" ");
       }
       for(j=69; j<=i; j++)
       {
	  printf(" %c",i);
       }
       printf("\n");
    }

    for(i=71; i>=69; i--)
    {
       for(k=71; k>=i; k--)
       {
	  printf(" ");
       }
       for(j=69; j<=i; j++)
       {
	  printf(" %d",i);
       }
       printf("\n");
    }

  getch();
}