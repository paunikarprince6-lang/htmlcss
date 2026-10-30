#include<stdio.h>
#include<conio.h>
void main()
{
   int a[100],i,n,value,count=0;
   clrscr();

   printf("enter n = ");
   scanf("%d",&n);

   for(i=0; i<n; i++)
    {
      printf("a[%d] ",i);
      scanf("%d",&a[i]);
    }

    printf("enter value = ");
    scanf("%d",&value);

    for(i=0; i<n; i++)
     {
       if(a[i] == value);
	{
	  count++;
	}
     }
    printf("%d value repeat no. %d times",value,count);


   getch();
}