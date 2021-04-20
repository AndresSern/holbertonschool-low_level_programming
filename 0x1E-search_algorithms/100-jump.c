#include "search_algos.h"

/**
 * jump_search - function that searches for a value in a sorted array of
 *                 integers using the Binary search algorithm
 *
 * @array:  is a pointer to the first element of the array to search in
 * @size:   is the number of elements in array
 * @value:  is the value to search for
 *
 * Return:  Must return the index where value is located
 *          If value is not present in array or if array is NULL,
 *          your function must return -1
 */
int jumpSearch(int array[], int x, int n)
{
    // Finding block size to be jumped
    int step = sqrt(n);
 
    // Finding the block where element is
    // present (if it is present)
    int prev = 0;
    while (array[min(step, n)-1] < x)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
 
    // Doing a linear search for x in block
    // beginning with prev.
    while (array[prev] < x)
    {
        prev++;
 
        // If we reached next block or end of
        // arrayay, element is not present.
        if (prev == min(step, n))
            return -1;
    }
    // If element is found
    if (array[prev] == x)
        return prev;
 
    return -1;
}

/*
int jump_search(int *array, size_t size, int value)
{
	size_t low = 0, high = sqrt(size);

	if (array == NULL || size == 0)
		return (-1);
	while (high < size || low < size)
	{
		printf("Value checked array[%li] = [%d]\n", low, array[low]);
		if (value <= array[high] || high > (size - 1))
		{
			printf("Value found between indexes [%li] and [%li]\n",
				low, high);
			while ((array[low] <= value) && (low < size && low <= high))
			{
				printf("Value1 checked array[%li] = [%d]\n", low,
					array[low]);
				if (array[low] == value)
					return (low);
				low++;
			}
			while (array[low] > value && low < size)
			{
				printf("Value checked array[%li] = [%d]\n", low,
					array[low]);
				low++;
			}
			return (-1);
		}
		low = high;
		high = high + sqrt(size);
	}
	return (-1);
}*/
