#include "holberton.h"
/**
 * print_alphabet_x10 - is a function that will print the alphabet 10 times
 * @void: null
 */
void print_alphabet_x10(void)
{

	char a;
		int f = 0;

		while (f < 10)
		{
			for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}

		_putchar('\n');
		f++;
		}
}
