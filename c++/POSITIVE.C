/*#include<stdio.h>
#include<conio.h>
void main()
{
    int n;
    clrscr();

    printf("enter n = ");
    scanf("%d",&n);

    if(n%2 == 0)
    {
      printf("its even");
    }
    else
    {
      printf("its odd");
    }

    getch();
}*/

#include<stdio.h>
#include<conio.h>
void main()
{
     int n;
     clrscr();
     printf("enter n = ");
     scanf("%d",&n);

     if(n>0)
     {
       printf("its positive");
     }
     else
     {
       printf("its negative");
     }
   getch();
}