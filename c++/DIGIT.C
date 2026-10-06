#include<stdio.h>
#include<conio.h>
void main()
{
    int n,rev=0,rem,orignal;
    clrscr();
    printf("enter no = ");
    scanf("%d",&n);
    orignal = n;

    while(n>0)
    {
       rem = n%10;
       rev = rev*10+rem;
       n = n/10;
    }
    printf("reverse = %d",rev);
    if(orignal == rev)
    {
       printf("\nyes");
    }
    else
    {
       printf("\nno");
    }
    getch();
}