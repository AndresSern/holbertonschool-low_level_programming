#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * array_iterator - function that executes a function given as a parameter on
 *                  each element of an array.
 *
 * @size: This is large of the array
 * @array: This is the input array
 * @action: This is the input function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
