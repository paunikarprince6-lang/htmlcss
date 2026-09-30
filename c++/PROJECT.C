#include<stdio.h>
#include<conio.h>
void main()
{
   int user=30;
   clrscr();

   printf("enter user = ");
   scanf("%d",&user);
   start:
   if(user>=25)

   {
      printf("\nhello %d",user);
      user-=1;
      goto start;
   }


  getch();
}