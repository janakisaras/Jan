#include <stdio.h>
int main()
{
    int n, j, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d",&n);
    for(j=2; j<=n/2; ++j)
    {
       
        if(n%j==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
    
    return 0;
}
