#include<stdio.h>
int main()
{
	int a[]={2,5,8,7,0};
	int temp=0,i,j;
	printf("Display the origianl elment in array:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t\n",a[i]);
	}
	//sort the ascending order array element
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Element of array sorted in ascending order\n");
	for(i=0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
}