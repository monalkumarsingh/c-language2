#include<stdio.h>
int main()
{
	int a[100];
	int i,j,n;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Please Enter the number:");
		scanf(" %d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[0]<a[j])
			{
				a[0]=a[j];
			}
		}
	}
	printf("The largest element is %d",a[0]);
}