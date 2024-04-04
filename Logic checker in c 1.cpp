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
	
	
		
	int number51,number52,number53,number54;
	printf("Enter the any two  number:");
	scanf("%d %d",&number51,&number52);
	printf("Enter the any two  number:");
	scanf("%d %d",&number53,&number54);
	printf("%d %d %d  %d %d.............",number51,number52,number51+number52+6,number53,number54);
	int check_result7=number53+number54+6;
	int number55;
	scanf("%d",&number55);
	if(check_result7==number55)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
		int number56,number57,number58,number59;
	printf("Enter the any two  number:");
	scanf("%d %d",&number56,&number57);
	printf("Enter the any two  number:");
	scanf("%d %d",&number58,&number59);
	printf("%d %d %d  %d %d.............",number56,number57,number56+number57-6,number58,number59);
	int check_result8=number58+number59-6;
	int number60;
	scanf("%d",&number60);
	if(check_result8==number60)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
		
		int number61,number62,number63,number64;
	printf("Enter the any two  number:");
	scanf("%d %d",&number61,&number62);
	printf("Enter the any two  number:");
	scanf("%d %d",&number63,&number64);
	printf("%d %d %d  %d %d.............",number61,number62,number61+number62*6,number63,number64);
	int check_result9=number63+number64*6;
	int number65;
	scanf("%d",&number65);
	if(check_result8==number65)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
		
		int number66,number67,number68,number69;
	printf("Enter the any two  number:");
	scanf("%d %d",&number66,&number67);
	printf("Enter the any two  number:");
	scanf("%d %d",&number68,&number69);
	printf("%d %d %d  %d %d.............",number66,number67,number66+number67+8,number68,number69);
	int check_result10=number68+number69+8;
	int number70;
	scanf("%d",&number70);
	if(check_result8==number70)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
		int number71,number72,number73,number74;
	printf("Enter the any two  number:");
	scanf("%d %d",&number71,&number72);
	printf("Enter the any two  number:");
	scanf("%d %d",&number73,&number74);
	printf("%d %d %d  %d %d.............",number71,number72,number71+number72-8,number73,number74);
	int check_result11=number73+number74-8;
	int number75;
	scanf("%d",&number75);
	if(check_result8==number75)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
	
		int number76,number77,number78,number79;
	printf("Enter the any two  number:");
	scanf("%d %d",&number76,&number77);
	printf("Enter the any two  number:");
	scanf("%d %d",&number78,&number79);
	printf("%d %d %d  %d %d.............",number76,number77,number76+number77*8,number78,number79);
	int check_result12=number78+number79*8;
	int number80;
	scanf("%d",&number80);
	if(check_result12==number80)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
		int number81,number82,number83,number84;
	printf("Enter the any two  number:");
	scanf("%d %d",&number81,&number82);
	printf("Enter the any two  number:");
	scanf("%d %d",&number83,&number84);
	printf("%d %d %d  %d %d.............",number81,number82,number81+number82+10,number83,number84);
	int check_result13=number83+number84+10;
	int number85;
	scanf("%d",&number85);
	if(check_result13==number85)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
	
		int number86,number87,number88,number89;
	printf("Enter the any two  number:");
	scanf("%d %d",&number86,&number87);
	printf("Enter the any two  number:");
	scanf("%d %d",&number88,&number89);
	printf("%d %d %d  %d %d.............",number86,number87,number86+number87-10,number88,number89);
	int check_result14=number88+number89-10;
	int number90;
	scanf("%d",&number90);
	if(check_result14==number90)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
		int number91,number92,number93,number94;
	printf("Enter the any two  number:");
	scanf("%d %d",&number91,&number92);
	printf("Enter the any two  number:");
	scanf("%d %d",&number93,&number94);
	printf("%d %d %d  %d %d.............",number91,number92,number91+number92*10,number93,number94);
	int check_result15=number93+number94*10;
	int number95;
	scanf("%d",&number95);
	if(check_result14==number95)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
		int number_91,number_92,number_93,number_94;
	printf("Enter the any two  number:");
	scanf("%d %d",&number_91,&number_92);
	printf("Enter the any two  number:");
	scanf("%d %d",&number_93,&number_94);
	printf("%d %d %d  %d %d.............",number_91,number_92,number_91+number_92*10,number_93,number_94);
	int check_result_15=number_93+number_94*10;
	int number_95;
	scanf("%d",&number_95);
	if(check_result14==number_95)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
	
	
		int number96,number97,number98,number99;
	printf("Enter the any two  number:");
	scanf("%d %d",&number96,&number97);
	printf("Enter the any two  number:");
	scanf("%d %d",&number98,&number99);
	printf("%d %d %d  %d %d.............",number96,number97,number96+number97+12,number98,number99);
	int check_result16=number98+number99+12;
	int number100;
	scanf("%d",&number100);
	if(check_result16==number100)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
		int number101,number102,number103,number104;
	printf("Enter the any two  number:");
	scanf("%d %d",&number101,&number102);
	printf("Enter the any two  number:");
	scanf("%d %d",&number103,&number104);
	printf("%d %d %d  %d %d.............",number101,number102,number101+number102-12,number103,number104);
	int check_result17=number103+number104-12;
	int number105;
	scanf("%d",&number105);
	if(check_result17==number105)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
	
	
		int number107,number108,number109,number110;
	printf("Enter the any two  number:");
	scanf("%d %d",&number107,&number108);
	printf("Enter the any two  number:");
	scanf("%d %d",&number109,&number110);
	printf("%d %d %d  %d %d.............",number107,number108,number107+number108*12,number109,number110);
	int check_result18=number109+number110*12;
	int number111;
	scanf("%d",&number111);
	if(check_result17==number111)
	{
		printf("Your logic is correct:");
	}
	else 
	{
		printf("Your logic is not correct");
	}
}