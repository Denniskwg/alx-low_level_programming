#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2 dimensional grid array
 * @grid: pointer to the 2d array to free
 * @height: number of rows in the 2d array
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
