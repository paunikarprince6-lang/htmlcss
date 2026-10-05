#include<stdio.h>
#include<conio.H>
void main()
{
   int i,n;
   clrscr();
   printf("enter i = ");
   scanf("%d",&n);
   for(i=1;i<=10;i+=1)

   {
     printf("\n %d*%d=%d",n,i,n*i);
   }

  getch();
}
