
#include <stdio.h>
lint add(int x,int y)
{
	printf("x value is %d\n",x);
	printf("y value is %d\n",y);
	return x+y;
}

int main(int argc, char **argv)
{
	int a,b;
	scanf("%d%d",&a,&b); 
	printf("addition value is %d\n",add(a,b));
	return 0; 
}





