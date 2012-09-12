#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsItPrime ( int candidate );

int main (int argc, const char * argv[])
{
	int i = 1;
	int counter;
	while (counter < 10001)
	{
		
				if (IsItPrime(i))
				{
				counter++;
				printf( "%d: %d \n", counter, i);
				}
				if (i <= 2)
					i+=1;
				else
					i+=2;

			
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