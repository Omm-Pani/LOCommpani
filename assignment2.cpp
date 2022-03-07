#include <stdio.h>
#include <math.h>
int main()
{
	int N,N1,n,count,m,p,l,f;
	count=0;
	scanf("%d",&N);
	N1=N;
	while(N1!=0)
	{
		N1=N1/10;
		count++;
	}
	p=pow(10,count-1);
		l=N%10;
		f=N/p;
	    m=N-l-(f*p);
		n=(l*p)+m+f;
	printf("LOC counterpart=%d",n);
}