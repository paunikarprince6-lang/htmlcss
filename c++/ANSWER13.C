#include<stdio.h>
#include<conio.h>
void mytable(int n)
{
   int i;
   for(i=1; i<=10; i++)
    {
       printf("\n%d*%d=%d",n,i,n*i);
    }
}

void main()
{
   int a;
   clrscr();

   printf("enter no:-");
   scanf("%d",&a);

   mytable(8);
   mytable(10);

  getch();
}