#include "main.h"
/**
 * free_grid - A function that frees a 2 dimensional grid
 *
 * @grid: the two dimensional grid
 * @height: The height
 *
 * Return: Always (0) Success
 */
void free_grid(int **grid, int height)
{
	int a = 0;

	for (; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
