#include<iostream.h>
#include<conio.h>
void main()
{
   int n,rem,sum=0,i,cube;
   clrscr();

   cout<<"enter n = ";
   cin>>n;

   i=n;
   while(n>0)
    {
      rem = n%10;
      cube = rem*rem*rem;
      sum = sum+cube;
      n = n/10;
    }
    if(sum == i)
     {
       cout<<"armstrong...";
     }
    else
     {
       cout<<"not";
     }

  getch();
}