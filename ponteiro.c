/*
#include <stdio.h>

	void troca(int a, int b){
	int temp=a; //temp = 2
	a=b;	// a=3
	b=temp;	// b=2	
	}
int main(){

		int a=2, b=3; 

		printf("Antes da troca: %d %d\n", a, b);
		// Chamada da função
		troca(a,b);

		printf("Depois da troca: %d %d\n", a, b);
				
return 0;
}
*/

// ------------------ Usando ponteiros ------------------
#include <stdio.h>


	void troca(int *x, int *y){
	printf("Ptr x: %p - Ptr y: %p\n", x, y);	
	int temp=*x; //temp = 2
	*x=*y;	// a=3
	*y=temp;	// b=2	
	}
int main(){

		int a=2, b=3; 

		printf("Antes da troca: %d %d\n", a, b);
		printf("Endereço de a: %p \nEndereço de b: %p\n", a, b);
		// Chamada da função
		troca(&a,&b);

		printf("Depois da troca: %d %d\n", a, b);
		
return 0;
}
