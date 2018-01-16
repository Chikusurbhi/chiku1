#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
char c;
printf ("enter the character");
scanf("%s",&c);
if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
printf("vowel");
else
printf("consonant");
getch();
}