#include<iostream.h>
#include<conio.h>
int myfactorial5()
{
  int i=5,sqr;
  sqr=i*i;
  return sqr;
}
void main()
{
  int st;
  clrscr();

  st=myfactorial5();

  cout<<" === "<<st;
  cout<<"\n === "<<st*10;

  getch();
}