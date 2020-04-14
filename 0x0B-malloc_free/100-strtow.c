#include "holberton.h"
/**
 * words - will count the number of the words
 * @str: variable
 * Return: 0
 */
int words(char *str)
{
	int i = 0, j = 0;

	while (str[j] != '\0')
	{
		if (str[j] != ' ')
		{
			if (str[j - 1] == ' ' || j == 0)
			{
				i++;
			}
		}
		j++;
	}
	return (i);
}
/**
 * strtow - Will split the string into words
 * @str: variable
 * Return: 0
 */
char **strtow(char *str)
{
	char **c;
	int r, i = 0, t = 0, q = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	r = words(str);
	c = malloc(sizeof(char *) * (r + 1));
	if (r == 0)
		return (NULL);
	if (c == 0)
		return (NULL);
	while (str[q] != '\0')
	{
		if (str[q] !=  ' ')
		{
			if (str[t - 1] == ' ' || q == 0)
			{
				t = 0;
				while (str[q] != ' ' && str[q] != '\0')
					t++;
				c[i] = malloc(sizeof(char) * (t + 1));
				if (c[i] == NULL)
					return (NULL);
				t = 0;
				while (str[q] != ' ' && str[q] != '\0')
				{
					c[i][t] = str[q];
					t++;
					q++;
				}
				c[i][t] = '\0';
				i++;
			}
		}
		if (str[q] != '\0')
			q++;
	}
		c[i] = NULL;
		return (c);
}
