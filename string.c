#include <stdio.h>
#include <string.h>

#define TAM 20

int main(){
	char str[] = "Brasil";
	int i;

	printf("1: %s\n", str);

	strcpy(str, "Alo");

	printf("2: %s\n", str);

	for(i = 0; i < TAM; i++)
		printf("%c ", str[i]);

	printf("\n\n - Entre com um nome: ");
	scanf("%s", str);
	printf("%s", str);
	return 0;
}
