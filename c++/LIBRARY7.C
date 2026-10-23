#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i;
   clrscr();

   for(i=1; i<=50; i++)
     {
	printf("%d\t",i);
       //delay(200);
	 sleep(5);
     }

   getch();
}