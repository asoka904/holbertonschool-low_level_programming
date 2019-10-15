#include "holberton.h"
/**
 * free_grid - Frees a 2 dimensional grid previously created with the
 * alloc_grid function.
 * @grid: the address of the two dimensional grid
 * @height: height of the grid (number of array of integers).
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
