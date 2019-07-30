 #include<stdio.h>
void swap(int* p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	}
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("before swapping a=%d,b=%d",a,b);
	swap(&a,&b);
	printf("after swapping a=%d,b=%d",a,b);
	return 0;
	}
