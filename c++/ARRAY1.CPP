#include<iostream.h>
#include<conio.h>
void main()
{
   int a[5]={12,23,34,45,56},i,total=0;
   clrscr();

   for(i=0; i<5; i++)
    {
      cout<<"\na["<<i<<"]="<<a[i];
      total = total+a[i];
    }
   cout<<"\nsum=="<<total;

  getch();
}