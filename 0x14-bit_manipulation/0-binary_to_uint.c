#include "holberton.h"
/**
 * binary_to_uint - Will convert a binary number to a unsigned int.
 * @b: Variable.
 * Return: current.
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int k;

	if (b == NULL)
	{
		return (0);
	}
	for (i = 0; b[i] != '\0';)
	{
		if (b[i] < '0' || b[i] > '1')
		{
			return (0);
		}
		k <<= 1;
		k = k + b[i] - '0';
		i++;
	}
	return (k);
}
