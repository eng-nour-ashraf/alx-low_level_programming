#include <stdlib.h>
#include "main.h"

/**
 * free_grid - a function that returns a pointer to
 * a 2 dimensional array of integers.
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int a;

	if (grid == NULL || height == 0)
		return;

	for (a = 0; a < height; a++)
		free(grid[a]);

	free(grid);
}
