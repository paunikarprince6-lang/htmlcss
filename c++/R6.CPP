#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,c,max;
   clrscr();

   cout<<"enter a = ";
   cin>>a;
   cout<<"enter b = ";
   cin>>b;
   cout<<"enter c = ";
   cin>>c;

   max = (a>b)?(a>c)?a:c:(b>c)?b:c;
   cout<<"max == "<<max;

  getch();
}