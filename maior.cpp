#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void maior(int *x, int *y){  // Ir� receber como par�metro o endere�o que est�o dentro das vari�veis que ser�o postas na fun��o 'main'
	if(*x>*y){ // Verifica��o do conte�do DENTRO dos endere�os (Leia-se como: "se o valor que x aponta for maior que o que y aponta")
	printf("%d\n",*x); // Imprima o conte�do || O que x aponta (no caso, o valor)
	};
	if(*y>*x){
	printf("%d\n",*y);
	};
	if(*x==*y){
	printf("N�meros iguais.");
	};
}

int main(){
	
	int a=-5, b=-15;
	
		printf("### Este programa mostra o maior de dois n�meros digitados pelo usu�rio. ###\n");
			
		maior(&a,&b); // Ele ir� pegar o ENDERE�O das vari�veis. Na fun��o,ele ir� comparar os valores apontados DENTRO do ENDERE�O.
return 0;
}
