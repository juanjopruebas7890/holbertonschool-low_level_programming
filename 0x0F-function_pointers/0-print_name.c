#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - Will print a name.
 * @name: variable.
 * @f: Variable.
 * Return - 0
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
	{
		f(name);
	}
}
