#include<stdio.h>
int main()
{
	int a[100],i,n,j,count=0;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==0)
		{
			count++;
		}
	}
	printf("Number of Zero present in Array is %d",count);
}