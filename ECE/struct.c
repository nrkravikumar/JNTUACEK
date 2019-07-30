#include<stdio.h>
int main()
{
	
	int i;
	struct student
	{
		int roll;
		char name[30];
		float per;
	};
	int n;
	printf("how many studentds you required to enter data");
	scanf("%d",&n);
	struct student a[n];
	for(i=1;i<=n;i++)
	{
		printf("enter %d person data",i);
		
		scanf("%d%s%f",&a[i].roll,a[i].name,&a[i].per);
	}
	
	for(i=1;i<=n;i++)
	{
		
		printf("\nroll no:%d\n name of strudent:%s\n percentage:%f",a[i].roll,a[i].name,a[i].per);
	}
	return 78;
} 

