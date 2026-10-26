#include<stdio.h>
#include<conio.h>
void main()
{
   int a[5]={12,23,34,45,56},i,total=0;
   clrscr();

   printf("%d",a[0]);
   printf("\n%d",a[1]);

   for(i=0; i<5; i++)
    {
       printf("\na[%d] = %d",i,a[i]);
       total = total+a[i];
    }
   printf("\nsum = %d",total);

  getch();
}