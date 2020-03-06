#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - allocate requested memory.
 * @old_size: variable 1
 * @new_size: Variable 2
 * @ptr: variable
 * Return: 0
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
	{
		return (ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		ptr = malloc(new_size);
	}
	free(ptr);
	ptr = malloc(new_size);

	return (ptr);
}
