#include<stdio.h>
#include<conio.h>
int main()
{
  int Number, i, Sum = 0;
  clrscr();
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &Number);
  for(i = 1; i <= Number; i++)
  {
  Sum = Sum + i;
  }
  printf("Sum of Natural Numbers = %d", Sum);
  getch();
}
