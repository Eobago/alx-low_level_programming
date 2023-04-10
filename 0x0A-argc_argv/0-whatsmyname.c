#include <stdio.h>
#include "main.h"

/**
 * main - Print the name of the program
 * @argc: number of arguments
 * @argv: arrays of arguments
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	(void) argc;
	printf("%s\n", argv[0]);

	return (0);
}
