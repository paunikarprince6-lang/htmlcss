#include<stdio.h>
#include<conio.h>
void main()
{
  float a=12.3,t=95;
  double b=9.7;
  long int c=90;

  const int d=93;

  clrscr();

  printf("%.2f",a);
  printf("\n%lf",b);
  printf("\n%ld",c);

  printf("\n%d",(int)t);
  printf("\n%d",d);

  printf("\nsize ==> %d",sizeof(d));

  getch();
}