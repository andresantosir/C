// Preâmbulo necessário para evitar duplicação do cabeçalho
#ifndef SOMAMEDIA_H
#define SOMAMEDIA_H

// Todo o conteúdo do cabeçalho (includes, structs, enums, unions, assinaturas, etc.) deve
// ser incluído a partir daqui até antes da diretiva "#endif".

// Cabeçalhos necessários
#include <stdio.h>
#include <stdlib.h>

// Registro intVet
struct intVet {
	int vet[10];
	int tam;
};

// Assinaturas das funções
void somaMedia(struct intVet vetor, int * soma, float * media);

#endif