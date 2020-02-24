#include "holberton.h"
#include <string.h>
/**
 * _strspn - Is the prototype.
 * @s: Is the variable we are working with
 * @accept: Is the second variable we are working with
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int v;
	int p;

	for (v = 0; s[v]; v++)
	{
		for (p = 0; p < 5; p++)
		{
			if (accept[p] == s[v])
				break;
		}
		k = k - 1;
	}
	return (p);
}
