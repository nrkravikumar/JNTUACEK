
#include<stdio.h>

int main()
{
	int n,i;
	scanf("%d",&n);
	int arr3[n],arr5[n];
	for(i=0;i<n;i++)
	{
		arr3[i]=(i+1)*3;
		arr5[i]=(i+1)*5;
	}
	for(i=0;i<n;i++)
	{
		printf("%d %d ",arr3[i],arr5[i]);
	}
	return 0;
}
