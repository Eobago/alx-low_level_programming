#include "main.h"
/**
* print_chessboard - print chessboard given set 2D array
* @a: 2D array
*/

void print_chessboard(char (*a)[8])
{
	int row_r;
	int column_c;

	for (row_r = 0; row_r < 8; row_r++)
	{
		for (column_c = 0; column_c < 8; column_c++)
		_putchar(a[row_c][column_c]);
		_putchar('\n');
	}
}
