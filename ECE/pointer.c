#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int* p;
	p=&a;
	printf("p=%p\na=%d",p,a);
	return 0;
	}
