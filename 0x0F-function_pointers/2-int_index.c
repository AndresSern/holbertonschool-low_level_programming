#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - This function show the first number matched
 * @size: This is large of my array
 * @array: This is my array
 * @cmp: This is my function entry
 *
 * Return: This return the index position o -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if ((cmp(array[a])) == 1)
		{
			return (a);
		}
	}
	return (-1);
}
