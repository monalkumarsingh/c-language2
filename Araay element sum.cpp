#include<stdio.h>
int main()
{
	int a[10],i,sum=0,n;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Ente the element in array:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("total sum of array element is =%d",sum);
}