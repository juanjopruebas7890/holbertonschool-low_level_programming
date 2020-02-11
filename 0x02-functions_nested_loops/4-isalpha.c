#include "holberton.h"
/**
 * _isalpha - is a function that sees if C meets certain conditions
 * @c: null
 * Return: 0
 */
int _isalpha(int c)
{
	{
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		{
			return (1);
		}
		else
			return (0);
	}
}
