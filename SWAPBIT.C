#include<stdio.h>
int main()
{
int s,j;
printf("\nEnter the number s and j");
scanf("%d%d",&s,&j);
printf("\nBefore swaping \ns=%d\nj=%d\n",s,j);
s^=j;
j^=s;
s^=j;
printf("\nAfter swaping \ns=%d\nj=%d\n",s,j);
return 0;
}
