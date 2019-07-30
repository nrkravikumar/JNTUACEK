#include<stdio.h>
int main()
{
	int i,j,x=1;

	for(i=1;i<=5;i++)
	{
		for(j=1;j<=7;j++)
		{
			{
				if(x%2!=0)
				{
					printf("%02d ",x);
				}
				else
				{
				printf("  ");
				}
				x++;
				if(x>31)
				{
					break;
				}
				
			}
		}
		printf("\n");
	}
	return 0;
}
