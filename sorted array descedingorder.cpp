#include<stdio.h>
int main()
{
	int a[100],n,i,j,temp;
	printf("\n\sort elemetns of array  in descending order:\n");
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
			if(a[i]<a[j])
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
