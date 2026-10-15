#include<stdio.h>
#include<conio.h>
void main()
{
   int a[10],i,n,total=0,min,max;
   clrscr();

   printf("enter n;-");
   scanf("%d",&n);

   for(i=0; i<n; i++)
   {
     printf("a[%d] = ",i);
     scanf("%d",&a[i]);
     total = total + a[i];
   }
   printf("\nsum == %d",total);

   if(a[0] > a[10])
   {
     printf("\na max");
   }
   else
   {
     printf("\nb max");
   }

  getch();
}