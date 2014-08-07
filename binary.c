#include <stdio.h>
#include <stdlib.h>

int Binary(int n)
{
	int cnt=1;
	while(n>1)
	{
		cnt++;
		n=n/2;
	}
	return cnt;
}
int main(int argc, char *argv[]) {
	
	int n=100;
	printf("%d",Binary(n));
	return 0;
}
