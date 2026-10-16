#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],n,i;
    clrscr();

    printf("enter no:- ");
    scanf("%d",&n);

    for(i=0; i<5; i++)
    {
      printf("a[%d]=",i);
      scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
      for(n=i+1; n<5; n++)
      {
	if(a[i] == a[n])
	{
	 printf("%d no. repeat time",a[i] );
	}
      }
    }

  getch();
}