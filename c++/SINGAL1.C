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
   clrscr();

   m.a=23;
   m.b=9.9;

   printf("%d",m.a);
   printf("\n%f",m.b);

   getch();
}