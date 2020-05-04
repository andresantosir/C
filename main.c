#include <stdio.h>
#include "somaMedia.h"

/*
 * ATENÇÃO! A função "main" abaixo possui duas versões: a primeira com o uso de 
 * um registro (struct) convencional e a segunda com o uso de ponteiro para registro.
 * Descomente apenas uma das versões para que o programa rode adequamente. Caso queira
 * testar a outra, comente a ativa no momento e descomente a desejada.
 */

// Função Principal - Versão 1
// Uso de registro (struct) convencional. Acesso aos campos através do operador
/*int main() {
	// Declaração de variáveis
	struct intVet vetor;
	int sm;
	float md;
	int i;

	// Inicialização dos campos do registro
	vetor.tam = 10;
	for(i = 0; i < vetor.tam; i++)
		vetor.vet[i] = i+1;

	// Chamando a função somaMedia. Os parâmetros são o conteúdo do registro "vetor" e os
	// endereços das variáveis "sm" e "md".
	somaMedia(vetor, &sm, &md);

	// Impressão dos valores calculados na tela
	printf("Soma: %d - Média: %f\n", sm, md);

	return 0;
}*/

// Função Principal - Versão 2
// Uso de ponteiro para registro (struct). Acesso aos campos através do operador seta (->).
int main() {
	// Declaração de variáveis
	struct intVet * vetor;
	int sm;
	float md;
	int i;

	// Alocação dinâmica de espaço para o registro
	vetor = (struct intVet *) malloc(sizeof(struct intVet));

	// Inicialização dos campos do registro
	vetor->tam = 10;
	for(i = 0; i < vetor->tam; i++)
		vetor->vet[i] = i+1;

	// Chamando a função somaMedia. Os parâmetros são o conteúdo apontado pelo ponteiro
	// "vetor" e os endereços das variáveis "sm" e "md".
	somaMedia(*vetor, &sm, &md);

	// Impressão dos valores calculados na tela
	printf("Soma: %d - Média: %f\n", sm, md);

	return 0;
}

