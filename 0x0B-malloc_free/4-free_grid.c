#include "main.h"
/**
 * free_grid - Function
 *
 * Description: frees a 2 dimensional grid created by your alloc_grid
 *
 * @grid: pointer pointer parameter of type int, the grid
 * @height: parameter of type int
 *
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL || height == 0)
	{
		return;
	}
	while (x < height)
		free((int *)grid[x++]);
	free(grid);
}
