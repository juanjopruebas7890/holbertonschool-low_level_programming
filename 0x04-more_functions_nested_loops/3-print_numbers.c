#include "holberton.h"
/**
 * print_sign - this function will print a sign
 * @n: variable
 * Return: 0
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
_putchar('\n');
}
