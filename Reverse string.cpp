#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter the character:");
	scanf("%s",&str);
	printf("Original Stirng is %s\n",str);
	printf("Reverse String is %s",strrev(str));
	
}