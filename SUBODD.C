#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k;
	clrscr();
	printf("\nEnter the number1 and number2");
	scanf("%d%d",&i,&j);
	k=i-j;
	if(k%2==0)
	printf("\nThe sum of two number is even %d",k);
	else
	printf("\nThe sum of two number is odd %d",k);
	getch();
}
