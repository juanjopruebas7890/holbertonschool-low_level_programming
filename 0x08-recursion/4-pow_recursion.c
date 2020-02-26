#include "holberton.h"
/**
 * _pow_recursion - Is the prototype.
 * @x: Is the variable we are working with.
 * @y: Is the variable we are working with.
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
