#include<iostream.h>
#include<conio.h>
int mysum(int a,int b)
{
  int sum;
  sum = a+b;
  return sum;
}
void main()
{
  int p,q,store;
  clrscr();

  cout<<"enter 1st :- ";
  cin>>p;
  cout<<"enter 2st :- ";
  cin>>q;

  store = mysum(p,q);
  cout<<"\nsum == "<<store,store*10;

  cout<<"\n== "<<store+10;

  getch();
}