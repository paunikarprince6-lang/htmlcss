#include<stdio.h>
#include<conio.h>
void main()
{
   int u1=10,u2=20;
   clrscr();

   printf("\nenter u1 = ");
   scanf("%d",&u1);
   printf("\nenter u2 = ");
   scanf("%d",&u2);
   start:
   if(u1<=u2)

   {
    printf("\nhello%d",u1);
    u1+=1;
    goto start;
   }


  getch();
}