#include "holberton.h"
/**
 * _strlen_recursion - Is the prototype.
 * @s: Is the variable we are working with.
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(++s));
	}
	else
		return (0);
}
