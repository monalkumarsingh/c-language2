#include<stdio.h>
#include<string.h>

int main()
{
	char str[100];
	printf("Enter the string:");
	scanf("%s",str);
	printf("The original String is:");
	printf("%s\n",str);
	printf("The lower case Sring is:");
	printf("%s\t ",strlwr(str));

}