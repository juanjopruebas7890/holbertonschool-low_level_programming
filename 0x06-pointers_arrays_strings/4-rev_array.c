#include "holberton.h"
/**
 * reverse_array - Is the prototype, reverse an entire array.
 * w: Is the variable we are working with
 * e: Is the second variable we are working with
 * s: Another variable
 * @n: The varible of the main
 * @a: Pointer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int w, e, s;

	for (w = 0, e = n - 1; e >= w; w++, e--)
	{
		s = a[w];
		a[w] = a[e];
		a[e] = s;
	}
	for (w = 0; w < n; w++)
	{
	}
}

