#include<stdio.h>
#include<conio.h>
int myfactorial5()
{
  int i=5,sqr;
  sqr=i*i;
  return sqr;

}
int main()
{
   int st;
   st = myfactorial5();

   printf("%d",myfactorial5());
   printf("\n == %d",myfactorial5()*10);



  return 0;
}