#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_nconcat - concatenates two strings.
 * @s1: string to append
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 * Return: char pointer to the resulting string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *x;
	unsigned int lad1 = 0, lad2 = 0, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[lad1] != '\0')
	{
		lad1++;
	}

	while (s2[lad2] != '\0')
	{
		lad2++;
	}

	if (n > lad2)
	n = lad2;
	x = malloc((lad1 + n + 1) * sizeof(char));

	if (x == NULL)
		return (0);

	for (i = 0; i < lad1; i++)
	{
		x[i] = s1[i];
	}

	for (; i < (lad1 + n); i++)
	{
		x[i] = s2[i - lad2];
	}
	x[i] = '\0';

	return (x);
}
