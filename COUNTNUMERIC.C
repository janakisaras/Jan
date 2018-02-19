#include <stdio.h>
int main()
{
    long long n;
    int count = 0;
    printf("Enter an string: ");
    scanf("%lld", &n);

    while(n != 0)
    {
        n /= 10;
        ++count;
    }

    printf("\nNumber of numerics in the given string is: %d", count);
    return 0;
}
