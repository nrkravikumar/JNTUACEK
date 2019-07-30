
#include<stdio.h>
#include<math.h>

int main()
{
	int i,j,n,m,sum=0;
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("enter values");
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
		scanf("%d",&a[i][j]);
		if(i==j)
			sum+=a[i][j];
		}
	}
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("trace of matrix is:%d",sum);
	return 67;
}
	
	
		
	

	
