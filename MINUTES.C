#include<stdio.h>
int main()
{
int a,b,c;
printf("\nEnter the minutes");
scanf("%d",&a);
b=a/60;
c=a%60;
printf("\n%d hours %d minutes",b,c);
return 0;
}
