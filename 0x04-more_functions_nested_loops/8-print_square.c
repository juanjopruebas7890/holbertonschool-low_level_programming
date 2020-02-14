#include "holberton.h"
/**
 * print_square - this function will print a square
 * @size: variable
 * Return: Always 0
 */
void print_square(int size)
{
	int u;
	int o;

		for (u = 0; u < size; u++)
		{
			for (o = 1; o <= size; o++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
		if (size <= 0)
		{
			_putchar('\n');
		}


}
