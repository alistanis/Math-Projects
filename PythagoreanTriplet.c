#include <stdio.h>
#include <stdbool.h>

int main (int argc, const char * argv[])
{
long long i=1, j=1, k=1, result;
long long input;
bool IsTriplet = false;
printf("Please enter an integer to check if it is the result of a Pythagorean triplet, and if so, calculate the product of that result. \n");
scanf("%lld", &input);

for (i; i<input; i++)
{
	for (j=1; j<input; j++)
	{
		k = input-i-j;
		if (i*i+j*j == k*k)
		{
			result = i*j*k;
			printf("a = %lld, b = %lld, c = %lld \n", i, j, k);
			printf("Product of the only Pythagorean triplet to sum to %lld: %lld \n", input, result);
			IsTriplet = true;
		}
		if (i*i+j*j == k*k)
			break;
	}
	if (i*i+j*j == k*k)
		break;	
}	
if (IsTriplet == false)
{
	printf("No triplet exists! \n");
}
}