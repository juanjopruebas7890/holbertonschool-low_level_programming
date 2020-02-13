#include "holberton.h"
/**
 * more_numbers - this function will print almost all the numbersx
 * Return: Always 0
 */
void more_numbers(void)
{
	int c;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c >= 10)
				_putchar(c / 10 + '0');
			_putchar(c % 10 + '0');
					}
		_putchar('\n');
	}
}
