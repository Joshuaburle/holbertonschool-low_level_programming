#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid
 * @grid: Pointer
 * @height: Height
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
