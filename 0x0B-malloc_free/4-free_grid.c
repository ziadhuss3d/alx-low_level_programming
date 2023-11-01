#include <stdlib.h>

/**
 * free_grid - free the 2d grid
 *
 * @grid: the grid
 * @height: the grid height
 */

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
		free(grid[counter]);
	free(grid);
}
