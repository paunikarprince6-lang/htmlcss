#include<stdio.h>
#include<conio.h>
void main()
{
   int n,rem,sum=0,neon;
   clrscr();

   printf("enter n = ");
   scanf("%d",&n);

   while(n>0)
   {
     rem = n%10;
     neon = rem*rem;
     sum = sum+neon;
     n = n/10;
   }
   if(sum == neon)
   {
      printf(" its neon...");
   }
   else
   {
     printf("not");
   }

  getch();
}