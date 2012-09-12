#import <stdio.h>

long long calculateFactorial (long long numberToCalculate);

int main (int argc, const char * argv[])
{
	long long input;
	printf("Please enter an integer between 1-20 to calculate its factorial: ");
	scanf("%lld", &input);
	long long x = calculateFactorial(input);
	printf("%lld \n", x);
}

long long calculateFactorial (long long numberToCalculate)
{
	long long i; 
	long long temporary = 1;
	long long counter = 1;
	long long previous = 1;

	printf("Facorial for number %lld: \n", numberToCalculate);
	for (i=numberToCalculate; i > 1; i--)
		{
			previous = temporary;
			temporary = i * temporary;

		
		if (counter > 1)
		{
		printf("%lld: %lld * %lld = ", counter - 1, previous, i);
		printf("%lld \n", temporary);
		}
		counter++;
	}
	printf("Final factorial: ");
	return temporary;
}
