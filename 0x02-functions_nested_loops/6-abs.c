#include "holberton.h"
#include <stdlib.h>
/**
 * _abs - computes the absolute value of an integer argument
 * @j: variable
 * Return: 0
 */
int _abs(int j)
{
	if (j < 0)
	{
		return (-j);
	}
	return (j);
}
