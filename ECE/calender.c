#include<stdio.h>
int main()
{
	int n=1,i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(n%2!=0)
			{
				printf("%02d ",n);
			}
			else
			{
				printf("  ");
		    }
		    n++;
		    if(n>31)
		    {
				break;
			}
		}
		printf("\n");
	}
	return 0;
}
