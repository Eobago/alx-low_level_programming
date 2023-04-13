#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *bas, p = 0, q = min;

	if (min > max)
		return (0);
bas = malloc((max - min + 1) * sizeof(int));

	if (!bas)
		return (0);
	while (p <= max - min)
	bas[p++] = q++;
	return (bas);
}
