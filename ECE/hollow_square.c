// Hollow Square
#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if((i== 1 && j== n)||(i == n && j ==1)||(i+j == 2*n)||(i+j==2))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
