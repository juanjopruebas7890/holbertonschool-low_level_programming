#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Is the prototype
 * @ac: variable 1
 * @av: variable 2.
 * Return: pointer to concatenated string
 */
char *argstostr(int ac, char **av)
{
	char *ar = NULL;
	int i, j, cs = 0, mp = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			cs++;
		}
		cs++;
	}
	cs++;

	ar = malloc(sizeof(char) * cs);
	if (ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ar[mp] = av[i][j];
			mp++;
		}
		ar[mp] = '\n';
		mp++;
	}
	ar[mp] = '\0';
	return (ar);
}
