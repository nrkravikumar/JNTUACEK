#include<stdio.h>
//~ #include<string.h>
int main()
{	
	char str2[20],rev[20]; 
	gets(str2); // bharu
	int i=0,len,j=0;
	while(str2[i]!='\0')
	{
		i++;
	}
	len=i-1;
	while(len>=0)
	{	
		rev[j]=str2[len];
		len--;
		j++;
	}
	rev[j]='\0';
	puts(rev);
	return 0; 
}

	
	
	
	
	
	
