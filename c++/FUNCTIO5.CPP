#include<iostream.h>
#include<conio.h>
void success()
{
  cout<<"this is success";
}
void error()
{
  cout<<"this is error";
}
void main()
{
  int n;
  clrscr();

  cout<<"enter value:-";
  cin>>n;

  if(n%3==0 && n%5==0)
   {
     success();
   }
   else
   {
     error();
   }

  getch();
}