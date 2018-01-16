#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char ch;
printf("enter the alphabet");
scanf("%s",&ch);
if( (ch>=65 && ch<=90)||(ch>=97 && ch<=122) )
printf("alphabet");
else
printf("no");
getch();
}