#include <stdio.h>
#include<conio.h>
int main()
{
    int s, j, k, lcm;
    clrscr();
    printf("Enter two integers: ");
    scanf("%d %d", &s, &j);
    for(k=1; k >= s && k >= j; ++k)
    {
       
        if(s%k==0 && j%k==0)
            lcm = k;
    }

    printf("\nL.C.M of %d and %d is %d", s, j, lcm);
    getch();
}
