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
	int t;
	int h;

	for (t = 0; s[t]; t++)
	{
		for (h = 0; accept[h]; h++)
		{
			if (accept[h] == s[t])
				break;
		}
		if (!accept[h])
			break;
	}
	return (t);
}
