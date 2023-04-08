#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int straw_i = 0;

	while (*s != '\0')
	{
		straw_i++;
		s++;
	}

	return (straw_i);
}

