#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rem,total=0;
    clrscr();
    printf("enter n = ");
    scanf("%d",&n);

    while(n!=0)
    {
      rem = n%10;
      total=total+rem;
      n=n/10;
    }
    printf(" = %d",total);


  getch();
}