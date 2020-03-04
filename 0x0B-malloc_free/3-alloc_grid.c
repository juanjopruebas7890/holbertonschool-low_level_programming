#include <stdlib.h>
#include <stdio.h>
/**
 * alloc_grid - Concatenate two strings
 * @width: variable 1
 * @height: variable 2.
 * Return: pointer to concatenated string
 */
int **alloc_grid(int width, int height)
{
	int **p = NULL;
	int t, m, d;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(sizeof(int *) * height);

	if (p == NULL)
		return (NULL);

	for (t = 0; t < height; t++)
	{
		p[t] = malloc(sizeof(int) * width);
		if (p[t] == NULL)
		{
			for (d = 0; d < t; d++)
			{
				free(p[d]);
			}
			free(p);
			return (NULL);
		}
	}

	for (t = 0; t < height; t++)
	{
		for (m = 0; m < width; m++)
		{
			p[t][m] = 0;
		}
	}

	return (p);
}
