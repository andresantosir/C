#include <stdio.h>
	
int main() {
	int vt, pv;
	float pc;

	printf("Entre com um valor inteiro positivo: \n");
	scanf("%d, &vt");
	printf("Entre com outro valor inteiro positivo: \n");
	scanf("%d, &pv");
	
pc = (pv*100)/vt;
	printf("Parte do valor total eh: %f.\n", pc);

return 0;
}

