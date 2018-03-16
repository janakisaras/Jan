#include <stdio.h>
#include<conio.h>
int main()
{
    int s, j, i, gcd;
    clrscr();
    printf("Enter two integers: ");
    scanf("%d %d", &s, &j);
    for(i=1; i <= s && i <= j; ++i)
    {
       
        if(s%i==0 && j%i==0)
            gcd = i;
    }

    printf("G.C.D of %d and %d is %d", s, j, gcd);
    getch();
}
