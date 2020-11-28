#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
* main - Greather and Less than 5 or 6
* Return: 0 for success
*/
int main(void)
{
	int number_random;
	int last_digit;

	srand(time(0));
	number_random = rand() - RAND_MAX / 2;
	last_digit = number_random % 10;

	if (last_digit > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", number_random, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", number_random, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", number_random, last_digit);
	}

	return (0);
}
