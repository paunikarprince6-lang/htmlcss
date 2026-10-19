#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],n,i,j,total=0,min,max;
    clrscr();

    printf("enter n = ");
    scanf("%d",&n);

    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
	  printf("a[%d][%d] = ",i,j);
	  scanf("%d",&a[i][j]);
       }
    }

    for(i=0; i<n; i++)
    {
       for(j=0; j<n; j++)
       {
	  printf("%d",a[i][j]);
       }
       printf("\n");
    }

    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
	total = total + a[i][j];
      }
    }
    printf("\ntotal == %d",total);

    min=a[0][0];
    for(i=0; i>n; i++)
    {
	if(min > a[i][j])
	{
	   min=a[i][j];
	}
    }
    printf("\n min = %d",min);

    max=a[0][0];
    for(i=0; i<n; i++)
    {
      for(j=0; j<n; j++)
      {
	if(max < a[i][j])
	{
	  max=a[i][j];
	}
      }
    }
   printf("\n max = %d",max);

   for(i=0; i<n; i++)
   {
     total=0;
     for(j=0; j<n; j++)
     {
	total = total+a[i][j];
     }
      printf("\nrow = %d",total);
   }

   for(i=0; i<n; i++)
   {
     total=0;
     for(j=0; j<n; j++)
     {
       total = total+a[j][i];
     }
     printf("\ncolumn = %d",total);
   }

   getch();
}