#include "holberton.h"
/**
 * print_last_digit - this function will print the last digit of a number
 * @j: variable
 * Return: j
 */
int print_last_digit(int j)
{
	j = j % 10;

	if (j < 0)
	{
		j = -(j);
	}
	_putchar('0' + j);
	return (j);
}

