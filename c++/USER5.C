#include<stdio.h>
#include<conio.h>
void main()
{
    int u1=30,u2=25;
    clrscr();

    printf("enter u1 = ");
    scanf("%d",&u1);
    printf("\nenter u2 = ");
    scanf("%d",&u2);
    start:
    if(u1>=u2)
    {
      printf("\nhello %d",u1);
      u1-=1;
      goto start;
    }


 getch();
}