#include "main.h"

/**
  * binary_to_uint - converts a binary num to an unsigned int
  * @b: binary num
  * Return: the num converted or 0 if it fails
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint, place;
	int p;

	if (!b)
		return (0);

	for (p = 0; b[p]; p++)
		;
	p--;
	for (place = 1, uint = 0; p >= 0; p--)
	{
		if (b[p] == '0')
		{
			place *= 2;
			continue;
		}
		else if (b[p] == '1')
		{
			uint += place;
			place *= 2;
			continue;
		}
		return (0);
	}
	return (uint);
}
