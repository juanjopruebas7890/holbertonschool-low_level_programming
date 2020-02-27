#include "holberton.h"
/**
 * product - Is a prototype
 * _sqrt_recursion - Is the prototype.
 * @z: Is the variable we are working with.
 * @n: Is the variable we are working with.
 * Return: 0
 */
int product(int z, int  n)
{
	if (z > n)
	{
		return (-1);
	}
	if (z * z == n)
	{
		return (z);
	}
	z++;
	return (product(z, n));
}
/**
 * _sqrt_recursion - Is the variable
 * @n: Is the variable.
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	int z = 2;

	if (n == 1)
	{
		return (1);
	}
	return (product(z, n));
}
