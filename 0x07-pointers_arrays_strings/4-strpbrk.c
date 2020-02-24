#include "holberton.h"
#include <string.h>
/**
 * _strpbrk - Is the prototype.
 * @s: Is the variable we are working with
 * @accept: Is the second variable we are working with
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int w;
	int k;

	for (w = 0; s[w] != '\0'; w++)
	{
		for (k = 0; accept[k] != '\0'; k++)
		{
			if (s[w] == accept[k])
			{
				return (s + w);
			}
		}
	}
	return (0);
}
