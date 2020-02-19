#include "holberton.h"
/**
 * _strcpy - is the prototype, makes a copy.
 * @src: Is the variable we are working with
 * @dest: Is the second variable we are working with
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n] != '\0'; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = src[n];
	return (dest);
}
