//array  printing using functions
#include<stdio.h>
void readarray(int a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
}
void printarray(int a[],int b[],int n,int k)
{
	int i,mm,j;
	mm=n+k;
	int d[mm];
	
	for(i=0;i<n;i++)
	{
		d[i]=a[i];
	}
	for(j=i;j<mm;j++)
	{
		d[j]=b[j-i];
	}
	for(i=0;i<mm;i++)
	{
		printf("%d ",d[i]);
	}
}

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int arr[n],arr2[m];
	readarray(arr,n);
	readarray(arr2,m);
	//~ printarray(arr,n);
	//~ printarray(arr2,m);
	printarray(arr,arr2,n,m);
	return 0;
}
