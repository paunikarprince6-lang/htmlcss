#include<stdio.h>
#include<conio.h>
void main()
{
   int a=10;
   int*p;
   clrscr();

   p=&a;
   *p=111;

   printf("a=%d\n",a);
   printf("p=%p\n",p);
   printf("*p=%d",*p);

  getch();
}