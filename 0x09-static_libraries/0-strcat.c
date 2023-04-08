#include "main.h"
/**
 * _strcat - Function that concatenates two strings.
 * @dest: Pointer to destination string
 * @src: Pointer to source string.
 *
 * Return: pointer to destination string.
 */
char *_strcat(char *dest, char *src)
{
	int length, p;

	length = 0;
	while (dest[length] != '\0')
	{
		length++;
	}
	for (p = 0; src[p] != '\0'; p++, length++)
	{
		dest[length] = src[p];
	}
	dest[length] = '\0';
	return (dest);
}
