#include <stdio.h>
#include <stdlib.h>

void BubSort(int *A,int n )
{
	int i,j,temp;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(A[j+1]<A[j])
			{
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}

void printarray(int *A,int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d  ",A[i]);
		
	}
	putchar('\n');
}


int main(int argc, char *argv[])
{
	
	int A[10]={4,8,7,9,3,1,2,6,5,0};
	int n=10;
	printarray(A,n);
	BubSort(A,n);
	printarray(A,n);
	return 0;
}
