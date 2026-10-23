#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
   char s[100];
   char d[100];
   clrscr();

   printf("enter string:-");
   scanf("%s",&s);

  // printf("%d",strlen(s));
  // printf("%s",strupr(s));
  // printf("%s",strlwr(s));
  // printf("%s",strrev(s));
  // printf("%s",strcat(s,"@gamil.com"));
  // printf("%d",strcmp(s,"abc"));

     strcpy(d,s);
     printf("d=%s",d);
  getch();
}