#include "main.h"
#include <stdio.h>

/**
* print_diagsums - print sums of diagonals in matrix
* @a: matrix
* @size: size of matrix
*/

void print_diagsums(int *a, int size)
{
	int diagonal_duty_1 = 0;
	int diagonal_desire_2 = 0;
	int row, p;

	for (row = 0; row < size; row++)
	{
		p = (row * size) + row;
		diagonal_duty_1 += a[p];
	}

	for (row = 1; row <= size; row++)
	{
		p = (row * size) - row;
		diagonal_duty_2 += a[p];
	}

	printf("%d, %d\n", diagonal_duty_1, diagonal_desire_2);

}
