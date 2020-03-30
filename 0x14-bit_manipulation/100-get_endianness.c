#include "holberton.h"
/**
 * get_endianness - Will print a given string.
 * @void: Variable.
 * Return: 0.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *p = (char *)&i;

	if (*p)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
