#include<stdio.h>
int main()
{
	int cnt=0,cnr=0;
	FILE *h;
	char s[100];
	h=fopen("saravana.txt","r");
	if(h==NULL)
	{
		printf("not exist");
	}
	else
	{
		printf("file created");
		
		while(fgets(s,100,h))
		{
			for(int i=0;s[i]!='\0';i++)
			{
			if((s[i]==' ')||(s[i]=='\n'))
			cnt++;
			if(s[i]=='\n')
			{
			cnr++;
			}
			}
		}
		printf("no.words=%d \n no.of lines=%d",cnt,cnr);
		
	}

	fclose(h);
	return 67;
}
		


		
	
