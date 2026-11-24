#include<stdio.h>
#include<conio.h>
struct mydemo
{
   int a;
};
int main()
{
   int n,i;
   clrscr();

   struct mydemo m[100];

   printf("enter n = ");
   scanf("%d",&n);

   for(i=0; i<n; i++)
    {
      printf("enter a = ");
      scanf("%d",&m[i].a);
    }

  getch();
}