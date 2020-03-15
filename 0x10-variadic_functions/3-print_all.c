#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *caracter - It prints character of list
 *@lista: variable
 */
void caracter(va_list lista)
{
	printf("%c", va_arg(lista, int));
}
/**
 *entero - It prints an int of a list
 *@lista: Variable
 */
void entero(va_list lista)
{
	printf("%d", va_arg(lista, int));
}
/**
 *flotante - the outcome is a float of list
 *@lista: variable
 */
void flotante(va_list lista)
{
	printf("%f", va_arg(lista, double));
}
/**
 *charpun - It prints a pointer with a char
 *@lista: variable
 */
void charpun(va_list lista)
{
	char *punt;

	punt = va_arg(lista, char *);
	if (!punt)
	{
		punt = "(nil)";
	}
	printf("%s", punt);
}
/**
 * print_all - print the words
 * @format: Variable
 * struct est  - Is the structure
 */
void print_all(const char * const format, ...)
{
	char *comit = "";
	unsigned int i, j;
	va_list list;
	st_t est[] = {
	     {'c', caracter},
	     {'i', entero},
	     {'f', flotante},
	     {'s', charpun},
};

	va_start(list, format);
	i = 0;
	while (format && format[i])
	{
		j = 0;
		while ((est[j].c))
		{
			if (est[j].c == format[i])
			{
				printf("%s", comit);
				est[j].p(list);
				comit = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}
