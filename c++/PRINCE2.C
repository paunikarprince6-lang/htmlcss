#include<stdio.h>
#include<conio.h>
void main()
{
	int a=10,b=2,sum,minus,multi,d,m;
	clrscr();
	printf("\na = %d",a);
	printf("\nb = %d",b);

	sum = a+b;
	printf("\nsum = %d",sum);

	minus = b-a;
	printf("\nminus = %d",minus);

	multi = a*b;
	printf("\nmulti = %d",multi);

	d = a/b;
	printf("\nd = %d",d);

	m = a%b;
	printf("\nm = %d",m);

	getch();

}