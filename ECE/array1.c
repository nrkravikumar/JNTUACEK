//~ 1340
//~ reverse using reverse variable gives 431
//~ reverse using array gives 0431
// Array implementation without using functions
#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	int arr[n],arr2[n];
	printf("First array elements have to enter:\n");
	for(i=0;i<n;i++) // index  starts from zero
	{
		scanf("%d",&arr[i]);
	}
	printf("\nSecond array elements have to enter:\n");
	for(i=0;i<n;i++) // index  starts from zero
	{
		scanf("%d",&arr2[i]);
	}
	printf("First array elements are:\n");
	for(i=0;i<n;i++) // index  starts from zero
	{
		printf("%d ",arr[i]);
	}
	printf("\nSecond array elements are:\n");
	for(i=0;i<n;i++) // index  starts from zero
	{
		printf("%d ",arr2[i]);
	}
	printf("\nsum of two array elements are:\n");
	
	for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]+arr2[i]);
	}
	
	
	
	return 0;
}
