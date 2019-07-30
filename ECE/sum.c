// User-defined function
// Without return-type and without arguments
#include<stdio.h>
void sum(); // declaration
int main()
{
	for(int i=1;i<=3;i++)
		sum(); // Calling
	return 0;
}
void sum() // Defining
{	
	int x,y;
	scanf("%d%d",&x,&y);
	printf("%d",(x+y));
}
