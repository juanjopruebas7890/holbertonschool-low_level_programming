#include "function_pointers.h"
#include <stdio.h>
#include <stdbool.h>
/**
 * int_index - Will execute a function.
 * @array: variable.
 * @size: Variable.
 * @cmp: Variable.
 * Return: 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	if (array && size && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
