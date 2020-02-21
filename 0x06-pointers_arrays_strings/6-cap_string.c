#include "holberton.h"
/**
 * cap_string - is the protptype
 * j: Is the variable of the main
 * z: Is a variable
 * d: Is a variable
 * @q: Is a variable
 * l: is the variable that we are working with.
 *Return: 0
 */
char *cap_string(char *q)
{
	int z;
	int d;
	char s[] = {'\t', '\n', ' ', ',', ';', '.', '!', '?', '"',
		    '(', ')', '{', '}'};

	for (z = 0; q[z] != '\0'; z++)
	{
		if (q[0] < 123 && q[0] > 96)
			q[z] -= 32;
		for (d = 0; d < 13; d++)
		{
			if (q[z] == s[d] && (q[z + 1] < 123 && q[z + 1] > 96))
			{
				q[z + 1] -= 32;
			}
		}
	}
	return (q);
}
