#include<stdio.h>
#include"array.h"

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],arr1[n];
	//~ printf("First array elements to read:\n");
	readarray(arr,n);
	//~ printf("\nFirst array elements are:\n");
	//~ printarray(arr,n);
	printf("\nSum of First array elements are: %d\n",sumarray(arr,n));
	//~ printf("\nSecond array elements to read:\n");
	readarray(arr1,n);
	//~ printf("\nSecond array elements are:\n");
	//~ printarray(arr1,n);
	printf("\nSum of Second array elements are: %d\n",sumarray(arr1,n));
	return 0;
}    
