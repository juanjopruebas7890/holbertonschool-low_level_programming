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

	array = malloc(size * sizeof(c));
	for (p = 0; p < size; p++)
	{
		if (size == 0)
		{
			return (NULL);
		}
		array[p] = c;
	}
	return (array);
}
