#include <stdio.h>
int main()
 {
    char c[200];
    int count = 0, i;
 
    printf("enter the sentence\n");
    scanf("%[^\n]c", &c);
    for (i = 0;c[i] != '\0';i++)
    {
        if (c[i] == ' ')
            count++;    
    }
    printf("number of words in given char are: %d\n", count + 1);
}
