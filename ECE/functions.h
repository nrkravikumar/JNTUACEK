void even_number(int n) 
{	
	int i,sum=0;
	for(i=2;i<=n;i=i+2)
	{
		sum+=i;
	}
	printf("%d\n",sum);
}
void odd_number(int n)
{	
	int i;
	for(i=1;i<=n;i=i+2)
	{
		printf("%d ",i);
	}
	
	
}
