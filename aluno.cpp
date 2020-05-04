#include <stdio.h>
#include <stdlib.h>

	struct {
		int tam;
		int notas[];
	}aluno;

int main (){
	int i;
	float media=0;
	printf("Entre com quantas avaliações ele fez no semestre:\n");
	scanf("%d",&aluno.tam);
	for (i = 0; i < aluno.tam; i ++){
		printf("Entre com a %dª nota do aluno:\n",i+1);
		scanf("%d", &aluno.notas[i]);
	media = media + aluno.notas[i];
	}
	media = media/aluno.tam;
	printf("A média do aluno foi: %f",media);
		
	return 0;
}
