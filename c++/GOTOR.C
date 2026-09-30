#include<stdio.h>
#include<conio.h>
void main()
{
    int i=25;
    clrscr();

    start:
    if(i>=1)
    {
      printf("\nhello %d",i);
      i-=1;
      goto start;
    }



 getch();

}