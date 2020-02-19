#include "holberton.h"
/**
 * puts_half - is the prototype, prints half of a string.
 *@str: is the variable we are working with
 *Return: 0
 */
void puts_half(char *str)
{
	int k;
	int h;

	for (k = 0; str[k] != '\0'; k++)
	{
	}
	for (h = ((k + 1) / 2); h < k; h++)
	{
		_putchar(str[h]);
	}
	_putchar('\n');
}
