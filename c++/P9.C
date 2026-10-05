#include<stdio.h>
#include<conio.h>
void main()
{
  int i=1,n,total=0,multi=1;
  clrscr();
  printf("enter i = ");
  scanf("%d",&n);

  for(;i<=5;)
  {
     printf("\n%d",i);
     total = total+i;
     multi = multi*i;
     i++;
  }
  printf("\ntotal = %d\n",total);
  printf("multi = %d\n",multi);

  getch();
}