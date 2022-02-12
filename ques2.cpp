#include <stdio.h>
int main()
{
int a,b;
printf("please enter any a number to find the maximum \n");
scanf("%d",&a);
printf("please enter any another number to find the maximum \n");
scanf("%d",&b);
if(a>b)
{
	printf("maximum is = %d",a);
}
else
{
	printf("maximum is = %d",b);
}
return 0;
}