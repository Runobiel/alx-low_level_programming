#include <stdlib.h>
#include "main.h"

/**
 * free_grid - Entry point.
 *
 * Description: A function that frees a 2-dimensional grid.
 * @grid: The 2-dimensional array of integers to be freed.
 * @height: The height of grid.
 *
 * Return: no return value.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
