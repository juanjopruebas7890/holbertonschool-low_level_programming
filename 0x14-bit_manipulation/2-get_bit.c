#include "holberton.h"
/**
 * get_bit - Will return the value of an int at a given index.
 * @n: Variable.
 * @index: Variable
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;


	if (index == (sizeof(n) * 8))
	{
		return (-1);
	}

	i = n >> index;

	return (i & 1);
}
