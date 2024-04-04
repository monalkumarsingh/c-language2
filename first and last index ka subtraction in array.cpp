#include<stdio.h>
int main()
{
	int a[100],i,n,sub=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sub=a[0]-a[n-1];
	}
	printf("The subtraction of first and last index is %d",sub);
}