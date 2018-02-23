#include<stdio.h>
int main() 
{
   char str1[30], str2[30];
   int j;
   printf("\nEnter two strings :");
   gets(str1);
   gets(str2);
   j = 0;
   while (str1[j] == str2[j] && str1[j] != '\0')
   j++;
   if (str1[j] > str2[j])
      printf("str1 > str2");
   else if (str1[j] < str2[j])
      printf("str1 < str2");
   else
      printf("str1 = str2");
 
   return (0);
}
