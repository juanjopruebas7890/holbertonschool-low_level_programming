#include "holberton.h"
/**
 * print_triangle - Print a triangle
 * Description: Draws a triangle with a given value
 * @size: Dimention to print
 * Return: None.
 */
void print_triangle(int size)
{
	int g;
	int t;

	if (size <= 0)
	{
		_putchar('\n');
	}

	for (g = 0; g < size; g++)
	{
		for (t = 0; t < size; t++)
		{
			if (t < size - g - 1)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		_putchar('\n');
	}
}
