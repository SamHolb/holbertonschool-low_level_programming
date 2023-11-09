#include "main.h"
#include <stdlib.h>

/**
  * free_grid - Frees the memory allocated for a 2D array -> grid
  * @grid: Pointer to the grid to be freed
  * @height: Height of the grid
  *
  * This function frees the memory allocated for both the rows and the array of pointer
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
