void readarray(int b[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		scanf("%d",&b[i]);
	}
}

void printarray(int b[],int m)
{
	int i;
	for(i=0;i<m;i++)
	{
		printf("%d ",b[i]);
	}
}

int sumarray(int c[],int k)
{
	int i,sum=0;
	for(i=0;i<k;i++)
	{
		sum+=c[i];
	}
	return sum;
}
