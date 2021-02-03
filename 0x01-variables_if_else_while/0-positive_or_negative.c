#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Positive or negative random
* Return: 0 for success
*/
int main(void)
{
	int number_random;

	srand(time(0));
	number_random = rand() - RAND_MAX / 2;

	if (number_random > 0)
	{
		printf("%d is positive\n", number_random);
	}
	if (number_random == 0)
	{
		printf("%d is zero\n", number_random);
	}
	if (number_random < 0)
	{
		printf("%d is negative\n", number_random);
	}

	return (0);
}
