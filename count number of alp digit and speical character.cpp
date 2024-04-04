#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define str_size 100//Declare the maximum size of the string
int main()
{
	char str[str_size];
	int alp,digit,splch,i;
	alp=digit=splch=i=0;
	printf("\n\nCount total number of aplphabet , digit and speical character:\n");
	printf("_____________________________________________________________________\n");
	printf("Input the string:");
	fgets(str, sizeof str ,stdin);
	//cheack each character of string
	while(str[i]!='\0')
	{
		if(str[i]>='a' && str[i]<='z' || str[i]>='A' && str[i]<='Z')
		{
			alp++;
		}
		else if(str[i]>='0' && str[i]<='9')
		{
			digit++;
		}
		else
		{
			splch++;
		}
		i++;
	}
	printf("Number of Alphabet in the string is :%d\n",alp);
	printf("Number of Digit in the string is :%d\n",digit);
	printf("Number of special character in the string is :%d\n",splch);
}