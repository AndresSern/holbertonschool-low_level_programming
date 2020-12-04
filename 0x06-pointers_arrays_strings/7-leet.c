#include "holberton.h"

/**
 * leet -This is my function
 * @changed: This is my entry
 *
 * Return: This is my return
 */

char *leet(char *changed)
{
	int i, a;
	char minus[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char mayus[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char numbers[] = {'4', '3', '0', '7', '1', '\0'};

	for (i = 0; changed[i] != '\0'; ++i)
	{
		for (a = 0; a < 5; a++)
		{
			if (changed[i] == minus[a] || changed[i] == mayus[a])
			{
				changed[i] = numbers[a];
			}
		}
	}
	return (changed);
}
