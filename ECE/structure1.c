#include<stdio.h>

struct employee
{
	int empid;
	char ename[30];
	int age;
	double sal;
};
int main()
{
	struct employee e;
	printf("enter employee id: ");
	scanf("%d",&e.empid);
	printf("enter employee name: ");
	scanf("%s",e.ename);
	printf("enter employee age: ");
	scanf("%d",&e.age);
	printf("enter employee salary: ");
	scanf("%lf",&e.sal);
	printf("entered employee details are:\nemployee id: %d\nemployee name:  %s\nemployee age: %d\nemployee salary: %lf",e.empid,e.ename,e.age,e.sal);
	return 0;
}
