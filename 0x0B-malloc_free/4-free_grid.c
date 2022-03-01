#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - Function that frees 2 dimensional grid
 * @grid: first operand opointer to a pointer
 * @height: second operand an int
 * Return: No return since its void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
