#include "holberton.h"
/**
 *swap_int - Entry point
 *
 *@a: It will give a certain value
 *@b: It will give a different value than a
 *Return: 0
 */
void swap_int (int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
