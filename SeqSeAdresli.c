#include <stdio.h>
#include <stdlib.h>

char *sequentialsearch(char *A,char k,int n)
{
	int i=1;
	
	while(i<n && A[i]!=k)
	{
		i++;
	}
	if(i<n)
	{
		return &A[i];
	}
	else 
	{
		return -1;
	}
    	
}

int main(int argc, char *argv[]) {
	char A[100]="Yasemin Yilmaz ders calisiyor . ";
	int n=strlen(A);
	char k='s';
	printf("%c",sequentialsearch(A,k,n));
	return 0;
}
