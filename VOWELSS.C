#include<stdio.h>
#include<conio.h>
int main()
{
	char c;
	printf("\nEnter the string ");
	scanf("%s",&c);
	if((c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u')&&(c=='A' || c=='E'|| c=='I' || c=='O' || c=='U'))
	
		printf("\nThe given string is having a vowels");
		else
		printf("\nThe given string is not have a vowels");
	
getch();
}
