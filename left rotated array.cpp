#include<stdio.h>
int main()
{
	int a[100],i,j,n;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	int temp=a[0];
	for(i=1;i<n;i++)
	{
		a[i-1]=a[i];
		
		
	}
	a[n-1]=temp;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}