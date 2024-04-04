#include<stdio.h>
int main()
{
	int num1,num2,total_score=0;;
	printf("Enter  the  any two number:");
	scanf("%d %d",&num1,&num2);
	printf("number is %d  %d  %d next number is  ",num1,num1*num1+1,num2);
	int result=num2*num2+1;
	int num3;
	scanf("%d",&num3);
	if(result==num3)
{
	printf("your logic is coreect:\n");
	total_score++;
	}	
	else
	{
		printf("your logic is not correct:\n");
		
	}
	
	int num4,num5,num6;
	
		printf("Enter  the  any two number:");
	scanf("%d %d",&num4,&num5);
	printf("number is %d  %d  %d next number is  ",num4,num4*num4,num5);
	int result1=num5*num5;

	scanf("%d",&num6);
	if(result1==num6)
{
	printf("your logic is coreect:\n");
	total_score++;
	}	
	else
	{
		printf("your logic is not correct:\n");
		total_score--;
	}
	
	
		int num7,num8;
	printf("Enter  the  any two number:");
	scanf("%d %d",&num7,&num8);
	printf("number is %d  %d  %d next number is  ",num7,num7*num7*num7,num8);
	int result2=num8*num8*num8;
	int num9;
	scanf("%d",&num9);
	if(result2==num9)
{
	printf("your logic is coreect:\n");
	total_score++;
	}	
	else
	{
		printf("your logic is not correct:\n");
		total_score--;
	}
	
	printf("Finaly total score is %d",total_score);
}