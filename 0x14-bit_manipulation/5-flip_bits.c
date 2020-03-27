#include "holberton.h"
/**
 * flip_bits - Will return the number of bits you need to get to one number.
 * @n: Variable.
 * @m: Variable
 * Return: 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int p;

	i = n ^ m;

	for (p = 0; i; i >>= 1)
	{
		if (i & 1)
		{
			p++;
		}
	}
	return (p);
}
