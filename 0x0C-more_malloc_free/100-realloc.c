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
	void *ptr;
	unsigned int i = 0;

	if (new_size == old_size)
	{
		return (ptr);
	}

	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr = malloc(new_size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	if (ptr != NULL)
		for (i = 0; i < old_size && i < new_size; i++)
			*((char *)ptr + i) = *((char *)ptr + i);

	free(ptr);
	return (ptr);
}

