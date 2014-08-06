#include <stdio.h>
#include <stdlib.h>

int euclid(int m,int n)
{
	int r;
	while(n!=0)
	{
		r=m%n;
		m=n;
		n=r;
		
	}
	return m;
}


int main(int argc, char *argv[]) {
	
	printf("%d",euclid(120,159));
	return 0;
}
