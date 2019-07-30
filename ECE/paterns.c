/* a b c d    a a a a    a b c d
   a b c d    b b b b    b b b b
   a b c d    c c c c    a b c d
   a b c d    d d d d    c c c c
*/
#include<stdio.h>
void pattern1(int n)
{	
	char ch='a';
	int i,j;
	for(i=1;i<=n;i++)
	{	
		for(j=0;j<n;j++)
		{
			if(i%2 ==0)
			{	printf("%c ",ch+i/2); //ch+i-1
				
			}
			else
				printf("%c ",ch+j);
		}
		
		printf("\n");
	}
}
int main()
{	
	int n;
	scanf("%d",&n);
	pattern1(n);
	return 0;
}
