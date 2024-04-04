#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	char a[20]="Program";
	char b[20]={'P','r','o','g','r','a','m'};
	char c[20];
	printf("Enter the string :");
	gets(c);
	printf("Length of string a =%d\n",strlen(a));
	printf("Length of string b =%d\n",strlen(b));
	printf("Length of string c =%d\n",strlen(c));
	
}