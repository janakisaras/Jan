#include <stdio.h>
#include <math.h>
int main()
{
int a, d, n, i, tn;
int sum = 0;
printf("Enter the first term value of the ArithmeticProgression series: ");
scanf("%d", &a);
printf("Enter the total numbers in the Arithmetic Progression series: ");
scanf("%d", &n);
printf("Enter the common difference of Arithmetic progression series: ");
scanf("%d", &d);
sum = (n * (2 * a + (n - 1)* d ))/ 2;
tn = a + (n - 1) * d;
printf("Sum of the Arithmetic Progression series is: ");
for (i = a; i <= tn; i = i + d )
{
if (i != tn)
printf("%d + ", i);
else
printf("%d = %d ", i, sum);
}
return 0;
}
