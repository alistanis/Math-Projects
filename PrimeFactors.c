#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool IsItPrime (int candidate);

int main (int argc, const char * argv[])
{

	long long i = 1; 
	long long factorNumber;
	printf("Please enter an integer to calculate its prime factorization! \n");
	scanf("%lld", &factorNumber);
	
	if (factorNumber == 1)
	{
		printf("1 has no prime factors! \n");
		return 0;
	}

	while (!IsItPrime(factorNumber))
	{
		if (factorNumber % i == 0)
		{
			
			factorNumber /= i;
			if (i > 1)
			{
			printf("%lld * ", i);
			}
			i = 1;
		    
		}
		i++;
	}

	printf("%lld \n", factorNumber);

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