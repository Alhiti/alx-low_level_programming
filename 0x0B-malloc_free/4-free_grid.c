#include "main.h"
#include <stdlib.h>

/**
 * free_grid -  function that frees a 2 dimensional grid previously created by
 * your alloc_grid function
 * @grid: the array
 * @height: the height of the array
 */

void free_grid(int **grid, int height)
{

	int j;

	for (j = 0; j < height; j++)
		free(grid[j]);

	free(grid);
}
