#include<stdio.h>
#include<conio.h>
struct mydemo
{
   int a;
};
void main()
{
  int n,i;
  struct mydemo m[100];
  clrscr();

  printf("enter n = ");
  scanf("%d",&n);

  for(i=0; i<n; i++)
   {
     printf("enter a = ");
     scanf("%d",m[i].a);
   }

  getch();
}