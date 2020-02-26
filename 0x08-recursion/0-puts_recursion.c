#include "holberton.h"
#include <string.h>
/**
 * _puts_recursion - Is the prototype.
 * @s: Is the variable we are working with
 * Return: 0
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
	_putchar('\n');
	return;
	}
}
