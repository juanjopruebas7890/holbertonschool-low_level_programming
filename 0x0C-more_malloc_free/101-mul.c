#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - will multiply two numbers
 * @ptr: variable
 * @old_size: variable
 * @new_size: variable
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}
	else
	{
		if (old_size == new_size)
		{
			return (ptr);
		}
		if (ptr == NULL)
		{
			ptr = malloc(new_size);
			return (ptr);
		}
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}
	return (ptr);
}
