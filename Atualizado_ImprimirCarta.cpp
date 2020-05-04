#include <stdio.h>
#include<time.h>
#include<stdlib.h>

int aleatorio (int min, int max)
{
	int aleat;
 //	srand(time(NULL)); //
	aleat = (rand() %max)+min;
	return aleat;
}

int main ()
{
	srand(time(NULL));
	int x, p, i, sair;
	int baralho[52]={1,2,3,4,5,6,7,8,9,10,11,12,13, // baralho [p] //
					 1,2,3,4,5,6,7,8,9,10,11,12,13,
		 	 		 1,2,3,4,5,6,7,8,9,10,11,12,13,
			 		 1,2,3,4,5,6,7,8,9,10,11,12,13};
	struct carta
	{
		int valor;
		char simbolo[4]={'C','E','P','O'};  // simb [x] //
		char letras[4]={'A','J','Q','K'}; // letra [i] //
	}Carta;
	
	
	do
	{
		do
		{
			// "p" é a posição do vetor baratlho. Logo o aleatorio vai gerar um valor da posição do vetor.//
			p = aleatorio (0, 51);
		}
		while(baralho[p]==0); // O laço "do-while" impede que posições já utilizadas rodem novamente no programa // 
		printf ("\n%d\n\n", p);
		// Determina o intervalo de posições para cada naipe. //
				if (p<13)
					x=0;
				if (p>=13 && p<26)
					x=1;
				if (p>=26 && p<39)
					x=2;
				if (p>=39)
					x=3;
		// associa o valor contido na posição "p" do vetor "baralho" ao valor da carta //
			Carta.valor = baralho[p];
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
				printf(" _______\n|%2c%c\t|\n|\t|\n|\t|\n|   %c	|\n|\t|\n|\t|\n|____%2c%c|\n", Carta.letras[i], Carta.simbolo[x], Carta.simbolo[x], Carta.letras[i], Carta.simbolo[x]);	
			}
		// Caso nao se encaixe para esses numeros... //
			else
				printf(" _______\n|%2d%c\t|\n|\t|\n|\t|\n|   %c	|\n|\t|\n|\t|\n|____%2d%c|\n", Carta.valor, Carta.simbolo[x], Carta.simbolo[x], Carta.valor, Carta.simbolo[x]);
		// O valor contido na posição "p" do vetor ao ser utilizada recebe o valor "0" para que o laço o identifique como uma pposição ja usada e o restrinja // 
			baralho[p]=0;
	
		// Apenas para testar o funcionamento do aleatorio //			
		printf("\nAperte '0' para sair\n");
		scanf(" %d", &sair);
	}
	while (sair!=0);
	return 0;
}
