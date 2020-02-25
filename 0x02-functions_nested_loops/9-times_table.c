#include "holberton.h"
/**
 * times_table - print the times table.
 * @void: variable
 * Return: j
 */
void times_table(void)
{
	int p;
	int e;
	int s;

	for (p = 0; p <= 9; p++)
	{
		for (e = 0; e <= 9; e++)
		{
			s = p * e;
			if (s < 10 && e != 0)
			{
				_putchar(' ');
				_putchar(s + '0');

			}
			else if (s >= 10)
			{
				_putchar(s / 10 + '0');
				_putchar(s % 10 + '0');
			}
			else
			{
				_putchar(s + '0');
			}
			if (e != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
