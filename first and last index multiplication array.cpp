#include<stdio.h>
int main()
{
	int a[100],i,n,mul=1;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		mul=a[0]*a[n-1];
	}
	printf("The multiplication of first and last index is %d",mul);
}