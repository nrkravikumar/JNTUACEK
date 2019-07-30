#include<stdio.h>
int main( )
{
	int c;
	scanf("%d",&c);
	switch(c)
	{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:printf("%d has 31 days",c);break;
		case 4:
		case 6:
		case 9:
		case 11:printf("%d has 30 days",c);break;
		case 2:printf("%d has 28 or 29 days",c);break;
		default:printf("%d is invalid month",c);
	}
	return 0;
}
