#include<stdio.h>
#include<conio.h>
int main()
{
	int N,L,R;
	clrscr();
	printf("\nEnter the number ");
	scanf("%d",&N);
	printf("\nEnter the 2 number L and R");
	scanf("%d%d",&L,&R);
	if((N>=L) && (N<=R))
	printf("\nThe number %d is between the %d and %d",N,L,R);
	else
	printf("\nThe number %d is not between the %d and %d",N,L,R);
	getch();
}
