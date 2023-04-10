#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - main funct
 * @argc: param count
 * @argv: param poiter
 * Return: int
 */
int main(int argc, char *argv[])
{
	int p, q, sum = 0;

	for (p = 1; p < argc; p++)
	{
		for (q = 0; argv[p][q] != '\0'; q++)
		{
			if (!isdigit(argv[p][q]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[p]);
	}
	printf("%d\n", sum);

	return (0);
}
