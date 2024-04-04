#include<stdio.h>
int main()
{
	int a[100];
	int i,n;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
	}
	printf("The smallest number is %d",a[0]);
}