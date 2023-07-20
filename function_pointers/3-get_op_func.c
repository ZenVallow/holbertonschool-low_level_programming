#include "3-calc.h"
#include <string.h>

/**
 *get_op_func - function who select the correct function to perform a operation
 *
 *@s: char
 *
 *
 * Return: NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	for (i = 0; ops[i].op != NULL; i++)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
	}

	return (NULL);
}
