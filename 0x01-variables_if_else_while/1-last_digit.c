#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Greather and Less than 5 or 6, this is he last number of the "n"
* Return: 0 for success
*/
int main(void)
{
	int n;
	int last_di;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_di = n % 10;

	if (last_di > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, last_di);
	}
	else if (last_di == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last_di);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last_di);
	}
	return (0);
}
