#include<stdio.h>
#include<conio.h>
void main()
{      /*
       float a=12.3,t=9.5;
       double b=9.7;
       long int c=90;
       const int d=93;

       clrscr();
       printf("%f",a);
       printf("\n%lf",b);
       printf("\n%ld",c);

       printf("\n%d",(int)t);
       printf("\n%d",d);

       printf("\nsize = %d",sizeof(d));

       getch();
       */

       int a,b,add;
       clrscr();

       printf("enter a = ");
       scanf("%d",&a);
       printf("enter b = ");
       scanf("%d",&b);

       add=a+b;
       printf("addition  = %d",add);

       getch();
}
