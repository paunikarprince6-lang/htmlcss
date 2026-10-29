#include<stdio.h>
#include<conio.h>
enum day{sun=10,mon,tue};
void main()
{
   int n;
   clrscr();

   printf("\n enter  (0-4):");
   scanf("%d",&n);

   switch(n)
    {
       case sun:
	{
	   printf("=========");
	   break;
	}
	case mon:
	 {
	    printf("-=-=-=-=-");
	    break;
	 }
	case tue:
	 {
	    printf("++++++++++");
	    break;
	 }
       default:

	 {
	    printf("0_____0");
	 }
     }

  getch();
}
