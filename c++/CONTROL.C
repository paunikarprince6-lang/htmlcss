#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d,e;
	clrscr();
	printf("Enter A =");
	scanf("%d",&a);
	printf("Enter B =");
	scanf("%d",&b);
	printf("Enter C =");
	scanf("%d",&c);
	printf("Enter D =");
	scanf("%d",&d);
	printf("Enter E =");
	scanf("%d",&e);


	if (a>b)
	{
	 if (a>c)
	 {
	  if (a>d)
	  {
	  if (a>e)
	  {
		printf("A max");
	  }
	  else
	  {
		printf("E max");
	  }
	  }
	  else
	  {
	   if (d>e)
	   {
		printf("D max");
	   }
	   else
	   {
		printf("E max");
	   }
	  }
	 }
	 else
	 {
	  if (c>d)
	  {
	   if (c>e)
	   {
		printf("c max");
	   }
	   else
	   {
		printf("e max");
	   }
	  }
	  else
	  {
	   if(d>e)
	   {
		printf("d max");
	   }
	   else
	   {
		printf("e max");
	   }
	  }
	 }
	}
	else
	{
	 if (b>c)
	 {
	  if (b>d)
	  {
	   if (b>e)
	   {
		printf("B max");
	   }
	   else
	   {
		printf("e max");
	   }
	  }
	   else
	   {
	    if (d>e)
	    {
		printf("D max");
	    }
	    else
	    {
		printf("e max");
	    }
	   }
	 }
	 else
	 {
	  if (c>d)
	  {
	   if (c>e)
	   {
		printf("C max");
	   }
	   else
	   {
		printf("e max");
	   }
	  }
	  else
	  {
	   if (d>e)
	   {
		printf("D max");
	   }
	   else
	   {
		printf("E max");
	   }
	  }
	 }
	}


	getch();


}

