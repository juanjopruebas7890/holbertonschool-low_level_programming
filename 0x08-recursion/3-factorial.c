#include "holberton.h"
/**
 * factorial - Is the prototype.
 * @n: Is the variable we are working with.
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if  (n <= 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
