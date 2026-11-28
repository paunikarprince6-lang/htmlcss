#include<iostream.h>
#include<conio.h>
class myclass
{
    public:
    int a;

  void data()
  {
    cout<<"a = ";
    cin>>a;
  }
};
void main()
{
  int n,i;
  clrscr();
  myclass m[100];

  cout<<"n = ";
  cin>>n;

  for(i=0; i<n; i++)
   {
     m[i].data();
   }

  getch();
}
