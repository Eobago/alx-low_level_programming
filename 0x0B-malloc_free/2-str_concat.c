#include "main.h"
#include <stdlib.h>

/**
 * str_concat - get ends of input and add together for size
 * @s1: input one to concat
 * @s2: input two to concat
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int u, mv;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	u = mv = 0;
	while (s1[u] != '\0')
		u++;
	while (s2[mv] != '\0')
		mv++;
	conct = malloc(sizeof(char) * (u + mv + 1));

	if (conct == NULL)
		return (NULL);
	u = mv = 0;
	while (s1[u] != '\0')
	{
		conct[u] = s1[u];
		u++;
	}

	while (s2[mv] != '\0')
	{
		conct[u] = s2[mv];
		u++, mv++;
	}
	conct[u] = '\0';
	return (conct);
}

