#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d;
	clrscr();
	printf("\nEnter the numbers",a,b);
	scanf("%d%d",&a,&b);
	c=(a/b);
	d=(a%b);
	printf("\n(%d / %d) %d",a,b,c);
	printf("\n(%d)%(%d) %d",a,b,d);
	getch();
}
