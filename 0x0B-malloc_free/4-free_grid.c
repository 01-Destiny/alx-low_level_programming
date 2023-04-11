#include "main.h"
#include <stdlib.h>

/**
 * free_grid - frees a 2D array of ints
 * @grid: function parameter
 * @height: function parameter
 * Return: no return
 */

void free_grid(int **grid, int height)
{
	int d = 0;

	if (grid == NULL)
		return;
	while (d < height)
		free((int *)grid[d++]);
	free(grid);
}
