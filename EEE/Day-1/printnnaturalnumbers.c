//~ To print the n natural numbers

#include<stdio.h>
#define PI 3.14
int main()
{
	int n,i,m;
	scanf("%d%d",&n,&m);
	//~ for(i=n;i<=m;i++)
	i=n;
	//~ while(i<=m)
	//~ {
		//~ printf("%02d ",i);
		//~ i++;
	//~ }
	do
	{
		printf("%02d ",i);
		i++;
	}while(i<=m);   
	printf("\nOuter of Loop %d ",i);
	return 0;
}
int add()
{
}
