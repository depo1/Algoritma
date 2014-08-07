#include <stdio.h>

int fib(int n)
{
	int x=0,y=1,i,top;
	if(n<=1)
	{
		return n;
	}
	else 
	{
		for(i=0;i<n-2;i++)
		{
			top=x+y;
			x=y;
			y=top;
		}
	
	return top;
 }
}

int main()
{
	int n=9;
	printf("%d",fib(n));
}
