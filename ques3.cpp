#include <stdio.h>
int main()
{
    int a,b;
    printf("please enter a number to check if it is odd or even \n");
	scanf("%d",&a);	
	switch(a%2)
	{
		case 0:
	
			printf( "even number is %d",a);
			break;
			
		case 1:
		
        	printf("odd number is %d",a);
			break; 	
		
	}
	return 0;
	
}