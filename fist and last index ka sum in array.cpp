#include<stdio.h>
int main()
{
	int a[100],i,n,sum=0;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=a[0]+a[n-1];
	}
	printf("The sum of first and last index is %d",sum);
 } 