#include <stdio.h>
#include <stdlib.h>

int main(){

	int *ptr = NULL;
	int n = 10, i;
	ptr = (int*) malloc(sizeof(int)*n);

	if(ptr!=NULL)
	{
		ptr[0] = 2;
		printf("%d\n", ptr[0]);
		*ptr = 3;
		*(ptr+1) = 5;
		for(i = 0; i < 2; i++){
		printf("%d\n", ptr[i]);
		}
	free(ptr);
	}	
return 0;
}
