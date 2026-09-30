#include<stdio.h>
#include<conio.h>
void main()
{
    float a=12.3,t=10.0;
    double b=9.7;
    long int c=95;

    int d=6;


    clrscr();
    printf("%.1f",a);
    printf("\n%.1lf",b);
    printf("\n%ld",c);

    //type casting
    printf("\n%d",(int)t);
    printf("\n%d",d);

    printf("\nsize ==> %d",sizeof(d));


    getch();

}




