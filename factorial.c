#include <stdio.h>
#include <stdlib.h>

int fac(int n)
{
	
	if(n==0)
	{
		return 1;
	}
	else 
	{
	    return fac(n-1)*n;
	}
}
int main(int argc, char *argv[]) {
	int n=8;
	printf("%d",fac(n));
	return 0;
}
