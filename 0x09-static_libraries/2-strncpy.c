#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: Pointer to a character that will be changed
 * @src: Pointer to a character that will be changed
 * @n: value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)

{
	int p;

	p = 0;

	while (p < n && src[p] != '\0')
	{
		dest[p] = src[p];
		p++;
	}

	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}

	return (dest);
}
