#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsItPrime ( int candidate );

int main (int argc, const char * argv[])
{
	int i;

	for (i = 1; i <= 500000000; i+=2)
	{
		if (IsItPrime(i))
			printf( "%d \n", i);

	}
	printf( "All the primes from 1-%d.", i - 2);
	return 0;
}

bool IsItPrime(int candidate)
{
	int i, last;
	if (candidate < 2)
		return false;
	else
	{
		last = sqrt(candidate);

		for (i = 2; i <= last; i++)
		{
			if((candidate % i) == 0)
				return false;
		}
	}
	return true;
}
