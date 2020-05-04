#include <stdlib.h>
#include <stdio.h>

// Fun��o principal
int main() {
    // Declara��o de um ponteiro para inteiro
	int * ptr;

    // Aloca��o de mem�ria para apenas um inteiro
	ptr = (int *) malloc(sizeof(int));

    // Verificar se o endere�o de mem�ria foi alocado corretamente, ou seja,
    // se o endere�o no ponteiro "ptr" n�o � nulo.
	if(ptr != NULL) {
        // Caso n�o seja nulo, podemos acessar o endere�o de mem�ria apontado pelo ponteiro
        // atrav�s do operador *
		*ptr = 10;
		printf("Valor: %d\n", *ptr);

		// Ap�s usar o ponteiro, � necess�rio liberar o espa�o de mem�ria alocado dinamicamente
		// atrav�s da fun��o "free".
		free(ptr);
	}

	return 0;
}
