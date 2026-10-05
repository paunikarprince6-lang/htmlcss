#include<stdio.h>
#include<conio.h>
void main()
{
   int i,n,total=0,multi=1;
   clrscr();
   printf("enter i = ");
   scanf("%d",&n);

   for(i=1; i<=5; i++)
   {
     printf("\n%d",i);
     total = total+i;
     multi = multi*i;
   }
   printf("\ntotal = %d\n",total);
   printf("multi = %d\n",multi);

 getch();
}