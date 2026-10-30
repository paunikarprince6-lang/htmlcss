#include<stdio.h>
#include<conio.h>
void main()
{
/*   char a=67;
   int b='Z';
   clrscr();

   printf("%c",a);
   printf("\n%d",a);

   char a;

   for(a=65; a<='Z'; a++)
    {
      printf("%c",a);
    } */


   char i,j,k;
   clrscr();

   for(i=65; i<=69; i++)
    {
      for(k=69; k>=i; k--)
       {
	 printf(" ");
       }
      for(j=65; j<=i; j++)
       {
	 printf(" %c",i);
       }
      printf("\n");
    }

   for(i=69; i>=65; i--)
    {
      for(k=69; k>=i; k--)
       {
	 printf(" ");
       }
      for(j=65; j<=i; j++)
       {
	 printf(" %c",i);
       }
       printf("\n");
    }

  getch();
}