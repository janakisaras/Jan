#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
    char s[200];
    int count = 0, j;
 clrscr();
    printf("enter the string\n");
    scanf("%[^\n]s", s);
    for (j = 0;s[j] != '\0';j++)
    {
        if (s[j] == ' ')
            count++;    
    }
    printf("\nNumber of words in given string are: %d\n", count + 1);
getch();
	
}
