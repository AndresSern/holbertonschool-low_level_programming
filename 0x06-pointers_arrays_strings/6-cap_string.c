#include "holberton.h"

/**
 * cap_string - This is my function capatilize
 * @entry: This is my string
 *
 * Return: This is my result
 */
char *cap_string(char *entry)
{
	int conversion, a, b;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (a = 0; entry[a] != '\0'; a++)
	{
		if (entry[a] >= 'a' && entry[a] <= 'z')
		{
			entry[a] =  entry[a] - conversion;
		}
		conversion = 0;
		for (b = 0; chars[b] != '\0'; b++)
		{
			if (chars[b] == entry[a])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (entry);
}
