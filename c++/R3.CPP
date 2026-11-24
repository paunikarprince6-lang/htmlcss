#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c,d;
  clrscr();

  cout<<"enter a = ";
  cin>>a;
  cout<<"enter b = ";
  cin>>b;
  cout<<"enter c = ";
  cin>>c;
  cout<<"enter d = ";
  cin>>d;

  if(a>b)
   {
     if(a>c)
      {
	 if(a>d)
	  {
	    cout<<"a max";
	  }
	 else
	  {
	    cout<<"d mac";
	  }
      }
   }
   else
   {
     if(b>c)
      {
	if(b>d)
	 {
	   cout<<"b max";
	 }
	 else
	 {
	   cout<<"d max";
	 }
      }
   }

  getch();
}