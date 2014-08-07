#include <stdio.h>
#include <stdlib.h>


int MaxElement(int *A)
{ 
	int maxval,i,n;
	n=sizeof(A)/sizeof(int);
	printf("%d ",n);
	maxval=A[0];
	for(i=1;i<n;i++)
	{
		if(A[i]>maxval)
		{
			maxval=A[i];
		}
	}
return maxval;
}

int main(int argc, char *argv[]) {
	
	int A[25]={1,5,8,7,9,16,27,97,233,89,4,15,5,66};
	printf("%d ",MaxElement(A));
	
	return 0;
}
