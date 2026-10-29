#include<stdio.h>
#include<conio.h>
struct demo
{
    int a;
    char b;
};

union cdmi
{
   int c;
   char d;
};

enum {sun,mon,tue};

void main()
{
   struct demo d;
   union cdmi c;
   clrscr();

   printf("%d",sizeof(c));
   printf("\n%d",sizeof(d));

   printf("\n%d",mon);

   switch(mon)
    {
       case sun:
	{
	  printf("=========");
	  break;
	}
       case mon:
	{
	   printf("-=-=-=-=-=-");
	   break;
	}
       default:
	{
	   printf("++++++++");
	}
    }

  getch();
}