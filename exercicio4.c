#include<stdio.h>

int main()
{
	int vet1[100];
	int vet2[100];
	int vetprod[100];
	int soma, n, i=1;
	//Apresentação do programa.
	printf("Este programa realiza o produto interno entre dois vetores baseado nos números informados pelo usuário.\n");
	// Entrada de dados do usuário + validação do tamanho do vetor.
	do{
		printf("Escolha o tamanho do seu vetor que seja maior que 1 e menor que 100.\n");
		scanf("%d",&n);
	}while(n<1,n>100);
	//Entrada dos dados no primeiro vetor.
	for(i=1;i<=n;i++){
		printf("Entre com o %dº valor do seu primeiro vetor: \n",i);
		scanf("%d", &vet1[i]);
	}
	//Entrada dos dados no segundo vetor.
	for(i=1;i<=n;i++){
		printf("Entre com o %dº valor do seu segundo vetor: \n",i);
		scanf("%d", &vet2[i]);
	}
	//Realizando o produto entre os dois vetores.
	soma=0;
	for(i=1;i<=n;i++){
		vetprod[i]=vet1[i]*vet2[i];
		soma=soma+vetprod[i];
	}
	//Mostrando o vetor com os produtos internos realizados.
	for(i=1;i<=n;i++){
		printf("O produto entre os vetores na %d posição é: %d\n",i, vetprod[i]);
	}
	//Mostrando o valor da soma dos produtos internos dos vetores ao usuário.
	printf("A soma dos produtos internos entre os vetores foi: %d", soma);
return 0;
}
