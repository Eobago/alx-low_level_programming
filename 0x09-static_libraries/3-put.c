#include "main.h"
/**
 * _puts - print a string to stdout
 * @str: pointer parameter
 */

void _puts(char *str)
{
	int p = 0;

	while (str[p] != '\0')
	{
		_putchar(str[p]);
		p++;
	}

	_putchar('\n');
}
