#include<stdio.h>
#include<conio.h>

void main(){

     int a,b,c,d,e;
     clrscr();

     printf("enter a = ");
     scanf("%d",&a);
     printf("enter b = ");
     scanf("%d",&b);
     printf("emter c = ");
     scanf("%d",&c);

     printf("enter d = ");
     scanf("%d",&d);

     printf("enter e = ");
     scanf("%d",&d);


     if(a>b || a>c || a>d || a>e)
     {
       printf("a max");
     }
     else if(b>c || b>d || b>e)
     {
       printf("b max");
     }
     else if(c>d || c>e)
     {
	printf("c max");
     }
     else if(d>e)
     {
	printf("d max");
     }
     else
     {
	printf("e max");
     }


   getch();
}