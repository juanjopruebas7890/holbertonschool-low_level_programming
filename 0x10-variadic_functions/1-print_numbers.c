#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - Will print the numbers passed to it.
 * @n: variable.
 * @separator: Variable.
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list v;
	unsigned int i;

	if (separator == NULL)
	{
		return;
	}

	va_start(v, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(v, int));
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(v);
}
