#include <stdio.h>
#include <math.h>

int main()

{

	float a, b;	

	printf("Entre com dois operandos inteiros: ");
	scanf("%f %f", &a, &b);

	float adicao, sub, mult, div;
	int o;

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
		printf("O resultado da soma foi: %f\n", adicao);
		break;
		case 2:
		sub=a-b;
		printf("O resultado da subtração foi: %f\n", sub);
		break;	
		case 3:
		mult=a*b;
		printf("O resultado do produto foi: %f\n", mult);
		break;
		case 4:
		div=a/b;
		printf("O resultado da divisão foi: %f\n", div);
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
		
		


