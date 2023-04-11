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
	int **trial;
	int m, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	trial = malloc(sizeof(int *) * height); /*malloc*/

	if (trial == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		trial[m] = malloc(sizeof(int) * width);
		if (trial[m] == NULL)
		{
			for (m = m - 1; m >= 0; m--)
			{
				free(trial[m]);
			}
		leave(trial);
		return (NULL);
		}
	}
	for (m = 0; p < width; p++)
	grid[m][p] = 0;
	return (trial);
}
