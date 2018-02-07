#include<stdio.h>
int main()
{
int array[50],j,i,m;
printf("\nEnter the size of array:");
scanf("%d",&j);
printf("\nEnter %d elements of the array:",j);
for(i=0;i<j;i++)
scanf("%d",&array[i]);
m=array[0];
for(i=1;i<j;i++)
{
if(m<array[i])
m=array[i];
}
printf("\nMaximum element present in the given array is:%d",m);
return 0;
}
