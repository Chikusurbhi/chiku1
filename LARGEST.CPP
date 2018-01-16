#include <stdio.h>
#include<conio.h>
void main() {
clrscr();
	int a,b,c;
	printf("enter the three numbers you want to compare");
	scanf("%d %d %d",&a,&b,&c);
	if((a>b)&&(a>c))
	 printf("a is largest");
	 else
	 if((b>a)&&(b>c))
	 printf("b is largest");
	  else
	 printf("c is largest");
getch();

}