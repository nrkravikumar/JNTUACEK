#include<stdio.h>
int profile_pic()
{
	int l,w,h,c=0;
	scanf("%d%d%d",&l,&w,&h);
	
	if(w<l||h<l)
	{
		c=1;
	}
	else if(w==h)
	{
		c=2;
	}
	else
	{
		c=3;
	}
return c;
}
int main()
{
	int a;
	a=profile_pic();
	if(a==1)
	printf("upload another pic");
	else if(a==2)
	printf("accepted");
	else
	printf("crop it");
}
		
