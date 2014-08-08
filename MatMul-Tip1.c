
// hataları ayıkladım ama algoritmayı düzeltmen gerekiyor dogru sonuç vermesi için

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
			C[i][j]=0;  // hatalı yazım : C[i][j] = {0,0} yasmıştın.
			
						
			for(k=0;k<3;k++)
			{
				C[i][j]=C[i][j]+A[i][k]*B[k][j];
			}
		}
	}
	
	return C[i][j]; 
	
	// return ettigin sey tek bir dizi elemanı tüm diziyi return etmemişin.
	// i = 2  , j = 2 oluyor döngü bittiginde . sende C[2][2] yi return ediyosun.
	// return  etmene gerek yok zaten bu fonksiyonu void türünde yap sadece çarpmayı yapsın
	// birde printdizi() fonksiyonu oluştur çarpım sonucu olan c dizisini print etsin 	
	
}
int main(int argc, char *argv[]) {
	
	/* ben iki boyutlu dizileri bu şekilde tanımlıyorum sorun çıkmıyor
	 * Sen bu yöntemi (C[2][2] = {1,1,1,1}) söylemiştin ama tam özümseyemedim bunu
	 * benim derleyicide çalıştırmadı zaten */
	 
	int A[2][2]={{1,1},{1,1}};
	int B[2][2]={{1,1},{1,1}};
	printf("%d ",MatrixMul(A,B));
	
	
	
	
	return 0;
}

// Try harder (^_^)
