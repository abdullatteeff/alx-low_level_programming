#include "main.h"
/**
 * alloc_grid - Function
 *
 * Description: a 2 dimensional array of integer
 *
 * @width: parameter of type int number of columns
 * @height: parameter of type int number of rows
 *
 *
 * Return: returns pointer to array or NULL if failure
 */
int **alloc_grid(int width, int height)
{
	int **grid, x, y;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
	{
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *) malloc(sizeof(int) * width);
		if (grid[x] == NULL)
		{
			free(grid);
			for (y = 0; y <= x; y++)
			{
				free(grid[y]);
			}
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
