#include <stdlib.h>
#include <stdio.h>
int main ()
{	
	char nome [15];
	char resp;
	printf ("\n\t\t\t BEM VINDO AO JOGO 21\n");
	printf ("\nDeseja acessar as instrucoes? (S/N) ");
	scanf (" %c", &resp);
	if (resp=='S' || resp=='s')
	{	
		printf ("\n>>>>>>>>:>>> INSTRUCOES <<<<<<<<<<<\n\n");
    	printf("\tObjetivo:\n\n");
    	printf("Atingir 21 pontos ou obter mais pontos do que o adversario,mas sem ultrapassar os 21.\n\n");
    	printf("\tPontuacao:\n\n");
    	printf(" -  2 a 10 = pontuacao correspondente ao seu valor nominal.\n");
   		printf(" -    A    = 1  ponto.\n");
    	printf(" - K, Q, J = 10 pontos.\n\n");
    	printf("\tLegenda:\n\n O -> Ouro\n E -> Espada\n C -> Copas\n P -> Paus\n");
    	printf ("\n\nDigite qualquer tecla para fechar as instrucoes.\n\n");
    	getchar(); // ### ESPERAR USUARIO TECLAR ALGO PARA PROSSEGUIR, ERRRO! //
     	system("cls");
    	printf ("\n\t\t\t BEM VINDO AO JOGO 21\n");
   	}
   	printf ("\n INICIO DO JOGO \n ");
   
   	printf ("\n- Digite o nome do usuario: ");
   	scanf (" %s", nome); // poderia ser 'gets' caso deseje pegar mais de uma palavra//
  
	return 0;
}
