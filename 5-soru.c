#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	
	unsigned long long int sayi = 1 ;
	int flag = 0;
	while(flag==0)
	{
		sayi++ ;
		for(i=0;i<20;i++)
		{
			
			if( (sayi%i) != 0)
			{
				break;
			}
			
			
		}
		
		if(i==20)
		{
			flag=1;   // eger dongu kırılmadı ve tüm sayılar tamamlandı ise 
		}
		
	}
	// suan 'sayi' degiskenimiz aradıgımız dogru cevap
	
	printf("%lld",sayi);
	return 0;
}

