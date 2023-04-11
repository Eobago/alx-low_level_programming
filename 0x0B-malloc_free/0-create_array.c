#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of chars dynamically
 * @size: size of the array
 * @c:char to assign
 * Return: 0 means success except defined otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *always;
	unsigned int result;

	if (size == 0)
	{
		return (NULL);
	}

	/*Define values with malloc*/
	always = (char *) malloc(size * sizeof(c));

	if (always == 0)
	{
		return (NULL);
	}
	else
	{
		result = 0;
		while (result < size) /*While for array*/
		{
			*(always + result) = c;
			result++;
		}

		return (always);
	}
}
