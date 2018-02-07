#include<stdio.h>
int main()
{
int array[50],j,i,mini;
printf("\nEnter the size of array:");
scanf("%d",&j);
printf("\nEnter %d elements of the array:",j);
for(i=0;i<j;i++)
scanf("%d",&array[i]);
mini=array[0];
for(i=1;i<j;i++)
{
if(mini<array[i])
mini=array[i];
}
printf("\nMinimum element present in the given array is:%d",m);
return 0;
}
