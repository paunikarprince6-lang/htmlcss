#include<stdio.h>
#include<conio.h>
void main()
{
/*   int n,rem,sum=0,i,cube;
   clrscr();

   printf("enter n=");
   scanf("%d",&n);

   i=n;

   while(n>0)
    {
      rem = n%10;
      cube =rem*rem*rem;
      sum =sum+cube;
      n =n/10;
    }
   if(sum == i)
    {
       printf("armstrong...");
    }
   else
    {
       printf("not");
    }

   getch();
} */
    int i=1,n,rem,rev;
    clrscr();

    while(i<=1000)
     {
       n=i;
       rev=0;
       while(n>0)
	{
	  rem =n%10;
	  rev= rev+rem*rem*rem;
	  n=n/10;
	}
       if(rev == i)
	{
	  printf("\n%d",i);
	}
	i++;
     }
  getch();
}