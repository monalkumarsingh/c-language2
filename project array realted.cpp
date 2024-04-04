#include<stdio.h>
int main()
{
	int n,sum=0,a[10],i;
	int mul=1;
	int number;
	while(1)
	{
	printf("Plese Enter the negative number to exit the -1 loop:\n");
	int num1;
	scanf("%d",&num1);
		if(num1==-1)
		{
			break;
		}
		else
		{
	printf("PRESS 1 FIND THE SUM OF ARRAY ELEMENT:\n");
	printf("PRESS 2 FIND THE MUL OF ARRAY ELEMENT:\n");
	printf( "PRESS 3 FIND THE SMALLEST NUMBER IS ARRAY:\n");   
	printf( "PRESS 4 FIND THE LARGEST  NUMBER IS ARRAY:\n");     
  
	scanf("%d",&number);	
	
	switch(number)
	{
		
	case 1:
		{
		printf("Enter the size of array:");
	scanf("%d",&n);	
		
	for(i=1;i<=n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		sum=sum+a[i];
	}
	printf("The sum of array element is =%d",sum);
	break;
}


	case 2:
		{
	printf("Enter the size of array:");
	scanf("%d",&n);			
		
	for(i=1;i<=n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n;i++)
	{
		mul=mul*a[i];
	}
	printf("The sum of array element is =%d",mul);
	break;
}

	case 3:
		{
		printf("Enter the size of array:");
	scanf("%d",&n);	
		
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	int smalest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[0]>a[i])
		{
			a[0]=a[i];
		}
		
	}
	printf("The smallest elemetn present in array is =%d",a[0]);
	break;
	
}

	case 4:
		{
		printf("Enter the size of array:");
	scanf("%d",&n);	
		
	for(i=0;i<n;i++)
	{
		printf("Enter the number:");
		scanf("%d",&a[i]);
	}
	int largest=a[0];
	for(i=1;i<n;i++)
	{
		if(a[0]<a[i])
		{
			a[0]=a[i];
		}
		
	}
	printf("The largest elemetn present in array is =%d",a[0]);
	break;
	

}
}