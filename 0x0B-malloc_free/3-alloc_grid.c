#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - function that returns a pointer to a 2 dimensional array of
 *                integers.
 *
 * @width: This is the columns of the array
 * @height: This is the rows of the array
 *
 * Return: Returns a pointer to a 2 dimensional array of integers.
 *         The function should return NULL on failure
 *         If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height) /* 6 columns and 4 rows*/
{
	int j, i;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (i = 0; i < height; i++)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}


	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}

	return (arr);
}
