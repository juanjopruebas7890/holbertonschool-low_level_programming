#include "holberton.h"
#include <string.h>
/**
 * print_chessboard - Is the prototype.
 * @a: Is the variable we are working with
 * @: Is the second variable we are working with
 * Return: 0
 */
void print_chessboard(char (*a)[8])
{
	int r;
	int z;

	for (r = 0; r < 8; r++)
	{
		for (z = 0; z < 8; z++)
		{
			_putchar (a[r][z]);
		}
	_putchar ('\n');
	}
}
