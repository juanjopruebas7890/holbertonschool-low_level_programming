#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Is the prototype.
 * @s1: Is the variable.
 * @s2: Is the variable.
 * Return: 0
 */

char *str_concat(char *s1, char *s2)
{
	int c, w, m = 0;
	char *f;

	if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
	}
	for (c = 0; s1[c]; c++)
		;
	for (w = 0; s2[w]; w++)
		;
	f = malloc(sizeof(char) * (c + w + 1));
	if (f == NULL)
	{
		return (NULL);
	}

	for (w = 0; s1[w]; w++, m++)
	{
		f[m] = s1[w];
	}
	for (w = 0; s2[w]; w++, m++)
	{
		f[m] = s2[w];
	}
	f[m] = '\0';
	return (f);
}
