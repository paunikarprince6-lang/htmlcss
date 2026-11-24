#include<iostream.h>
#include<conio.h>
void main()
{
   int a=12,b,total;
   clrscr();

   cout<<"hello";
   cout<<"\nnew line"<endl;
   cout<<"test\t\tmsg";

   cout<<"\na="<<a;
   cout<<"\nb=";
   cin>>b;

   total=a+b;
   cout<<"\ntotal="<<total<<endl;

   if(a>b)
   {
     cout<<"a is max";
   }
   else
   {
     cout<<"b is max";
   }

  getch();
}