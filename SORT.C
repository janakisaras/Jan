#include <stdio.h>
int main()
{
    int array[MAXSIZE];
    int i, j, integer, temp;
 
    printf("Enter the value of integer \n");
    scanf("%d", &integer);
    printf("Enter the elements one by one \n");
    for (i = 0; i < integer; i++)
    {
        scanf("%d", &array[i]);
    }
    printf("Input array is \n");
    for (i = 0; i < num; i++)
    {
        printf("%d\n", array[i]);
    }
    for (i = 0; i < integer; i++)
    {
        for (j = 0; j < (integer - i - 1); j++)
        {
            if (array[j] > array[j + 1])
            {
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
    printf("Sorted array is...\n");
    for (i = 0; i < integer; i++)
    {
        printf("%d\n", array[i]);
    }
}
