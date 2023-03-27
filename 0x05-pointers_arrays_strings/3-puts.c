#include <stdio.h>
#include "main.h"


/**
 * _puts - Funtion that prints a string, followed by a new line, to stdout
 * @str: point value
 * Return: Always 0 (success)
 */

void _puts(char *str)
{
	int = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
