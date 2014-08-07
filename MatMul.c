// iki boyutlu dizi tanımlamada sıkıntı var sanırım , calısmıyor


#include <stdio.h>
#include <stdlib.h>

int MatrixMul(int A[2][2],int B[2][2])
{
	int i,j,k;
	int C[2][2];
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			C[i][j]={0,0};
			
			for(k=0;k<3;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	return C[i][j];
}
int main(int argc, char *argv[]) {
	int A[2][2]={1,1,1,1};
	int B[2][2]={1,1,1,1};
	printf("%d ",MatrixMul(A,B));
	
	
	
	
	return 0;
}
