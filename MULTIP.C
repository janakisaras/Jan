#include <stdio.h>
#include<conio.h>
int main()
{
    int a;
    clrscr();
    printf("Enter the number: ");
    scanf("%d", &a);

      if (a % 13 == 0)
      {
        printf("The given number is multiple of 13");
    }
    else
    {
        printf("The given number is not multiple of 13 ");
    }
    getch();
}
