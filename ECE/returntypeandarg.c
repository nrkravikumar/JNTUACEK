// without return_type and without arguments
 //~ syntax: 
    //~ return-type function_name(arguments);
#include<stdio.h>
#include"functions.h"
int main() 
{	
	int n,m;
	scanf("%d",&n);
	even_number(n);
	scanf("%d",&m);
	odd_number(m);
	printf("\nTask Completed");
	return 0;
}   
