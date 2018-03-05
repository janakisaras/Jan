#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();
	printf("\nEnter the number1 and number2");
	scanf("%d%d",&a,&b);
	c=a-b;
	if(c%2==0)
	printf("\nThe sum of two number is even %d",c);
	else
	printf("\nThe sum of two number is odd %d",c);
	getch();
}
