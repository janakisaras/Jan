#include<stdio.h>
int main()
{
int n,count=0;
printf("\nEnter the numers",n);
scanf("%d",&n);
while(n != 0)
    {
        // n = n/10
        n /= 10;
        ++count;
    }

    printf("\nNumber of digits: %d", count);
return 0;
}
