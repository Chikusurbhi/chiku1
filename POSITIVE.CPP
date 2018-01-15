#include <stdio.h>
#include<conio.h>
int main(void) {
clrscr();
	int a;
	printf("enter the no");
	scanf("%d",&a);
	if(a>0)
	printf("positive");
	else
	if(a==0)
	printf("zero");
	else
	printf("negative");
getch();

}