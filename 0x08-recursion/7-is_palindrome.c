#include "holberton.h"
/**
 * l - Is the prototype.
 * @s: Is the variable we are working with.
 * Return: 0
 */
int l(char *s)
{

	if (*s != '\0')
	{
		s++;
		return (1 + l(s));
	}
	return (0);
}

/**
 * r - Is the prototype.
 * @in: Is the variable we are working with.
 * @f: Is the variable we are working with.
 * @s: Is the variable we are working with.
 * @l: Is the variable we are working with.
 * Return: 0
 */
int r(int in, int f, char *s, int l)
{
	if (s[f] == s[in] && f >= 0 && in <= l)
	{
		return (1 * r(in + 1, f - 1, s, l));
	}
	else if (f <= 0 && in >= l)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * is_palindrome - Is the prototype.
 * @s: Is the variable we are working with.
 * Return: 0
 */

int is_palindrome(char *s)
{
	int in = 0;
	int f;
	int m;

	m = f = l(s);
	m--;
	f--;
	return (r(in, f, s, m));
}
