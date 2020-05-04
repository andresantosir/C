#include <stdio.h>

void contdec(int n)
{
	if(n>0){
		printf(" %d", n);
		contdec(n-1);
	}
	
}

int main(){
	int i;
	for(i = 0; i < 11; i++){
		contdec(i);
		printf("\n");
	}	
return 0;
}
