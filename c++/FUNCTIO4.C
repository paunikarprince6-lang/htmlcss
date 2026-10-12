#include<stdio.h>
#include<conio.h>
int mysum(int a, int b)
{
  int sum;
  sum = a+b;
  return sum;
}
int main()
{
   int p,q,store;
   clrscr();

   printf("enter 1st:- ");
   scanf("%d",&p);
   printf("enter 2nd:- ");
   scanf("%d",&q);

   store = mysum(p,q);
   printf("\nsum ==> %d,%d",store,store*10);

   printf("\n ==>%d",store+10);

  return 0;
}