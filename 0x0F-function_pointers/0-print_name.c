#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - function that prints a name passed to it
 *@name: char to display to the stdout
 *@f: pointer to function
 *Return: returns nothing
 **/

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
