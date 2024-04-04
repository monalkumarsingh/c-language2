#include<stdio.h>
int main()
{
	int a[5]={10,20,30,40,50};
	int i=0,item;
	printf("Enter the item whose ite be searched in the array:");
	scanf("%d",&item);
	while(i<5)
	{
		if(a[i]==item)
		{
			printf("Element is founded %d",i);
			break;
		}
		i++;
	}
	if(i>=5)
	{
		printf("Item is not founded");
	}
}