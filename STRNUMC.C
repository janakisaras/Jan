#include <stdio.h>
#include<string.h>
int main() 
{
	int s,j,temp=0;
	char s1[100];
	gets(s1);
	for(s=0;s1[s]!='\0';s++)
	{
		if(s1[s]>='0' && s1[s]<='9')
		printf("%c",s1[s]);
	}
	return 0;
}
