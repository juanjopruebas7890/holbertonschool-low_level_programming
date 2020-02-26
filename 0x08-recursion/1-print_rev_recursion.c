#include "holberton.h"
#include <string.h>
/**
 * _print_rev_recursion - Is the prototype.
 * @s: Is the variable we are working with
 * Return: 0
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
