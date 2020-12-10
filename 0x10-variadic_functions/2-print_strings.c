#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
/**
 * print_strings - Print every char of the argument
 * @separator: This is the separator como y espacio
 * @n: This is my entry
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int count;
	char *s;

	if (n <= 0)
	{
		printf("\n");
		return;
	}
	va_start(ap, n);
	for (count = 0; count < n; count++)
	{
		s = va_arg(ap, char *);
		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
		if (separator != NULL && (count + 1) != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
