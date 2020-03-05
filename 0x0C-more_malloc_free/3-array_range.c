#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - allocate requested memory.
 * @min: variable 1
 * @max: Variable 2
 * Return: 0
 */
int *array_range(int min, int max)
{
	int *p = NULL;
	int i, r;

	if (min > max)
	{
		return (NULL);
	}

	i = max - min;
	p = malloc((i + 1) * sizeof(int));
	if (p == NULL)
	{
		return (NULL);
	}
	for (r = 0; r <= i; min++, r++)
	{
		p[r] = min;
	}
	return (p);
}
