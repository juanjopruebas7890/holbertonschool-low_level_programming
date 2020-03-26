#include "holberton.h"
/**
 * print_binary - Will print a binary number.
 * @n: Variable.
 * Return: 0.
 */
void print_binary(unsigned long int n)
{
	unsigned int i;
	int y;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (i = n, y = 0; (i >>= 1) > 0; y++)
		;

	for (; y >= 0; y--)
	{
		if ((n >> y) & 1)
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
}
