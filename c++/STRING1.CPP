#include<iostream.h>
#include<conio.h>
void main()
{
  char a[100],i;
  int count=0;
  clrscr();

  cout<<"enter string :- ";
  cin>>a;

  cout<<"string :- "<<a;

  for(i=0; a[i]!=NULL; i++)
   {
     cout<<"\na["<<i<<"]="<<i;
   }
  for(i=0; a[i]!=NULL; i++)
   {
     count++;
   }
  cout<<"\ntotal character:-"<<count;

  count=0;

  for(i=0; a[i]!=NULL; i++)
   {
     if(a[i]>=65 && a[i]<=90)
      {
	count++;
      }
   }
   cout<<"\ntotal upper character :- "<<count;

   count=0;

   for(i=0; a[i]!=NULL; i++)
    {
      if(a[i]>=97 && a[i]<=122)
       {
	 count++;
       }
    }
    cout<<"\ntotal lower character:- "<<count;

  getch();
}