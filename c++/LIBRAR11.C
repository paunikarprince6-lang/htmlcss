#include<stdio.h>
#include<conio.h>
#include<dos.h>
void main()
{
   int i;
   clrscr();
   for(i=1; i<=5; i++)
   {
     printf("%d\t",i);
     sleep(1);
   }

  gethc();
}