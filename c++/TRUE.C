#include<stdio.h>
#include<conio.h>
void main()
{
     int a,b,c,d,e,max;
     clrscr();
     printf("enter a = ");
     scanf("%d",&a);
     printf("enter b = ");
     scanf("%d",&b);
     printf("enter c = ");
     scanf("%d",&c);
     printf("enter d = ");
     scanf("%d",&d);
     printf("enter e = ");
     scanf("%d",&e);

     max=(a>b)?(a>c)?(a>d)?(a>e)?a:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e:(b>c)?(b>d)?(b>e)?b:e:(d>e)?d:e:(c>d)?(c>e)?c:e:(d>e)?d:e;
     printf("max = %d",max);



     getch();
}