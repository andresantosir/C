#include <stdio.h>

	long fatorial(int n)

	{
	if(n==0)
	return 1;
	return n*fatorial(n-1);
	}
int main ()
{
printf("%ld\n", fatorial(3));
return 0;
}
