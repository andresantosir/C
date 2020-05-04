#include <stdio.h>

// -- Fun��o: buscaMinMax --
// Realiza a busca dos elementos m�nimos e m�ximo de um vetor passado como par�metro.
// Retorna os valores atrav�s das vari�veis min e max, ponteiros passados como par�metro.
void buscaMinMax(int vet[], int tam, int * min, int * max)
{
    // �ndice do la�o
	int i;

    // Inicializa��o dos valores m�nimos
	*min = vet[0];
	*max = vet[0];

	// Percorrendo o vetor a partir da posi��o 1, pois a 0 j� foi utilizada como fator
	// comparativo inicial
	for(i = 1; i < tam; i++) {
        // Se encontrar um menor valor no vetor, o valor m�nimo � atualizado
		if(vet[i] < *min)
			*min = vet[i];

        // Se encontrar um maior valor no vetor, o valor m�ximo � atualizado
		if(vet[i] > *max)
			*max = vet[i];
	}
}

// Fun��o principa�
int main() {
    // Vetor a ser percorrido
	int vet[] = {1, 2, 83, -4, 25, 28};
	// Vari�veis que ir�o receber os valores m�nimo e m�ximo do vetor
	int a, b;

    // Invoca��o da fun��o de busca
	buscaMinMax(vet, 6, &a, &b);

    // Impress�o do menor e do maior valor
	printf("Min: %d - Max: %d\n", a, b);

	return 0;
}
