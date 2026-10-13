#include<stdio.h>
#include<conio.h>
void success()
{
  printf("this is success");
}
void error()
{
  printf("this is error");
}
void main()
{
    int n;
    clrscr();
    printf("enter value :- ");
    scanf("%d",&n);

    if(n%3==0 && n%5==0)
    {
      success();
    }
    else
    {
      error();
    }


  getch();
}










