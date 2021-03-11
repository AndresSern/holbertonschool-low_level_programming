#include "holberton.h"

int check_is_palindrome(char *s, int minimum, int high)
{
	if (minimum == high)
		return (1);
	if (s[minimum] != s[high])
		return (0);
	if (minimum < high + 1)
		return (check_is_palindrome(s, minimum + 1, high - 1));
	return (1);
}

/**
 * is_palindrome
 *
 * @s: Pointer that point to a string
 *
 * Return: If is 1 is a palindrome, If is 0 not is a palindrome
 */
int is_palindrome(char *s)
{
	int len = 0;

	for (len = 0; s[len] != '\0'; len++)
		;
	if (len == 0)
		return (1);
	return (check_is_palindrome(s, 0, len - 1));
}

