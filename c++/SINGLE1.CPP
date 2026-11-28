#include<iostream.h>
#include<conio.h>
class myclass
{
  public:
  int a,b,total;

  void mydata()
  {
    cout<<"a = ";
    cin>>a;
    cout<<"b = ";
    cin>>b;
  }
  void mysum()
  {
    total = a+b;
    cout<<"total ==> "<<total;
  }

};
void main()
{
  clrscr();
  myclass m;
  m.mydata();
  m.mysum();

  getch();
}
