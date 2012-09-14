#include <stdio.h>
#include <math.h>

long long sumSquares(long long *sumSquare);
long long SquareSums(long long *SquareSum);

int main(int argc, const char * argv[])
{
	long long sumSquare = 0, SquareSum = 0, difference;
	
	sumSquares(&sumSquare);
	SquareSums(&SquareSum);
	
	SquareSum *= SquareSum;
	difference = SquareSum - sumSquare;
	
	printf("The difference between the sum of the squares and the squares of the sums between the number 1-100 is: %lld", difference);
	printf("\n");
	return 0;
}

long long sumSquares(long long *sumSquare)
	{
		long long i = 1;
		long long k;
	for (i; i <=100 ; i++)
		{
	    	k = pow(i, 2);
	    	
	    	*sumSquare += k;
	    	
		}
	}

long long SquareSums(long long *SquareSum)
	{	
		long long i = 1;
		for (i; i <= 100; i++)
		{
			*SquareSum += i;
		}
	}