//~ To Check whether a given number is equal to 1576 or not 
//~ Input: 1576
//~ Output: You had entered 1576 is matched to 1576

//~ Input: 15
//~ Output: You had entered 15 is not matched to 1576 

#include<stdio.h>

int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	if(n==1576 && m==10)
	{
		printf("You had entered n=%d and m=%d is matched to n=1576 m=10",n,m);
		//~ printf("You had entered n=%d and m=%d is not matched to n=1576 m!=10",n,m);
	}
	else if(n==0)
	{
		printf("You had entered %d is matched to 0",n);
	}
	else if(n==100)
	{
		printf("You had entered %d is matched to 100",n);
	}
	else if(n==35)
	{
		printf("You had entered %d is matched to 35",n);
	}
	else if(n==45)
	{
		printf("You had entered %d is matched to 45",n);
	}
	else
	{
		  printf("You had entered %d is not matched to 1576,0,35,45,100",n);
	}
	return 0;
}






