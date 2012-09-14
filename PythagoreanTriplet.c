#include <stdio.h>


int main (int argc, const char * argv[])
{
int i=1, j=1, k=1, result;

for (i; i<1000; i++)
{
	for (j=1; j<1000; j++)
	{
		k = 1000-i-j;
		if (i*i+j*j == k*k)
		{
			result = i*j*k;
			printf("a = %d, b = %d, c = %d \n", i, j, k);
			printf("Product of the only pythagorean triplet to sum to 1000: %d \n", result);
			
		}
		if (i*i+j*j == k*k)
			break;
	}
	if (i*i+j*j == k*k)
		break;
}
}