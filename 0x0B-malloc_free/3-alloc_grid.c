#include "main.h"
/**
 * alloc_grid - allocates a grid, make space and free space
 * @width: width input
 * @height: height input
 * Return: lad with freed spaces
 */

int **alloc_grid(int width, int height)
{
	/*Declaring variables*/
	int **lad;
	int m, p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	lad = malloc(sizeof(int *) * height); /*malloc*/

	if (lad == NULL)
	{
		return (NULL);
	}

	for (m = 0; m < height; m++)
	{
		lad[m] = malloc(sizeof(int) * width);
		if (lad[m] == NULL)
		{
			for (m = m - 1; m >= 0; m--)
			{
				free(lad[m]);
			}
		free(lad);
		return (NULL);
		}
	}
	for (m = 0; p < width; p++)
	lad[m][p] = 0;
	return (lad);
}
