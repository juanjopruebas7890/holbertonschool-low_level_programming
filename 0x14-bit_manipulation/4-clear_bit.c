#include "holberton.h"
/**
 * clear_bit - Will clear a bit.
 * @n: Variable.
 * @index: variable
 * Return: 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	*n = *n & ~(1 << index);
	return (1);
}
