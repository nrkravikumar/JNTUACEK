//~ To Perform all Arithmetic Operations by using Switch

#include<stdio.h>

int main()
{
	int k;
	printf("1.Add\n2.Sub\n3.Mul\n4.Div\n5.Mod\n");
	scanf("%d",&k);
	switch(k)
	{
		case 2:printf("Sub of %d and %d is: %d\n",n,m,n-m);break;
		case 4:printf("Div of %d and %d is: %f\n",n,m,(float)n/m);break;
		case 1:printf("Add of %d and %d is: %d\n",n,m,n+m);break;
		case 3:printf("Mul of %d and %d is: %d\n",n,m,n*m);break;
		case 5:printf("Mod of %d and %d is: %d\n",n,m,n%m);break;
		default:printf("Invalid option\n");
	}
	return 0;
}

 1. Jan -- 31
 2. Feb -- 28 or 29
 3. Mar -- 31
 4. Apr -- 30
 5. May -- 31
 6. Jun -- 30
 7. Jul -- 31
 8. Aug -- 31
 9. Sep -- 30
10. Oct -- 31
11. Nov -- 30
12. Dec -- 31








