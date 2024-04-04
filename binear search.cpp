#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int lr=0,upr=4;
	int mid,item,f=0;
	printf("Enter the element whose element founded:");
	scanf("%d",&item);
	while(lr<=upr)
	{
		mid=(lr+upr)/2;
		if(a[mid]==item)
		{
		f=1;
			break;
		}
		if(a[mid]<item)
		{
		lr=	mid+1;
		}
		else
		{
		upr=mid-1;	
		}
	}
	if(f==1)
	{
		printf("item is founded %d",mid);
	}
	else
	{
		printf("not founded item:");
	}
}