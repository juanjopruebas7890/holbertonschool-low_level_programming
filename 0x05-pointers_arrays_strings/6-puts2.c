#include"holberton.h"
/**
 * puts2 - is the prototype.
 *@str: is the variable we are working with
 *Return: 0
 */
void puts2(char *str)
{
	int d = 0;

	while (str[d] != '\0')
	{
		if (d % 2 == 0)
		{
			_putchar(str[d]);
		}
		d++;
	}
	_putchar(10);
}
