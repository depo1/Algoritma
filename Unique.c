// uniq olsa da olmasa da 0 dönderiyor. :((



#include <stdio.h>
#include <stdlib.h>

int UniqueEl(int *A,int n)
{
	int i,j;
	for(i=0;i<n-2;i++)
	{
		for(j=i+1;j<n-1;j++)
		{
			if(A[i]=A[j])
			{
				return 0;
			}
		}
	}
  return 1;	
}

int main(int argc, char *argv[]) {
	
	int A[10]={1,2,3,4};
	int n;
	n=sizeof(A)/sizeof(int);
	printf("%d",UniqueEl(A,n));
	return 0;
}
