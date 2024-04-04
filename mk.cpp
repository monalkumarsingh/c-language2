#include<stdio.h>
int main()
{
	int a[100],i,n,k=0;
	printf("Enter the size of Array:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Please Enter the number:");
		scanf("%d",&a[i]);
	}
	int item;
	printf("Enter the item whose element searched in array:");
	scanf("%d",&item);
	for(i=1;i<=n;i++)
	{
		if(a[i]==item)
		{
			printf("Item is founded location is %d",i);
			k++;
			break;
		}
	}
	if(k==0)
	{
		printf("Not founded item");
	}
}