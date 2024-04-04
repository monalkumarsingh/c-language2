#include<stdio.h>
int main()
{
	int a[100],i,n,count=0,count1=0;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			count++;
		}
		else if(a[i]%2==1)
		{
			count1++;
		}
	}
	printf("Even number present in Array %d\t",count);
	printf("Odd number present in Array %d \t",count1);
}