#include <stdio.h>
 
int main()
{
   int j, s, temp;
 
   printf("Enter the value of j and s\n");
   scanf("%d%d", &j, &s);
 
   printf("Before Swapping\nj = %d\ns = %d\n",j,s);
 
   temp = j;
   j    = s;
   s    = temp;
 
   printf("After Swapping\nj = %d\ns=%d\n",j,s);
 
   return 0;
}
