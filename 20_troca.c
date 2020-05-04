#include <stdio.h>

// Fun��o que realiza a troca de valores entre duas vari�veis passadas como par�metro.
// Este � um exemplo de passagem de par�metro por refer�ncia.
void troca(int * x, int * y) {
	int aux;

	printf("Endereco apontado por x: %p - Endereco apontado por y: %p\n", x, y);

	aux = *x;
	*x = *y;
	*y = aux;
}

// Fun��o principal
int main() {
    // Inicializa��o das vari�veis
	int a = 2, b = 3;

    // Verifica��o do conte�do antes da troca
	printf("-- Antes da Troca --\n");
	printf("a: %d - b: %d\n", a, b);

    // Visualiza��o do endere�o de mem�ria de cada uma das vari�veis
	printf("\nEndereco a: %p - Endereco b: %p\n", &a, &b);
	// Troca dos valores
	troca(&a, &b);

    // Verifica��o do conte�do ap�s a troca
	printf("\n-- Depois da Troca --\n");
	printf("a: %d - b: %d\n", a, b);

	return 0;
}
