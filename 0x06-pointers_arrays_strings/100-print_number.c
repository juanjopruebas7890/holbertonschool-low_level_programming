#include "holberton.h"
#include <stdlib.h>
/**
 * print_number - is the prototype, will print an integer.
 * @n: Is the variable we are working with
 * Return: 0
 */
void print_number(int n)
{
	unsigned int i = n;

	if (n < 0)
	{
		_putchar('-');
		i *= -1;
	}
	if ((i / 10) > 0)
	{
		print_number(i / 10);
	}
	_putchar((i % 10) + '0');
}
