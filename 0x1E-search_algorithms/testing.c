#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Perform a jump search on a given array.
 *
 * @array: Pointer to beginning of array.
 * @size: Size of the array.
 * @value: Value to search.
 *
 * The jump search algorithm iterates through the given array
 * skipping "blocks" until a block is found that contains the
 * searched value. Then, a linear search is performed.
 *
 * Return: Index of value, -1 if no array or value not found.
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int i = 0, jump;

	if (!array || size == 0)
		return (-1);

	jump = sqrt(size);

	do {
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
		i += jump;
		if (i >= size)
			break;
	} while (value > array[i] && i < size);

	i = i - jump;

	printf("Value found between indexes [%d] and [%d]\n", i, i + jump);
	for (; i < i + jump && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
