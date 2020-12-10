#include "3-calc.h"
/**
 * get_op_func - function that selects the correct function to perform the
 *               operation asked by the user.
 *
 * @s: This is the input operator
 *
 * Return: This function returns a pointer to the function that corresponds to
 *         the operator given as a parameter. Example: get_op_func("+")
 *         should return a pointer to the function op_add"")
 *         If s does not match any of the 5 expected operators
 *         (+, -, *, /, %),return NULL)
 *
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*ops[i].op == *s)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
