#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Will execute a function.
 * @array: variable.
 * @size: Variable.
 * @action: Variable.
 * Return - 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int p;

	if (array && size && action)
	{
		for (p = 0; p < size; p++)
		{
			(*action)(array[p]);
		}
	}
}
