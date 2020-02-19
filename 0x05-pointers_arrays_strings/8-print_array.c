#include "holberton.h"
/**
 * print_array - is the prototype, prints half of a string.
 *@a: Is the variable we are working with.
 *@n: Is the other variable we are working with.
 *Return: 0
 */
void print_array(int *a, int n)
{
	{
		int t;

		for (t = 0; t < n; t++)
		{
			if (t != n - 1)
			{
				printf("%d, ", a[t]);
			}
			else
			{
				printf("%d", a[t]);
			}
		}
		putchar('\n');
	}
}
