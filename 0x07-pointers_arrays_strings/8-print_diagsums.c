#include "holberton.h"
#include <string.h>
/**
 * print_diagsums - Is the prototype.
 * @a: Is the variable we are working with
 * @size: Is the second variable we are working with
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int p, r;
	unsigned int s = 0, s2 = 0, u = 0;

	for (p = 0; p < size; p++)
	{
		for (r = 0; r < size; r++)
		{
			if (r == p)
			{
				s += *(a + u);
			}
			if (p + r + 1 == size)
			{
				s2 += *(a + u);
			}
			u++;
		}
	}
	printf("%i ", s);
	printf("%i\n", s2);
}
