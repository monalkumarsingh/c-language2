#include<stdio.h>
int main()
{
	int a[10],n,i,sum=0;
	printf("Enter the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Ente the number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	int result=sum/n;
	printf("Average of array element =%d",result);
}