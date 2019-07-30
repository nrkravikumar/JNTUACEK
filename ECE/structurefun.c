#include<stdio.h>
struct employee
{
	int empid;
	char ename[30];
	int age;
	double sal;
};
void readstruct(struct employee e[],int pos)
{
	scanf("%d%s%d%lf",&e[pos].empid,e[pos].ename,&e[pos].age,&e[pos].sal);
}
void printstruct(struct employee e[],int i)
{
	printf("employee id: %d\nemployee name: %s\nemployee age: %d\nemployee salary: %lf\n",e[i].empid,e[i].ename,e[i].age,e[i].sal);
}
int main()
{
	int n,i;
	printf("enter no of employee details: ");
	scanf("%d",&n);
	struct employee e[n];
	for(i=0;i<n;i++)
	{
		printf("enter %d employee details: ",i+1);
		readstruct(e,i);	
    }
	printf("%d employee details are:\n",n);
	for(i=0;i<n;i++)
	{
		printf("%d employee details:\n",i+1);
		//~ printf("employee id: %d\nemployee name: %s\nemployee age: %d\nemployee salary: %lf\n",e[i].empid,e[i].ename,e[i].age,e[i].sal);
		printstruct(e,i);
	}
	return 0;
}
