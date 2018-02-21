#include <stdio.h>
int main()
{
int a, b, c, j, terms;
printf("Enter number of terms: ");
scanf("%d", &terms);  
a = 0;
b = 1;
c = 0;
printf("Fibonacci terms: \n");
for(j=1; j<=terms; j++)
{
printf("%d, ", c);

        a = b;     
        b = c;    
        c = a + b; 
    }

    return 0;
}
