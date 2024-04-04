#include<stdio.h>
#include<ctype.h>
//isdigit
int main()
{
	char c;
	c='5';
	putchar("Result when numeric character is passed %d",isdigit(c));
	//output is 1 because 5 is a numberic value
	c='+';
	//output is 0 because + is a non-numeric value
	putchar("\nResult when non-numeric character is pased %d",isdigit(c));
	
}