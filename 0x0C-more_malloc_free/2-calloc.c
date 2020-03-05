#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - allocate requested memory.
 * @nmemb: variable 1
 * @size: Variable 2
 * Return: 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p = NULL;
	unsigned int z;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	p = malloc(size * nmemb);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (z = 0; z < (size * nmemb); z++)
	{
		p[z] = 0;
	}
	return (p);
}
