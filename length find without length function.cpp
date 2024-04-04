#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i=0;
	printf("\n\n Find the length of a string :\n");
	printf("______________________________________\n");
	printf("Input the string:");
	fgets(str,sizeof str,stdin);
	while(str[i]!='\0')
	{
		i++;
	}
	printf("legnth of the string is %d \n\n",i-1);
}