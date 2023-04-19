#include "function_pointers.h"
#include <stdio.h>

/**
 * array_interator - calls a function to acts on an array elements
 * @array: array
 * @size: number of element to print
 * @action: pointer to print in regular or hex
 * Return: no return void
 */

void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int p;

	if (!array || !action)
		return;

	for (p = 0; p < size; p++)
	{
		action(array[p]);
	}
}
