//~ a b c d
//~ e f g h
//~ i j k l
//~ m n o p
#include<stdio.h>
void pattern(int n)
{	
	char c='a';
	int j,k;
	for(k=1;k<=n;k++)
	{	for(j=0;j<n;j++)
		{	printf("%c ",c+j);
			
		}
		c=c+j;
		printf("\n");
		
	}		
}
int main()
{	
	int n;
	scanf("%d",&n);
	pattern(n);
	return 0;
}
