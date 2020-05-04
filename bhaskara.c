#include <stdio.h>
#include <math.h>

int main()
{
	// Declaração de variáveis
	float a, b, c; // Coeficientes
	float delta, x1, x2; // Valores calculados do delta e raízes

	// Apresentação
	printf(">> Cálculo de Equação de 2º Grau <<\n");

	// Entrada de dados
	printf("Entre com o primeiro coeficiente: ");
	scanf("%f", &a);
	
	// Validação de equação do 2º Grau
	if(a == 0)
	{
		printf("Esta não é uma equação do 2º Grau!\n");
	}
	else // Caso seja uma equação válida
	{
	// Entrada de dados - Continuação
	printf("Entre com o primeiro coeficiente: ");
	scanf("%f", &b);
	
	printf("Entre com o primeiro coeficiente: ");
	scanf("%f", &c);

	// Cálculo do delta
	delta = (b*b)-4*a*c;

	if(delta < 0)
	{
		printf("Não existem raízes reais!\n");
	}
	else if(delta == 0)
	{
		x1 = -b / (2*a);
		printf("Existe apenas uma raíz cujo valor é %f.\n", x1);
	}
	else
	{
		x1 = -b + sqrt(delta) / (2*a);
		x2 = -b - sqrt(delta) / (2*a);

		printf("Existem duas raízes com valores %f e %f.\n", x1, x2);
	}
	return 0
	
