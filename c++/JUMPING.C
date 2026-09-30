#include<stdio.h>
#include<conio.h>
void main()
{
   int a,b,choice,sum,multi;
   clrscr();

   printf("enter a = ");
   scanf("%d",&a);
   printf("enter b = ");
   scanf("%d",&b);

   start:

   printf("1.sum\n2.multi");

   printf("\n\nenter choice = ");
   scanf("%d",&choice);

   switch(choice)
   {
      case 1:
      {
	sum = a+b;
	printf("sum = %d",sum);
	break;
      }
      case 2:
      {
	multi = a*b;
	printf("\nmulti = %d",multi);
	break;
      }
      default:
      {
	printf("\nyour chioce in wrong...");
	goto start;
      }

}
   getch();

}