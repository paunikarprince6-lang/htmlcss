#include<iostream.h>
#include<conio.h>
void main()
{
   int a=10;
   int *p;
   clrscr();

//   p = &a;
   *p =111;

   cout<<"a = \n"<<a;
   cout<<"p = \n"<<p;
   cout<<"*p = "<<*p;

  getch();
}