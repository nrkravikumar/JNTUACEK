//~ To split the even and odd elements in an array
#include<stdio.h>
int main()
{  
	int n,i,j=0,k=0;
	scanf("%d",&n);
	int arr[n],evn[n],odd[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			evn[j]=arr[i];
			j++;
		}
		else
		{
			odd[k]=arr[i];
			k++;
		}
	}
	printf("Array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\nEven numbers in array are:");
	for(i=0;i<j;i++)
	{
		printf("%d ",evn[i]);
	}
	printf("\nOdd numbers in array are:");
	for(i=0;i<k;i++)
	{
		printf("%d ",odd[i]);
	}
	return 0;
}


	
	
	
	
	
	
	
	
