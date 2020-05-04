#include <stdio.h>

int main()
{


	// Declaração de Variáveis
	int n, cnt;

		
	// Apresentação do programa
	printf(">> Sequência numérica <<\n");


	// Laço para leitura do valor
	do
		{
			printf("Entre com um número inteiro positivo: ");
			scanf("%d", &n);

				// Mensagem de erro			
				if(n < 1)
				printf("Número inválido\n");

		} while(n < 1);
	
	// Imprimir a sequência
	for(cnt = 1; cnt <= n; cnt++)  // ( inicialização de variável ; condição ; incremento )
	{
		printf("%d ", cnt);
	
	// Por questão de formatação 
	printf("\n");
	}	
	return 0;
	

	
}
