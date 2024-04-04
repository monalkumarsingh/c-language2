#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter the string only lower case:\t");
	scanf("%s",&str);
	printf("UPPER CASE STRING IS:");
	printf("%s",strupr(str));
}