#include<stdio.h>
int main()
{
	int num,rem,sum=0,num1;
	printf("Enter the number:");
		scanf("%d",&num);

	printf("Enter the number:");
		scanf("%d",&num1);

	printf("%d \t",num);
	while(num>0)
	{
		rem=num%10;
		sum=sum+rem;
		num=num/10;
		
	}
		printf("%d %d next number is  ",sum,num1);
	
		
	
	int rem1,sum1=0;
	while(num1>0)
	{
		rem1=num1%10;
		sum1=sum1+rem1;
		num1=num1/10;
		
	}

	int result;
	scanf("%d",&result);
	if(result==sum1)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is false:");
	}
	
	
	
	
	
	
	
	
	
	
	
	
	int num2,rem2,mul=1,num3;
	printf("Enter the number:");
		scanf("%d",&num2);

	printf("Enter the number:");
		scanf("%d",&num3);

	printf("%d \t",num2);
	while(num2>0)
	{
		rem2=num2%10;
		mul=mul*rem2;
		num2=num2/10;
		
	}
		printf("%d %d next number is  ",mul,num3);
	
		
	
	int rem3,mul1=1;
	while(num3>0)
	{
		rem3=num3%10;
		mul1=mul1*rem3;
		num3=num3/10;
		
	}

	int result1;
	scanf("%d",&result1);
	if(result1==mul1)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is false:");
	}
	
	
	

}