#include<iostream.h>
#include<conio.h>
void main()
{
  char i,j,k;
  clrscr();

  for(i=65; i<=69; i++)
   {
     for(k=69; k>=i; k--)
      {
	cout<<" ";
      }
     for(j=65; j<=i; j++)
      {
	cout<<" "<<i;
      }
      cout<<"\n";
   }

   for(i=69; i>=65; i--)
    {
      for(k=69; k>=i; k--)
       {
	 cout<<" ";
       }
      for(j=65; j<=i; j++)
       {
	 cout<<" "<<i;
       }
       cout<<"\n";
    }
  getch();
}