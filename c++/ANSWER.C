#include<stdio.h>
#include<conio.h>
void main()
{
    int a,i=1,f=1;
    clrscr();

    printf("enter value=");
    scanf("%d",&a);

    while(i<=a)
    {
     //  f=f*a;
       printf("%d",a);
       a--;
    }
    printf("\nanswer=%d",f);




  getch();
}