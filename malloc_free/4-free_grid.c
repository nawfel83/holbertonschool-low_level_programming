#include <stdlib.h>
/**
 * free_grid - check the code
 *
 *@grid: dfdxcesfsqfqre
 *
 *@height: lkfkrfk
 *
 * Return: Always 0.
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);
}
