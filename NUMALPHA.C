#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("\nEnter the string");
	scanf("%c",&c);
	if(((c>='a'&&c<='z')||(c>='A'&&c<='Z'))&&(c>='0'&&c<='9'))
	printf("\nThe given strings contains the both string and number");
	else
	printf("\nThe given string not contains the both string and number");
	getch();
}
