#include<stdio.h>
void even(int a[])
{
	int i,n;
	printf("Enter the size of Array:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number:\n");
		scanf("%d",&a[i]);
	}
	printf("Even number is:\n");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
		printf("%d\t",a[i]);
		}
	}
}
int main()
{
	int a[100];
	even(a);
	
}