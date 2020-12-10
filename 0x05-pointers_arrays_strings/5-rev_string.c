#include "holberton.h"

/**
 * rev_string - This fuction print a striing reverser
 *
 *@s: this is the pointer
 */

void rev_string(char *s)
{
	int a, len;

	char *begin, *end, x;

	for (a = 0; s[a] != '\0'; a++)
	{
	}

	len = a;
	begin = s;
	end = s;
	for (a = 0; a < len - 1; a++)
		end++;
	for (a = 0; a < len / 2; a++)
	{
		x = *end;
		*end = *begin;
		*begin = x;
		begin++;
		end--;
	}
}
