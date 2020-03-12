#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_op_func - Will execute a function.
 * @s: variable.
 * Return: 0
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
	int i = 0;

	while (ops[i].op[0] != s[0])
	{
		i++;
		if (ops[i].op == NULL)
		{
			printf("Error\n");
			exit(99);
		}
	}
	return (ops[i].f);
}
