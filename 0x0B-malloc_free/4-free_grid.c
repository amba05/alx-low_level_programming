#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free alloted memory in the heap after
 * using malloc
 * @grid: a 2-D array
 * @height: the height of the array
 *
 */

void free_grid(int **grid, int height)
{
	int a = 0;


	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}

	free(grid);
}

