#include<iostream.h>
#include<conio.h>
void main()
{
  int n,rem,sum=0,i,multi=1;
  clrscr();

  cout<<"enter n = ";
  cin>>n;

  i=n;

  while(n>0)
   {
     rem = n%10;
     sum = sum+rem;
     multi = multi*rem;
     n = n/10;
   }
   if(sum == multi)
    {
      cout<<"spy ...";
    }
   else
    {
      cout<<"not";
    }

  getch();
}