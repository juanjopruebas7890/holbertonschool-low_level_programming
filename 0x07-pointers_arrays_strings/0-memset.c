#include "holberton.h"
#include <string.h>
/**
 * _memset - Is the prototype, will fill n bytes of the memory.
 * @s: Is the variable we are working with
 * @b: Is the second variable we are working with
 * @n: Is another variable.
 * r - The variable that I declared.
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
	{
		r[s] = b;
	}
	return (s);
}
