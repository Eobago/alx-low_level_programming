#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int nytes, p;
	char *lad;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	nytes = atoi(argv[1]);

	if (nytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	lad = (char *)main;

	for (p = 0; p < nytes; p++)
	{
		if (p == nytes - 1)
		{
			printf("%02hhx\n", lad[p]);
			break;
		}
		printf("%02hhx ", lad[p]);
	}
	return (0);
}

