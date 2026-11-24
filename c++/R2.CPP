#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b,c;
   clrscr();

   cout<<"enter a = ";
   cin>>a;
   cout<<"enter b = ";
   cin>>b;
   cout<<"enter c = ";
   cin>>c;

   if(a>b && a>c)
    {
       cout<<"a max";
    }
   else if (b>c)
    {
      cout<<"b max";
    }
   else
    {
      cout<<"c max";
    }

  getch();
}