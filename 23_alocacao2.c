#include <stdlib.h>
#include <stdio.h>

// Função principal
int main() {
    // Declaração e iniciação do ponteiro.
    // É importante que se inicie o ponteiro sempre apontando-o para NULL caso não possua uma
    // posição de memória para apontá-lo no momento.
	int * ptr = NULL;
	// Vetor e demais variáveis
	int vet[5] = {10, 9, 8, 7, 6};
	int n, i;

    // Apresentação do programa
	printf(">> Alocação Dinâmica <<\n");
	printf("- Entre com o tamanho do vetor: ");
	scanf("%d", &n);

    // Alocando posição de memória para n inteiros. O valor n é informado pelo usuário
    // durante a execução do programa.
	ptr = (int *) malloc(n*sizeof(int));

    // Caso a alocação tenha sido bem sucedida...
	if(ptr != NULL) {
        // ...percorrer o vetor preenchendo suas posições com uma sequência de 1 até n
        // e imprimir o valor de cada posição.
		for(i = 0; i < n; i++) {
			ptr[i] = i+1;
			printf("Valor: %d\n", ptr[i]);
		}

        // Após percorrer o vetor, liberar o espaço de memória alocado.
		free(ptr);
	}

    // Apontando o vetor para um novo endereço de memória: o endereço de um vetor.
	ptr = vet;

    // Imprimir os elementos do vetor indiretamente via ponteiro
	for(i = 0; i < 5; i++)
		printf("%d ", ptr[i]);

    printf("\n");

    // Comprovando que o nome do vetor nada mais é que um ponteiro.
	if(vet == &vet[0])
		printf("O nome do vetor é um ponteiro para a posição 0 dele!\n");
	else
		printf("Teoria refutada!\n");

	return 0;
}
