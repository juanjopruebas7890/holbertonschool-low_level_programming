#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Is the prototype.
 * @str: Is tha variable.
 * Return: 0
 */

char *_strdup(char *str)
{
	int p;
	int h;
	char *r;

	if (str == NULL)
	{
		return (NULL);
	}

	for (p = 0; str[p]; p++)
	{
	}

	p++;

	r = malloc(sizeof(str) * p);

	if (r == NULL)
	{
		return (NULL);
	}

	for (h = 0; h < p; h++)
	{
		r[h] = str[h];
	}

	return (r);
}
