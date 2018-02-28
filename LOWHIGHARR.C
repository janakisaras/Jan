#include <stdio.h>
#define MAX_SIZE 100  
int main()
{
    int arr[MAX_SIZE];
    int j, max, min, size;
    printf("\nEnter size of the array: ");
    scanf("%d", &size);
    printf("\nEnter elements in the array: ");
    for(j=0; j<size; j++)
    {
        scanf("%d", &arr[j]);
    }
    max = arr[0];
    min = arr[0];
    for(j=1; j<size; j++)
    {
        if(arr[j] > max)
        {
            max = arr[j];
        }

        if(arr[j] < min)
        {
            min = arr[j];
        }
    }
    printf("\nMaximum element = %d", max);
    printf("\nMinimum element = %d", min);

    return 0;
}
