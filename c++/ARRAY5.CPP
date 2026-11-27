#include<iostream.h>
#include<conio.h>
void main()
{
   int a[50],i,n;
   clrscr();

   cout<<"enter n :- ";
   cin>>n;

   for(i=0; i<n; i++)
    {
      cout<<"a["<<i<<"]=";
      cin>>a[i];
    }

  getch();
}