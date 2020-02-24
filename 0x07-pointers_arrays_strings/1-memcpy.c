#include "holberton.h"
#include <string.h>
/**
 * _memcpy - Is the prototype, will copy n bytes form src to dest.
 * @dest: Is the variable we are working with
 * @src: Is the second variable we are working with
 * @n: Is another variable.
 * e - The variable that I declared.
 * q - Other variable I declared.
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int e;
	int q = 0;

	for (e = 0; e < n; e++)
	{
		dest[q] = src[e];
		q++;
	}
	return (dest);
}
