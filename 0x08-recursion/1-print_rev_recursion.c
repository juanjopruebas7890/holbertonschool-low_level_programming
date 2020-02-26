#include "holberton.h"
/**
 * _print_rev_recursion - Is the prototype.
 * @s: Is the variable we are working with.
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
