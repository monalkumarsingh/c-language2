#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0,avg;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	
	}
	for(i=1;i<n-1;i++)
	{
		sum=sum+a[i];
	}
	printf("The average of three number is %d",sum/3);
}