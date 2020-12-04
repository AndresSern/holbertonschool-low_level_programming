#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * array_iterator - This function show the first number matched
 * @size: This is large of my array
 * @array: This is my array
 * @action: This is my function entry
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a
;
	if (size <= 0 || array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}
