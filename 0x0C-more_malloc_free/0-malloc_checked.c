#include "holberton.h"
#include <stdlib.h>
#include <limits.h>
/**
 * malloc_checked - allocate a memory using malloc.
 * @b: variable 1
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p = NULL;

	p = malloc(b);
	if (p == NULL || p == 0)
	{
		exit (98);
	}
	return (p);
}
