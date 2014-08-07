#include <stdio.h>
#include <stdlib.h>

int sequentialsearch(char *A,char k)
{
	int i=0;
	int n=strlen(A);
	while(i<n && A[i]!=k)
	{
		i++;
	}
	if(i<n)
	{
		return i+1;
	}
	else 
	{
		return -1;
	}
    	
}

int main(int argc, char *argv[]) {
	char A[100]="Yasemin Yilmaz ders calisiyor . ";
	char k='s';
	printf("%d",sequentialsearch(A,k));
	return 0;
}
