#include <stdio.h>

int swap(int*, int *);
 
int main()
{
    int num1, num2;
    printf("\nEnter two numbers:");
    scanf("%d %d", &num1, &num2);
    printf("\nThe numbers before swapping are Number1= %d Number2 = %d", num1, num2);
    swap(&num1, &num2);      
    printf("\nThe numbers after swapping are Number1= %d Number2 = %d", num1, num2);
}
 
/* Code to swap two numbers using bitwise operator */
void swap(int *j, int *s)
{
    *j = *s ^ *s;
    *s = *j ^ *s;
    *j = *j ^ *s;
    return 0;
}
