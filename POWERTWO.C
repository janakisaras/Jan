#include <stdio.h>
int ispowerof2(int num)
{ 
while(num!=1)
{
if(num%2!=0)
 return 0;
 num=num/2;
 }
 return 1;
}
 int main()
{
    int num;
    printf("Enter an integer num: ");
    scanf("%d",&num);
    if(isPowerOf2(num))
    printf("%d is a number that is the power of 2",num);
    else
     printf("%d is not the power of 2",num);
     return 0;
}
