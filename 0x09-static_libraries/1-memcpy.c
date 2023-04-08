#include "main.h"
/**
* char *_memcpy - copies n bytes from memory area src to memory area dest
* @dest: destination
* @src: source
* @n: number of bytes
* Return: pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{

	int size = n;

	if (size > 0)
	{
		int p;

		for (p = 0; p < size; p++)
		dest[p] = src[p];
	}

	return (dest);
}
