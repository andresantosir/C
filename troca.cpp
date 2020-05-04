#include <stdio.h>

void troca(int *x, int *y){
	int aux=*x;
	*x=*y;
	*y=aux;	
}
int main(){
	int a=15, b=50;
	
	printf("Antes da troca: a = \"%d\" e b = \"%d\".\n", a, b);	
	troca(&a,&b);
	printf("Depois da troca: a = \"%d\" e b = \"%d\".\n", a, b);	
	printf("FLW");
	return 0;
}
