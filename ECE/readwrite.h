void printarray(int c[],int k)
{
	int i;
	for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
void readarray(int a[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
}
void read_array(int n,int arr[][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
	}
}

void print_array(int n,int arr[][n])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			printf("%d",a[i][j]);
	}
}
