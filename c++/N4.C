#include<stdio.h>
#include<conio.h>
void main()
{
   int n,rem,rev,sum=0,i,multi=1;
   clrscr();

   printf("enter n = ");
   scanf("%d",&n);

   while(n>0)
   {
      rem = n%10;
      sum = sum+rem;
      multi = multi*rem;
      n = n/10;
   }
   if(sum == multi)
   {
      printf("spy...");
   }
   else
   {
     printf("not");
   }




   getch();
}