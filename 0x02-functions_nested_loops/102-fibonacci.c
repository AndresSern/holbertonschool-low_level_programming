#include <stdio.h>

/**
 * main - Entry point
 * Description: Calculates the first 50 Fibonacci numbers
 * Return: Always Zero
 */

int main(void)
{
	long before, after;
	int count = 0;

	before = 1;
	after = 2;
	printf("%ld, ", before);
	printf("%ld, ", after);
		while (count <= 47)
		{
			long fibonnaci;
			fibonnaci = before + after;
			printf("%ld", fibonnaci);
			if (count != 47)
				printf(", ");
			before = after;
			after = fibonnaci;
			count++;
		}
	printf("\n");
	return (0);
}
