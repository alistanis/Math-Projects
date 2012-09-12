#import <stdio.h>

int main (int argc, const char * argv[])
{
	long long i = 1, current = 2, previous = 1, fib, result = 2, limit = 4000000;
	
	while ((current+previous) < limit)
	{
		fib = current + previous;
		previous = current;
		current = fib;
		if ( fib % 2 == 0)
			result+=fib;
	}
	printf("%lld \n", result);
	return 0;
}

	