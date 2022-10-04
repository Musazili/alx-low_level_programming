#include <stdlib.h>
#include "main.h"
/**
 * free_grid - entry point
 * @grid: address
 * @height: height of the grid
 * Return: 0
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
