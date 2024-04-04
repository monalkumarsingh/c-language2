#include<stdio.h>
void odd(int a[])
{
	int i,n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:\n");
		scanf("%d",&a[i]);
	}
	printf("ODD NUMBER IS:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d\t",a[i]);
		}
	}
}
int main()
{
	int a[100];
	odd(a);
}