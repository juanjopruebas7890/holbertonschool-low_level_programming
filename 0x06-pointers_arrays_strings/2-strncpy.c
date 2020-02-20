#include "holberton.h"
/**
 * _strncpy - Is the prototype, copies strings.
 * @src: Is the variable we are working with
 * @dest: Is the second variable we are working with
 * @n: The variable that the main will assign
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; a < n && src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	for ( ; a < n; a++)
	{
		dest[a] = '\0';
	}
	return (dest);
}
