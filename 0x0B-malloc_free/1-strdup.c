#include <stdlib.h>
#include "holberton.h"
/**
 * _strdup - Is the prototype.
 * @str: Is tha variable.
 * Return: 0
 */
char *_strdup(char *str)
{
	int p, h;
	char *r;

	for (p = 0; str[p]; p++)
	{
	}

	r = malloc(p * sizeof(str));
	if (str == NULL)
	{
		return (NULL);
	}
	for (h = 0; h < p; h++)
	{
		r[h] = str[p];
	}
	if (p == 0)
	{
		return (NULL);
	}
	return (str);
}
