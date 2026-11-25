#include<iostream.h>
#include<conio.h>
void main()
{
   int n,rem,total=0;
   clrscr();

   cout<<"enter n = ";
   cin>>n;

   while(n!=0)
    {
      rem = n%10;
      total = total +rem;
      n = n/10;
    }
   cout<<"total == "<<total;

  getch();
}