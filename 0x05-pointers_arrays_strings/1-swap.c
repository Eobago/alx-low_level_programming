#include <stdio.h>
#include "main.h"

/**
 * swap_int - swapp the value of 2 int
 * @a: First int
 * @b: second int
 * Return: Always 0 (Success)
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
