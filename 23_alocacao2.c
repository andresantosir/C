#include <stdlib.h>
#include <stdio.h>

// Fun��o principal
int main() {
    // Declara��o e inicia��o do ponteiro.
    // � importante que se inicie o ponteiro sempre apontando-o para NULL caso n�o possua uma
    // posi��o de mem�ria para apont�-lo no momento.
	int * ptr = NULL;
	// Vetor e demais vari�veis
	int vet[5] = {10, 9, 8, 7, 6};
	int n, i;

    // Apresenta��o do programa
	printf(">> Aloca��o Din�mica <<\n");
	printf("- Entre com o tamanho do vetor: ");
	scanf("%d", &n);

    // Alocando posi��o de mem�ria para n inteiros. O valor n � informado pelo usu�rio
    // durante a execu��o do programa.
	ptr = (int *) malloc(n*sizeof(int));

    // Caso a aloca��o tenha sido bem sucedida...
	if(ptr != NULL) {
        // ...percorrer o vetor preenchendo suas posi��es com uma sequ�ncia de 1 at� n
        // e imprimir o valor de cada posi��o.
		for(i = 0; i < n; i++) {
			ptr[i] = i+1;
			printf("Valor: %d\n", ptr[i]);
		}

        // Ap�s percorrer o vetor, liberar o espa�o de mem�ria alocado.
		free(ptr);
	}

    // Apontando o vetor para um novo endere�o de mem�ria: o endere�o de um vetor.
	ptr = vet;

    // Imprimir os elementos do vetor indiretamente via ponteiro
	for(i = 0; i < 5; i++)
		printf("%d ", ptr[i]);

    printf("\n");

    // Comprovando que o nome do vetor nada mais � que um ponteiro.
	if(vet == &vet[0])
		printf("O nome do vetor � um ponteiro para a posi��o 0 dele!\n");
	else
		printf("Teoria refutada!\n");

	return 0;
}
