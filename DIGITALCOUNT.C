#include <stdio.h>
int main()
{
  int num,Count=0;
  printf("\nEnter the  number\n");
  scanf("%d", &num);
  while(num > 0)
  {
     num = num / 10;
     Count = Count + 1;  
  }
  printf("\nNumber of Digits in a Given Number = %d", Count);
  return 0;
}
