#include<stdio.h>
int main()
{
	int num1,num2 ,num3,num4;;
	printf("Enter  the any two number:");
	scanf("%d %d",&num1,&num2);
	printf("Enter  the any two number:");
	scanf("%d %d",&num3,&num4);
	printf("%d %d %d  %d %d next number is  ",num1,num2,num1*num2,num3,num4);
	int result=num3*num4;
	int num5;
	scanf("%d",&num5);
	if(result==num5)
{
	printf("Your logic is correct:\n");
}
	
	else
	{
		printf("Your logic is not coreect\n");
	}
	
	
	int num6,num7 ,num8,num9;
	printf("Enter  the any two number:");
	scanf("%d %d",&num6,&num7);
	printf("Enter  the any two number:");
	scanf("%d %d",&num8,&num9);
	printf("%d %d %d  %d %d next number is  ",num6,num7,num6+num7,num8,num9);
	int result1=num8+num9;
	int num10;
	scanf("%d",&num10);
	if(result1==num10)
{
	printf("Your logic is correct:");
}
	
	else
	{
		printf("Your logic is not coreect");
	}
	
	
	
	int num11,num12 ,num13,num14;
	printf("Enter  the any two number:");
	scanf("%d %d",&num11,&num12);
	printf("Enter  the any two number:");
	scanf("%d %d",&num13,&num14);
	printf("%d %d %d  %d %d next number is  ",num11,num12,num11-num12,num13,num14);
	int result2=num13+num14;
	int num15;
	scanf("%d",&num15);
	if(result2==num15)
{
	printf("Your logic is correct:");
}
	
	else
	{
		printf("Your logic is not coreect");
	}
	
	
	
}