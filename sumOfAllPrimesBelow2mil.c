#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsItPrime ( int candidate );

int main (int argc, const char * argv[])
{
	int i = 1;
	int counter;
	long long sum = 0;
	while (i <= 2000000)
	{
		
				if (IsItPrime(i))
				{
				sum+=i;
				}
				if (i <= 2)
					i+=1;
				else
					i+=2;
	}
	printf( "Sume of all the primes before 2 million: %lld. \n", sum);
	return 0;
}

bool IsItPrime(int candidate)
{
	int i, last;
	if (candidate < 2)
		return false;
	else
	{
		last = (int)sqrt(candidate);

		for (i = 2; i <= last; i++)
		{
			if((candidate % i) == 0)
				return false;
		}
	}
	return true;
}