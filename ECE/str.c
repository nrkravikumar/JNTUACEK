#include<stdio.h>
#include<string.h>
int main()
{
   int i,alpha=0,spe=0,num=0;
	char ch[100]; 
	//scanf("%s",ch);
	//fgets(ch,40,stdin);
	gets(ch);
	printf("%s\n",ch);
	
	for(i=0;ch[i]!='\0';i++)
	{
     if((ch[i]>='a' && ch[i]<='z')|| (ch[i]>='A' && ch[i]<='Z'))
     {
		alpha++;
	 }
	 else if(ch[i]>='0' && ch[i]<='9')
	 {
		 num++;
	 }
	 else
	 spe++;
    }
	printf("\n%s",ch);
	printf("no. of alphabet=%d ,\n no.of numbers=%d,\n no.of special characters =%d",alpha,num,spe);

	return 78;
}
