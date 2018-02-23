#include<stdio.h>
int main()
{
  int Number, i = 1,j, Sum = 0,avg;
  printf("\nEnter the number of integer values %d",j);
  
  printf("\n Enter any Integer Value\n");
  scanf("%d", &Number);
  
  while(i <= Number)
  {
     Sum = Sum + i;
     i++;
  }
  
  printf("Sum of Natural Numbers = %d", Sum);
  avg=sum/j;
  printf("\nThe average number of the given number is %d",avg);
  return 0;
}
