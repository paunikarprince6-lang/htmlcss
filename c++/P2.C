#include<stdio.h>
#include<conio.h>
void main()
{
     int i=1,n;
     clrscr();
     printf("enter i = ");
     scanf("%d",&n);

    for(;i<=10;)
     {
       printf("\n %d*%d=%d",n,i,n*i);
       i+=1;
     }


  getch();
}