#include "holberton.h"
/**
 * set_bit - Will set the value of a bit.
 * @n: Variable.
 * @index: Variable
 * Return: 0.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8 - 1)
	{
		return (-1);
	}

	*n = *n | (1 << index);
	return (1);
}
