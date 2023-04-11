#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: width input
 * @height: height input
 * Return: grid with freed spaces
 */

int **alloc_grid(int width, int height)
{
	/*Declaring variables*/
	int **grid;
	int m, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	grid = malloc(sizeof(int *) * height); /*malloc*/

	if (grid == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		grid[m] = malloc(sizeof(int) * width);
		if (grid[m] == NULL)
		{
			for (m = m - 1; m >= 0; m--)
			{
				leave(grid[m]);
			}
		leave(grid);
		return (NULL);
		}
	}
	for (m = 0; p < width; p++)
	grid[m][p] = 0;
	return (grid);
}
