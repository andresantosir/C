#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maior(int *x, int *y){  // Irá receber como parâmetro o endereço que estão dentro das variáveis que serão postas na função 'main'
	if(*x>*y){ // Verificação do conteúdo DENTRO dos endereços (Leia-se como: "se o valor que x aponta for maior que o que y aponta")
	printf("%d\n",*x); // Imprima o conteúdo || O que x aponta (no caso, o valor)
	};
	if(*y>*x){
	printf("%d\n",*y);
	};
	if(*x==*y){
	printf("Números iguais.");
	};
}

int main(){
	
	int a=-5, b=-15;
	
		printf("### Este programa mostra o maior de dois números digitados pelo usuário. ###\n");
			
		maior(&a,&b); // Ele irá pegar o ENDEREÇO das variáveis. Na função,ele irá comparar os valores apontados DENTRO do ENDEREÇO.
return 0;
}
