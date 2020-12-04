#include "function_pointers.h"

/**
 * print_name - This print the name
 * @name: THis is the name entry
 * @f: This is my function of entry and print the parrafo
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
