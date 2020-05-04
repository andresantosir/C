// Incluir o cabeçalho
#include "somaMedia.h"

// -- Função "somaMedia" --
// Calcula o valor da soma e da média dos elementos de um vetor.
void somaMedia(struct intVet vetor, int * soma, float * media) {
	// Declaração de variáveis
	int i;

	// Inicializando o conteúdo apontado pelo ponteiro "soma" com zero.
	*soma = 0;

	// Laço para percorrimento do vetor
	for(i = 0; i < vetor.tam; i++) 
		// Soma dos elementos do vetor
		*soma += vetor.vet[i]; // *soma = *soma + vet[i];
	
	// Com a soma realizada, basta realizar o cálculo da média.
	// Colocamos um cast para transformar o valor de "vetor.tam" de int para float.
	// Caso isto não fosse realizado, ocorreria uma divisão de inteiros e a parte
	// decimal seria perdida.
	*media = *soma / (float) vetor.tam;
}