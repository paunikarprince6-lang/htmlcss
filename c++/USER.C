#include<stdio.h>
#include<conio.h>
void main()
{
     int  user=25;
     clrscr();

     printf("\nenter user = ");
     scanf("%d",&i);

     start:
     if(user>=i)
     {
       printf("\n%d",user);
       user-=1;
       goto start;
     }



  getch();
}