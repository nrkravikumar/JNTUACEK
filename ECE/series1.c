// series where even places even numbers and in odd places fibinocci series
#include<stdio.h>
int fibi_num(int f0,int f1);
void even_num(int i);
void series_print(int n);
int main()
{	
	int n;
	scanf("%d",&n);
	series_print(n);
	return 0;
}
int fibi_num(int f0,int f1)
{	int f2;
	f2=f0+f1;
	printf("%d ",f2);
	return f2;
}
void even_num(int i)
{	
	printf("%d ",i);
}
void series_print(int n)
{	int f0=-1,f1=1,x;
	for(int i=0;i<n;i++)
	{	
		if(i%2!=0)
		{	
			x=fibi_num(f0,f1);
			f0=f1;
			f1=x;
		}
		else
		{	
			even_num(i);
		}
	}
}
