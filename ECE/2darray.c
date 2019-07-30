// Two Dimensional Array
#include<stdio.h>
void read_array(int n,int arr[][n])
{	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&arr[i][j]);
	}
}
void print_array(int n,int arr[][n])
{	
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%02d ",arr[i][j]);
		printf("\n");
	}
}
void sumarray(int z,int q[][z],int s[][z])
{
	int i,j;
	for(i=0;i<z;i++)
	{
		for(j=0;j<z;j++)
		{
			printf("%02d ",q[i][j]+s[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n][n],arr2[n][n];
	printf("Read Array1 Values: \n");
	read_array(n,arr);
	printf("The Array1 is: \n");
	print_array(n,arr);
	printf("Read Array2 Values: \n");
	read_array(n,arr2);
	printf("The Array2 is: \n");
	print_array(n,arr2);
	printf("addtion of two equal arrays:\n");
	sumarray(n,arr,arr2);
	return 0;
}
