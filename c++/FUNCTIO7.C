#include<stdio.h>
#include<conio.h>
int myfactorial5()
{
   int i=5,sqr;
   clrscr();
   sqr=i*i;
   return sqr;
}
void main()
{
   // printf("%d",myfactorial5());
   // printf("\n==>%d",myfactorial5()*10);

   int st;
   st=myfactorial5();

   printf("==>%d",st);
   printf("\n==>%d",st*10);

   getch();
}