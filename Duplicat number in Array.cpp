#include<stdio.h>
int main()
{
	int a[100],i,n,j;
	printf("Enter the size of Array is:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
	{
	if(a[i]==a[j])
	{
	printf("The Duplicate number is %d",a[i]);
	}
	}
	}
}