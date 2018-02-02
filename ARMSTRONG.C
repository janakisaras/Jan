#include<stdio.h>
int main()
{
int a,b,c,d,e,f,g;
printf("\nEnter the 1 st digit");
scanf("%d",&a);
printf("\nEnter the 2nd number");
scanf("%d",&b);
printf("\nEnter the 3rd number");
scanf("%d",&c);
d=a^3+b^3+c^3;
printf("\n%d",d);
if(d%a b c==1)
{
printf("The given number is armstrong number");
}
else
{
printf("\nThe given number is not an armstrong number");
}
printf("\nprint the armstrong number in the two intervals %d %d",e,f);
for(g=e;g<=f;f++)
{
if(g%d==1)
{
printf("\nThe armstrong numbers between two intervals %d",g);
}
}
return 0;
}
