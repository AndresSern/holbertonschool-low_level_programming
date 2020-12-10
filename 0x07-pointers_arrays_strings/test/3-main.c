#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n, i;
	char *strtext = "129th";
        char *cset = "1234567890";
    n = _strspn(s, f);
    printf("%u\n", n);

	 i = _strspn (strtext,cset);
	printf("%u",i);
    return (0);
}
