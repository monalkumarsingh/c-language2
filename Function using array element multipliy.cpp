#include<stdio.h>
void mul(int a[])
{
	int i,n,multiply=1;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		multiply=multiply*a[i];
	}
		printf("The multiplication of array elementis %d",multiply);

}

int main()
{
	int a[100];
	mul(a);
}