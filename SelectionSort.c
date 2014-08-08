#include <stdio.h>
#include <stdlib.h>
void SelSort(int *A,int n)
 {
 	int i,j,min,temp;
 	
 	for(i=0;i<n;i++)
 	{
 		min=i;
 		for(j=i+1;j<n;j++)
 		{
 			if(A[j]<A[min])
 			{
 				min=j;
 			}
 			
 		}
 		temp=A[min];
 		A[min]=A[i];
 		A[i]=temp;
 		
 		
 		
 	}
 
	
 }
 
 
 void print_array(int *p, int size)
{
   int i;
 
   for (i = 0; i < size; i++)
      printf("%d ", p[i]);
   putchar('\n');
}


 int main(int argc, char *argv[]){
	
	int A[10]={5,9,3,7,1,6,0,2,8,4};
	int n=10;
	
	print_array(A, n);
	SelSort(A,n);
	print_array(A,n);
	
	
	
	return 0;
}
