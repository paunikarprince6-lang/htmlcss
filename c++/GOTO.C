#include<stdio.h>
#include<conio.h>
void main()
{
     int i=1;
     clrscr();

     start:

     if(i<=25)
     {
       printf("\nhello %d",i);
       i+=1;
       goto start;
     }

     getch();
}