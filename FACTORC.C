#include <stdio.h>
#include<conio.h>
int main()
{
    int i, num;
    clrscr();
    printf("Enter any number to find its factor: ");
    scanf("%d", &num);

    printf("All factors of %d are: \n", num);

   
    for(i=1; i<=num; i++)
    {
     
        if(num % i == 0)
        {
            printf("%d, ",i);
        }
    }

    getch();
}
