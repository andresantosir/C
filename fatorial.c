#include <stdio.h>

	

long fatorial(int n)

	{
	
if(n==0)
	return 1;
	
return n*fatorial(n-1);
	
}


int main ()
{

printf("%ld", fatorial(5));

return 0;

}
