#include<stdio.h>
int main()
{
int a;
printf("\nEnter the year",a);
scanf("%d",&a);
if(a%4==0)
{
printf("\n%d the given year is leap",a);
}
else
{
printf("\n%d the given year is not leap",a);
}
return 0;
}
