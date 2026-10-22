#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
    int i;
    clrscr();
    for(i=1; i<=30; i++)
    {
      printf("%d\t",i);
     // delay(100);
      sleep(1);
    }



   getch();
}