#include "main.h"

/**
 * _memcpy() -  copies function between two memories
 * @n: number of bytes
 * @dest: Destination
 * @src: Source
 * Return: pointer  to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	int size = n;

	if (size < 0)
	{
		int i;

		for (i = 0; i < size; i++)

			dest[i] = src[i];
	}
	return (dest);
}

