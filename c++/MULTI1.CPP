#include<iostream.h>
#include<conio.h>
class myclass
{
  public:
  int a,t;

  void myprint()
   {
     cout<<"a = ";
     cin>>a;
   }
   void mytotal(myclass m,myclass m1)
    {
      t=m.a+m1.a;
      cout<<1;
    }
};
void main()
{
  clrscr();
  myclass m,m1;
  m.myprint();
  m1.myprint();
  m.mytotal(m,m1);

  getch();
}
