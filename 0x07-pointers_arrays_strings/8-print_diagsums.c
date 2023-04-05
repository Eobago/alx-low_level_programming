#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sums of diagonals in matrix
* @a: matrix
* @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int diagonal_sum_1 = 0;
	int diagonal_sum_2 = 0;
	int row_r, j;

	for (row_r = 0; row < size; row++)
	{
		j = (row_r * size) + row_r;
		diagonal_sum_1 += a[j];
	}

	for (row_r = 1; row_r <= size; row_r++)
	{
		j = (row_r * size) - row_r;
		diagonal_sum_2 += a[j];
	}

	printf("%d, %d\n", diagonal_sum_1, diagonal_sum_2);

}
