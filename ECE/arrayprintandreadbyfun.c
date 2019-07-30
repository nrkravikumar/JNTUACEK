//~ Array reading and printing by using Functions

#include<stdio.h>
void readarray(int a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
}

void printarray(int b[],int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%d ",b[i]);
	}
}

void sumarray(int c[],int d[],int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		printf("%d ",c[i]+d[i]);
	}
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],arr2[n];
	printf("Reading first array elements:\n");
	readarray(arr,n);
	printf("\nReading second array elements:\n");
	readarray(arr2,n);
	printf("\nFirst array elements are:\n");
	printarray(arr,n);
	printf("\nSecond array elements are:\n");
	printarray(arr2,n);
	printf("\nSum of two array elements are:\n");
	sumarray(arr,arr2,n);
	return 0;
}
