#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	
 int A[100];
 int L[100];
 int p,j;
 int i=0;
 int n=25;
 
 for (p=2;p<=n;p++)
 {
 	A[p]=p;
 	printf("%d ",A[p]);
 }
 for(p=2;p<=sqrt(n);p++)
 {
 	if(A[p]!=0)
 	{
 		j=p*p;
 		
 		while(j<=p)
 		{
 			A[j]=0;
 			j=j+p;
 			
 		}
 		
 	}
 	
 }
 
 for(p=2;p<=n;p++)
 {
 	if (A[p]!=0)
 	{
 		L[i]=A[p];
 		i++;
 	}
 	
 printf("%d ",L[i]);
 }
 return 0;
}
