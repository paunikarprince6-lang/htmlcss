#include<iostream.h>
#include<conio.h>
void main()
{
  int a[10][10],n,i,j,total=0;
  clrscr();

  cout<<"enter n = ";
  cin>>n;

  for(i=0; i<n; i++)
   {
     for(j=0; j<n; j++)
      {
	cout<<"a["<<i<<"]["<<j<<"]=";
	cin>>a[i][j];
      }
   }
   for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
       {
	 cout<<"a["<<i<<"]["<<j<<"]=";
       }
      cout<<"\n";
    }
   for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
       {
	 total = total+a[i][j];
       }
      cout<<"\ntotal == "<<total;
    }

  getch();
}