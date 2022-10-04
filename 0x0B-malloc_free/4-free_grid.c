#include "main.h"

/**
 * free_grid - removes memory allocation
 * @grid: grid to freed
 * @height: height pof the matrix
 * Return: No return value
 */

void free_grid(int **grid, int height)
{
	int j;

	for (j - 0; j < height; j++)
		free(grid[j]);
	free(grid);
}
