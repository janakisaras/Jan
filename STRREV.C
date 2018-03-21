#include <stdio.h>
#include<conio.h>
#include <string.h>
int main()
{
   char name[100];
   printf("Enter a string to reverse\n");
   gets(name);
   strrev(name);
   printf("Reverse of the string is \n%s\n", name);
   getch();
}
