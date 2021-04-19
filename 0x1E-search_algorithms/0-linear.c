#include "search_algos.h"

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;
	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (value == array[i])
			return (i);
		printf("Value checked array[%zu] = [%d]\n", i, array[i]);
	}
	return (-1);
}
