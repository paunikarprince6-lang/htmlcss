#include<stdio.h>
#include<stdio.h>
void main()
{
     int a,b,c,d,e;
     int sum,min,max;
     clrscr();

     printf("enter a = ");
     scanf("%d",&a);
     printf("enter b = ");
     scanf("%d",&b);
     printf("enter c = ");
     scanf("%d",&c);
     printf("enter d = ");
     scanf("%d",&d);
     printf("enter e = ");
     scanf("%d",&e);

     sum = a+b+c+d+e;
     printf("\nsum = %d",sum);

     d = sum / 5.0;
     printf("\nd = %d",d);

     min = a;
     printf("\nmin = %d",min);

     max = a;
     printf("\nmax = %d",max);

     if (d >=90)
     {
	printf("\ngrade = a+");
     }
     else
     if (d >=80)
     {
	printf("\ngrade = b");
     }
     else
     if (d >=70)
     {
	printf("\ngrade = c+");
     }
     else
     if (d >=60)
     {
	printf("\ngrade = d");
     }
     else
     {
	printf("\ngrade = e");
     }

    getch();
}
