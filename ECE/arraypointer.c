#include<stdio.h>
int main()
{
	int size,i;
	scanf("%d",&size);
	int array[size];
	for(i=0;i<size;i++)	
		scanf("%d",(array+i));
	printf("array values are:");
	for(i=0;i<size;i++)
		printf("%d,",*(array+i));
}
