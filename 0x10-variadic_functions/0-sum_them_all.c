#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - Sum numbers.
 * @n: variable.
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list v;
	unsigned int i;
	int s = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		s += va_arg(v, int);
	}
	va_end(v);
	return (s);
}
