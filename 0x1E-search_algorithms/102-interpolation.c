#include "search_algos.h"
/**
 * binary_search - function that searches for a value in a sorted array of 
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

int interpolation_search(int *array, size_t size, int value)
{
	size_t start = 0, end = size - 1;
	size_t division = 0, multiplicacion = 0, resta = 0;
	size_t pos = 0;
	if (array == NULL)
		return (-1);
	while (((start <= (size - 1)) && (end <= (size -1))))
	{
		multiplicacion = (value - array[start]) * (end - start);
		resta = array[end] - array[start];
		division = multiplicacion / resta;
		pos = start + division;
		if ((pos > (size - 1)))
		{
			printf("Value checked array[%zu] is out of range\n", pos);
			return -1;
		}
		printf("Value checked array[%zu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value > array[pos])
			start = pos + 1;
		else
			end = pos - 1;
	}
	printf("Value checked array[%zu] is out of range\n", pos);
	return (-1);
}
