#include<stdio.h>
#include<conio.h>
void main()
{
   int u1=10,u2=20;
   clrscr();

   printf("enter u1 = ");
   scanf("%d",&u1);
   printf("enter u2 = ");
   scanf("%d",&u2);

   do
   {
      printf("\nhello %d ",u1);
      u1++;
   }
   while(u1<=u2);




  getch();
}