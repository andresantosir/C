#include <stdlib.h>
#include <stdio.h>

// Função principal
int main() {
    // Declaração de um ponteiro para inteiro
	int * ptr;

    // Alocação de memória para apenas um inteiro
	ptr = (int *) malloc(sizeof(int));

    // Verificar se o endereço de memória foi alocado corretamente, ou seja,
    // se o endereço no ponteiro "ptr" não é nulo.
	if(ptr != NULL) {
        // Caso não seja nulo, podemos acessar o endereço de memória apontado pelo ponteiro
        // através do operador *
		*ptr = 10;
		printf("Valor: %d\n", *ptr);

		// Após usar o ponteiro, é necessário liberar o espaço de memória alocado dinamicamente
		// através da função "free".
		free(ptr);
	}

	return 0;
}
