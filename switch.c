#include <stdio.h>
#include <math.h>

int main()

{

	int a, b;	

	printf("Entre com dois operandos inteiros: ");
	scanf("%d %d", &a, &b);

	int o, adicao, sub, mult, div;

	printf("Entre com um operador que você deseja de acordo com os números abaixo: \n");
	printf("1 -> + \n");
	printf("2 -> - \n");
	printf("3 -> * \n");
	printf("4 -> / \n");
	scanf("%d" , &o);
	switch (o)
		{
		case 1:
		adicao=a+b;
		printf("O resultado da soma foi: %d\n", adicao);
		break;
		case 2:
		sub=a-b;
		printf("O resultado da subtração foi: %d\n", sub);
		break;	
		case 3:
		mult=a*b;
		printf("O resultado do produto foi: %d\n", mult);
		break;
		case 4:
		div=a/b;
		printf("O resultado da divisão foi: %d\n", div);
		if(b == 0)
		{
			printf("Denominador igual a zero! Operação inválida!\n");
			return 0;
		}
		break;
		default:
		printf("O operador informado não é válido.\n");
		}
return 0;
}
		
		


