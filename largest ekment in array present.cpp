#include<stdio.h>
int main()
{
	int a[100];
	int n,i;
	printf("Enter the size of array:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the number :");
		scanf("%d",&a[i]);
	}
	for(i=1;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
	}
	printf("The largest element presnt in the Array is %d",a[0]);
}