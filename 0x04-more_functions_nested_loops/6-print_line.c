#include "holberton.h"
/**
 * print_line - this function will print n times a '_'
 * @n: variable
 * Return: Always 0
 */
void print_line(int n)
{
	int s;

	if (n > 0)
	{
		for (s = 0; s < n; s++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
		else
			_putchar('\n');
}
