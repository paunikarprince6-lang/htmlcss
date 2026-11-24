#include<stdio.h>
#include<conio.h>
struct demo{
   int a;
   charb;
};
union cdmi
{
   int c;
   char d;
};

enum{sun=10,mon,tue};

void main()
{
  struct demo d;
  union cdmi c;
  printf("%d",sizeof(d));
  printf("\n%d",sizeof(c));
  printf("\n%d",mon);
  clrscr();

  switch(mon)
   {
     case sun:
      {
	printf("====");
	break;
      }
     case mon:
      {
	printf("-=-=-=-=-=");
	break;
      }
     default:
      {
	printf("++++++++");
      }
   }
  getch();
}
