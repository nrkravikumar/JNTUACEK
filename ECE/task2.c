// task 2
 //~ input : 3
       //~ 0  9  6
         //~ 5
       //~ 2 3 5 7 6

//~ output: 0 2 9 3 6 5 0 7 0 6
     
#include<stdio.h>
#include"readwrite.h" 
void new_array(int a[],int b[],int l,int m)
{	
	int n;
	if(l<m)
		n=(m+m);
	else
		n=(l+l);
	
	int c[n],i=0,j=0,k;
	for(k=0;k<n;k++)
	{	
		if(k%2 ==0)
		{ if(i < l)
		  {	
			  c[k]=a[i];
			 
		  }
		  else
		  {
		   c[k] = 0;
	      }
	       i++;
	    }
	    else
	    {	if(j < m)
			{	
				c[k]=b[j];
				
			}
			else{
				c[k] = 0;
				}
			j++;
		}
		
	}
	printarray(c,n);
}
int main()
{	
	int size;
	scanf("%d",&size);
	int a[size];
	readarray(a,size);
	int size2;
	scanf("%d",&size2);
	int b[size2];
	readarray(b,size2);
	printf("\nThe output array is: \n");
	new_array(a,b,size,size2);
	return 0;
}
