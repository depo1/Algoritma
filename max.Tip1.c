#include <stdio.h>
#include <stdlib.h>


int MaxElement(int *A,int n)
{ 
	int maxval,i;
	
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
	
	int n;
	
	int A[25]={1,5,8,7,9,16,27,97,233,89,4,15,5,66};
	
	
	// dizinin sayısını mainin içinde aldım fonksiyona parametre olarak gönderdim
	
	n=sizeof(A)/sizeof(int);
	printf("Dizinin eleman sayısı %d ",n);
	
	printf("Max value = %d ",MaxElement(A,n));
	
	return 0;
}
