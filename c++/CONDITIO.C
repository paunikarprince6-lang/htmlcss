#include<stdio.h>
#include<conio.h>
void main()
{
    int user=10;
    clrscr();

    printf("enter user = ");
    scanf("%d",&user);
    start:
    if(user=>20)
    {
       printf("\nhello %d",user);
       user+=1;
       goto start;
    }


  getch();
}
