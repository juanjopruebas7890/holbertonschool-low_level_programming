#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - Is the prototype.
 * @size: Is the variable
 * @c: Is the variable
 * Return: 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int p;
	char *array;

	if (size == 0)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(c));
	if (array == NULL)
	{
		return (NULL);
	}
	for (p = 0; p < size; p++)
	{
		array[p] = c;
	}
	return (array);
}
