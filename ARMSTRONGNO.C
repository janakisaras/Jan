#include<stdio.h>
int main()
{
int a,b,c,d;
printf("\nEnter the integers ");
scanf("%d,%d,%d",&a,&b,&c);
d=((a^3)+(b^3)+(c^3));
if(d==a,b,c)
{
printf("\nThe given integer %d is armstrong number",d);
}
else
{
printf("\nThe given integer %d is not an armstrong number",d);
}
return 0;
}
