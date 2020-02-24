#include "holberton.h"
#include <string.h>
/**
 * _strchr - Is the prototype, will return to a pointer form c to s.
 * @s: Is the variable we are working with
 * @c: Is the second variable we are working with
 * p - The variable that I declared..
 * Return: 0
 */
char *_strchr(char *s, char c)
{

	while (s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
		return ('\0');
}
