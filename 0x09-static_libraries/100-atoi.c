#include <stdio.h>
#include "main.h"

/**
 * _atoi - function converts string to an integer
 * @s: Pointer parameter
 * Return: returns an integer value
 */
int _atoi(char *s)
{
	unsigned int count = 0, size = 0, q = 0, w = 1, x = 1, i;

	while (*(s + count) != '\0')
	{
		if (size > 0 && (*(s + count) < '0' || *(s + count) > '9'))
			break;

		if (*(s + count) == '-')
			x *= -1;

		if ((*(s + count) >= '0') && (*(s + count) <= '9'))
		{
			if (size > 0)
				x *= 10;
			size++;
		}
		count++;
	}

	for (i = count - size; i < count; i++)
	{
		q = q + ((*(s + i) - 48) * x);
		x /= 10;
	}
	return (q * w);
}
