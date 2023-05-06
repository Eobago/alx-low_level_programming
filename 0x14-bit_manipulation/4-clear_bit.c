#include "main.h"

/**
  * clear_bit - sets the value of a bit to 0
  * @n: pinter to the num to change
  * @index: index of the bit to change zero
  * Return: 1 if it worked or -1 if an error occurred
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
		return (-1);
	clear = 1 << index;
	*n = (*n & ~clear) | ((0 << index) & clear);
	return (1);
}
