#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5],j,i,count;
    clrscr();

    printf("enter no:-");
    scanf("%d",&j);

    for(i=0; i<5; i++)
    {
      printf("a[%d]=",i);
      scanf("%d",&a[i]);
    }
    for(i=0; i<5; i++)
    {
      count = 1;

      for(j=i+1; j<5; j++)
      {
	 if(a[i] == a[j])
	 {
	   count++;
	 }
      }
	 if(count > 1)
	 {
	   printf("%d no. repeat %d times\n",a[i],count);
	 }
       }

   getch();
}