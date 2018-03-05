#include<stdio.h>

int main()
{
	char c;
	printf("\nEnter the string");
	scanf("%c",&c);
	if((c='0')&&(c='1'))
	{
		printf("\nThe given string is binary representation");
	}
	else
	printf("\nThe given string is not a binary representation");
return 0;
}
