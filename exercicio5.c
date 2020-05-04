#include<stdio.h>

int main(){
	
	int veta[100];
	int vetb[100];
	int temp[100];
	int i, n;

	do{
	printf("Entre com o tamanho do vetor desejado maior que 1 e menor que 100: \n");
	scanf("%d", n);
	}while (n>1, n<100);
	
	for(i=1;i>=n; i++)
	printf("Entre com o %d numero do vetor: \n", i);
	scanf("%d", &veta[i]);

}
