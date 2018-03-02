#include,stdio.h>
int main()
{
int s,j,r,i,n;
printf("\nEnter the number of terms");
scanf("%d",&n);
s=0;
j=1;
r=0;
printf("\nFibonacci terms");
for(i=1;i<=n;i++)
{
printf("\n%d",r);
s=j;
j=r;
r=s+j;
}
return 0;
}
