#include <stdio.h>
#include "holberton.h"
/**
 * main - Will print the fibonacci numbers
 * Return: 0
 */
int main(void)
{
	long i, j, r, q;

	i = 0;
	j = 1;

	for (q = 0; q < 50; q++)
	{
		r = i + j;
		i = j;
		j = r;
		printf("%lu", r);
		if (q == 49)
		{
			putchar('\n');
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
