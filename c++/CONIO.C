#include<stdio.h>
#include<conio.h>
void main()
{
	    int a=10,b=2,sum,minus,multi,d,m;
	    clrscr();

	    sum = a+b;
	    printf("\nsum = %d",sum);

	    minus = b-a;
	    printf("\nminus = %d",minus);

	    multi = a*b;
	    printf("\nmulti = %d",multi);

	    d = a/b;
	    printf("\nd = %d",d);

	    m = b%a;
	    printf("\nm = %d",m);

	    getch();
}