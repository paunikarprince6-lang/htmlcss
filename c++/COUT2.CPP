#include<iostream.h>
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

  cout<<" "<<m.a;
  cout<<"\n"<<m.b;

  getch();
}