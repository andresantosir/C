#include <stdio.h>
#include<time.h>
#include<stdlib.h>
struct carta
	{
		int valor;
		char simbolo[4]={'C','E','P','O'};  // simb [x] //
		char letras[4]={'A','J','Q','K'}; // letra [i] //
	}Carta;
	
struct jogador
	{
  		int pontos; 					 //SOMATORIO DE PONTOS PARA CADA JOGADOR //
  		int qntCartas;  				// QUANTIDADE DE CARTAS NA PILHA  //
  		struct carta*cartas[12]; 		// *CARTAS[] CORRESPONDE A QUAIS CARTAS ESTAO CONTIDAS NA PILHA (ARMAZENANDO ASSIM AS CARTAS A SEREM IMPRESSAS QUANDO FOR EMPILHAR)//
  	}jMaquina, jHumano;
  
  	struct jogo
  	{
  		struct carta*baralho[52]; // *baralho [52] aponta para que? CARTA //
  		struct jHumano;
  		struct jMaquina;
  	}

int aleatorio (int min, int max)
{
	int aleat;
	aleat = (rand() %max)+min;
	return aleat;
}

void carta ()
{
	srand(time(NULL));
	int x, p, i;
	int baral[52]={1,2,3,4,5,6,7,8,9,10,11,12,13, // baral[p] //
					 1,2,3,4,5,6,7,8,9,10,11,12,13,
		 	 		 1,2,3,4,5,6,7,8,9,10,11,12,13,
			 		 1,2,3,4,5,6,7,8,9,10,11,12,13};
	
	
	// O laço "do-while" impede que posições já utilizadas rodem novamente no programa // 
	do
	{
	p = aleatorio (0, 51); // "p" é a posição do vetor baral. Logo o aleatorio vai gerar um valor da posição do vetor.//
	}
	while(baral[p]==0); 
		
	// Determina o intervalo de posições para cada naipe. //
	if (p<13)
		x=0;
	if (p>=13 && p<26)
		x=1;
	if (p>=26 && p<39)
		x=2;
	if (p>=39)
		x=3;
	
	
	Carta.valor = baral[p]; // associa o valor contido na posição "p" do vetor "baral" ao valor da carta //
	
	// Substitui os valores numericos para letras no caso de 1(ÁS), 11(VALETE), 12(DAMA) E 13(REI) //		
	if (Carta.valor>=11 || Carta.valor==1)
	{
		if(Carta.valor==1) 
			i=0;
		if (Carta.valor==11)
			i=1;
		if(Carta.valor==12)
			i=2;			
		if(Carta.valor==13)
			i=3;
	
		printf ("CARTA: %c%c\n\n", Carta.letras[i], Carta.simbolo[x]);				
	}	
	
	// Caso nao se encaixe para esses numeros... //
	else
		printf("CARTA: %d%c\n\n", Carta.valor, Carta.simbolo[x]);
						
	baral[p]=0; // O valor contido na posição "p" do vetor ao ser utilizada recebe o valor "0" para que o laço o identifique como uma pposição ja usada e a restrinja //  
}

int main ()
{
	char resp;
	//########### DESENVOLVIMENTO DO PROGRAMA ##########//
	
	jHumano.pontos=0;
	carta(); //EXIBE CARTA //
	jHumano.qntCartas++ // NUMERO DE CARTAS NA PILHA //
	// ###	CHAMA O VALOR DA CARTA //
 	// ###	jHumano.pontos+=VALOR DA CARTA //
 	printf ("Jogador: %d pontos", jHumano.pontos ); // DIVULGA RESULTADO //
 	printf ("Deseja mais uma carta? (S/N)");
 	scanf (" %c", &resp);
 	if (resp='s' || resp='S')
 	{
 	jHumano.qntCartas++ // TODA VEZ QUE RESPONDER POSITIVO PRA CAVAR CARTA, jHumano.qntCartas ACRESCE 1 //
 	// ###	FAZ A RECURSIVA DE LINHA 86-90, LEMBRANDO DE EXIBIR A CARTA EMPILHADA //
 	}
 	else 
 		break;
 		
 	
	jMaquina.pontos=0;
 	carta(); //EXIBE CARTA //
	jMaquina.qntCartas=1 // NUMERO DE CARTAS NA PILHA //
	// ###	CHAMA O VALOR DA CARTA //
 	// ###	jMaquina.pontos+=VALOR DA CARTA //
 	break;
 	
 	// lembrar de colocar um contador de vezes jogada para cada jogador // 

	// CASOS DE ENCERRAMENTO:   jHumano.pontos ou jMaquina.pontos forem >= 21.   //
	//							jHumano responder que nao deseja mais uma carta. //
							
	// constituir um laço de repetição para que fique alternando entre a vez da maquina e do usuario baseado no numero de cartas de cada um (maximo de 12)//
	return 0;
}
	
