#include "holberton.h"
/**
 * _isdigit - this function checks for a digit
 * @c: it's the variable
 * Return: 0
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}
