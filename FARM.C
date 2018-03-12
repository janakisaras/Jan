#include<stdio.h>
#include<conio.h>
int main()
{
	int a,l,b;
	clrscr();
	printf("\nEnter the length");
	scanf("%d",&l);
	printf("\nEnter the breadth");
	scanf("%d",&b);
	a=l*b;
	printf("\nThe area of farm is %d",a);
	getch();
}
