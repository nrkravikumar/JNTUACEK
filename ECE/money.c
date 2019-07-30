#include<stdio.h>
int main()
{
	int c10=0,c5=0,c1=0,m;
	scanf("%d",&m);
	if(m>=10)
	{
		c10=m/10;
		m=m%10;
	}
	if(m>=5)
	{
		c5=m/5;
		m=m%5;
	}
	if(m>=1)
	{
		c1=m/1;
		m=m%1;
	}
	printf("%d",(c10+c5+c1));
	return 0;
}
