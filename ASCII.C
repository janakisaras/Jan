#include <stdio.h>
#include<conio.h>
int main()
{
    char c;
    clrscr();
    printf("Enter a character: ");
    scanf("%c", &c);  
    printf("ASCII value of %c = %d", c, c);
    getch();
}
