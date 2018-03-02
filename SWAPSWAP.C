#include<stdio.h>
int main()
{
int s,j,k;
printf("Enter the numbers s and j");
scanf("%d%d",&s,&j);
printf("\nBefore swaping \ns=%d\nj=%d\n",s,j);
k=s;
s=j;
j=k;
printf("\nAfter swaping \ns=%d\nj=%d\n",s,j);
return 0;
}
