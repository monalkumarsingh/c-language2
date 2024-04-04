#include<stdio.h>
int main()
{
	int a[10],i,n,mul=1;
	printf("Ente the number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter the number in array:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		mul=mul*a[i];
	}
	printf("Total multiiplication array element=%d",mul);
}