#include<stdio.h>
#include<string.h>
#include<ctype.h>#include<string.h>
#define SIZE 80
int main()
{
	char letter[SIZE];
	int i;
	for(i=1;i<=SIZE;++i)
	{
		letter[i]=getchar();
		
	}
	for(i=1;i<=SIZE;++i)
	{
		putchar(toupper(letter[i]));
	}
}