#include "holberton.h"
/**
 * _atoi - It convert a string to an integer
 * @s: variable
 * Return: 0
 */
int _atoi(char *s)
{
	int i, r = 1;
	unsigned int a = 0;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (*(s + i) == '-')
		{
			r *= -1;
		}
		if (*(s + i) >= '0' && *(s + i) <= '9')
		{
			a = a * 10 + (*(s + i) - '0');
		}
		else if (a > 0)
		{
			break;
		}
	}
	return (a * r);
}

