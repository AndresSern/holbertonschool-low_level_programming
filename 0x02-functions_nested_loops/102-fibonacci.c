#include <stdio.h>

/**
 * main - Entry point
 * Description: Calculates the first 50 Fibonacci numbers
 * Return: Always Zero
 */

int main(void)
{
	long before, after, fibonnaci;
	int count = 0;

	before = 1;
	after = 2;
	printf("%lu, ", before);
	printf("%lu, ", after);
		while (count <= 47)
		{
			fibonnaci = before + after;
			printf("%lu", fibonnaci);
			if (count != 47)
				printf(", ");
			before = after;
			after = fibonnaci;
			count++;
		}
	printf("\n");
	return (0);
}
