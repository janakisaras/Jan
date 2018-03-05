#include<stdio.h>
int main()
{
    int n, s;
    printf("Enter the number");
    scanf("%d", &n);
    for(s=2; s<=n/2; ++s)
    {
        if(n%s==0)
        {
            break;
        }
    }
    if(s>n/2)
        printf("%d is prime number",n);
    else
        printf("%d is not prime number", n);
}
