#include<iostream.h>
#include<conio.h>
#include<dos.h>
void main()
{
  int i;
  clrscr();

  for(i=1; i<=30; i++)
   {
     cout<<"\t"<<i;
     sleep(1);
   }

  getch();
}