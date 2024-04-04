#include<stdio.h>
int main()
{
	int a[5]={2,5,10,8,20},i;
	printf("The orginal Array is:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	int largest=a[i];
	for(i=1;i<5;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
	}
	printf("The largest element presnt in arrays %d ",a[i]);
}