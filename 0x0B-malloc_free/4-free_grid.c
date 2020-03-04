#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Will free the previous task.
 * @grid: variable 1
 * @height: variable 2.
 * Return: 0
 */
void free_grid(int **grid, int height)
{
	int e;

	for (e = 0; e < height; e++)
	{
		free(grid[e]);
	}
	free(grid);
}
