#include "main.h"
#include "string.h"

/**
  * free_grid- free the mem space of 2D array
  * @height: pointer to height
  * @grid: The pointer to the memory alocated
  * Return: pointer to 2 dimension of array
  */
void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
		free(grid[x]);
	free(grid);
}
