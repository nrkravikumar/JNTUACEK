// Prime numbers within range
#include<stdio.h>
int factors_count(int n);
int isprime(int n);
void primenumbers_in_range(int l,int m)
{   int count=0;
	for(int n=l;n<=m;n++)
	{	
		if(isprime(n) == 1)
		{	printf("%d ",n);
			count++;
		}
	}
	printf("\nTotal Primes count is %d",count);
}
int main()
{	
	int x,y;
	scanf("%d%d",&x,&y);
	primenumbers_in_range(x,y);
	return 0;
}
int factors_count(int n)
{	int f=1;
	for(int k=2;k<=(n/2);k++)
	{	if(n%k == 0)
		 { 	f=0;
			 return f;
			}
	}
	return f;
}
int isprime(int n)
{	
	int f_count;
	f_count=factors_count(n);
	if(f_count == 1)
		return 1;
	return 0;
}
