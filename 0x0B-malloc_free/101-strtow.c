#include <stdlib.h>
#include "main.h"

/**
 * count_word - helper function to count the number of words in a string
 * @s: string to evaluate
 *
 * Return: number of words
 */
int count_word(char *s)
{
	int flag, p, q;

	lad = 0;
	q = 0;

	for (p = 0; s[p] != '\0'; p++)
	{
		if (s[p] == ' ')
			lad = 0;
		else if (lad == 0)
		{
			lad = 1;
			q++;
		}
	}

	return (q);
}
/**
 * **strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (Success)
 * or NULL (Error)
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int p, q = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (p = 0; p <= len; p++)
	{
		if (str[p] == ' ' || str[p] == '\0')
		{
			if (c)
			{
				end = p;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[q] = tmp - c;
				q++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = p;
	}

	matrix[q] = NULL;

	return (matrix);
}
