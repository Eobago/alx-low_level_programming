#include <stdio.h>
#include "main.h"

/**
 * _strcpy - function copies string pointed to src and dest
 * @dest: Pointer parameter
 * @src: poiter parameter
 * Return: char
 */

char *_strcpy(char *dest, char *src)
{
	int j;

	for (j = 0; *(src + j) != '\0'; j++)
	{
		dest[j] = *(src + j);
	}
	dest[j] = '\0';

	return (dest);
}
