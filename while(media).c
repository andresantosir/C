#include <stdio.h>


int main()
{
	
int cnt = 1, numero = 0;
	
float media = 0;
	
	
while(cnt <= 10)
	{
		
printf("Entre com o valor da %dª nota: ", cnt);
		
scanf("%d", &numero);
		cnt += 1; // <------- Isso é a mesma coisa de cnt = cnt + 1 e cnt++
		media = media + numero; // Acumulador
	
}
	
media /= 10; // media=media/10;
	
printf("A média das notas foram: %f\n", media );
return 0;
}

