#include "holberton.h"
/**
 * print_number - Prints an integer.
 * Description: Prints integer only with putchar.
 * @n: The integer to be printed.
 * Return: none.
 */
void print_number(int n)
{
	unsigned int p = n;

	if (n < 0)
	{
		_putchar('-');
		p = -p;
	}

	if ((p / 10) > 0)
	{
		print_number(p / 10);
	}

	_putchar((p % 10) + '0');
}
