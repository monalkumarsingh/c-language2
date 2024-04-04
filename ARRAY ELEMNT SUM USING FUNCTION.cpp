#include<stdio.h>
void sum(int a[])
{
	int i,n,sum=0;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of arry element is %d",sum);

}
int main()
{
	int a[100];
	sum(a);
	
}