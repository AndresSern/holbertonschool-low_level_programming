#include "holberton.h"

/**
 * print_diagsums - print the sum the diognals of a square matrix of integer
 *
 * @a: This is the array to sum
 * @size: This is the length of the array
 */

void print_diagsums(int *a, int size)
{
	int ascedent, descendet, i, sumAscedent, sumDescedent;

	sumAscedent = sumDescedent = 0;
	ascedent = 0;
	descendet = size - 1;
	for (i = 0; i < size; i++)
	{
		sumAscedent += *(a + i * size + ascedent);
		sumDescedent += *(a + i * size + descendet);
		ascedent += 1;
		descendet -= 1;
	}
	printf("%d, %d\n", sumAscedent, sumDescedent);
}
