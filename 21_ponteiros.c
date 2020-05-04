#include <stdio.h>

// -- Função: buscaMinMax --
// Realiza a busca dos elementos mínimos e máximo de um vetor passado como parâmetro.
// Retorna os valores através das variáveis min e max, ponteiros passados como parâmetro.
void buscaMinMax(int vet[], int tam, int * min, int * max)
{
    // Índice do laço
	int i;

    // Inicialização dos valores mínimos
	*min = vet[0];
	*max = vet[0];

	// Percorrendo o vetor a partir da posição 1, pois a 0 já foi utilizada como fator
	// comparativo inicial
	for(i = 1; i < tam; i++) {
        // Se encontrar um menor valor no vetor, o valor mínimo é atualizado
		if(vet[i] < *min)
			*min = vet[i];

        // Se encontrar um maior valor no vetor, o valor máximo é atualizado
		if(vet[i] > *max)
			*max = vet[i];
	}
}

// Função principaç
int main() {
    // Vetor a ser percorrido
	int vet[] = {1, 2, 83, -4, 25, 28};
	// Variáveis que irão receber os valores mínimo e máximo do vetor
	int a, b;

    // Invocação da função de busca
	buscaMinMax(vet, 6, &a, &b);

    // Impressão do menor e do maior valor
	printf("Min: %d - Max: %d\n", a, b);

	return 0;
}
