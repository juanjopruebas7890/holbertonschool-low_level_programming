#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocate a memory using malloc.
 * @b: variable 1
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit(98);
	}
	return (p);
}
