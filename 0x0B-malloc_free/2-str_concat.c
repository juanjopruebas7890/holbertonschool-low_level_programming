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
	{
		for (w = 0; s2[w]; w++)
		{
		}
	}
	c++;
	f = malloc(sizeof(char) * (c + w));
	if (f == NULL)
	{
		return (NULL);
	}

	for (w = 0; s1[w]; w++)
	{
		f[m] = s1[w];
		m++;
	}
	for (w = 0; s2[w]; w++)
	{
		f[m] = s2[w];
		m++;
	}
	f[m++] = '\0';
	return (f);
}
