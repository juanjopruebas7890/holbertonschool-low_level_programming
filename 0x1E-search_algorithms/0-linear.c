#include "search_algos.h"

/**
 * linear_search - will search for a value using linear search
 * @array: variable.
 * @size: size of the array
 * @value: the value that is going to be searched
 * Return: -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}

	}
	return (-1);
}
