// sunu açıklığa kavuşturmak gerek fibonacci 'nin 1. elemanı  = 0
//												                        2. elemanı  = 1	
//                                                3. elemanı  = 1
//                                                4. elemanı  = 2

#include <stdio.h>



int fib(int n)
{
	// ilk olarak ilk iki elemanı göz önüne alalım
	// senin algoritmana göre ilk eleman 0. eleman ve degeri 0 ,sonra 1.eleman 1
	// çünkü kullanıcı n degerine 0 veya bir girerse ilk if blogu çalışacak
	// yani 0. eleman , 1. eleman diye sıralamaya başlamış oldun
	// 9. eleman dediginde aslında gerçek sıralamda 10. eleman olucak
	
	/* main'in içine in (#1) */
	
	int x=0,y=1,i,top;
	if(n<=1)
	{
		return n;
	}
	else 
	{
		for(i=1;i<n;i++)
		{
			top=x+y;
			x=y;
			y=top;
		}
	
	return top;
 }
}

int main()
{
	int n=5;
	
	// (#1) bu problemi çözmek için mesela kullanıcı 1 yazdıgında senin fonk.da 0. eleman demek
	// örnek vermek gerekirse : gerçekte 1.2.3. şeklinde sıralamamıza ragmen dizilerin elemanları 0.1.2nci diye gider.
	// o yüzden fib n-1 i gönderiyorum
					
	/*			|  |
					|  |
					\  /
					 \/
	*/		     
	
	printf("%d",fib(n-1));
	
	
	
	
	return 0 ;
}
