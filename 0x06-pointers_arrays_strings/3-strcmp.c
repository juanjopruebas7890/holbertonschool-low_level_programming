#include "holberton.h"
/**
 * _strcmp - Is the prototype, compares two strings.
 * @s1: Is the variable we are working with
 * @s2: Is the second variable we are working with
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int f;

	for (f = 0; s1[f] != '\0'; f++)
	{
	}
	for (f = 0; s2[f] != '\0'; f++)
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
	return (0);
}
