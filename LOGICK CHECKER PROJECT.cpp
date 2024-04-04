#include<stdio.h>
int main()
{
	printf("/******** CHECK YOUR LOGIC ********/\n");
	int num1,num2,num3,num4;
	printf("Enter the any two number:");
	scanf("%d %d",&num1,&num2);
	printf("Enter the any two number:");
	scanf("%d %d",&num3,&num4);
	printf(" %d   %d   %d   %d    %d ........... ",num1,num2,num1+num2,num3,num4);
	int result=num3+num4;
	int num5;
	scanf("%d",&num5);
	if(result==num5)
	{
		printf("Your logic is correct:\n");
	}
	else
	{
		printf("Your logic is not correct:\n");
	}
	
	
	int num6,num7,num8,num9;
	printf("Enter the any two number:");
	scanf("%d %d",&num6,&num7);
	printf("Enter the any two number:");
	scanf("%d %d",&num8,&num9);
	printf(" %d   %d   %d   %d    %d ........... ",num6,num7,num6*num7,num8,num9);
	int result1=num8*num9;
	int num10;
	scanf("%d",&num10);
	if(result1==num10)
	{
		printf("Your logic is correct:\n");
	}
	else
	{
		printf("Your logic is not correct:\n");
	}
	
		int num11,num12,num13,num14;
	printf("Enter the any two number:");
	scanf("%d %d",&num11,&num12);
	printf("Enter the any two number:");
	scanf("%d %d",&num13,&num14);
	printf(" %d   %d   %d   %d    %d ........... ",num11,num12,num11-num12,num13,num14);
	int result2=num13-num14;
	int num15;
	scanf("%d",&num15);
	if(result2==num15)
	{
		printf("Your logic is correct:\n");
	}
	else
	{
		printf("Your logic is not correct:\n");
	}
	
	int num16,num17;
	printf("Enter  the number:");
	scanf("%d",&num16);
	printf("Enter the number:");
	scanf("%d",&num17);
	printf("%d %d %d .........",num16,num16*num16,num17);
	int result3=num17*num17;
	int num18;
	scanf("%d",&num18);
	if(result3==num18)
	{
		printf("Your logic is correct:\n");
	}
	else
	{
		printf("Your logic is not correct:\n");
	}
	
	
	
		int num19,num20;
	printf("Enter  the number:");
	scanf("%d",&num19);
	printf("Enter the number:");
	scanf("%d",&num20);
	printf("%d  %d  %d .........",num19,num19*num19*num19, num20);
	int result4=num20*num20*num20;
	int num21;
	scanf("%d",&num21);
	if(result4==num21)
	{
		printf("Your logic is correct:\n");
	}
	else
	{
		printf("Your logic is not correct:\n");
	}
	
	int number,sum=0,number1;
	printf("Enter the number:");
	scanf("%d",&number);
	printf("Enter  the number:");
	scanf("%d",&number1);
	printf("%d\t",number);
	while(number>0)
	{
		int rem=number%10;
		sum=sum+rem;
		number=number/10;
		
	}
	printf("%d   %d............",sum,number1);
	int sum1=0;
	while(number1>0)
	{
		int rem1=number1%10;
		sum1=sum1+rem1;
		number1=number1/10;
		
	}
	int sum_of_digit=sum1;
	int number3;
	scanf("%d",&number3);
	if(number3==sum_of_digit)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your Logic is not correct");
	}
	
	
	int number4,mul=1,number5;
	printf("Enter the number:");
	scanf("%d",&number4);
	printf("Enter  the number:");
	scanf("%d",&number5);
	printf("%d\t",number4);
	while(number4>0)
	{
		int rem1=number4%10;
		mul=mul*rem1;
		number4=number4/10;
		
	}
	printf("%d   %d............",mul,number5);
	int mul1=1;
	while(number5>0)
	{
		int rem2=number5%10;
		mul1=mul1*rem2;
		number5=number5/10;
		
	}
	int mul_of_digit=mul1;
	int number6;
	scanf("%d",&number6);
	if(number6==mul_of_digit)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your Logic is not correct");
	}
	
	
	int number7,number8;
	printf("Enter the number:");
	scanf("%d",&number7);
	printf("Enter the number:");
	scanf("%d",&number8);
	printf("%d  %d %d.......... ",number7,number7*number7+1,number8);
	int new_result=number8*number8+1;
	int number9;
	scanf("%d",&number9);
	if(new_result==number9)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct:");
	}
	
	
		int number10,number11;
	printf("Enter the number:");
	scanf("%d",&number10);
	printf("Enter the number:");
	scanf("%d",&number11);
	printf("%d  %d %d.......... ",number10,number10*number10+2,number11);
	int new_result1=number11*number11+2;
	int number12;
	scanf("%d",&number12);
	if(new_result1==number12)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct:");
	}
	
	int number14,number15,number16,number17;
	printf("Enter the any two number:");
	scanf("%d %d",&number14,&number15);
	printf("Enter the any two number:");
	scanf("%d %d",&number16,&number17);
	printf("%d %d %d %d %d .......",number14,number15,number14*number15+3,number16,number17);
	int new_result2=number16*number17+3;
	int number18;
	scanf("%d",&number18);
	if(new_result2==number18)
	{
		printf("Your Logic is correct:");
	}
	else
	{
		printf("Your Logic is not correct:");
	}
	
		int number19,number20,number21,number22;
	printf("Enter the any two number:");
	scanf("%d %d",&number19,&number20);
	printf("Enter the any two number:");
	scanf("%d %d",&number21,&number22);
	printf("%d %d %d %d %d .......",number19,number20,number19*number20-3,number21,number22);
	int new_result3=number21*number22-3;
	int number23;
	scanf("%d",&number23);
	if(new_result3==number23)
	{
		printf("Your Logic is correct:");
	}
	else
	{
		printf("Your Logic is not correct:");
	}
	
	int number24,number25;
	printf("Enter the number:");
	scanf("%d",&number24);
	printf("Enter the number:");
	scanf("%d",&number25);
	printf("%d  %d  %d ...........",number24,number24*number24+2,number25);
	int result_check=number25*number25+2;
	int number26;
	scanf("%d",&number26);
	if(result_check==number26)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct:");
	}
	
	
	
		int number27,number28;
	printf("Enter the number:");
	scanf("%d",&number27);
	printf("Enter the number:");
	scanf("%d",&number28);
	printf("%d  %d  %d ...........",number27,number27*number27-2,number28);
	int result_check1=number28*number28-2;
	int number29;
	scanf("%d",&number29);
	if(result_check1==number29)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct:");
	}
	
	
	
		int number30,number31;
	printf("Enter the number:");
	scanf("%d",&number30);
	printf("Enter the number:");
	scanf("%d",&number31);
	printf("%d  %d  %d ...........",number30,number30*number30*2,number31);
	int result_check2=number31*number31*2;
	int number32;
	scanf("%d",&number32);
	if(result_check2==number32)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct:");
	}
	
	int number33,rev=0,number34;
	printf("Enter the number:");
	scanf("%d",&number33);
	printf("Enter the number:");
	scanf("%d",&number34);
	printf("%d\t",number33);
	while(number33>0)
	{
		int new_rem=number33%10;
		rev=rev*10+new_rem;
		number33=number33/10;
		
	}
	printf("%d  %d............",rev,number34);
	int check_result3,rev1;
	
		while(number34>0)
	{
		int new_rem1=number34%10;
		rev1=rev1*10+new_rem1;
		number34=number34/10;
		
	}
	check_result3=rev1;
	int number35;
	scanf("%d",&number35);
	if(check_result3==number35)
	{
		printf("Your logioc is correct:");
	}
	else
	{
		printf("Your logic is not correct");
	}
	
	int number36,number37,number38,number39;
	printf("Enter the any two  number:");
	scanf("%d %d",&number36,&number37);
	printf("Enter the any two  number:");
	scanf("%d %d",&number38,&number39);
	printf("%d %d %d  %d %d.............",number36,number37,number36+number37+5,number38,number39);
	int check_result4=number38+number39+5;
	int number40;
	scanf("%d",&number40);
	if(check_result4==number40)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct");
	}
	
	
	
	int number41,number42,number43,number44;
	printf("Enter the any two  number:");
	scanf("%d %d",&number41,&number42);
	printf("Enter the any two  number:");
	scanf("%d %d",&number43,&number44);
	printf("%d %d %d  %d %d.............",number41,number42,number41+number42-5,number43,number44);
	int check_result5=number43+number44-5;
	int number45;
	scanf("%d",&number45);
	if(check_result5==number45)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct");
	}
	
	
	int number46,number47,number48,number49;
	printf("Enter the any two  number:");
	scanf("%d %d",&number46,&number47);
	printf("Enter the any two  number:");
	scanf("%d %d",&number48,&number49);
	printf("%d %d %d  %d %d.............",number46,number47,number46+number47*5,number48,number49);
	int check_result6=number48+number49*5;
	int number50;
	scanf("%d",&number50);
	if(check_result5==number50)
	{
		printf("Your logic is correct:");
	}
	else
	{
		printf("Your logic is not correct");
	}
}