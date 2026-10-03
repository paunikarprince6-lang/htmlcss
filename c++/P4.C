#include<stdio.h>
#include<conio.h>
void main()
{
    int i=1,n;
    clrscr();
    printf("enter i = ");
    scanf("%d",&n);

    do
    {
      printf("\n%d*%d=%d",n,i,n*i);
      i+=1;
    }
    while(i<=10);

  getch();
}