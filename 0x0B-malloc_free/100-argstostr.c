#include "main.h"
#include <stdlib.h>


/**
 * argstostr - main entry
 * @ac: int input
 * @av: double pointer array
 * Return: 0
 */

char *argstostr(int ac, char **av)
{
	int p, q, s = 0, l = 0;
	char *lad;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (p = 0; p < ac; p++)
	{
		for (q = 0; av[p][q]; q++)
			l++;
	}
	l += ac;

	lad = malloc(sizeof(char) * l + 1);
	if (lad == NULL)
		return (NULL);
	for (p = 0; p < ac; p++)
	{
	for (q = 0; av[p][q]; q++)
	{
		lad[s] = av[p][q];
		s++;
	}
	if (lad[s] == '\0')
	{
		lad[s++] = '\n';
	}
	}
	return (lad);
}

