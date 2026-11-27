#include<iostream.h>
#include<conio.h>
void mytable(int n)
{
  int i;
  for(i=1; i<=10; i++)
   {
     cout<<"\n%d*%d=%d"<<n,i,n*i;
   }
}
void main()
{
   int a;
   clrscr();

   cout<<"enter no :-";
   cin>>a;

   mytable(a);
   mytable(5);
   mytable(10);

  getch();
}