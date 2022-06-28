#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * @grid: An input 2D array of integers to be freed
 * @height: Height of grid
 * Return: Nothing
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
