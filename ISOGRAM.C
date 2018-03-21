#include<stdio.h>
#include<conio.h>
int main()
string is_isogram(string str)
{
    int len = str.length();
    for(int i=0; i<len; i++)
    str[i] = tolower(str[i]);
    sort(str.begin(), str.end());
    for (int i = 0; i < len; i++)
    {
        if (str[i] == str[i + 1])
        {
        	printf("\nNO");
        }
       else
       {
      	printf("\nYES");
       }
    }
getch();
	
}
