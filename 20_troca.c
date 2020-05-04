#include <stdio.h>

// Função que realiza a troca de valores entre duas variáveis passadas como parâmetro.
// Este é um exemplo de passagem de parâmetro por referência.
void troca(int * x, int * y) {
	int aux;

	printf("Endereco apontado por x: %p - Endereco apontado por y: %p\n", x, y);

	aux = *x;
	*x = *y;
	*y = aux;
}

// Função principal
int main() {
    // Inicialização das variáveis
	int a = 2, b = 3;

    // Verificação do conteúdo antes da troca
	printf("-- Antes da Troca --\n");
	printf("a: %d - b: %d\n", a, b);

    // Visualização do endereço de memória de cada uma das variáveis
	printf("\nEndereco a: %p - Endereco b: %p\n", &a, &b);
	// Troca dos valores
	troca(&a, &b);

    // Verificação do conteúdo após a troca
	printf("\n-- Depois da Troca --\n");
	printf("a: %d - b: %d\n", a, b);

	return 0;
}
