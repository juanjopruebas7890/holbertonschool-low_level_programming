#include "holberton.h"
/**
 * print_diagonal - this function will print a diagonal line
 * @n: variable
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int w;
	int g;

	for (w = 0; w < n; w++)
	{
		for (g = 1; g <= w; g++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
