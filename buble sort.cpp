#include<stdio.h>
#define MAXSIZE 10

int main()
{
	int a[MAXSIZE];
	int i,j,temp,num;
	printf("Enter the value of num\n");
	scanf("%d",&num);
	printf("Enter the element one by one:");
	for(i=1;i<=num;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Input array is:\n");
	for(i=1;i<=num;i++)
	{
		printf("%d\n",a[i]);
	}
	/* buble sort being */
	for(i=1;i<=num;i++)
	{
		for(j=i+1;j<num;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				
				
				
							}
		}
	}
	printf("Sorted Araay is:");
	for(i=1;i<=num;i++)
	{
		printf("%d\n",a[i]);
	}
}