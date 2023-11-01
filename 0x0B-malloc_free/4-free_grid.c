#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d array
 * it with a specific char
 * @grid: double pointer
 * @height: int
 *
 * Return: returns void
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
		return;
	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
