#include <stdio.h>
#include<conio.h>

int main(int argc, const char* argv[])
{
    int num, i;
    clrscr();

    printf("\nEnter a number you want to check:");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("\n%d is neither prime nor composite", num);
    }
    i = 2;
    while (i <= num - 1)
    {
        if (num % i == 0)
        {
            printf("%d is composite\n\n", num);
            break;
        }
    }
    getch();
}
