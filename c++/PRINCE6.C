#include<stdio.h>


int main()
{
      int a,b;
      clrscr();

      printf("enter a = ");
      scanf("%d",&a);
      printf("enter b = ");
      scanf("%d",&b);

      printf("%d",a<b);
      printf("\n%d",a>b);
      printf("\n%d",a<=b);
      printf("\n%d",a>=b);
      printf("\n%d",a==b);
      printf("\n%d",a!=b);


      getch();

}