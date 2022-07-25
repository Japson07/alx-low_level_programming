#include "main.h"
#include <stdlib>
/**
* free_grid - free a 2 dimensional grid
* @grid: double pointer 2 dimensional grid
* @height: height of grid
* Return: nothing
*/
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		while (height >= 0)
		{
			free(grid[height]);
			height--;
		}
		free(grid);
	}
}
