// Motu,Patlu with  N bricks game
/* sample input: 5
  sample output:  Motu   
                       Motu(1)  Patlu(2)  Total
              for i =1  1      2       3
                  i =2  2      --
*/
#include<stdio.h>
//  with return-type with argument
void bricks_game(int N);
int main()
{	
	int N;
	scanf("%d",&N);
	bricks_game(N);
	return 0;
}
void bricks_game(int N)
{
	int total=0,f=0;
	for(int i=1;i<=N;i++)
	{
		if(total < N)
		{ total+=i;
			f=1;
		}
		if(total < N)
		{ total+=i*2;
			f=2;
		}
	} 
	
	if(f == 1)
		printf("Motu");
	if(f == 2)
	   printf("Patlu");

}
