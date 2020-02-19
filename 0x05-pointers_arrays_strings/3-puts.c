#include "holberton.h"

/**
 * _puts - Is going to print a string
 *@str: Is the variable we are working with
 *
 */
void _puts(char *str)
{
	int x;

	for (x = 0; *(str + x) != '\0'; x++)
	{
		_putchar(str[x]);
	}
	_putchar('\n');
}
