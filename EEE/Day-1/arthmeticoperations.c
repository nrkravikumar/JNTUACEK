//~ to perform artimetic operations
#include<stdio.h>
#include"head.h"
int main()
{
	extern int b;
	int a;
	scanf("%d",&a);
	printf("sum of %d and %d is: %d\n",a,b,a+b);
	printf("diff of %d and %d is: %d\n",a,b,a-b);
	printf("mul of %d and %d is: %d\n",a,b,a*b);
	printf("div of %d and %d is: %.3f\n",a,b,(float)a/b);
	printf("mod of %d and %d is: %d\n",a,b,a%b);  
	return 0;
}
