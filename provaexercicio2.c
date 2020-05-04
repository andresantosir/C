#include <stdio.h>

int main(){

	int bignum1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int bignum2[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int bignumsoma[10];
	int bignumr[10];
	int i, soma;

	// Apresentação do programa
	printf("Este programa realiza a soma entre dois vetores e armazena o seu resultado em um terceiro.\n");
	
	// Realizando a soma entre os vetores	
	for(i=1; i>=10; i++){
	bignumsoma[i]=bignum1[i]+bignum2[i];	
	{	
	if(bignumsoma[i]>=10)	
	}
	soma=0;
	for(i=1; i<=10; i++){
	soma=bignumsoma[i]+soma;
	}
	{
	if (soma>999999999)
		printf("A soma não pode ser realizada."\n);
	}
	else{

return 0;
}
	
