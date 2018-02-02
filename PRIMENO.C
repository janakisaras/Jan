#include <stdio.h>
int main()
{
    int j,k, i, flag;
    printf("Enter two numbers(intervals): ");
    scanf("%d %d", &j, &k);

    printf("Prime numbers between %d and %d are: ", j, k);

    while (j < k)
    {
        flag = 0;

        for(i = 2; i <= j/2; ++i)
        {
            if(j % i == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
            printf("%d ", j);

        ++j;
    }

    return 0;
}
