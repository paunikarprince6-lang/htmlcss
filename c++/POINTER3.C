
#include<stdio.h>
#include<conio.h>
void temp(int*a)
{
  *a=120;
  printf("temp->%d\n",*a);
}
void main()
{
   int a=10;
   clrscr();

   temp(&a);

   printf("main -> a = %d\n",a);

  getch();
}