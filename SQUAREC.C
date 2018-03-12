 
#include <stdio.h>
#include<conio.h>
#include <math.h>

int isPerfectSquare(int number)
{
    int iVar;
    float fVar;
 
    fVar=sqrt((double)number);
    iVar=fVar;
 
    if(iVar==fVar)
    {
        return 1;
    }
    else
   {     
   	return 0;
}
	
}
 
int main()
{
    int number;
    printf("Enter an integer number: ");
    scanf("%d",&number);
 
    if(isPerfectSquare(number))
        {
        	printf("%d is a perfect square.",number);
        }
    else
        {
        	printf("%d is not a perfect square.",number);
        }
    geetch();
}
