
#include<stdio.h>
#include"readwrite.h"
void readarray(int h[],int l)
{
	int i,e[l],j=0,k=0,o[l];
	for(i=0;i<l;i++)
	{
		scanf("%d",&h[i]);
		if(h[i]%2==0)
		{
			e[j]=h[i];
			j++;
		}
		else
		{
			o[k]=h[i];
			k++;
		}
	}
	printf("Even array elements are:\n");
	printarray(e,j);
	printf("\nOdd array elements are:\n");
	printarray(o,k);
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	readarray(arr,n);
	return 0;
}
