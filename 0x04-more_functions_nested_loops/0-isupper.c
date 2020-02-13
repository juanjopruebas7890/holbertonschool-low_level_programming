#include "holberton.h"
/**
 * _isupper - is a function that sees for the upper case characters
 * @c: variable
 * Return: 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
		return (0);
}
