#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)
{
	char *qps;
	int y, p = 0;

	if (str == NULL)
		return (NULL);
	y = 0;
	while (str[y] != '\0')
		y++;

	qps = malloc(sizeof(char) * (y + 1));

	if (qps == NULL)
		return (NULL);

	for (p = 0; str[p]; p++)
		qps[p] = str[p];

	return (qps);
}

