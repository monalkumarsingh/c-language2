#include<stdio.h>
int main()
{
	int a[100],search,i,n;
	printf("Enter the number of elemets in array\n");
	scanf("%d",&n);
	printf("Enter %d integer\n",n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to serach\n");
	scanf("%d",&search);
	for(i=1;i<=n;i++)
	{
		if(a[i]==search)
		{
			printf("%d is present location %d\n",search,i);
			break;
		}
	}
		if(i==n)
		{
			printf("%d is nnot  present in array\n",search);
		}
	
}