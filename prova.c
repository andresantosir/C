#include <stdio.h>


int main(){

	
int bignum[15];
	
int vet1[]= {4, 1, 3, 5, 4};
	
int vet2[]= {5, 3, 6, 9, 7};
	
int i, soma;

	// Apresentação do programa.
	
printf("Este programa realiza a soma dos números dentro dos vetores.\n");

	
for(i=5; i>=0; i--){
	
soma = vet1[i]+vet2[i];
		
{	
		
if (soma>=10)
		
bignum[i]=soma%10;
		
bignum[i-1]=soma/10;	
		
}
	bignum[i]=soma;
	}
	
for(i=1; i<=15; i++){
	
printf("%d\n", bignum[i]);
	
}

return 0;

}
