#include<stdio.h>
int main()
{
	int x,sum=0,r,c,i,j,N1;
	printf("enter the number:"); 
	scanf("%d",&x);

	for(i=x;i<=1000000;i++)
	{ N1=i;
		for(j=2;j<x;j++)
		{    
			if(i%j==0)
			{
				c++;
			}	
		}
	if(c==2)
	{ 
		while(N1>0)
	    { 
		    r=N1%10;
		    sum=(sum*10)+r;
		    N1=N1/10;
	    }
	    	if(i==sum)
	    	{            
	    	    break;
			}
			else
			{
				continue;
		    }
	}
}
printf("%d",i);
}

	 


