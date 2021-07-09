#include "search_algos.h"

int recursion(int *array, size_t low, size_t high, int value);
void printArray(int *array, size_t mid, size_t high);

/**
 * advanced_binary - function that searches for a value in a sorted array of
 *                  integers using the Exponential search algorithm
 *
 * @array:  is a pointer to the first element of the array to search in
 * @size:   is the number of elements in array
 * @value:  is the value to search for
 *
 * Return:  Must return the index where value is located
 *          If value is not present in array or if array is NULL,
 *          your function must return -1
 */


int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (recursion(array, 0, size - 1, value));
}

/**
 * recursion - Function that search a index with an array
 *
 * @array:  is a pointer to the first element of the array to search in
 * @low:   is the number lower of index in the array
 * @high:  Is the number of index bigger in the array
 * @value:  is the value to search for
 * Return:  Must return the index where value is located
 *          If value is not present in array or if array is NULL,
 *          your function must return -1
 */
int recursion(int *array, size_t low, size_t high, int value)
{

	if (low <= high)
	{
		size_t mid;

		printArray(array, low, high);
		mid = (high + low) / 2;
		if (array[mid] == value && array[mid - 1] != value)
		{
			return (mid);
		}
		if (array[mid] < value)
			return (recursion(array, mid + 1, high, value));

		return (recursion(array, low, mid, value));
	}
	return (-1);
}
/**
 * printArray - function that print an array
 *
 * @array:  is a pointer to the first element of the array to search in
 * @mid:   is the number lower of index in the array
 * @high:  Is the number of index bigger in the array
 *
 */
void printArray(int *array, size_t mid, size_t high)
{
	size_t i = 0;

	for (i = mid; i <= high; i++)
	{
		if (i == (mid))
			printf("Searching in array: ");
		printf("%d", array[i]);

		if (i < high)
			printf(", ");

		if (i == (high))
			printf("\n");
	}
}
