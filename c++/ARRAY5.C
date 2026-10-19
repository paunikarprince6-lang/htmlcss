#include<stdio.h>
#include<conio.h>
void main()
{
     int a[5],n,i,count;
     clrscr();

     printf("enter no:-");
     scanf("%d",n);

     for(i=0; i<5; i++)
     {
       printf("a[%d]=",i);
       scanf("%d",&a[i]);
     }
     for(i=0; i<5; i++)
     {
       count = 1;

       for(n=i+1; n<5; n++)
       {
	 if(a[i] == a[n])
	 {
	    count++;
	 }
      }
	if(count > 1)
	{
	  printf("%d no. repeat %d time\n",a[i],count);
	}
      }

   getch();
}