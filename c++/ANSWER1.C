#include<stdio.h>
#include<conio.h>
void main()
{
   char a[100],i;
   int count=0;
   clrscr();

   printf("enter string:-");
   scanf("%s",&a);

   printf("string:- %s",a);

   for(i=0; a[i]!=NULL; i++)
    {
       printf("\na[%d]=%c",i,a[i]);
    }
   for(i=0; a[i]!=NULL; i++)
    {
       count++;
    }
   printf("\ntotal character:-%d",count);

   count=0;

   for(i=0; a[i]!=NULL; i++)
    {
       if(a[i]>=65 && a[i]<=90)
	{
	   count++;
	}
    }
    printf("\ntotal upper character:-%d",count);

    count=0;

    for(i=0; a[i]!=NULL; i++)
     {
       if(a[i]>=97 && a[i]<=122)
	{
	   count++;
	}
     }
     printf("\ntotal lower character:-%d",count);

  getch();
}