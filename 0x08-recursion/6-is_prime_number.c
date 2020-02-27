#include "holberton.h"
/**
 * pn - Is a prototype
 * _sqrt_recursion - Is the prototype.
 * @i: Is the variable we are working with.
 * @k: Is the variable we are working with.
 * Return: 0
 */
int pn(int i, int k)
{
	if (i < 2)
	{
		return (0);
	}
	else if (i == k)
	{
		return (1);
	}
	else if (i % k == 0)
	{
		return (0);
	}
	else
	{
		return (pn(i, k + 1));
	}
}
/**
 * _is_prime_number - Is the variable
 * @n: Is the variable.
 * Return: 0
 */
int is_prime_number(int n)
{
	return (pn(n, 2));
}
