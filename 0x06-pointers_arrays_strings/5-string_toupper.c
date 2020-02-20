#include "holberton.h"
/**
 * string_toupper - is the protptype.
 * @j: Is the variable of the main.
 * l: is the variable that we are working with.
 *Return: 0
 */
char *string_toupper(char *j)
{
	int l = 0;

	while (j[l] != '\0')
	{
		if (j[l] >= 'a' && j[l] <= 'z')
		{
			j[l] = j[l] - 32;
		}
		l++;
	}
	return (j);
}
