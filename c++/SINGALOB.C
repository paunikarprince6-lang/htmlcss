#include<stdio.h>
#include<conio.h>
struct mydemo
{
   int a;
   float b;
};
void main()
{
   struct mydemo m;
   m.a=23;
   m.b=9.9;
   clrscr();

   printf("%d",m.a);
   printf("\n%f",m.b);

  getch();
}