#include "main.h"
/**
 * free_grid - frees a 2 dimensional grid previously created
 * @grid: input to be freed
 * @height: number of rows
 *
 * Return: no return
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
