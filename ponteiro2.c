#include <stdio.h>


int main(){
	
	int n;
	int *ptr=NULL; //Declarando um ponteiro sem especificar uma posição
	ptr=&n;	//Colocando o valor de ptr em n
	*ptr=10;
	printf("n=%d\n", n);

return 0;
}



//Mudando o valor de uma variável usando ponteiro
