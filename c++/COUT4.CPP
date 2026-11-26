#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
   char s[100];
   char d[100];
   clrscr();

   cout<<"enter string:- ";
   cin>>s;

 //cout<<" "<<strlen(s);
 //cout<<" "<<strupr(s);
 //cout<<" "<<strlwr(s);
 //cout<<" "<<strrev(s);
 //cout<<" "<<strcat(s,"@gamil.com");
 //cout<<" "<<strcmp(s,"abc");
   strcpy(d,s);
   cout<<"d = "<<d;

  getch();
}