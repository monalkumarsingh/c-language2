#include<stdio.h>
//to sort element of array in asecending order;
int main()
{
	int a[100];
	int n,i,j,temp;
	printf("\n\sort elemetns of array  in ascending order:\n");
	printf("__________________________________________________\n");
	printf("Input the size of array:");
	scanf("%d",&n);
	printf("Input %d elements in the array :\n",n);
	for(i=1;i<=n;i++)
	{
		printf("element - %d ",i);
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++) 
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				
			}
		}
	}
	printf("\n Elments of array in sorted asecending order:\n");
	for(i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	
	printf("\n\n");
	
}