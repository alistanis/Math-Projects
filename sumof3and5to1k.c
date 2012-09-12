#import <stdio.h>

int main(int argc, const char * argv[])
{
	int i, result;

	for (i = 3; i < 1000; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result+=i;
		}
	}
	printf("%d \n", result);
	return 0;
}