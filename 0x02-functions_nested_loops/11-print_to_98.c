#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @j: integer
 * Return: void
 */
void print_to_98(int j)
{
	int z;

	if (j > 98)
	{
		for (z = j; z >= 98; z--)
		{
			if (z != 98)
			{
				printf("%i, ", z);
			}
		}
	}
	else if (j < 98)
	{
		for (z = j; z <= 98; z++)
		{
			if (z != 98)
			{
				printf("%i, ", z);
			}
		}
	}
	printf("98\n");
}
