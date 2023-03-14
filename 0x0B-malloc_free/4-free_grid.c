#include "main.h"
#include <stdlib.h>

/**
 * free_grid -Frees a 2D array of ints
 * @grid: An input 2D array of integers to free
 * @height: Height of grid
 * Return: Void
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	if (grid == NULL)
		return;
	while (i < height)
		free((int *)grid[i++]);
	free(grid);
}
