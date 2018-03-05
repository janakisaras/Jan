#include <stdio.h>

int main()
{
    int a;
    printf("Enter the number: ");
    scanf("%d", &a);

      if (a % 7 == 0)
      {
        printf("The given number is multiple of 7");
    }
    else
    {
        printf("The given number is not multiple of 7 ");
    }
    return 0;
}
