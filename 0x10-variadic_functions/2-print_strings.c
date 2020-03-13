#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - Sum numbers.
 * @separator: variable.
 * @n: Varaible
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list lista;
	unsigned int i;
	char *p;

	if (separator == NULL)
	{
		return;
	}

	va_start(lista, n);

	for (i = 0; i < n; i++)
	{
		p = va_arg(lista, char *);
		if (p == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", p);
		}
		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(lista);
}
