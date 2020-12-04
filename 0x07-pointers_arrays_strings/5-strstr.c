#include <stdio.h>

/**
 * _strstr - Write a function that locates a substring.
 * @haystack: This is the string
 * @needle: This is a find to locate in the string
 * Return: beginning of the located substring or NULL if is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *a, *c;

	while (*haystack)
	{
		c = haystack;
		a = needle;
		while (*a == *haystack)
		{
			haystack++, a++;
		}
		if (*a == '\0')
			return (c);
		haystack++;
	}
	return (0);
}
