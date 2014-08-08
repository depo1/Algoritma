#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ilk unuttugun string.h olmus strlen kullanabılmek için :)


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
		
		// ikincisi dönüş türüne dikkat et char* . bu fonksiyonda -1 gibi int bişey dönderemezsin
		// char pointeri döndüğü için pointerin boş elemanı null dır.
		
		//return -1;
		
		return NULL;
	}
    	
}

int main(int argc, char *argv[]) {
	char A[100]="Yasemin Yilmaz ders calisiyor . ";
	int n=strlen(A);
	char k='s';
	
	/*
	 * son olarak sequentialsearch(A,k,n) fonksiyonu bir adres dönderecek = 0x12AB245 gibi bunu direk ekrana yazamazsın
	 * senin elinde olan şey adres ihtiyacın olan şeyde o adresin içeriğinde ne var onun için başına * koyup değerini yazmalısın
	
				printf("%c",sequentialsearch(A,k,n));
	 
	*/
	
	printf("%c  \n\n",*sequentialsearch(A,k,n));
	
	// örnek olarakta adresi yazdıralım
	printf("adresi = %p  ",sequentialsearch(A,k,n));
	
	
	return 0;
}
