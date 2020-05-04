#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr;

	ptr = (int *) malloc(sizeof(int));
	
	if(ptr != NULL){
		*ptr = 10;
		printf("Valor: %d\n", *ptr);
		free(ptr);
	}


return 0;
}
