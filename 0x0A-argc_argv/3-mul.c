#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints the multiplication of two integers
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if it works, 1 if there is an ERROR
 */
int main(int argc, char **argv)
{
	int p, q, diff;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	p = atoi(argv[1]);
	q = atoi(argv[2]);
	diff = p * q;

	printf("%i\n", diff);

	return (0);
}
